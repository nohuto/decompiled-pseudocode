/*
 * XREFs of ??1?$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ @ 0x1C0195C38
 * Callers:
 *     _lambda_fe455f6b6173b0bb193a7b901cfd063e_::operator() @ 0x1C0090A98 (_lambda_fe455f6b6173b0bb193a7b901cfd063e_--operator().c)
 * Callees:
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C0116348 (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 */

void __fastcall CAutoDestroy<CEventPool::CEventPoolEntry>::~CAutoDestroy<CEventPool::CEventPoolEntry>(
        struct CEventPool::CEventPoolEntry **a1)
{
  struct CEventPool::CEventPoolEntry *v1; // rcx

  v1 = *a1;
  if ( v1 )
    CEventPool::CEventPoolEntry::Destroy(v1);
}
