/*
 * XREFs of ObAssignObjectSecurityDescriptor @ 0x140483E68
 * Callers:
 *     CmpAssignKeySecurity @ 0x1401593C4 (CmpAssignKeySecurity.c)
 *     WmipSecurityMethod @ 0x140483DC0 (WmipSecurityMethod.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ObLogSecurityDescriptor @ 0x1404BFD80 (ObLogSecurityDescriptor.c)
 */

__int64 __fastcall ObAssignObjectSecurityDescriptor(__int64 a1, void *a2)
{
  int v4; // esi
  __int64 v6; // [rsp+30h] [rbp+8h]

  if ( a2 )
  {
    v4 = ObLogSecurityDescriptor(a2);
    if ( v4 >= 0 )
    {
      ExFreePoolWithTag(a2, 0);
      if ( v6 )
        *(_QWORD *)(a1 - 8) = v6 + 15;
      else
        *(_QWORD *)(a1 - 8) = 0LL;
    }
    return (unsigned int)v4;
  }
  else
  {
    *(_QWORD *)(a1 - 8) = 0LL;
    return 0LL;
  }
}
