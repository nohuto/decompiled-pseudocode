/*
 * XREFs of RaUnitQueryCapabilitiesIrp @ 0x1C005EA94
 * Callers:
 *     RaUnitPnpIrp @ 0x1C00077A0 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidUnitPoFxIdleComponent @ 0x1C0006468 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitPoFxActivateComponent @ 0x1C0006534 (RaidUnitPoFxActivateComponent.c)
 *     RaidCompleteRequestEx @ 0x1C000C410 (RaidCompleteRequestEx.c)
 *     RaidPnPPassToMiniPort @ 0x1C0011C6C (RaidPnPPassToMiniPort.c)
 *     __security_check_cookie @ 0x1C0017BC0 (__security_check_cookie.c)
 *     memset @ 0x1C0018140 (memset.c)
 *     RaidUnitSetDefaultWriteCachePolicy @ 0x1C003DF0C (RaidUnitSetDefaultWriteCachePolicy.c)
 *     PortWdmGetDeviceCapabilities @ 0x1C005EE30 (PortWdmGetDeviceCapabilities.c)
 *     PortGetDeviceType @ 0x1C005F364 (PortGetDeviceType.c)
 */

__int64 __fastcall RaUnitQueryCapabilitiesIrp(__int64 a1, IRP *a2)
{
  int v4; // eax
  _IO_SECURITY_CONTEXT *SecurityContext; // rdi
  __int64 DeviceType; // rbx
  SIZE_T v7; // r15
  _DWORD *PoolWithTag; // r14
  int v9; // eax
  char v10; // r8
  int v11; // ecx
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  __int64 v21; // rax
  int AccessState; // eax
  int SecurityQos_high; // r8d
  int v24; // edx
  int v25; // edx
  int v26; // edx
  int v27; // edx
  int v28; // edx
  int v29; // edx
  int v30; // edx
  int v31; // edx
  int v32; // edx
  int v33; // edx
  int v34; // edx
  unsigned int v35; // r8d
  _BYTE v37[16]; // [rsp+30h] [rbp-88h] BYREF
  _OWORD v38[4]; // [rsp+40h] [rbp-78h] BYREF

  if ( *(_QWORD *)(a1 + 24) && (v4 = *(_DWORD *)(a1 + 40)) != 0 && (unsigned int)(v4 - 5) > 1 )
  {
    RaidUnitPoFxActivateComponent(a1, 0, 1LL, v37);
    SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
    DeviceType = PortGetDeviceType(**(_BYTE **)(a1 + 96) & 0x1F);
    v7 = 4 * (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 528LL) + 184LL) & 4 | 2u);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x72536152u);
    PortWdmGetDeviceCapabilities(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), v38);
    *(_OWORD *)&SecurityContext->SecurityQos = v38[0];
    *(_OWORD *)&SecurityContext->DesiredAccess = v38[1];
    *(_OWORD *)&SecurityContext[1].AccessState = v38[2];
    *(_OWORD *)&SecurityContext[2].SecurityQos = v38[3];
    v9 = HIDWORD(SecurityContext->SecurityQos) | 0x100;
    HIDWORD(SecurityContext->SecurityQos) = v9;
    if ( *(_BYTE *)(DeviceType + 24) )
      HIDWORD(SecurityContext->SecurityQos) = v9 | 0x80;
    LODWORD(SecurityContext->AccessState) = (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 88));
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v7);
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 528LL) + 184LL) & 4) != 0 )
      {
        v11 = PoolWithTag[1];
        *PoolWithTag = 1572865;
        PoolWithTag[1] ^= (HIDWORD(SecurityContext->SecurityQos) ^ v11) & 1;
        v12 = PoolWithTag[1] ^ (HIDWORD(SecurityContext->SecurityQos) ^ PoolWithTag[1]) & 2;
        PoolWithTag[1] = v12;
        v13 = v12 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v12) & 4;
        PoolWithTag[1] = v13;
        v14 = v13 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v13) & 8;
        PoolWithTag[1] = v14;
        v15 = v14 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v14) & 0x10;
        PoolWithTag[1] = v15;
        v16 = v15 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v15) & 0x20;
        PoolWithTag[1] = v16;
        v17 = v16 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v16) & 0x40;
        PoolWithTag[1] = v17;
        v18 = v17 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v17) & 0x80;
        PoolWithTag[1] = v18;
        v19 = v18 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v18) & 0x100;
        PoolWithTag[1] = v19;
        v20 = v19 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v19) & 0x200;
        PoolWithTag[1] = v20;
        PoolWithTag[1] = v20 ^ ((unsigned __int16)v20 ^ (unsigned __int16)(HIDWORD(SecurityContext->SecurityQos) >> 7)) & 0x400;
        PoolWithTag[3] = HIDWORD(SecurityContext->AccessState);
        v21 = *(_QWORD *)(a1 + 24);
        if ( *(_BYTE *)(v21 + 4839) == 1 && *(_BYTE *)(v21 + 4838) == 6 )
          AccessState = (*(unsigned __int8 *)(a1 + 88) << 16) | 0xFFFF;
        else
          AccessState = (int)SecurityContext->AccessState;
        PoolWithTag[2] = AccessState;
        PoolWithTag[1] &= ~0x800u;
      }
      if ( (int)RaidPnPPassToMiniPort(*(_QWORD *)(a1 + 8), 9LL, v10, (__int64)PoolWithTag, v7) >= 0 )
      {
        SecurityQos_high = HIDWORD(SecurityContext->SecurityQos);
        v24 = SecurityQos_high ^ PoolWithTag[1];
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 528LL) + 184LL) & 4) != 0 )
        {
          v25 = SecurityQos_high ^ v24 & 1;
          HIDWORD(SecurityContext->SecurityQos) = v25;
          v26 = (PoolWithTag[1] ^ v25) & 2 ^ v25;
          HIDWORD(SecurityContext->SecurityQos) = v26;
          v27 = (PoolWithTag[1] ^ v26) & 4 ^ v26;
          HIDWORD(SecurityContext->SecurityQos) = v27;
          v28 = (PoolWithTag[1] ^ v27) & 8 ^ v27;
          HIDWORD(SecurityContext->SecurityQos) = v28;
          v29 = (PoolWithTag[1] ^ v28) & 0x10 ^ v28;
          HIDWORD(SecurityContext->SecurityQos) = v29;
          v30 = (PoolWithTag[1] ^ v29) & 0x20 ^ v29;
          HIDWORD(SecurityContext->SecurityQos) = v30;
          v31 = (PoolWithTag[1] ^ v30) & 0x40 ^ v30;
          HIDWORD(SecurityContext->SecurityQos) = v31;
          v32 = (PoolWithTag[1] ^ v31) & 0x80 ^ v31;
          HIDWORD(SecurityContext->SecurityQos) = v32;
          v33 = (PoolWithTag[1] ^ v32) & 0x100 ^ v32;
          HIDWORD(SecurityContext->SecurityQos) = v33;
          v34 = (PoolWithTag[1] ^ v33) & 0x200 ^ v33;
          HIDWORD(SecurityContext->SecurityQos) = v34;
          HIDWORD(SecurityContext->SecurityQos) = v34 ^ (v34 ^ (PoolWithTag[1] << 7)) & 0x20000;
          HIDWORD(SecurityContext->AccessState) = PoolWithTag[3];
          LODWORD(SecurityContext->AccessState) = PoolWithTag[2];
          if ( (PoolWithTag[1] & 0x800) != 0 )
          {
            *(_DWORD *)(a1 + 1568) |= 0x10u;
            RaidUnitSetDefaultWriteCachePolicy(a1);
          }
        }
        else
        {
          HIDWORD(SecurityContext->SecurityQos) = SecurityQos_high ^ v24 & 0x10;
        }
      }
      ExFreePoolWithTag(PoolWithTag, 0x72536152u);
    }
    if ( (**(_BYTE **)(a1 + 96) & 0x1F) == 0x14 && !BYTE3(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink) )
      HIDWORD(SecurityContext->SecurityQos) |= 0x20000u;
    RaidUnitPoFxIdleComponent(a1, 0, 0, v37);
    v35 = 0;
  }
  else
  {
    a2->IoStatus.Information = 0LL;
    v35 = -1073741810;
  }
  return RaidCompleteRequestEx(a2, 0, v35);
}
