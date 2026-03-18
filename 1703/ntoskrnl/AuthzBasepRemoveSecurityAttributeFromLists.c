/*
 * XREFs of AuthzBasepRemoveSecurityAttributeFromLists @ 0x14000464C
 * Callers:
 *     AuthzBasepDeleteSecurityAttribute @ 0x140065EF4 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepCommitSecurityAttributeChanges @ 0x140094180 (AuthzBasepCommitSecurityAttributeChanges.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x1402638F0 (AuthzBasepRollbackSecurityAttributeChanges.c)
 * Callees:
 *     <none>
 */

void __fastcall AuthzBasepRemoveSecurityAttributeFromLists(_DWORD *a1, __int64 *a2, char a3, char a4)
{
  __int64 *v5; // r8
  __int64 **v6; // rax
  __int64 v7; // r9
  __int64 **v8; // r8

  if ( a4 && (a2[7] & 2) != 0 )
  {
    v7 = a2[2];
    v8 = (__int64 **)a2[3];
    if ( *(__int64 **)(v7 + 8) != a2 + 2 || *v8 != a2 + 2 )
      __fastfail(3u);
    *v8 = (__int64 *)v7;
    *(_QWORD *)(v7 + 8) = v8;
    *((_DWORD *)a2 + 14) &= ~2u;
    if ( a1 )
      --a1[6];
  }
  if ( a3 && (a2[7] & 1) != 0 )
  {
    v5 = (__int64 *)*a2;
    v6 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) != a2 || *v6 != a2 )
      __fastfail(3u);
    *v6 = v5;
    v5[1] = (__int64)v6;
    *((_DWORD *)a2 + 14) &= ~1u;
    if ( a1 )
      --*a1;
  }
}
