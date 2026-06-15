/*
 * XREFs of ?GetValidTelephonyInstance@PhoneTopology3@@UEAAJIPEAU_TelephonyInstanceData@@@Z @ 0x1800EBCE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PhoneTopology3::GetValidTelephonyInstance(
        PhoneTopology3 *this,
        __int64 a2,
        struct _TelephonyInstanceData *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  int v5; // eax

  v3 = 0;
  if ( a3 )
  {
    v4 = *((_QWORD *)this + 5);
    if ( v4 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 64LL))(v4);
      if ( v5 < 0 )
        return (unsigned int)v5;
    }
    else
    {
      return (unsigned int)-2147418113;
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}
