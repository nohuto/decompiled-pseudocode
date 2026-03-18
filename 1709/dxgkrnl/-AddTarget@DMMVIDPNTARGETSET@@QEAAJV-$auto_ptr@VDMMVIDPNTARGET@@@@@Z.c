/*
 * XREFs of ?AddTarget@DMMVIDPNTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGET@@@@@Z @ 0x1C01709C8
 * Callers:
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00A50B0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C000A3B4 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?Add@?$Set@VDMMVIDPNTARGET@@@@QEAAEQEAVDMMVIDPNTARGET@@@Z @ 0x1C001E0F4 (-Add@-$Set@VDMMVIDPNTARGET@@@@QEAAEQEAVDMMVIDPNTARGET@@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C001E180 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 */

__int64 __fastcall DMMVIDPNTARGETSET::AddTarget(__int64 a1, __int64 (__fastcall ****a2)(_QWORD, __int64))
{
  unsigned int v2; // ebx
  __int64 v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // r11
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rax

  v2 = 0;
  if ( !*a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v5);
  }
  v6 = IndexedSet<DMMVIDPNTARGET>::FindById(a1, *((_DWORD *)*a2 + 6));
  if ( v6 )
    LODWORD(v8) = v6 != (_QWORD)v7;
  else
    LODWORD(v8) = Set<DMMVIDPNTARGET>::Add(a1, v7) != 0 ? 2 : 0;
  v8 = (unsigned int)v8;
  if ( (_DWORD)v8 )
  {
    v9 = (unsigned int)(v8 - 1);
    if ( (_DWORD)v9 )
    {
      if ( (_DWORD)v9 == 1 )
      {
        *a2 = 0LL;
      }
      else
      {
        v10 = WdLogNewEntry5_WdError(v9);
        WdLogEvent5_WdError(v10);
        v2 = -1073741823;
      }
    }
    else
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdError(v9);
      v11[3] = *((unsigned int *)*a2 + 6);
      v11[4] = *a2;
      v11[5] = a1;
      WdLogEvent5_WdError(v11);
      v2 = -1071774926;
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v12 + 24) = *a2;
    *(_QWORD *)(v12 + 32) = a1;
    WdLogEvent5_WdError(v12);
    v2 = -1071774952;
  }
  auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>(a2);
  return v2;
}
