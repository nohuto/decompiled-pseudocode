/*
 * XREFs of Template_pz @ 0x1401FAE44
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1404DC8A4 (PiProcessNewDeviceNode.c)
 * Callees:
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS Template_pz(__int64 a1, __int64 a2, __int64 a3, ...)
{
  const wchar_t *v3; // rcx
  __int64 v4; // rax
  int v5; // edx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-38h] BYREF
  const wchar_t *v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]
  __int64 v11; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  const wchar_t *v13; // [rsp+A0h] [rbp+28h]
  va_list va1; // [rsp+A8h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  v13 = va_arg(va1, const wchar_t *);
  v3 = v13;
  va_copy((va_list)UserData.Ptr, va);
  *(_QWORD *)&UserData.Size = 8LL;
  if ( v13 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( v13[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10;
  }
  v9 = v5;
  v10 = 0;
  if ( !v13 )
    v3 = L"NULL";
  v8 = v3;
  return EtwWriteEx(
           Microsoft_Windows_Kernel_PnPHandle,
           &KMPnPEvt_ProcessNewDevice_InstancePath,
           0LL,
           0,
           0LL,
           0LL,
           2u,
           &UserData);
}
