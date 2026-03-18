/*
 * XREFs of ?SetVprRange@VIDMM_SEGMENT@@QEAAJ_K0II0@Z @ 0x1C00A3868
 * Callers:
 *     ?InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEA_K@Z @ 0x1C0047064 (-InitSegments@VIDMM_GLOBAL@@QEAAJIPEAUVIDMM_PHYSICAL_ADAPTER@@PEAUDXGK_SEGMENTDESCRIPTOR_INTERNA.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_SEGMENT::SetVprRange(
        VIDMM_SEGMENT *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  v6 = a2;
  if ( !a4 || ((a4 - 1) & a4) != 0 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v8 + 24) = 5155LL;
    goto LABEL_21;
  }
  v7 = *((_QWORD *)this + 8);
  if ( a2 >= v7 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v8 + 24) = 5160LL;
LABEL_21:
    WdLogEvent5_WdAssertion(v8);
    return 3221225485LL;
  }
  if ( a3 > v7 || (a2 += a3, a2 > v7) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v8 + 24) = 5165LL;
    goto LABEL_21;
  }
  v9 = a4 - 1LL;
  if ( (v9 & a3) != 0 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v8 + 24) = 5171LL;
    goto LABEL_21;
  }
  if ( (v9 & v6) != 0 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v8 + 24) = 5176LL;
    goto LABEL_21;
  }
  if ( a5 > 1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v8 + 24) = 5185LL;
    goto LABEL_21;
  }
  if ( a6 && a5 != 1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v8 + 24) = 5195LL;
    goto LABEL_21;
  }
  *((_DWORD *)this + 108) = a4;
  *((_QWORD *)this + 51) = v6;
  *((_QWORD *)this + 52) = a3;
  *((_DWORD *)this + 109) = a5;
  *((_QWORD *)this + 53) = v9;
  *((_QWORD *)this + 61) = a6;
  if ( a5 == 1 )
  {
    *((_QWORD *)this + 57) = 0LL;
    *((_QWORD *)this + 55) = a2;
    *((_QWORD *)this + 56) = a2;
  }
  return 0LL;
}
