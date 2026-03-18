/*
 * XREFs of AlpcpQueryHeadLargeQueue @ 0x1404CB280
 * Callers:
 *     AlpcpReceiveMessagePort @ 0x1404CAA80 (AlpcpReceiveMessagePort.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall AlpcpQueryHeadLargeQueue(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  v1 = (_QWORD *)(a1 + 160);
  result = (_QWORD *)*v1;
  if ( (_QWORD *)*v1 == v1 || !result )
    return 0LL;
  return result;
}
