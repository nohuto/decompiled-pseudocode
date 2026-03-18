/*
 * XREFs of SepPrivilegeCheck @ 0x140087BC0
 * Callers:
 *     SePrivilegePolicyCheck @ 0x140015260 (SePrivilegePolicyCheck.c)
 *     SeAccessCheckByType @ 0x140068AB0 (SeAccessCheckByType.c)
 *     SepAccessCheck @ 0x14007F5F0 (SepAccessCheck.c)
 *     SepAccessCheckEx @ 0x14014272C (SepAccessCheckEx.c)
 *     SeCheckAuditPrivilege @ 0x14046BEA0 (SeCheckAuditPrivilege.c)
 *     IopParseDevice @ 0x1404B86A0 (IopParseDevice.c)
 *     PfQuerySuperfetchInformation @ 0x1404C4070 (PfQuerySuperfetchInformation.c)
 *     SePrivilegeCheck @ 0x1404C45D0 (SePrivilegeCheck.c)
 *     PsOpenProcess @ 0x1404C4620 (PsOpenProcess.c)
 *     NtPrivilegeCheck @ 0x1405396C4 (NtPrivilegeCheck.c)
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
  if ( a5 )
  {
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
      if ( v5 != a3 )
        return 0;
    }
    else if ( !v5 )
    {
      return 0;
    }
  }
  return 1;
}
