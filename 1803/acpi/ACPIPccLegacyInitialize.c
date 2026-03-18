/*
 * XREFs of ACPIPccLegacyInitialize @ 0x1C007EEB4
 * Callers:
 *     ACPIRootInitialize @ 0x1C008710C (ACPIRootInitialize.c)
 * Callees:
 *     memset @ 0x1C0004540 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009204 (WPP_RECORDER_SF_.c)
 *     ACPIAmliEvaluateOsc @ 0x1C0074918 (ACPIAmliEvaluateOsc.c)
 *     ACPIAmliEvaluatePcch @ 0x1C0074AAC (ACPIAmliEvaluatePcch.c)
 *     AcpiPccInitilizeSubspace @ 0x1C007F180 (AcpiPccInitilizeSubspace.c)
 */

__int64 __fastcall ACPIPccLegacyInitialize(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 v2; // r8
  int v3; // ebx
  _QWORD *v4; // rcx
  PVOID PoolWithTag; // rax
  int v6; // edx
  __int64 v7; // rdi
  __int64 v8; // r8
  unsigned int v9; // ecx
  int v10; // ecx
  int v12[4]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v13[4]; // [rsp+40h] [rbp-30h] BYREF
  char v14; // [rsp+44h] [rbp-2Ch]
  char v15; // [rsp+45h] [rbp-2Bh]
  __int64 v16; // [rsp+4Eh] [rbp-22h]
  int v17; // [rsp+66h] [rbp-Ah]
  int v18; // [rsp+80h] [rbp+10h] BYREF
  int v19; // [rsp+84h] [rbp+14h]
  int v20; // [rsp+88h] [rbp+18h] BYREF
  int v21; // [rsp+8Ch] [rbp+1Ch]

  v19 = HIDWORD(a1);
  v1 = RootDeviceExtension;
  v18 = 1;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PCC, &v18);
  if ( v18 == 2 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    v20 = 0;
    v21 = 1;
    v4 = *(_QWORD **)(v1 + 712);
    *(_OWORD *)v12 = SB_OSC_PCC_UUID;
    ACPIAmliEvaluateOsc(v4, (__int64)v12, v2, 2u, &v20);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x210uLL, 0x4D706341u);
    v7 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x210uLL);
      *(_DWORD *)v7 = 1;
      v3 = ACPIAmliEvaluatePcch(*(_QWORD **)(v1 + 712), (__int64)v13, v7 + 80, (_QWORD *)(v7 + 64), (_QWORD *)(v7 + 56));
      if ( v3 >= 0 )
      {
        if ( !v13[3] && (v14 & 4) != 0 && (v14 & 8) != 0 && (v15 & 1) != 0 )
        {
          *(_DWORD *)(v7 + 104) = v17;
          *(_QWORD *)(v7 + 96) = v16;
          v3 = AcpiPccInitilizeSubspace((PVOID)v7);
          if ( v3 >= 0 )
          {
            v8 = *(_QWORD *)(v7 + 32);
            *(_DWORD *)(v7 + 24) = *(_DWORD *)(v7 + 104);
            *(_QWORD *)(v7 + 16) = v8;
            *(_QWORD *)(v7 + 40) = v8 + 12;
            *(_QWORD *)(v7 + 48) = v8 + 14;
            *(_DWORD *)(v7 + 4) = *(_DWORD *)(v8 + 16);
            v9 = *(_DWORD *)(v8 + 20);
            if ( v9 )
              *(_DWORD *)(v7 + 8) = 0x1E8480 / v9;
            v10 = *(_DWORD *)v7;
            if ( (*(_BYTE *)(v8 + 8) & 1) != 0 )
            {
              v10 |= 2u;
              *(_DWORD *)v7 = v10;
            }
            AcpiPccLegacySubspace = v7;
            *(_DWORD *)v7 = v10 & 0xFFFFFFC3 | 8;
            v7 = 0LL;
          }
        }
        else
        {
          v3 = -1073741823;
        }
      }
      if ( v7 )
        ExFreePoolWithTag((PVOID)v7, 0x4D706341u);
    }
    else
    {
      v3 = -1073741670;
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        21,
        10,
        (__int64)&WPP_aa09a4a2e6b4360d6f89773cef358f13_Traceguids);
    }
  }
  return (unsigned int)v3;
}
