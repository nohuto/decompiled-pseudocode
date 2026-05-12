/*
 * XREFs of RaUnitQueryCapabilitiesIrp @ 0x1C0060E30
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0004E20 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidUnitPoFxActivateComponent @ 0x1C0004738 (RaidUnitPoFxActivateComponent.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C0004BA0 (RaidUnitPoFxIdleComponent.c)
 *     RaidCompleteRequestEx @ 0x1C0009A90 (RaidCompleteRequestEx.c)
 *     RaidPnPPassToMiniPort @ 0x1C001AFBC (RaidPnPPassToMiniPort.c)
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 *     memset @ 0x1C001F180 (memset.c)
 *     RaidUnitSetDefaultWriteCachePolicy @ 0x1C003EA68 (RaidUnitSetDefaultWriteCachePolicy.c)
 *     PortGetDeviceType @ 0x1C0060340 (PortGetDeviceType.c)
 *     PortWdmGetDeviceCapabilities @ 0x1C00611A4 (PortWdmGetDeviceCapabilities.c)
 */

__int64 __fastcall RaUnitQueryCapabilitiesIrp(__int64 a1, IRP *a2)
{
  int v4; // eax
  _IO_SECURITY_CONTEXT *SecurityContext; // rdi
  char **DeviceType; // rbx
  SIZE_T v7; // r15
  _DWORD *PoolWithTag; // rsi
  int v9; // eax
  __int64 v10; // r8
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  __int64 v20; // rax
  int AccessState; // eax
  unsigned int v22; // r8d
  int v24; // ecx
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  _BYTE v34[16]; // [rsp+30h] [rbp-88h] BYREF
  _OWORD v35[4]; // [rsp+40h] [rbp-78h] BYREF

  if ( *(_QWORD *)(a1 + 24) && (v4 = *(_DWORD *)(a1 + 40)) != 0 && (unsigned int)(v4 - 5) > 1 )
  {
    RaidUnitPoFxActivateComponent(a1, 0, 1u, v34);
    SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
    DeviceType = PortGetDeviceType(**(_BYTE **)(a1 + 96) & 0x1F);
    v7 = 4 * (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 528LL) + 184LL) & 4 | 2u);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7, 0x72536152u);
    PortWdmGetDeviceCapabilities(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), v35);
    *(_OWORD *)&SecurityContext->SecurityQos = v35[0];
    *(_OWORD *)&SecurityContext->DesiredAccess = v35[1];
    *(_OWORD *)&SecurityContext[1].AccessState = v35[2];
    *(_OWORD *)&SecurityContext[2].SecurityQos = v35[3];
    v9 = HIDWORD(SecurityContext->SecurityQos) | 0x100;
    HIDWORD(SecurityContext->SecurityQos) = v9;
    if ( *((_BYTE *)DeviceType + 24) )
      HIDWORD(SecurityContext->SecurityQos) = v9 | 0x80;
    LODWORD(SecurityContext->AccessState) = (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 88));
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, v7);
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 528LL) + 184LL) & 4) != 0 )
      {
        *PoolWithTag = 1572865;
        PoolWithTag[1] ^= (PoolWithTag[1] ^ HIDWORD(SecurityContext->SecurityQos)) & 1;
        v11 = PoolWithTag[1] ^ (HIDWORD(SecurityContext->SecurityQos) ^ PoolWithTag[1]) & 2;
        PoolWithTag[1] = v11;
        v12 = v11 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v11) & 4;
        PoolWithTag[1] = v12;
        v13 = v12 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v12) & 8;
        PoolWithTag[1] = v13;
        v14 = v13 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v13) & 0x10;
        PoolWithTag[1] = v14;
        v15 = v14 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v14) & 0x20;
        PoolWithTag[1] = v15;
        v16 = v15 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v15) & 0x40;
        PoolWithTag[1] = v16;
        v17 = v16 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v16) & 0x80;
        PoolWithTag[1] = v17;
        v18 = v17 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v17) & 0x100;
        PoolWithTag[1] = v18;
        v19 = v18 ^ (HIDWORD(SecurityContext->SecurityQos) ^ v18) & 0x200;
        PoolWithTag[1] = v19;
        PoolWithTag[1] = v19 ^ ((unsigned __int16)v19 ^ (unsigned __int16)(HIDWORD(SecurityContext->SecurityQos) >> 7)) & 0x400;
        PoolWithTag[3] = HIDWORD(SecurityContext->AccessState);
        v20 = *(_QWORD *)(a1 + 24);
        if ( *(_BYTE *)(v20 + 4839) == 1 && *(_BYTE *)(v20 + 4838) == 6 )
          AccessState = (*(unsigned __int8 *)(a1 + 88) << 16) | 0xFFFF;
        else
          AccessState = (int)SecurityContext->AccessState;
        PoolWithTag[1] &= ~0x800u;
        PoolWithTag[2] = AccessState;
      }
      if ( (int)RaidPnPPassToMiniPort(*(_QWORD *)(a1 + 8), 9LL, v10, (__int64)PoolWithTag, v7) >= 0 )
      {
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 528LL) + 184LL) & 4) != 0 )
        {
          v24 = HIDWORD(SecurityContext->SecurityQos) ^ (PoolWithTag[1] ^ HIDWORD(SecurityContext->SecurityQos)) & 1;
          HIDWORD(SecurityContext->SecurityQos) = v24;
          v25 = (PoolWithTag[1] ^ v24) & 2 ^ v24;
          HIDWORD(SecurityContext->SecurityQos) = v25;
          v26 = (PoolWithTag[1] ^ v25) & 4 ^ v25;
          HIDWORD(SecurityContext->SecurityQos) = v26;
          v27 = (PoolWithTag[1] ^ v26) & 8 ^ v26;
          HIDWORD(SecurityContext->SecurityQos) = v27;
          v28 = (PoolWithTag[1] ^ v27) & 0x10 ^ v27;
          HIDWORD(SecurityContext->SecurityQos) = v28;
          v29 = (PoolWithTag[1] ^ v28) & 0x20 ^ v28;
          HIDWORD(SecurityContext->SecurityQos) = v29;
          v30 = (PoolWithTag[1] ^ v29) & 0x40 ^ v29;
          HIDWORD(SecurityContext->SecurityQos) = v30;
          v31 = (PoolWithTag[1] ^ v30) & 0x80 ^ v30;
          HIDWORD(SecurityContext->SecurityQos) = v31;
          v32 = (PoolWithTag[1] ^ v31) & 0x100 ^ v31;
          HIDWORD(SecurityContext->SecurityQos) = v32;
          v33 = (PoolWithTag[1] ^ v32) & 0x200 ^ v32;
          HIDWORD(SecurityContext->SecurityQos) = v33;
          HIDWORD(SecurityContext->SecurityQos) = v33 ^ (v33 ^ (PoolWithTag[1] << 7)) & 0x20000;
          HIDWORD(SecurityContext->AccessState) = PoolWithTag[3];
          LODWORD(SecurityContext->AccessState) = PoolWithTag[2];
          if ( (PoolWithTag[1] & 0x800) != 0 )
          {
            *(_DWORD *)(a1 + 1536) |= 0x10u;
            RaidUnitSetDefaultWriteCachePolicy(a1);
          }
        }
        else
        {
          HIDWORD(SecurityContext->SecurityQos) ^= (HIDWORD(SecurityContext->SecurityQos) ^ PoolWithTag[1]) & 0x10;
        }
      }
      ExFreePoolWithTag(PoolWithTag, 0x72536152u);
    }
    RaidUnitPoFxIdleComponent(a1, 0, 0, v34);
    v22 = 0;
  }
  else
  {
    a2->IoStatus.Information = 0LL;
    v22 = -1073741810;
  }
  return RaidCompleteRequestEx(a2, 0, v22);
}
