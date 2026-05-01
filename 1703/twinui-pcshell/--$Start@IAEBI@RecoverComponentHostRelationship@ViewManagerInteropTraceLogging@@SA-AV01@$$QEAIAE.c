/*
 * XREFs of ??$Start@IAEBI@RecoverComponentHostRelationship@ViewManagerInteropTraceLogging@@SA?AV01@$$QEAIAEBI@Z @ 0x1800FECCC
 * Callers:
 *     _lambda_166d3a698f4a828bb68fc489a415f587_::operator() @ 0x1800F4780 (_lambda_166d3a698f4a828bb68fc489a415f587_--operator().c)
 * Callees:
 *     ?StartActivity@RecoverComponentHostRelationship@ViewManagerInteropTraceLogging@@QEAAXKK@Z @ 0x1800F034C (-StartActivity@RecoverComponentHostRelationship@ViewManagerInteropTraceLogging@@QEAAXKK@Z.c)
 *     memset @ 0x180194E50 (memset.c)
 */

ViewManagerInteropTraceLogging::RecoverComponentHostRelationship *__fastcall ViewManagerInteropTraceLogging::RecoverComponentHostRelationship::Start<unsigned int,unsigned int const &>(
        ViewManagerInteropTraceLogging::RecoverComponentHostRelationship *this,
        int *a2,
        int *a3)
{
  char *v3; // rbx
  _QWORD *v7; // rcx

  *((_QWORD *)this + 2) = this;
  v3 = (char *)this + 56;
  *((_QWORD *)this + 5) = (char *)this + 96;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 6) = (char *)this + 56;
  *((_DWORD *)this + 14) = 0;
  v7 = (_QWORD *)((char *)this + 136);
  v3[4] = 0;
  v3[64] = 0;
  *((_DWORD *)v3 + 10) = 0;
  *((_QWORD *)v3 + 6) = "RecoverComponentHostRelationship";
  *((_QWORD *)v3 + 7) = 0LL;
  *((_QWORD *)v3 + 9) = 1LL;
  v7[18] = 0LL;
  v7[19] = 0LL;
  memset(v7, 0, 0x90uLL);
  *((_QWORD *)v3 + 30) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &ViewManagerInteropTraceLogging::RecoverComponentHostRelationship::`vftable';
  ViewManagerInteropTraceLogging::RecoverComponentHostRelationship::StartActivity(this, *a2, *a3);
  return this;
}
