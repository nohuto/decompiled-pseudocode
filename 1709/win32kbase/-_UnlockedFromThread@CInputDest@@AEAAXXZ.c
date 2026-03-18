/*
 * XREFs of ?_UnlockedFromThread@CInputDest@@AEAAXXZ @ 0x1C00171CC
 * Callers:
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C001831C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     _lambda_e8a35662c22ddf2d2aefcf30b0620e03_::_lambda_invoker_cdecl_ @ 0x1C0116FE0 (_lambda_e8a35662c22ddf2d2aefcf30b0620e03_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?TestWindowFlag@CInputDest@@QEBA_NK@Z @ 0x1C0017280 (-TestWindowFlag@CInputDest@@QEBA_NK@Z.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 */

void __fastcall CInputDest::_UnlockedFromThread(CInputDest *this)
{
  bool v1; // zf
  CInputDest *v2; // r10

  v1 = (*((_BYTE *)this + 192))-- == 1;
  v2 = this;
  if ( v1
    && ((*((_BYTE *)qword_1C018E9B8 + dword_1C018E9C0 * (unsigned int)(unsigned __int16)**((_DWORD **)this + 10) + 25) & 1) != 0
     || CInputDest::TestWindowFlag(this, 0x480u)
     || CInputDest::TestWindowFlag(v2, 0x380u)) )
  {
    CInputDest::SetEmpty(v2);
  }
}
