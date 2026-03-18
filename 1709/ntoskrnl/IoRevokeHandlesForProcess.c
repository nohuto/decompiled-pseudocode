/*
 * XREFs of IoRevokeHandlesForProcess @ 0x1401FA8E0
 * Callers:
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 * Callees:
 *     IopGetDevicePDO @ 0x14002459C (IopGetDevicePDO.c)
 *     PsGetCurrentSilo @ 0x1400817D0 (PsGetCurrentSilo.c)
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     IopIsProcessAppContainer @ 0x14012BDD8 (IopIsProcessAppContainer.c)
 *     memset @ 0x140192F40 (memset.c)
 *     PnpDisableUserModeNotifications @ 0x1401FEC30 (PnpDisableUserModeNotifications.c)
 *     ObOpenObjectByNameEx @ 0x1404AC5A0 (ObOpenObjectByNameEx.c)
 *     ExEnumHandleTable @ 0x140506320 (ExEnumHandleTable.c)
 *     ObReferenceProcessHandleTable @ 0x140506A2C (ObReferenceProcessHandleTable.c)
 *     ObDereferenceProcessHandleTable @ 0x140577320 (ObDereferenceProcessHandleTable.c)
 */

__int64 __fastcall IoRevokeHandlesForProcess(__int64 a1, struct _KPROCESS *a2)
{
  __int64 v5; // rdi
  unsigned int v6; // esi
  _DWORD *DevicePDO; // rax
  void *v8; // rdi
  PVOID Object[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v10; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+58h] [rbp-A8h]
  __int64 v12; // [rsp+60h] [rbp-A0h]
  int v13; // [rsp+68h] [rbp-98h]
  __int128 v14; // [rsp+70h] [rbp-90h]
  _QWORD v15[28]; // [rsp+80h] [rbp-80h] BYREF
  char v16; // [rsp+190h] [rbp+90h] BYREF

  if ( !IopIsProcessAppContainer(a2) )
    return 0LL;
  v5 = ObReferenceProcessHandleTable(a2);
  if ( !v5 )
    return 3221225485LL;
  memset(v15, 0, 0xD8uLL);
  v11 = 0LL;
  v12 = a1;
  v10 = 48;
  v13 = 576;
  v14 = 0LL;
  LODWORD(v15[0]) = 14155784;
  LODWORD(v15[4]) = 1;
  memset(&v15[20], 0, 0x28uLL);
  LOWORD(v15[20]) = 40;
  v15[24] = 1LL;
  v15[24] = PsGetCurrentSilo();
  v6 = ObOpenObjectByNameEx(&v10, IoFileObjectType, 0LL, 0LL, 0, v15, v15[24], &v16);
  if ( LODWORD(v15[4]) == -1096154543 )
  {
    v6 = v15[2];
    if ( SLODWORD(v15[2]) >= 0 )
    {
      Object[0] = (PVOID)v15[5];
      Object[1] = a2;
      ExEnumHandleTable(v5, IopCheckHandleForRevocation, Object, 0LL);
      DevicePDO = IopGetDevicePDO((__int64)Object[0]);
      v8 = DevicePDO;
      if ( DevicePDO )
      {
        PnpDisableUserModeNotifications(DevicePDO, a2);
        ObfDereferenceObjectWithTag(v8, 0x746C6644u);
      }
      ObfDereferenceObjectWithTag(Object[0], 0x746C6644u);
    }
  }
  ObDereferenceProcessHandleTable(a2);
  return v6;
}
