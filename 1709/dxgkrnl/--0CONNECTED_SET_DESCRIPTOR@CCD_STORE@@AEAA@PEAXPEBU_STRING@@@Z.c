/*
 * XREFs of ??0CONNECTED_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C00D06A8
 * Callers:
 *     ??$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCONNECTED_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C00D03F8 (--$_ForSetSubkey@VCONNECTED_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVCO.c)
 * Callees:
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00DA7C8 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z @ 0x1C00DA9D8 (--0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00DAB54 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 */

CCD_STORE::CONNECTED_SET_DESCRIPTOR *__fastcall CCD_STORE::CONNECTED_SET_DESCRIPTOR::CONNECTED_SET_DESCRIPTOR(
        CCD_STORE::CONNECTED_SET_DESCRIPTOR *this,
        void *a2,
        const struct _STRING *a3)
{
  __int64 v6; // rbp
  __int64 v7; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rax
  _BYTE v11[64]; // [rsp+20h] [rbp-48h] BYREF

  *(_DWORD *)this = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_WORD *)this + 16) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = a2;
  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
  }
  if ( a3 )
  {
    CCD_SET_STRING_ID::CCD_SET_STRING_ID((CCD_SET_STRING_ID *)v11, a3);
    v6 = *(int *)CCD_SET_STRING_ID::operator=(this);
    CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v11);
    if ( (int)v6 < 0 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdAssertion(v7);
      v10[3] = v6;
      v10[4] = this;
      v10[5] = a2;
      v10[6] = a3;
      WdLogEvent5_WdAssertion(v10);
      CCD_SET_STRING_ID::_Cleanup(this);
    }
  }
  return this;
}
