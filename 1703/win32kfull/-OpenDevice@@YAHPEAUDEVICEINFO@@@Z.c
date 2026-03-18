/*
 * XREFs of ?OpenDevice@@YAHPEAUDEVICEINFO@@@Z @ 0x1C01B91C8
 * Callers:
 *     DitOpen @ 0x1C01BA028 (DitOpen.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?QueryDeviceInfo@@YAJPEAUDEVICEINFO@@@Z @ 0x1C01B942C (-QueryDeviceInfo@@YAJPEAUDEVICEINFO@@@Z.c)
 *     ?RitWakeDITAndWaitForResponse@@YAXK@Z @ 0x1C01B94F8 (-RitWakeDITAndWaitForResponse@@YAXK@Z.c)
 */

__int64 __fastcall OpenDevice(struct DEVICEINFO *a1)
{
  NTSTATUS DeviceInfo; // edi
  ACCESS_MASK v3; // r15d
  ULONG ShareAccess; // r14d
  _QWORD *v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // esi
  NTSTATUS v9; // eax
  int v10; // edi
  PVOID Object; // [rsp+68h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-11h] BYREF
  _DWORD v13[2]; // [rsp+A0h] [rbp+1Fh] BYREF
  __int16 v14; // [rsp+A8h] [rbp+27h]

  DeviceInfo = -1073741811;
  v3 = 1048577;
  ShareAccess = 2;
  if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) == gptiRit
    && gbDIT == 1
    && (*((_DWORD *)a1 + 50) & 0x80u) != 0 )
  {
    *((_DWORD *)a1 + 24) |= 8u;
    RitWakeDITAndWaitForResponse(1u);
    return (*((_DWORD *)a1 + 24) & 4u) >> 2;
  }
  *((_QWORD *)a1 + 35) = PsGetCurrentProcessId();
  if ( gProtocolType )
  {
    *((_WORD *)a1 + 32) |= 1u;
    if ( *((_BYTE *)a1 + 48) )
    {
      if ( *((_BYTE *)a1 + 48) != 1 )
        return 0LL;
      v6 = (_QWORD *)ghRemoteKeyboardChannel;
    }
    else
    {
      v6 = (_QWORD *)ghRemoteMouseChannel;
    }
    *((_QWORD *)a1 + 28) = *v6;
    if ( !*v6 )
      return 0LL;
  }
  else
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)((char *)a1 + 208);
    ObjectAttributes.SecurityQualityOfService = v13;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.SecurityDescriptor = 0LL;
    v13[0] = 12;
    v13[1] = 2;
    v14 = 257;
    if ( *((_BYTE *)a1 + 48) == 2 )
    {
      v7 = *((_QWORD *)a1 + 59);
      v3 = 1048579;
      if ( !v7 || *(_DWORD *)(v7 + 24) == 6 )
        ShareAccess = 3;
    }
    v8 = 0;
    if ( !gdwMaxRetries )
      return 0LL;
    do
    {
      v9 = ZwCreateFile(
             (PHANDLE)a1 + 28,
             v3,
             &ObjectAttributes,
             (PIO_STATUS_BLOCK)a1 + 16,
             0LL,
             0,
             ShareAccess,
             3u,
             0,
             0LL,
             0);
      *((_DWORD *)a1 + 72) = v9;
      v10 = v9;
      if ( v9 != -1073741757 && v9 != -1073741790 )
        break;
      if ( !gfSwitchInProgress )
        break;
      UserSleep(100LL);
      ++v8;
    }
    while ( v8 < gdwMaxRetries );
    if ( v10 < 0 )
      return 0LL;
    *((_DWORD *)a1 + 78) = 0;
    *((_WORD *)a1 + 32) &= ~2u;
    DeviceInfo = ObReferenceObjectByHandle(*((HANDLE *)a1 + 28), 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    *((_QWORD *)a1 + 29) = Object;
  }
  if ( *((_BYTE *)a1 + 48) != 2 )
    DeviceInfo = QueryDeviceInfo(a1);
  return DeviceInfo >= 0;
}
