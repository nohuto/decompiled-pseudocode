/*
 * XREFs of ??1?$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ @ 0x1C01A0DA8
 * Callers:
 *     _lambda_fe455f6b6173b0bb193a7b901cfd063e_::operator() @ 0x1C0036BCC (_lambda_fe455f6b6173b0bb193a7b901cfd063e_--operator().c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C00381D8 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 * Callees:
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C0120038 (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 */

void __fastcall CAutoDestroy<CEventPool::CEventPoolEntry>::~CAutoDestroy<CEventPool::CEventPoolEntry>(_QWORD **a1)
{
  _QWORD *v1; // rcx

  v1 = *a1;
  if ( v1 )
    CEventPool::CEventPoolEntry::Destroy(v1);
}
