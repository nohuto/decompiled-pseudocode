/*
 * XREFs of ?GetMaxCallInstanceCount@PhoneTopology3@@UEAAJPEAI@Z @ 0x1800EBC00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PhoneTopology3::GetMaxCallInstanceCount(PhoneTopology3 *this, unsigned int *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  int v4; // eax

  v2 = 0;
  if ( a2 )
  {
    v3 = *((_QWORD *)this + 5);
    if ( v3 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v3 + 72LL))(v3, a2);
      if ( v4 < 0 )
        return (unsigned int)v4;
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
  return v2;
}
