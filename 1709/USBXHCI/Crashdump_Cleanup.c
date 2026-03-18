/*
 * XREFs of Crashdump_Cleanup @ 0x1C0038D30
 * Callers:
 *     <none>
 * Callees:
 *     Crashdump_Register_SaveStateForHybridSleep @ 0x1C003AB1C (Crashdump_Register_SaveStateForHybridSleep.c)
 *     Crashdump_Register_StopController @ 0x1C003ACC8 (Crashdump_Register_StopController.c)
 *     Crashdump_Command_Stop @ 0x1C003B978 (Crashdump_Command_Stop.c)
 *     Crashdump_UsbDevice_Cleanup @ 0x1C003C664 (Crashdump_UsbDevice_Cleanup.c)
 *     Crashdump_UsbDevice_ConfigureEndpointsForSaveState @ 0x1C003CC48 (Crashdump_UsbDevice_ConfigureEndpointsForSaveState.c)
 *     Crashdump_UsbDevice_SuspendPort @ 0x1C003DAD4 (Crashdump_UsbDevice_SuspendPort.c)
 */

__int64 __fastcall Crashdump_Cleanup(__int64 a1)
{
  unsigned int i; // edi
  __int64 v3; // rsi
  int v4; // eax
  bool v5; // zf
  __int64 j; // rdi
  int v7; // eax
  unsigned int v8; // esi
  int *v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  int v12; // edi
  __int64 v13; // rcx
  int v14; // eax
  signed __int32 v16[14]; // [rsp+0h] [rbp-38h] BYREF

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Cleanup: begin\n");
  for ( i = 0; i < *(_DWORD *)(a1 + 536); ++i )
  {
    v3 = 376LL * i;
    v4 = Crashdump_UsbDevice_Cleanup(v3 + *(_QWORD *)(a1 + 568));
    if ( v4 < 0 )
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_UsbDevice_Cleanup failed with error 0x%X\n", v4);
    if ( *(_BYTE *)(a1 + 625) && (int)Crashdump_UsbDevice_ConfigureEndpointsForSaveState(v3 + *(_QWORD *)(a1 + 568)) < 0 )
      *(_BYTE *)(a1 + 625) = 0;
  }
  v5 = *(_DWORD *)(a1 + 536) == 1;
  for ( j = (unsigned int)(*(_DWORD *)(a1 + 536) - 1); ; v5 = (_DWORD)j == 0 )
  {
    v8 = *(_DWORD *)(a1 + 4 * j + 544);
    if ( v5 )
      break;
    j = (unsigned int)(j - 1);
    v7 = Crashdump_UsbDevice_SuspendPort(*(_QWORD *)(a1 + 568) + 376LL * (unsigned int)j, v8);
    if ( v7 < 0 )
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_UsbDevice_SuspendPort failed with error 0x%X\n", v7);
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Register_SuspendPort: begin: port %u\n", v8);
  v9 = (int *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 16 * (v8 - 1 + 64LL));
  *v9 = *v9 & 0xE00C200 | 0x60;
  _InterlockedOr(v16, 0);
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Register_SuspendPort: end 0x%X\n", 0);
  LOBYTE(v10) = 1;
  v11 = Crashdump_Command_Stop(a1 + 328, v10);
  if ( v11 < 0 )
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_Command_Stop failed with error 0x%X\n", v11);
  v12 = Crashdump_Register_StopController(a1);
  if ( v12 >= 0 && *(_BYTE *)(a1 + 625) )
  {
    v13 = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 616) + 128LL) + 32LL);
    *(_QWORD *)(v13 + 136) = *(_QWORD *)(a1 + 272);
    *(_DWORD *)(v13 + 112) = *(_DWORD *)(a1 + 280);
    *(_DWORD *)(v13 + 116) = *(_DWORD *)(a1 + 284);
    *(_DWORD *)(v13 + 120) = *(_DWORD *)(a1 + 288);
    *(_DWORD *)(v13 + 124) = *(_DWORD *)(a1 + 292);
    *(_DWORD *)(v13 + 128) = *(_DWORD *)(a1 + 296);
    *(_QWORD *)(v13 + 144) = *(_QWORD *)(a1 + 304);
    *(_OWORD *)(v13 + 160) = *(_OWORD *)(a1 + 312);
    v14 = Crashdump_Register_SaveStateForHybridSleep(a1);
    v12 = v14;
    if ( v14 >= 0 )
      DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Register_SaveStateForHybridSleep succeeded.\n");
    else
      DbgPrintEx(0x93u, 1u, "XHCIDUMP: Crashdump_Register_SaveStateForHybridSleep failed with error 0x%X\n", v14);
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Cleanup: end\n");
  return (unsigned int)v12;
}
