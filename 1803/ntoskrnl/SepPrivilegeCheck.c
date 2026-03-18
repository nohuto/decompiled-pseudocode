/*
 * XREFs of SepPrivilegeCheck @ 0x140105560
 * Callers:
 *     SePrivilegePolicyCheck @ 0x14005E5C8 (SePrivilegePolicyCheck.c)
 *     SepAccessCheck @ 0x140101F00 (SepAccessCheck.c)
 *     SepAccessCheckEx @ 0x1401495A4 (SepAccessCheckEx.c)
 *     SeCheckAuditPrivilege @ 0x1404D7CA8 (SeCheckAuditPrivilege.c)
 *     NtPrivilegeCheck @ 0x1404EC904 (NtPrivilegeCheck.c)
 *     PsOpenProcess @ 0x14059A0D0 (PsOpenProcess.c)
 *     PfQuerySuperfetchInformation @ 0x1405B0640 (PfQuerySuperfetchInformation.c)
 *     SePrivilegeCheck @ 0x1405B0D30 (SePrivilegeCheck.c)
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 * Callees:
 *     <none>
 */

char __fastcall SepPrivilegeCheck(__int64 a1, __int64 a2, unsigned int a3, char a4, char a5)
{
  int v5; // r10d
  __int64 v8; // rdx
  _DWORD *v9; // rax
  __int64 v10; // r9
  int v11; // r11d
  unsigned __int8 v12; // cf
  __int64 v14; // [rsp+0h] [rbp-18h] BYREF
  __int64 v15; // [rsp+8h] [rbp-10h] BYREF

  v5 = 0;
  v15 = 0LL;
  v14 = 0LL;
  if ( !a5 )
    return 1;
  _InterlockedExchange64(&v15, *(_QWORD *)(a1 + 72));
  _InterlockedExchange64(&v14, *(_QWORD *)(a1 + 64));
  v8 = v15 & v14;
  _InterlockedOr((volatile signed __int32 *)&v14, 0);
  if ( a3 )
  {
    v9 = (_DWORD *)(a2 + 8);
    v10 = a3;
    do
    {
      v11 = *v9 & 0x7FFFFFFF;
      v12 = _bittest64(&v8, (unsigned int)*(v9 - 2));
      *v9 = v11;
      if ( v12 )
      {
        *v9 = v11 | 0x80000000;
        ++v5;
      }
      v9 += 3;
      --v10;
    }
    while ( v10 );
  }
  if ( (a4 & 1) != 0 )
  {
    if ( v5 == a3 )
      return 1;
  }
  else if ( v5 )
  {
    return 1;
  }
  return 0;
}
