/*
 * XREFs of ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C0047E18
 * Callers:
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C0083A88 (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     _lambda_e8a35662c22ddf2d2aefcf30b0620e03_::_lambda_invoker_cdecl_ @ 0x1C0118160 (_lambda_e8a35662c22ddf2d2aefcf30b0620e03_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C0047F04 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 */

void __fastcall CInputDest::_UnlockedFromThread(CInputDest *this)
{
  bool v1; // zf
  CInputDest *v2; // r10

  v1 = (*((_BYTE *)this + 192))-- == 1;
  v2 = this;
  if ( v1
    && ((*((_BYTE *)qword_1C0189E38 + dword_1C0189E40 * (unsigned int)(unsigned __int16)**((_DWORD **)this + 10) + 25) & 1) != 0
     || CInputDest::TestWindowFlag(this, 0x480u)
     || CInputDest::TestWindowFlag(v2, 0x380u)) )
  {
    CInputDest::SetEmpty(v2);
  }
}
