/*
 * XREFs of ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x1402A3184
 * Callers:
 *     ?SmTrimWsStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@_K@Z @ 0x1402A378C (-SmTrimWsStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@_K@Z.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x140097528 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     RtlFindNextForwardRunClearCapped @ 0x1400D7870 (RtlFindNextForwardRunClearCapped.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1401037A0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x1402A3488 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStTrimWsStore(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned int v4; // edi
  _QWORD *v5; // r15
  _QWORD *v6; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v8; // r13d
  signed __int64 *v9; // r14
  unsigned int v10; // r14d
  __int64 v11; // r15
  int NextForwardRunClearCapped; // eax
  __int64 v13; // r9
  unsigned int v14; // eax
  unsigned int v15; // r15d
  __int64 v16; // r12
  __int64 v17; // rbx
  unsigned int v18; // edx
  unsigned int v19; // eax
  __int64 v20; // rbx
  int v22; // [rsp+20h] [rbp-B9h]
  unsigned int v23; // [rsp+30h] [rbp-A9h] BYREF
  int v24; // [rsp+34h] [rbp-A5h]
  __int64 v25; // [rsp+38h] [rbp-A1h]
  __int64 v26; // [rsp+40h] [rbp-99h] BYREF
  __int64 v27; // [rsp+48h] [rbp-91h]
  _QWORD *v28; // [rsp+50h] [rbp-89h]
  _BYTE v29[48]; // [rsp+58h] [rbp-81h] BYREF
  _DWORD v30[10]; // [rsp+88h] [rbp-51h] BYREF
  _QWORD v31[8]; // [rsp+B0h] [rbp-29h] BYREF

  v2 = a2;
  v27 = a2;
  KiStackAttachProcess(*(_KPROCESS **)(a1 + 6568), 0, (__int64)v29);
  if ( (*(_BYTE *)(a1 + 6021) & 8) != 0 )
  {
    v4 = 0;
  }
  else
  {
    v5 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 6552), -1LL);
    v28 = v5;
    if ( v5 == (_QWORD *)-1LL )
    {
      v4 = -1073740682;
    }
    else
    {
      v4 = 0;
      if ( !v5 || !*v5 || (v6 = v5 + 1, v2) )
        v6 = 0LL;
      CurrentThread = KeGetCurrentThread();
      v8 = 0;
      v25 = (__int64)v6;
      --CurrentThread->SpecialApcDisable;
      v9 = (signed __int64 *)(a1 + 6024);
      ExAcquirePushLockSharedEx(a1 + 6024, 0LL);
      if ( v6 )
      {
        v10 = 0;
        v23 = 0;
LABEL_11:
        v11 = v25;
        while ( 1 )
        {
          NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped(v11, v10, 0xFFFFFFFF, &v23);
          if ( !NextForwardRunClearCapped )
            break;
          v10 = v23;
          v14 = v23 + NextForwardRunClearCapped;
          if ( v23 < v14 )
          {
            v15 = v14;
            v16 = 8LL * v23;
            do
            {
              if ( (*(_QWORD *)(v16 + *(_QWORD *)(a1 + 6216)) & 0x7FFFFFFFFFFF0000LL) != 0 )
              {
                v17 = v8;
                v30[v8++] = v10;
                v31[v17] = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v10, 0, v13, 4u);
                if ( v8 == 8 )
                {
                  SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(a1, (unsigned int)v30, (unsigned int)v31, 8, v22, 0LL);
                  v8 = 0;
                }
              }
              ++v10;
              v16 += 8LL;
            }
            while ( v10 < v15 );
            v23 = v10;
            goto LABEL_11;
          }
        }
        v5 = v28;
        v9 = (signed __int64 *)(a1 + 6024);
        v2 = v27;
        v6 = (_QWORD *)v25;
      }
      v18 = 0;
      v26 = v2;
      v23 = 0;
      if ( *(_DWORD *)(a1 + 6212) )
      {
        v19 = 0;
        v24 = 0;
        while ( 1 )
        {
          if ( (*(_QWORD *)(*(_QWORD *)(a1 + 6216) + 8LL * v19) & 0x7FFFFFFFFFFF0000LL) != 0
            && (!v6 || _bittest64((const signed __int64 *)v6[1], v19)) )
          {
            v20 = v8;
            v30[v8++] = v18;
            v31[v20] = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v18, 0, 0x7FFFFFFFFFFF0000LL, 4u);
            if ( v8 == 8 )
            {
              SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(
                a1,
                (unsigned int)v30,
                (unsigned int)v31,
                8,
                v22,
                (unsigned __int64)&v26 & -(__int64)(v2 != 0));
              v8 = 0;
              if ( v2 )
              {
                if ( !v26 )
                  break;
              }
            }
          }
          v6 = (_QWORD *)v25;
          v18 = v24 + 1;
          v19 = v18;
          v23 = ++v24;
          if ( v18 >= *(_DWORD *)(a1 + 6212) )
            goto LABEL_30;
        }
      }
      else
      {
LABEL_30:
        if ( v8 )
          SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(
            a1,
            (unsigned int)v30,
            (unsigned int)v31,
            v8,
            v22,
            (unsigned __int64)&v26 & -(__int64)(v2 != 0));
      }
      if ( _InterlockedCompareExchange64(v9, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v9);
      KeAbPostRelease((ULONG_PTR)v9);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      _InterlockedExchange64((volatile __int64 *)(a1 + 6552), (__int64)v5);
    }
  }
  KiUnstackDetachProcess((__int64)v29, 0LL);
  return v4;
}
