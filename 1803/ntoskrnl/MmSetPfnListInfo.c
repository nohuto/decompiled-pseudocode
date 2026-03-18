/*
 * XREFs of MmSetPfnListInfo @ 0x140147CE0
 * Callers:
 *     PfpPfnPrioRequest @ 0x1405B0D80 (PfpPfnPrioRequest.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     MiRelinkStandbyPage @ 0x1400810F8 (MiRelinkStandbyPage.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     MiIdentifyPfn @ 0x1401056D0 (MiIdentifyPfn.c)
 *     MiGetPfnPriority @ 0x14011B8F0 (MiGetPfnPriority.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiAddPageToHeatRanges @ 0x140264D10 (MiAddPageToHeatRanges.c)
 *     HvlNotifyPageHeat @ 0x1402CA4CC (HvlNotifyPageHeat.c)
 */

__int64 __fastcall MmSetPfnListInfo(__int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v4; // rdi
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v6; // r13d
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  ULONG_PTR v11; // rbx
  unsigned __int8 CurrentIrql; // bp
  char v13; // r8
  int PfnPriority; // eax
  int v15; // edx
  ULONG_PTR v16; // rcx
  char v17; // r8
  __int64 v19; // xmm1_8
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __int128 v23; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v24; // [rsp+30h] [rbp-D8h]
  struct _KTHREAD *v25; // [rsp+38h] [rbp-D0h]
  unsigned int v26; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v27; // [rsp+44h] [rbp-C4h]
  _BYTE v28[7]; // [rsp+48h] [rbp-C0h] BYREF

  v4 = a2;
  if ( a3 )
  {
    if ( (HvlEnlightenments & 0x400000) == 0 )
      return 3221225659LL;
    v26 = 0;
  }
  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  v7 = (unsigned __int64)&a2[3 * a1];
  v27 = 0;
  --CurrentThread->SpecialApcDisable;
  v25 = CurrentThread;
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_1403CDFF8, 0LL);
  if ( (unsigned __int64)v4 < v7 )
  {
    while ( 1 )
    {
      v8 = v4[1];
      if ( MiIsPfnInline(v8) )
      {
        v11 = v9 + 48 * v8;
        *((_QWORD *)&v23 + 1) = v8;
        *(_QWORD *)&v23 = 0LL;
        v24 = 0LL;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(v10);
        MiLockPageAtDpcInline(v11);
        MiIdentifyPfn(v11, (unsigned __int64 *)&v23);
        if ( v24 == v4[2] && (((unsigned __int64)v23 ^ *v4) & 0x1FFFFFFFFFFFE00LL) == 0 )
        {
          v13 = *(_BYTE *)(v11 + 34) & 7;
          if ( v13 == 6 || (unsigned __int8)(v13 - 2) <= 2u )
          {
            if ( !a3 )
            {
              PfnPriority = MiGetPfnPriority(v11);
              if ( v15 != PfnPriority )
              {
                if ( v17 == 2 )
                  MiRelinkStandbyPage(v16, v15);
                else
                  *(_BYTE *)(v11 + 35) ^= (v15 ^ *(_BYTE *)(v11 + 35)) & 7;
              }
              _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8(CurrentIrql);
              goto LABEL_12;
            }
            if ( (*v4 & 0x80u) != 0LL && v13 == 2 && !*(_WORD *)(v11 + 32) )
            {
              v20 = *(_QWORD *)(v11 + 16);
              v21 = ((v20 >> 10) & 1) != 0 ? v20 >> 11 : v20 >> 3;
              if ( (v21 & 1) == 0 )
              {
                v22 = 8LL;
                if ( ((v20 >> 10) & 1) != 0 )
                  v22 = 2048LL;
                *(_QWORD *)(v11 + 16) = v20 | v22;
                _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                __writecr8(CurrentIrql);
                if ( (unsigned int)MiAddPageToHeatRanges(&v26, v20, v8) )
                {
                  HvlNotifyPageHeat(v26, v27, v28);
                  v27 = 0;
                }
                goto LABEL_12;
              }
            }
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
        v24 |= 2uLL;
        v6 = -1073741788;
        v19 = v24;
        *(_OWORD *)v4 = v23;
        v4[2] = v19;
      }
      else
      {
        v6 = -1073741584;
      }
LABEL_12:
      v4 += 3;
      if ( (unsigned __int64)v4 >= v7 )
      {
        CurrentThread = v25;
        break;
      }
    }
  }
  if ( a3 && v27 )
    HvlNotifyPageHeat(v26, v27, v28);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1403CDFF8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_1403CDFF8);
  KeAbPostRelease((ULONG_PTR)&qword_1403CDFF8);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v6;
}
