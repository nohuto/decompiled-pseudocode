/*
 * XREFs of ?IsActive@EndpointDevice@@UEAAJPEAH@Z @ 0x1800E9F80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EndpointDevice::IsActive(EndpointDevice *this, int *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( a2 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 4) + 48LL))(*((_QWORD *)this + 4), &v9);
    if ( v5 < 0 )
      return (unsigned int)v5;
    v6 = 1;
    if ( *((_DWORD *)this + 34) == 1 )
    {
      if ( v9 != 1 )
        goto LABEL_10;
      v7 = 8;
    }
    else
    {
      v7 = v9;
    }
    if ( v7 == 1 )
    {
LABEL_11:
      *a2 = v6;
      return v2;
    }
LABEL_10:
    v6 = 0;
    goto LABEL_11;
  }
  return (unsigned int)-2147467261;
}
