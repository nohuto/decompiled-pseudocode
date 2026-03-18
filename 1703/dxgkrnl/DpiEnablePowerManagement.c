/*
 * XREFs of DpiEnablePowerManagement @ 0x1C01C2428
 * Callers:
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C010DDB0 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiEnablePowerManagement(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rcx
  __int64 v4; // rbx
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax

  v3 = *(_QWORD *)(a1 + 64);
  LODWORD(v4) = 0;
  *(_BYTE *)(v3 + 481) = 1;
  *(_QWORD *)(v3 + 488) = a2;
  *(_BYTE *)(v3 + 5096) = a3;
  if ( a3 )
  {
    v5 = IoRegisterDeviceInterface(
           *(PDEVICE_OBJECT *)(v3 + 152),
           &GUID_DEVINTERFACE_GRAPHICSPOWER,
           0LL,
           (PUNICODE_STRING)(v3 + 5080));
    v4 = v5;
    if ( v5 < 0 )
    {
      v8 = WdLogNewEntry5_WdError(v7, v6);
      *(_QWORD *)(v8 + 24) = v4;
      *(_QWORD *)(v8 + 32) = 8LL;
      WdLogEvent5_WdError(v8);
    }
  }
  return (unsigned int)v4;
}
