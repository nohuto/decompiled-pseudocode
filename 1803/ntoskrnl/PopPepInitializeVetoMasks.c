/*
 * XREFs of PopPepInitializeVetoMasks @ 0x140279AF8
 * Callers:
 *     PoFxStartDevicePowerManagement @ 0x140181020 (PoFxStartDevicePowerManagement.c)
 *     PopPepPlatformStateRegistered @ 0x140279F48 (PopPepPlatformStateRegistered.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1400347F0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     PoFxIdleDevice @ 0x140146A58 (PoFxIdleDevice.c)
 *     PopFxActivateDevice @ 0x140146BBC (PopFxActivateDevice.c)
 *     PopPepUpdateIdleStateRefCount @ 0x14016C158 (PopPepUpdateIdleStateRefCount.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PopFxBugCheck @ 0x140274BF4 (PopFxBugCheck.c)
 *     PopPluginRequestComponentIdleConstraints @ 0x1402775C8 (PopPluginRequestComponentIdleConstraints.c)
 *     PopPluginRequestDeviceIdleConstraints @ 0x140277718 (PopPluginRequestDeviceIdleConstraints.c)
 *     PopFxEnableEnhancedAccounting @ 0x14027907C (PopFxEnableEnhancedAccounting.c)
 *     PopPepInitializeDebuggerMasks @ 0x1402799FC (PopPepInitializeDebuggerMasks.c)
 *     PopPepResetDeviceAccountingLevel @ 0x14027A2B4 (PopPepResetDeviceAccountingLevel.c)
 */

void __fastcall PopPepInitializeVetoMasks(__int64 a1, unsigned int a2)
{
  ULONG_PTR v2; // rsi
  unsigned int v3; // r15d
  __int64 v6; // rax
  int v7; // eax
  _DWORD *v8; // r8
  unsigned __int64 v9; // rdx
  KIRQL v10; // al
  int v11; // r13d
  signed __int32 v12; // r14d
  unsigned int *v13; // r14
  unsigned int v14; // edx
  int v15; // r15d
  __int64 v16; // r11
  _DWORD *v17; // r10
  unsigned int v18; // r9d
  unsigned int i; // r8d
  int v20; // eax
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
    PopFxActivateDevice(v36, 0, 0);
    v7 = v37[0];
    v8 = v37;
    if ( (((unsigned __int8)((unsigned __int8)&v37[26] + 1) - 105) & 4) != 0 )
      v7 = 1;
    v37[0] = v7;
    if ( (((unsigned __int8)((unsigned __int8)&v37[26] + 1) - 105) & 4) != 0 )
      v8 = &v37[1];
    v9 = 32LL - ((((unsigned __int8)((unsigned __int8)&v37[26] + 1) - 105) & 4) != 0LL);
    memset64(v8, 0x100000001uLL, v9 >> 1);
    if ( (v9 & 1) != 0 )
      v8[v9 - 1] = 1;
    v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64));
    v11 = dword_1403CDB00;
    v33 = v10;
    v35 = dword_1403CDB00;
    v32 = 0;
    v34 = _InterlockedCompareExchange(&PopFxDeviceAccountingLevel, 0, 0);
    v12 = v34;
    KxAcquireSpinLock((PKSPIN_LOCK)(v2 + 576));
    *(_DWORD *)(v2 + 592) = v34;
    *(_QWORD *)(v2 + 608) = 0LL;
    *(_QWORD *)(v2 + 616) = 0LL;
    memset((void *)(v2 + 624), 0, 0x50uLL);
    *(_BYTE *)(v2 + 584) = 0;
    if ( PopPluginRequestDeviceIdleConstraints(*(_QWORD *)(a1 + 32), (__int64)v37, a2) )
    {
      v32 = PopFxEnableEnhancedAccounting(&v34);
      v13 = v37;
      v14 = 0;
      v15 = 1;
      if ( a2 )
      {
        v16 = 0LL;
        v17 = v37;
        do
        {
          if ( !*(_BYTE *)(v16 + PopPepPlatformState + 57) && *v17 != 1 )
            PopFxBugCheck(0x620uLL, v2, v14, 0LL);
          v18 = *v13;
          for ( i = 1; i <= 3; ++i )
          {
            if ( i >= v18 )
              break;
            *(_DWORD *)(a1 + 4LL * (i - 1) + 144) |= v15;
          }
          if ( v11 != -1 && v14 == v11 && v18 > 1 )
          {
            *(_DWORD *)(v2 + 588) = v18;
            *(_QWORD *)(v2 + 600) = MEMORY[0xFFFFF78000000008];
            *(_BYTE *)(v2 + 584) = 1;
            _InterlockedOr((volatile signed __int32 *)(v2 + 704), 0x10u);
          }
          ++v13;
          v15 *= 2;
          ++v14;
          v16 += 384LL;
          ++v17;
        }
        while ( v14 < a2 );
      }
      v3 = 0;
      v20 = *(_DWORD *)(a1 + 152);
      v12 = v34;
      *(_QWORD *)(a1 + 156) = *(_QWORD *)(a1 + 144);
      *(_DWORD *)(a1 + 164) = v20;
    }
    *(_DWORD *)(v2 + 592) = v12;
    KxReleaseSpinLock((PKSPIN_LOCK)(v2 + 576));
    v21 = *(_DWORD *)(a1 + 168);
    if ( v21 != 4 )
      PopPepUpdateIdleStateRefCount(0LL, *(_DWORD *)(a1 + 4LL * (v21 - 1) + 144), 1);
    if ( *(_DWORD *)(a1 + 180) )
    {
      do
      {
        v22 = 200LL * v3;
        v23 = *(_QWORD *)(*(_QWORD *)(v2 + 712) + 8LL * v3);
        memset(v37, 0, sizeof(v37));
        v24 = v23 + 200;
        KxAcquireSpinLock((PKSPIN_LOCK)v24);
        *(_QWORD *)(v24 + 32) = 0LL;
        *(_QWORD *)(v24 + 40) = 0LL;
        *(_DWORD *)(v24 + 16) = v12;
        memset((void *)(v24 + 48), 0, 0x50uLL);
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
              if ( *(_DWORD *)(a1 + v22 + 372) )
              {
                v31 = (_DWORD *)(*(_QWORD *)(a1 + v22 + 376) + 16LL);
                do
                {
                  if ( v30 >= *v25 )
                    break;
                  *v31 |= v26;
                  ++v30;
                  v31 += 6;
                }
                while ( v30 < *(_DWORD *)(a1 + v22 + 372) );
              }
              if ( v35 != -1 && v27 == v35 && *v25 )
              {
                *(_DWORD *)(v24 + 12) = *v25;
                *(_QWORD *)(v24 + 24) = MEMORY[0xFFFFF78000000008];
                *(_BYTE *)(v24 + 8) = 1;
                _InterlockedOr((volatile signed __int32 *)(v2 + 704), 0x10u);
              }
              ++v25;
              v26 *= 2;
              ++v27;
              v28 += 384LL;
              ++v29;
            }
            while ( v27 < a2 );
          }
          v12 = v34;
        }
        *(_DWORD *)(v24 + 16) = v12;
        KxReleaseSpinLock((PKSPIN_LOCK)v24);
        PopPepUpdateIdleStateRefCount(
          0LL,
          *(_DWORD *)(*(_QWORD *)(a1 + v22 + 376) + 24LL * *(unsigned int *)(a1 + v22 + 360) + 16),
          1);
        ++v3;
      }
      while ( v3 < *(_DWORD *)(a1 + 180) );
    }
    *(_DWORD *)(a1 + 172) = 2;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    __writecr8(v33);
    PoFxIdleDevice(v36);
    if ( v32 )
      PopPepResetDeviceAccountingLevel();
  }
  else if ( (*(_DWORD *)(v2 + 704) & 2) != 0 )
  {
    PopPepInitializeDebuggerMasks(a1, a2);
  }
}
