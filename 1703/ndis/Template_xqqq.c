/*
 * XREFs of Template_xqqq @ 0x1C00735AC
 * Callers:
 *     NdisTryAcquireNicActive @ 0x1C0010980 (NdisTryAcquireNicActive.c)
 *     ?ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z @ 0x1C0016538 (-ndisNicActiveHandleCleanup@@YAXPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C00719C4 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C0071C6C (-ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     NdisReleaseNicActive @ 0x1C0073050 (NdisReleaseNicActive.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

NTSTATUS Template_xqqq(__int64 a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-21h] BYREF
  va_list v5; // [rsp+40h] [rbp-11h]
  __int64 v6; // [rsp+48h] [rbp-9h]
  va_list v7; // [rsp+50h] [rbp-1h]
  __int64 v8; // [rsp+58h] [rbp+7h]
  va_list v9; // [rsp+60h] [rbp+Fh]
  __int64 v10; // [rsp+68h] [rbp+17h]
  __int64 v11; // [rsp+B8h] [rbp+67h] BYREF
  va_list va; // [rsp+B8h] [rbp+67h]
  __int64 v13; // [rsp+C0h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+C0h] [rbp+6Fh]
  __int64 v15; // [rsp+C8h] [rbp+77h] BYREF
  va_list va2; // [rsp+C8h] [rbp+77h]
  va_list va3; // [rsp+D0h] [rbp+7Fh] BYREF

  va_start(va3, a3);
  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v13 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v15 = va_arg(va3, _QWORD);
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  va_copy(v5, va1);
  va_copy(v7, va2);
  va_copy(v9, va3);
  v6 = 4LL;
  v8 = 4LL;
  v10 = 4LL;
  return EtwWrite(Microsoft_Windows_NDISHandle, a2, a3, 4u, &UserData);
}
