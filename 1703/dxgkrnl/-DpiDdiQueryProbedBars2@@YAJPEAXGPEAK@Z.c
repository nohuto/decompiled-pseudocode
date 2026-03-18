/*
 * XREFs of ?DpiDdiQueryProbedBars2@@YAJPEAXGPEAK@Z @ 0x1C0041A40
 * Callers:
 *     <none>
 * Callees:
 *     DxgkDdiQueryProbedBars @ 0x1C0033D54 (DxgkDdiQueryProbedBars.c)
 *     ??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z @ 0x1C003D5CC (--0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C003D6B8 (--1CInterfaceCallContext@@QEAA@XZ.c)
 */

__int64 __fastcall DpiDdiQueryProbedBars2(_QWORD *a1, unsigned __int16 a2, unsigned int *a3)
{
  unsigned int ProbedBars; // ebx
  _BYTE v7[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]

  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v7, a1, 0LL);
  ProbedBars = v9;
  if ( v9 >= 0 )
  {
    ProbedBars = DxgkDdiQueryProbedBars(*(_QWORD *)(v8 + 3704), a2, (__int64)a3);
    v9 = ProbedBars;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v7);
  return ProbedBars;
}
