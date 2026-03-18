/*
 * XREFs of DestroyWindowStation @ 0x1C0107840
 * Callers:
 *     <none>
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C008E6C4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 */

__int64 __fastcall DestroyWindowStation(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *v5; // rbx
  __int64 v6; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(a1 + 20) == 1 )
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v7);
    v5 = (_QWORD *)grpWinStaList;
    v6 = grpWinStaList;
    if ( grpWinStaList )
    {
      do
      {
        if ( v1 == v6 )
          break;
        v5 = (_QWORD *)(v6 + 8);
        v6 = *(_QWORD *)(v6 + 8);
      }
      while ( v6 );
      if ( *v5 )
      {
        UnlockObjectAssignment(v5);
        *v5 = *(_QWORD *)(v1 + 8);
        *(_QWORD *)(v1 + 8) = 0LL;
      }
    }
    *(_DWORD *)(v1 + 32) |= 0x100u;
    if ( !v7 )
      UserSessionSwitchLeaveCrit(v4, v3);
  }
  return 0LL;
}
