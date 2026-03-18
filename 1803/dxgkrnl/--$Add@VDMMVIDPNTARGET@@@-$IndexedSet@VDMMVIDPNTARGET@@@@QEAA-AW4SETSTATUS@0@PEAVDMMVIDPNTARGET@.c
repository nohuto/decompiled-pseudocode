/*
 * XREFs of ??$Add@VDMMVIDPNTARGET@@@?$IndexedSet@VDMMVIDPNTARGET@@@@QEAA?AW4SETSTATUS@0@PEAVDMMVIDPNTARGET@@@Z @ 0x1C0003F9C
 * Callers:
 *     ?AddTarget@DMMVIDPNTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGET@@@@@Z @ 0x1C00BB41C (-AddTarget@DMMVIDPNTARGETSET@@QEAAJV-$auto_ptr@VDMMVIDPNTARGET@@@@@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0003F5C (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 */

__int64 __fastcall IndexedSet<DMMVIDPNTARGET>::Add<DMMVIDPNTARGET>(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  _QWORD *v4; // r11
  int v5; // r8d
  _QWORD *v6; // rcx
  _QWORD *v7; // r9
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // r11
  __int64 v15; // rax

  v3 = IndexedSet<DMMVIDPNTARGET>::FindById((__int64)a1, *(_DWORD *)(a2 + 24));
  v5 = 0;
  if ( v3 )
  {
    LOBYTE(v5) = v3 != (_QWORD)v4;
    return (unsigned int)(v5 + 1);
  }
  else
  {
    v6 = 0LL;
    v7 = (_QWORD *)a1[3];
    if ( v7 != a1 + 3 )
      v6 = v7 - 1;
    if ( !v6 )
      goto LABEL_10;
    do
    {
      if ( v6 == v4 )
        break;
      v8 = (_QWORD *)v6[1];
      v6 = v8 - 1;
      if ( v8 == a1 + 3 )
        v6 = 0LL;
    }
    while ( v6 );
    if ( v6 )
    {
      return 1LL;
    }
    else
    {
LABEL_10:
      v9 = a1 + 3;
      v10 = 0LL;
      if ( v7 != a1 + 3 )
        v10 = v7 - 1;
      while ( v10 && v10 != v4 )
      {
        v11 = (_QWORD *)v10[1];
        v10 = v11 - 1;
        if ( v11 == v9 )
          v10 = 0LL;
      }
      if ( v10 )
      {
        v15 = WdLogNewEntry5_WdAssertion(v10);
        *(_QWORD *)(v15 + 24) = 108LL;
        WdLogEvent5_WdAssertion(v15);
      }
      else
      {
        v12 = (_QWORD *)a1[4];
        v13 = v4 + 1;
        if ( (_QWORD *)*v12 != v9 )
          __fastfail(3u);
        *v13 = v9;
        v13[1] = v12;
        *v12 = v13;
        a1[4] = v13;
        ++a1[5];
      }
      return 3LL;
    }
  }
}
