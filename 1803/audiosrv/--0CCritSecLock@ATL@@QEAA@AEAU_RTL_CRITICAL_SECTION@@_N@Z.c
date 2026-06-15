/*
 * XREFs of ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18002FE0C
 * Callers:
 *     _lambda_041b38cc9b1c9530af273109c15771c6_::operator() @ 0x1800635C8 (_lambda_041b38cc9b1c9530af273109c15771c6_--operator().c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002FE30 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

ATL::CCritSecLock *__fastcall ATL::CCritSecLock::CCritSecLock(
        ATL::CCritSecLock *this,
        struct _RTL_CRITICAL_SECTION *a2)
{
  *(_QWORD *)this = a2;
  *((_BYTE *)this + 8) = 0;
  ATL::CCritSecLock::Lock(this);
  return this;
}
