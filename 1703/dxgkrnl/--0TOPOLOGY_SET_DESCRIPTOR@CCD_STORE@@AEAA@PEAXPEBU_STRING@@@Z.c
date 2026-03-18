/*
 * XREFs of ??0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C00B07D8
 * Callers:
 *     ??$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z3_N@Z @ 0x1C00AF934 (--$_ForSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGAEBU_STRING@@P6AJPEAVTOP.c)
 *     ??$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z2@Z @ 0x1C00B00D8 (--$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET.c)
 * Callees:
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00B1150 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00B1474 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z @ 0x1C00B1584 (--0CCD_SET_STRING_ID@@QEAA@AEBU_STRING@@@Z.c)
 */

CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *__fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TOPOLOGY_SET_DESCRIPTOR(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        void *a2,
        const struct _STRING *a3,
        __int64 a4)
{
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  _QWORD *v14; // rax
  _BYTE v15[64]; // [rsp+20h] [rbp-48h] BYREF

  *(_DWORD *)this = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_WORD *)this + 16) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = a2;
  if ( !a2 )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v13);
  }
  if ( a3 )
  {
    CCD_SET_STRING_ID::CCD_SET_STRING_ID((CCD_SET_STRING_ID *)v15, a3);
    v8 = *(int *)CCD_SET_STRING_ID::operator=(this);
    CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v15);
    if ( (int)v8 < 0 )
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
      v14[3] = v8;
      v14[4] = this;
      v14[5] = a2;
      v14[6] = a3;
      WdLogEvent5_WdAssertion(v14);
      CCD_SET_STRING_ID::_Cleanup(this);
    }
  }
  return this;
}
