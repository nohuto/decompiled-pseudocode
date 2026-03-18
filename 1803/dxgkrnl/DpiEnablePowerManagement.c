/*
 * XREFs of DpiEnablePowerManagement @ 0x1C01EE594
 * Callers:
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C014B1C4 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiEnablePowerManagement(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rax

  v3 = *(_QWORD *)(a1 + 64);
  LODWORD(v4) = 0;
  *(_BYTE *)(v3 + 481) = 1;
  *(_QWORD *)(v3 + 488) = a2;
  *(_BYTE *)(v3 + 5296) = a3;
  if ( a3 )
  {
    v5 = IoRegisterDeviceInterface(
           *(PDEVICE_OBJECT *)(v3 + 152),
           &GUID_DEVINTERFACE_GRAPHICSPOWER,
           0LL,
           (PUNICODE_STRING)(v3 + 5280));
    v4 = v5;
    if ( v5 < 0 )
    {
      v7 = WdLogNewEntry5_WdError(v6);
      *(_QWORD *)(v7 + 24) = v4;
      *(_QWORD *)(v7 + 32) = 8LL;
      WdLogEvent5_WdError(v7);
    }
  }
  return (unsigned int)v4;
}
