/*
 * XREFs of PopPepInitializeVetoMasks @ 0x14022EA48
 * Callers:
 *     PoFxStartDevicePowerManagement @ 0x1401624F0 (PoFxStartDevicePowerManagement.c)
 *     PopPepPlatformStateRegistered @ 0x14022EE40 (PopPepPlatformStateRegistered.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140013720 (KxReleaseSpinLock.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     KxAcquireSpinLock @ 0x1400498E0 (KxAcquireSpinLock.c)
 *     PopFxActivateDevice @ 0x14006816C (PopFxActivateDevice.c)
 *     PoFxIdleDevice @ 0x140068444 (PoFxIdleDevice.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PopPepUpdateIdleStateRefCount @ 0x140149A84 (PopPepUpdateIdleStateRefCount.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PopFxBugCheck @ 0x14022A7A4 (PopFxBugCheck.c)
 *     PopPluginRequestComponentIdleConstraints @ 0x14022CC1C (PopPluginRequestComponentIdleConstraints.c)
 *     PopPluginRequestDeviceIdleConstraints @ 0x14022CD6C (PopPluginRequestDeviceIdleConstraints.c)
 *     PopFxEnableEnhancedAccounting @ 0x14022E20C (PopFxEnableEnhancedAccounting.c)
 *     PopPepInitializeDebuggerMasks @ 0x14022E94C (PopPepInitializeDebuggerMasks.c)
 *     PopPepResetDeviceAccountingLevel @ 0x14022F1B0 (PopPepResetDeviceAccountingLevel.c)
 */

void __fastcall PopPepInitializeVetoMasks(__int64 a1, unsigned int a2)
{
  ULONG_PTR v2; // rsi
  unsigned int v3; // r15d
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  _DWORD *v8; // r8
  KIRQL v9; // al
  int v10; // r13d
  signed __int32 v11; // r14d
  bool v12; // al
  unsigned int v13; // edx
  unsigned int *v14; // r14
  int v15; // r15d
  __int64 v16; // r11
  _DWORD *v17; // r10
  unsigned int v18; // r9d
  unsigned int v19; // r8d
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // r13
  __int64 v23; // rdi
  __int64 v24; // rdi
  unsigned int *v25; // r8
  int v26; // r11d
  unsigned int v27; // edx
  __int64 v28; // r10
  _DWORD *v29; // r9
  unsigned int v30; // eax
  _DWORD *v31; // rcx
  bool v32; // [rsp+20h] [rbp-89h]
  KIRQL v33; // [rsp+21h] [rbp-88h]
  signed __int32 v34; // [rsp+24h] [rbp-85h] BYREF
  int v35; // [rsp+28h] [rbp-81h]
  __int64 v36; // [rsp+30h] [rbp-79h]
  _DWORD v37[32]; // [rsp+40h] [rbp-69h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0;
  v6 = *(_QWORD *)(v2 + 48);
  if ( v6 )
  {
    v36 = *(_QWORD *)(v6 + 32);
    PopFxActivateDevice(v36, 0);
    v7 = 32LL;
    v8 = v37;
    if ( ((unsigned __int8)v37 & 4) != 0 )
    {
      v37[0] = 1;
      v7 = 31LL;
      v8 = &v37[1];
    }
    memset64(v8, 0x100000001uLL, v7 >> 1);
    if ( (v7 & 1) != 0 )
      v8[v7 - 1] = 1;
    v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
    v10 = dword_14036E240;
    v33 = v9;
    v35 = dword_14036E240;
    v32 = 0;
    v34 = _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, 0, 0);
    v11 = v34;
    KxAcquireSpinLock((PKSPIN_LOCK)(v2 + 576));
    *(_QWORD *)(v2 + 616) = 0LL;
    *(_QWORD *)(v2 + 608) = 0LL;
    *(_QWORD *)(v2 + 600) = 0LL;
    *(_BYTE *)(v2 + 584) = 0;
    if ( PopPluginRequestDeviceIdleConstraints(*(_QWORD *)(a1 + 32), (__int64)v37, a2) )
    {
      v12 = PopFxEnableEnhancedAccounting(&v34);
      v13 = 0;
      v32 = v12;
      v14 = v37;
      v15 = 1;
      if ( a2 )
      {
        v16 = 0LL;
        v17 = v37;
        do
        {
          if ( !*(_BYTE *)(v16 + PopPepPlatformState + 57) && *v17 != 1 )
            PopFxBugCheck(0x620uLL, v2, v13, 0LL);
          v18 = *v14;
          v19 = 1;
          do
          {
            if ( v19 >= v18 )
              break;
            v20 = v19++ - 1;
            *(_DWORD *)(a1 + 4 * v20 + 144) |= v15;
          }
          while ( v19 <= 3 );
          if ( v10 != -1 && v13 == v10 && v18 > 1 )
          {
            *(_DWORD *)(v2 + 588) = v18;
            *(_QWORD *)(v2 + 600) = MEMORY[0xFFFFF78000000008];
            *(_BYTE *)(v2 + 584) = 1;
            _InterlockedOr((volatile signed __int32 *)(v2 + 624), 0x10u);
          }
          ++v14;
          v15 *= 2;
          ++v13;
          v16 += 384LL;
          ++v17;
        }
        while ( v13 < a2 );
      }
      v11 = v34;
      v3 = 0;
    }
    *(_DWORD *)(v2 + 592) = v11;
    KxReleaseSpinLock((PKSPIN_LOCK)(v2 + 576));
    v21 = *(_DWORD *)(a1 + 156);
    if ( v21 != 4 )
      PopPepUpdateIdleStateRefCount(0, *(_DWORD *)(a1 + 4LL * (v21 - 1) + 144), 1);
    if ( *(_DWORD *)(a1 + 168) )
    {
      do
      {
        v22 = 200LL * v3;
        v23 = *(_QWORD *)(*(_QWORD *)(v2 + 632) + 8LL * v3);
        memset(v37, 0, sizeof(v37));
        v24 = v23 + 200;
        KxAcquireSpinLock((PKSPIN_LOCK)v24);
        *(_QWORD *)(v24 + 32) = 0LL;
        *(_QWORD *)(v24 + 40) = 0LL;
        *(_QWORD *)(v24 + 24) = 0LL;
        *(_BYTE *)(v24 + 8) = 0;
        if ( PopPluginRequestComponentIdleConstraints(*(_QWORD *)(a1 + 32), v3, (__int64)v37, a2) )
        {
          v32 = PopFxEnableEnhancedAccounting(&v34);
          v25 = v37;
          v26 = 1;
          v27 = 0;
          if ( a2 )
          {
            v28 = 0LL;
            v29 = v37;
            do
            {
              if ( !*(_BYTE *)(v28 + PopPepPlatformState + 57) && *v29 )
                PopFxBugCheck(0x621uLL, v2, v3, v27);
              v30 = 0;
              if ( *(_DWORD *)(a1 + v22 + 364) )
              {
                v31 = (_DWORD *)(*(_QWORD *)(a1 + v22 + 368) + 16LL);
                do
                {
                  if ( v30 >= *v25 )
                    break;
                  *v31 |= v26;
                  ++v30;
                  v31 += 6;
                }
                while ( v30 < *(_DWORD *)(a1 + v22 + 364) );
              }
              if ( v35 != -1 && v27 == v35 && *v25 )
              {
                *(_DWORD *)(v24 + 12) = *v25;
                *(_QWORD *)(v24 + 24) = MEMORY[0xFFFFF78000000008];
                *(_BYTE *)(v24 + 8) = 1;
                _InterlockedOr((volatile signed __int32 *)(v2 + 624), 0x10u);
              }
              ++v25;
              v26 *= 2;
              ++v27;
              v28 += 384LL;
              ++v29;
            }
            while ( v27 < a2 );
          }
          v11 = v34;
        }
        *(_DWORD *)(v24 + 16) = v11;
        KxReleaseSpinLock((PKSPIN_LOCK)v24);
        PopPepUpdateIdleStateRefCount(
          0,
          *(_DWORD *)(*(_QWORD *)(a1 + v22 + 368) + 24LL * *(unsigned int *)(a1 + v22 + 352) + 16),
          1);
        ++v3;
      }
      while ( v3 < *(_DWORD *)(a1 + 168) );
    }
    *(_DWORD *)(a1 + 160) = 2;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    __writecr8(v33);
    PoFxIdleDevice(v36);
    if ( v32 )
      PopPepResetDeviceAccountingLevel();
  }
  else if ( (*(_DWORD *)(v2 + 624) & 2) != 0 )
  {
    PopPepInitializeDebuggerMasks(a1, a2);
  }
}
