/*
 * XREFs of ACPILoadProcessRSDT @ 0x1C009A99C
 * Callers:
 *     ACPIInitialize @ 0x1C0099FEC (ACPIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00019EC (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C0009204 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C00299A8 (WPP_RECORDER_SF_q.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C0071964 (ACPIRegReadAMLRegistryEntry.c)
 *     ACPIPccInitialize @ 0x1C007EC60 (ACPIPccInitialize.c)
 *     ACPILoadAddDynamicDataBlockTable @ 0x1C009A594 (ACPILoadAddDynamicDataBlockTable.c)
 *     ACPILoadProcessFADT @ 0x1C009A88C (ACPILoadProcessFADT.c)
 *     ACPIRegDumpAcpiTables @ 0x1C009AFBC (ACPIRegDumpAcpiTables.c)
 */

__int64 ACPILoadProcessRSDT()
{
  char v0; // r13
  int v1; // ebx
  _DWORD *v2; // rax
  int v3; // edx
  _DWORD *v4; // rdi
  unsigned int v5; // r14d
  int v6; // edx
  unsigned int v7; // r12d
  int **v8; // r15
  int *v9; // rdi
  int v10; // eax
  _OWORD *PoolWithTag; // rax
  int v12; // eax
  int v13; // r9d
  PVOID v14; // rax
  _DWORD *v15; // rdi
  int v16; // edx
  PVOID v17; // rdi
  PVOID v19; // [rsp+70h] [rbp+8h] BYREF
  char v20; // [rsp+78h] [rbp+10h]
  PVOID P; // [rsp+80h] [rbp+18h] BYREF

  v0 = 0;
  v20 = 0;
  v1 = 0;
  LOBYTE(v19) = 0;
  v2 = (_DWORD *)(*(__int64 (**)(void))(PmHalDispatchTable + 112))();
  v4 = v2;
  if ( !v2 || (v5 = *v2) == 0 )
  {
    LOBYTE(v3) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v3,
      6,
      18,
      (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids);
    v1 = -1072431079;
    goto LABEL_46;
  }
  LOBYTE(v3) = 4;
  WPP_RECORDER_SF_D(
    WPP_GLOBAL_Control->DeviceExtension,
    v3,
    6,
    19,
    (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids,
    *v2);
  v7 = 0;
  v8 = (int **)(v4 + 2);
  do
  {
    v9 = *v8;
    v10 = **v8;
    if ( v10 == 1414742611 )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        6,
        20,
        (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids,
        (char)*v8);
      goto LABEL_35;
    }
    if ( v10 != 1346584902 && v10 != 1413763923 && v10 != 1413763920 && v10 != 1128878145 && v10 != 1413694288 )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_D(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        6,
        21,
        (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids,
        **v8);
      goto LABEL_35;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x24uLL, 0x74706341u);
    P = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_42;
    *PoolWithTag = *(_OWORD *)v9;
    PoolWithTag[1] = *((_OWORD *)v9 + 1);
    *((_DWORD *)PoolWithTag + 8) = v9[8];
    *((_DWORD *)PoolWithTag + 1) = 36;
    if ( ACPIRegReadAMLRegistryEntry((__int64 *)&P) )
      v9 = (int *)P;
    else
      ExFreePoolWithTag(P, 0);
    v6 = *v9 - 1128878145;
    if ( *v9 == 1128878145 )
    {
      if ( !v20 )
      {
        v20 = 1;
        *((_QWORD *)AcpiInformation + 4) = v9;
        goto LABEL_34;
      }
      v13 = 23;
      goto LABEL_33;
    }
    v6 = *v9 - 1346584902;
    if ( *v9 == 1346584902 )
    {
      if ( !v0 )
      {
        v0 = 1;
        *((_QWORD *)AcpiInformation + 1) = v9;
        v12 = ACPILoadProcessFADT();
        goto LABEL_23;
      }
      v13 = 22;
LABEL_33:
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        6,
        v13,
        (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids);
      goto LABEL_34;
    }
    v6 = *v9 - 1413694288;
    if ( *v9 == 1413694288 )
    {
      if ( !(_BYTE)v19 )
      {
        LOBYTE(v19) = 1;
        v12 = ACPIPccInitialize((__int64)v9);
        goto LABEL_23;
      }
      v13 = 24;
      goto LABEL_33;
    }
    v6 = *v9 - 1413763920;
    if ( *v9 == 1413763920 || *v9 == 1413763923 )
    {
      v12 = ACPILoadAddDynamicDataBlockTable((__int64)v9, 0);
LABEL_23:
      v1 = v12;
    }
LABEL_34:
    if ( v1 < 0 )
      goto LABEL_46;
LABEL_35:
    ++v7;
    ++v8;
  }
  while ( v7 < v5 );
  if ( g_SimulatorCallbackObject || AcpiLoadSimulatorTable )
  {
    v14 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x24uLL, 0x74706341u);
    v19 = v14;
    v15 = v14;
    if ( !v14 )
    {
LABEL_42:
      v1 = -1073741670;
      goto LABEL_46;
    }
    memset(v14, 0, 0x24uLL);
    *v15 = 1413763923;
    v15[1] = 36;
    *((_WORD *)v15 + 4) = 1;
    v15[6] = 1;
    v15[8] = 1;
    *(_DWORD *)((char *)v15 + 10) = 1413894989;
    *((_QWORD *)v15 + 2) = 0x7274616C756D6973LL;
    v15[7] = 1413894989;
    if ( ACPIRegReadAMLRegistryEntry((__int64 *)&v19) )
    {
      v17 = v19;
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        v16,
        6,
        25,
        (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids,
        (char)v19);
      v1 = ACPILoadAddDynamicDataBlockTable((__int64)v17, 0);
      if ( v1 < 0 )
      {
        ExFreePoolWithTag(v17, 0);
        goto LABEL_46;
      }
    }
    else
    {
      ExFreePoolWithTag(v19, 0);
    }
  }
  ACPIRegDumpAcpiTables();
LABEL_46:
  if ( !v0 )
  {
    LOBYTE(v6) = 2;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      6,
      26,
      (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids);
    return (unsigned int)-1072431079;
  }
  return (unsigned int)v1;
}
