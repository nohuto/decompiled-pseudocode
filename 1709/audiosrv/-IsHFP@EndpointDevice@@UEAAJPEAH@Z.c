/*
 * XREFs of ?IsHFP@EndpointDevice@@UEAAJPEAH@Z @ 0x1800EA150
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EndpointDevice::IsHFP(EndpointDevice *this, int *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  int v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v2 = 0;
  if ( a2 )
  {
    *a2 = 0;
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 32LL))(*((_QWORD *)this + 5), &v10);
    if ( v5 < 0 )
      return (unsigned int)v5;
    v5 = (*(__int64 (__fastcall **)(EndpointDevice *, int *))(*(_QWORD *)this + 128LL))(this, &v9);
    if ( v5 < 0 )
    {
      return (unsigned int)v5;
    }
    else if ( v9 )
    {
      v6 = v10 - *(_QWORD *)&GUID_dff21ce6_f70f_11d0_b917_00a0c9223196.Data1;
      if ( v10 == *(_QWORD *)&GUID_dff21ce6_f70f_11d0_b917_00a0c9223196.Data1 )
        v6 = v11 - *(_QWORD *)GUID_dff21ce6_f70f_11d0_b917_00a0c9223196.Data4;
      if ( !v6 )
        goto LABEL_13;
      v7 = v10 - *(_QWORD *)&GUID_dff21be3_f70f_11d0_b917_00a0c9223196.Data1;
      if ( v10 == *(_QWORD *)&GUID_dff21be3_f70f_11d0_b917_00a0c9223196.Data1 )
        v7 = v11 - *(_QWORD *)GUID_dff21be3_f70f_11d0_b917_00a0c9223196.Data4;
      if ( !v7 )
LABEL_13:
        *a2 = 1;
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v2;
}
