/*
 * XREFs of ACPIPccLegacyInitialize @ 0x1C008A538
 * Callers:
 *     ACPIRootInitialize @ 0x1C008A29C (ACPIRootInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008934 (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     ACPIAmliEvaluatePcch @ 0x1C008A63C (ACPIAmliEvaluatePcch.c)
 *     ACPIAmliEvaluateOsc @ 0x1C008A750 (ACPIAmliEvaluateOsc.c)
 *     AcpiPccInitilizeSubspace @ 0x1C00A0590 (AcpiPccInitilizeSubspace.c)
 */

__int64 __fastcall ACPIPccLegacyInitialize(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // r8d
  __int64 v3; // rcx
  PVOID PoolWithTag; // rax
  int v5; // edx
  __int64 v6; // rdi
  int v7; // ebx
  __int64 v9; // rcx
  unsigned int v10; // r8d
  unsigned int v11; // eax
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
    v3 = *(_QWORD *)(v1 + 712);
    *(_OWORD *)v12 = SB_OSC_PCC_UUID;
    ACPIAmliEvaluateOsc(v3, (int)v12, v2, 2, &v20);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x210uLL, 0x4D706341u);
    v6 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0x210uLL);
      *(_DWORD *)v6 |= 1u;
      v7 = ACPIAmliEvaluatePcch(*(_QWORD *)(v1 + 712), (unsigned int)v13, (int)v6 + 80, (int)v6 + 64, v6 + 56);
      if ( v7 >= 0 )
      {
        if ( !v13[3] && (v14 & 4) != 0 && (v14 & 8) != 0 && (v15 & 1) != 0 )
        {
          *(_DWORD *)(v6 + 104) = v17;
          *(_QWORD *)(v6 + 96) = v16;
          v7 = AcpiPccInitilizeSubspace((PVOID)v6);
          if ( v7 >= 0 )
          {
            v9 = *(_QWORD *)(v6 + 32);
            *(_DWORD *)(v6 + 24) = *(_DWORD *)(v6 + 104);
            *(_QWORD *)(v6 + 16) = v9;
            *(_QWORD *)(v6 + 40) = v9 + 12;
            *(_QWORD *)(v6 + 48) = v9 + 14;
            *(_DWORD *)(v6 + 4) = *(_DWORD *)(v9 + 16);
            v10 = *(_DWORD *)(v9 + 20);
            if ( v10 )
              *(_DWORD *)(v6 + 8) = 0x1E8480 / v10;
            if ( (*(_BYTE *)(v9 + 8) & 1) != 0 )
              *(_DWORD *)v6 |= 2u;
            v11 = *(_DWORD *)v6 & 0xFFFFFFCB;
            AcpiPccLegacySubspace = v6;
            *(_DWORD *)v6 = v11 | 8;
            v6 = 0LL;
          }
        }
        else
        {
          v7 = -1073741823;
        }
      }
      if ( v6 )
        ExFreePoolWithTag((PVOID)v6, 0x4D706341u);
    }
    else
    {
      v7 = -1073741670;
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v5,
        21,
        10,
        (__int64)&WPP_27c5544e98c530bf6b99fb9ebc6d4fa8_Traceguids);
    }
  }
  return (unsigned int)v7;
}
