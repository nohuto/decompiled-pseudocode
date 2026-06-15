/*
 * XREFs of ?GetAdapterDeviceId@PhoneTopology3@@UEAAJPEAPEAG@Z @ 0x1800EB690
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PhoneTopology3::GetAdapterDeviceId(PhoneTopology3 *this, unsigned __int16 **a2)
{
  unsigned int v2; // ebx
  int v3; // eax

  v2 = 0;
  if ( a2 )
  {
    *a2 = 0LL;
    v3 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 **))(**((_QWORD **)this + 4) + 64LL))(
           *((_QWORD *)this + 4),
           a2);
    if ( v3 < 0 )
      return (unsigned int)v3;
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v2;
}
