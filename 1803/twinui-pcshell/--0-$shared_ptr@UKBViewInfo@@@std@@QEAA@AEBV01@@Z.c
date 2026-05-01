/*
 * XREFs of ??0?$shared_ptr@UKBViewInfo@@@std@@QEAA@AEBV01@@Z @ 0x18023BA88
 * Callers:
 *     _lambda_c3020acaf10c7144233ee4f2e713fc58_::operator() @ 0x1800A1BF0 (_lambda_c3020acaf10c7144233ee4f2e713fc58_--operator().c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::shared_ptr<KBViewInfo>::shared_ptr<KBViewInfo>(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = a2[1];
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  *a1 = *a2;
  a1[1] = a2[1];
  return a1;
}
