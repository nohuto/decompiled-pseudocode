/*
 * XREFs of PopPepInitializeVetoMasks @ 0x140242A58
 * Callers:
 *     PoFxStartDevicePowerManagement @ 0x140150FF0 (PoFxStartDevicePowerManagement.c)
 *     PopPepPlatformStateRegistered @ 0x140242E70 (PopPepPlatformStateRegistered.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     KxAcquireSpinLock @ 0x140061000 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PoFxIdleDevice @ 0x1400FBB18 (PoFxIdleDevice.c)
 *     PopFxActivateDevice @ 0x1400FC950 (PopFxActivateDevice.c)
 *     PopPepUpdateIdleStateRefCount @ 0x140123884 (PopPepUpdateIdleStateRefCount.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PopFxBugCheck @ 0x14023D978 (PopFxBugCheck.c)
 *     PopPluginRequestComponentIdleConstraints @ 0x14023FFDC (PopPluginRequestComponentIdleConstraints.c)
 *     PopPluginRequestDeviceIdleConstraints @ 0x14024012C (PopPluginRequestDeviceIdleConstraints.c)
 *     PopFxEnableEnhancedAccounting @ 0x140242458 (PopFxEnableEnhancedAccounting.c)
 *     PopPepInitializeDebuggerMasks @ 0x14024295C (PopPepInitializeDebuggerMasks.c)
 *     PopPepResetDeviceAccountingLevel @ 0x1402431DC (PopPepResetDeviceAccountingLevel.c)
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
  int v22; // eax
  __int64 v23; // r13
  __int64 v24; // rdi
  __int64 v25; // rdi
  unsigned int *v26; // r8
  int v27; // r11d
  unsigned int v28; // edx
  __int64 v29; // r10
  _DWORD *v30; // r9
  unsigned int v31; // eax
  _DWORD *v32; // rcx
  bool v33; // [rsp+20h] [rbp-89h]
  KIRQL v34; // [rsp+21h] [rbp-88h]
  signed __int32 v35; // [rsp+24h] [rbp-85h] BYREF
  int v36; // [rsp+28h] [rbp-81h]
  __int64 v37; // [rsp+30h] [rbp-79h]
  _DWORD v38[32]; // [rsp+40h] [rbp-69h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0;
  v6 = *(_QWORD *)(v2 + 48);
  if ( v6 )
  {
    v37 = *(_QWORD *)(v6 + 32);
    PopFxActivateDevice(v37, 0, 0);
    v7 = 32LL;
    v8 = v38;
    if ( ((unsigned __int8)v38 & 4) != 0 )
    {
      v38[0] = 1;
      v7 = 31LL;
      v8 = &v38[1];
    }
    memset64(v8, 0x100000001uLL, v7 >> 1);
    if ( (v7 & 1) != 0 )
      v8[v7 - 1] = 1;
    v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
    v10 = dword_140389CC0;
    v34 = v9;
    v36 = dword_140389CC0;
    v33 = 0;
    v35 = _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, 0, 0);
    v11 = v35;
    KxAcquireSpinLock((PKSPIN_LOCK)(v2 + 576));
    *(_QWORD *)(v2 + 616) = 0LL;
    *(_QWORD *)(v2 + 608) = 0LL;
    *(_QWORD *)(v2 + 600) = 0LL;
    *(_BYTE *)(v2 + 584) = 0;
    if ( PopPluginRequestDeviceIdleConstraints(*(_QWORD *)(a1 + 32), (__int64)v38, a2) )
    {
      v12 = PopFxEnableEnhancedAccounting(&v35);
      v13 = 0;
      v33 = v12;
      v14 = v38;
      v15 = 1;
      if ( a2 )
      {
        v16 = 0LL;
        v17 = v38;
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
      v3 = 0;
      v21 = *(_DWORD *)(a1 + 152);
      v11 = v35;
      *(_QWORD *)(a1 + 156) = *(_QWORD *)(a1 + 144);
      *(_DWORD *)(a1 + 164) = v21;
    }
    *(_DWORD *)(v2 + 592) = v11;
    KxReleaseSpinLock((PKSPIN_LOCK)(v2 + 576));
    v22 = *(_DWORD *)(a1 + 168);
    if ( v22 != 4 )
      PopPepUpdateIdleStateRefCount(0LL, *(_DWORD *)(a1 + 4LL * (v22 - 1) + 144), 1);
    if ( *(_DWORD *)(a1 + 180) )
    {
      do
      {
        v23 = 200LL * v3;
        v24 = *(_QWORD *)(*(_QWORD *)(v2 + 632) + 8LL * v3);
        memset(v38, 0, sizeof(v38));
        v25 = v24 + 200;
        KxAcquireSpinLock((PKSPIN_LOCK)v25);
        *(_QWORD *)(v25 + 32) = 0LL;
        *(_QWORD *)(v25 + 40) = 0LL;
        *(_QWORD *)(v25 + 24) = 0LL;
        *(_BYTE *)(v25 + 8) = 0;
        if ( PopPluginRequestComponentIdleConstraints(*(_QWORD *)(a1 + 32), v3, (__int64)v38, a2) )
        {
          v33 = PopFxEnableEnhancedAccounting(&v35);
          v26 = v38;
          v27 = 1;
          v28 = 0;
          if ( a2 )
          {
            v29 = 0LL;
            v30 = v38;
            do
            {
              if ( !*(_BYTE *)(v29 + PopPepPlatformState + 57) && *v30 )
                PopFxBugCheck(0x621uLL, v2, v3, v28);
              v31 = 0;
              if ( *(_DWORD *)(a1 + v23 + 372) )
              {
                v32 = (_DWORD *)(*(_QWORD *)(a1 + v23 + 376) + 16LL);
                do
                {
                  if ( v31 >= *v26 )
                    break;
                  *v32 |= v27;
                  ++v31;
                  v32 += 6;
                }
                while ( v31 < *(_DWORD *)(a1 + v23 + 372) );
              }
              if ( v36 != -1 && v28 == v36 && *v26 )
              {
                *(_DWORD *)(v25 + 12) = *v26;
                *(_QWORD *)(v25 + 24) = MEMORY[0xFFFFF78000000008];
                *(_BYTE *)(v25 + 8) = 1;
                _InterlockedOr((volatile signed __int32 *)(v2 + 624), 0x10u);
              }
              ++v26;
              v27 *= 2;
              ++v28;
              v29 += 384LL;
              ++v30;
            }
            while ( v28 < a2 );
          }
          v11 = v35;
        }
        *(_DWORD *)(v25 + 16) = v11;
        KxReleaseSpinLock((PKSPIN_LOCK)v25);
        PopPepUpdateIdleStateRefCount(
          0LL,
          *(_DWORD *)(*(_QWORD *)(a1 + v23 + 376) + 24LL * *(unsigned int *)(a1 + v23 + 360) + 16),
          1);
        ++v3;
      }
      while ( v3 < *(_DWORD *)(a1 + 180) );
    }
    *(_DWORD *)(a1 + 172) = 2;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    __writecr8(v34);
    PoFxIdleDevice(v37);
    if ( v33 )
      PopPepResetDeviceAccountingLevel();
  }
  else if ( (*(_DWORD *)(v2 + 624) & 2) != 0 )
  {
    PopPepInitializeDebuggerMasks(a1, a2);
  }
}
