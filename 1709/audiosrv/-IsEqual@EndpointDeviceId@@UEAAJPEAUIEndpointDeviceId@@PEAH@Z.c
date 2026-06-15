/*
 * XREFs of ?IsEqual@EndpointDeviceId@@UEAAJPEAUIEndpointDeviceId@@PEAH@Z @ 0x1800ED050
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EndpointDeviceId::IsEqual(EndpointDeviceId *this, struct IEndpointDeviceId *a2, int *a3)
{
  unsigned int v3; // ebx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // eax
  int v12; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v13[2]; // [rsp+28h] [rbp-40h] BYREF
  _QWORD v14[2]; // [rsp+38h] [rbp-30h] BYREF

  v3 = 0;
  v12 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      *a3 = 0;
      v7 = (*(__int64 (__fastcall **)(struct IEndpointDeviceId *, _QWORD *))(*(_QWORD *)a2 + 24LL))(a2, v13);
      if ( v7 < 0 )
        return (unsigned int)v7;
      v7 = (*(__int64 (__fastcall **)(struct IEndpointDeviceId *, _QWORD *))(*(_QWORD *)a2 + 32LL))(a2, v14);
      if ( v7 < 0 )
        return (unsigned int)v7;
      v7 = (*(__int64 (__fastcall **)(struct IEndpointDeviceId *, int *))(*(_QWORD *)a2 + 48LL))(a2, &v12);
      if ( v7 < 0 )
      {
        return (unsigned int)v7;
      }
      else
      {
        v8 = *((_QWORD *)this + 4) - v13[0];
        if ( !v8 )
          v8 = *((_QWORD *)this + 5) - v13[1];
        if ( v8 )
          goto LABEL_16;
        v9 = *((_QWORD *)this + 6) - v14[0];
        if ( !v9 )
          v9 = *((_QWORD *)this + 7) - v14[1];
        if ( v9 || (v10 = 1, (*((_DWORD *)this + 16) & v12) == 0) )
LABEL_16:
          v10 = 0;
        *a3 = v10;
      }
    }
    else
    {
      return (unsigned int)-2147467261;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v3;
}
