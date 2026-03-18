/*
 * XREFs of ?AddTarget@DMMVIDPNTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGET@@@@@Z @ 0x1C016D240
 * Callers:
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00DEC70 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0001F94 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?Add@?$Set@VDMMVIDPNTARGET@@@@QEAAEQEAVDMMVIDPNTARGET@@@Z @ 0x1C0021364 (-Add@-$Set@VDMMVIDPNTARGET@@@@QEAAEQEAVDMMVIDPNTARGET@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C00213E0 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 */

__int64 __fastcall DMMVIDPNTARGETSET::AddTarget(
        __int64 a1,
        __int64 (__fastcall ****a2)(_QWORD, __int64),
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // r11
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rax

  v4 = 0;
  if ( !*a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = IndexedSet<DMMVIDPNTARGET>::FindById(a1, *((_DWORD *)*a2 + 6));
  if ( v8 )
    LODWORD(v11) = v8 != (_QWORD)v10;
  else
    LODWORD(v11) = Set<DMMVIDPNTARGET>::Add(a1, v10) != 0 ? 2 : 0;
  v11 = (unsigned int)v11;
  if ( (_DWORD)v11 )
  {
    v12 = (unsigned int)(v11 - 1);
    if ( (_DWORD)v12 )
    {
      if ( (_DWORD)v12 == 1 )
      {
        *a2 = 0LL;
      }
      else
      {
        v13 = WdLogNewEntry5_WdError(v12, v9);
        WdLogEvent5_WdError(v13);
        v4 = -1073741823;
      }
    }
    else
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v12, v9);
      v14[3] = *((unsigned int *)*a2 + 6);
      v14[4] = *a2;
      v14[5] = a1;
      WdLogEvent5_WdError(v14);
      v4 = -1071774926;
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v11, v9);
    *(_QWORD *)(v15 + 24) = *a2;
    *(_QWORD *)(v15 + 32) = a1;
    WdLogEvent5_WdError(v15);
    v4 = -1071774952;
  }
  auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(a2);
  return v4;
}
