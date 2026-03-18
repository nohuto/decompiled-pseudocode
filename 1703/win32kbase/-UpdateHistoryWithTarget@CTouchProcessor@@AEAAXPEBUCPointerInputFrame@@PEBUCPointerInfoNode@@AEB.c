/*
 * XREFs of ?UpdateHistoryWithTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHH@Z @ 0x1C0128A94
 * Callers:
 *     ?SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C012789C (-SetPointerInfoNodeTarget@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@KAEBVCInputDest@@HPEBUta.c)
 * Callees:
 *     ?SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUtagPOINT@@HHHH@Z @ 0x1C01279AC (-SetPointerInfoNodeTargetInt@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@AEBVCInputDest@@HPEBUta.c)
 */

void __fastcall CTouchProcessor::UpdateHistoryWithTarget(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2,
        const struct CPointerInfoNode *a3,
        const struct CInputDest *a4,
        int a5,
        const struct tagPOINT *a6,
        int a7,
        int a8,
        int a9)
{
  unsigned int v9; // ebp
  CTouchProcessor *v10; // rsi
  const struct CInputDest *v12; // r10
  unsigned int v13; // edx
  CTouchProcessor *v14; // rdi
  CTouchProcessor *v15; // rcx
  struct CPointerInfoNode *v16; // rbx

  v9 = *((_DWORD *)a3 + 79);
  v10 = (CTouchProcessor *)((char *)this + 256);
  v12 = a4;
  v13 = *((_DWORD *)a3 + 100);
  v14 = (CTouchProcessor *)*((_QWORD *)a2 + 1);
  if ( v14 != (CTouchProcessor *)((char *)this + 256) )
  {
    do
    {
      if ( v9 <= 1 )
        break;
      v15 = (CTouchProcessor *)((char *)v14 - 8);
      v14 = *(CTouchProcessor **)v14;
      if ( *((_QWORD *)v15 + 8) == *((_QWORD *)a2 + 8) )
      {
        v16 = (struct CPointerInfoNode *)(*((_QWORD *)v15 + 12) + 608LL * v13);
        CTouchProcessor::SetPointerInfoNodeTargetInt(v15, v16, v12, a5, a6, a7, 0, a8, a9);
        v13 = *((_DWORD *)v16 + 100);
        --v9;
        v12 = a4;
      }
    }
    while ( v14 != v10 );
  }
}
