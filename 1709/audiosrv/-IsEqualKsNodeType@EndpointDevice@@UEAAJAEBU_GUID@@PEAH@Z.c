/*
 * XREFs of ?IsEqualKsNodeType@EndpointDevice@@UEAAJAEBU_GUID@@PEAH@Z @ 0x1800EA0C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EndpointDevice::IsEqualKsNodeType(EndpointDevice *this, const struct _GUID *a2, int *a3)
{
  unsigned int v3; // ebx
  int v6; // eax
  __int64 v7; // rax
  _QWORD v9[2]; // [rsp+20h] [rbp-28h] BYREF

  v3 = 0;
  if ( a3 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 5) + 32LL))(*((_QWORD *)this + 5), v9);
    if ( v6 >= 0 )
    {
      v7 = v9[0] - *(_QWORD *)&a2->Data1;
      if ( v9[0] == *(_QWORD *)&a2->Data1 )
        v7 = v9[1] - *(_QWORD *)a2->Data4;
      *a3 = v7 == 0;
    }
    else
    {
      return (unsigned int)v6;
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}
