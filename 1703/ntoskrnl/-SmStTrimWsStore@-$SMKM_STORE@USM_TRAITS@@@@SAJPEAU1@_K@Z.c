/*
 * XREFs of ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x140249F7C
 * Callers:
 *     SmStoreCompressionStop @ 0x1404CA338 (SmStoreCompressionStop.c)
 *     SmProcessSystemStoreTrimRequest @ 0x140700EDC (SmProcessSystemStoreTrimRequest.c)
 * Callees:
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x14005D994 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     RtlFindNextForwardRunClearCapped @ 0x1400AC7C0 (RtlFindNextForwardRunClearCapped.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x14024A28C (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStTrimWsStore(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int v4; // edi
  _QWORD *v5; // r15
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // r12d
  signed __int64 *v8; // r13
  _QWORD *v9; // rdx
  unsigned int v10; // r14d
  __int64 v11; // r15
  int NextForwardRunClearCapped; // eax
  __int64 v13; // r9
  unsigned int v14; // eax
  unsigned int v15; // r15d
  __int64 v16; // r13
  __int64 v17; // rbx
  unsigned int v18; // r14d
  __int64 v19; // rbx
  int v21; // [rsp+20h] [rbp-B9h]
  unsigned int v22; // [rsp+30h] [rbp-A9h] BYREF
  _QWORD *v23; // [rsp+38h] [rbp-A1h]
  __int64 v24; // [rsp+40h] [rbp-99h] BYREF
  __int64 v25; // [rsp+48h] [rbp-91h]
  _QWORD *v26; // [rsp+50h] [rbp-89h]
  $5BC46E0569261879018906DEC3127961 v27; // [rsp+58h] [rbp-81h] BYREF
  _DWORD v28[10]; // [rsp+88h] [rbp-51h] BYREF
  _QWORD v29[8]; // [rsp+B0h] [rbp-29h] BYREF

  v2 = a2;
  v25 = a2;
  KiStackAttachProcess(*(_KPROCESS **)(a1 + 6536), 0, (__int64)&v27);
  if ( (*(_BYTE *)(a1 + 5989) & 8) != 0 )
  {
    v4 = 0;
  }
  else
  {
    v5 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)(a1 + 6520), -1LL);
    v26 = v5;
    if ( v5 == (_QWORD *)-1LL )
    {
      v4 = -1073740682;
    }
    else
    {
      v4 = 0;
      if ( v5 && *v5 && !v2 )
        v23 = v5 + 1;
      else
        v23 = 0LL;
      CurrentThread = KeGetCurrentThread();
      v7 = 0;
      --CurrentThread->SpecialApcDisable;
      v8 = (signed __int64 *)(a1 + 5992);
      ExAcquirePushLockSharedEx(a1 + 5992, 0LL);
      v9 = v23;
      if ( v23 )
      {
        v10 = 0;
        v22 = 0;
        v11 = (__int64)v23;
        while ( 1 )
        {
          NextForwardRunClearCapped = RtlFindNextForwardRunClearCapped(v11, v10, 0xFFFFFFFF, &v22);
          if ( !NextForwardRunClearCapped )
            break;
          v10 = v22;
          v14 = v22 + NextForwardRunClearCapped;
          if ( v22 < v14 )
          {
            v15 = v14;
            v16 = 8LL * v22;
            do
            {
              if ( (*(_QWORD *)(*(_QWORD *)(a1 + 6184) + v16) & 0x7FFFFFFFFFFF0000LL) != 0 )
              {
                v17 = v7;
                v28[v7++] = v10;
                v29[v17] = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v10, 0, v13, 4u);
                if ( v7 == 8 )
                {
                  SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(a1, (unsigned int)v28, (unsigned int)v29, 8, v21, 0LL);
                  v7 = 0;
                }
              }
              ++v10;
              v16 += 8LL;
            }
            while ( v10 < v15 );
            v11 = (__int64)v23;
            v22 = v10;
          }
        }
        v5 = v26;
        v8 = (signed __int64 *)(a1 + 5992);
        v2 = v25;
        v9 = v23;
      }
      v18 = 0;
      v24 = v2;
      v22 = 0;
      if ( *(_DWORD *)(a1 + 6180) )
      {
        while ( 1 )
        {
          if ( (*(_QWORD *)(*(_QWORD *)(a1 + 6184) + 8LL * v18) & 0x7FFFFFFFFFFF0000LL) != 0
            && (!v9 || _bittest64((const signed __int64 *)v9[1], v18)) )
          {
            v19 = v7;
            v28[v7++] = v18;
            v29[v19] = SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, v18, 0, 0x7FFFFFFFFFFF0000LL, 4u);
            v2 = v25;
            if ( v7 == 8 )
            {
              SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(
                a1,
                (unsigned int)v28,
                (unsigned int)v29,
                8,
                v21,
                (unsigned __int64)&v24 & -(__int64)(v25 != 0));
              v7 = 0;
              if ( v2 )
              {
                if ( !v24 )
                  break;
              }
            }
          }
          v9 = v23;
          v22 = ++v18;
          if ( v18 >= *(_DWORD *)(a1 + 6180) )
            goto LABEL_29;
        }
      }
      else
      {
LABEL_29:
        if ( v7 )
          SMKM_STORE<SM_TRAITS>::SmStTrimWsStoreBatch(
            a1,
            (unsigned int)v28,
            (unsigned int)v29,
            v7,
            v21,
            (unsigned __int64)&v24 & -(__int64)(v2 != 0));
      }
      if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v8);
      KeAbPostRelease((ULONG_PTR)v8);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      _InterlockedExchange64((volatile __int64 *)(a1 + 6520), (__int64)v5);
    }
  }
  KiUnstackDetachProcess(&v27, 0LL);
  return v4;
}
