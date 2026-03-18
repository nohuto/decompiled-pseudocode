/*
 * XREFs of ?AddTarget@DMMVIDPNTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGET@@@@@Z @ 0x1C00BB41C
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00BC600 (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00BC9A0 (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ??$Add@VDMMVIDPNTARGET@@@?$IndexedSet@VDMMVIDPNTARGET@@@@QEAA?AW4SETSTATUS@0@PEAVDMMVIDPNTARGET@@@Z @ 0x1C0003F9C (--$Add@VDMMVIDPNTARGET@@@-$IndexedSet@VDMMVIDPNTARGET@@@@QEAA-AW4SETSTATUS@0@PEAVDMMVIDPNTARGET@.c)
 *     ??1?$auto_ptr@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C0024EF0 (--1-$auto_ptr@VVIDPN_MGR@@@@QEAA@XZ.c)
 */

__int64 __fastcall DMMVIDPNTARGETSET::AddTarget(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int v11; // edi
  _QWORD *v12; // rax
  __int64 v13; // rax

  v4 = *a2;
  if ( !v4 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v9);
    v4 = *a2;
  }
  v5 = IndexedSet<DMMVIDPNTARGET>::Add<DMMVIDPNTARGET>(a1, v4) - 1;
  if ( v5 )
  {
    v7 = v5 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
      {
        *a2 = 0LL;
        return 0LL;
      }
      v10 = WdLogNewEntry5_WdError(v6);
      WdLogEvent5_WdError(v10);
      v11 = -1073741823;
    }
    else
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdError(v6);
      v12[3] = *(unsigned int *)(*a2 + 24);
      v12[4] = *a2;
      v12[5] = a1;
      WdLogEvent5_WdError(v12);
      v11 = -1071774926;
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v13 + 24) = *a2;
    *(_QWORD *)(v13 + 32) = a1;
    WdLogEvent5_WdError(v13);
    v11 = -1071774952;
  }
  auto_ptr<VIDPN_MGR>::~auto_ptr<VIDPN_MGR>((__int64 (__fastcall ****)(_QWORD, __int64))a2);
  return v11;
}
