/*
 * XREFs of FsRtlCheckNotifyForDeleteLite @ 0x1406B21A0
 * Callers:
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x140567860 (FsRtlNotifyFilterChangeDirectoryLite.c)
 * Callees:
 *     FsRtlNotifyCompleteIrpList @ 0x1405675BC (FsRtlNotifyCompleteIrpList.c)
 */

_QWORD *__fastcall FsRtlCheckNotifyForDeleteLite(_QWORD **a1)
{
  _QWORD *i; // rbx
  _QWORD *result; // rax

  for ( i = *a1; i != a1; i = (_QWORD *)*i )
  {
    *((_WORD *)i + 20) |= 0x20u;
    result = i + 2;
    if ( (_QWORD *)*result != result )
      result = (_QWORD *)FsRtlNotifyCompleteIrpList((__int64)(i - 4), -1073741738);
  }
  return result;
}
