/*
 * XREFs of IopLiveDumpGetNtMergePages @ 0x14068F324
 * Callers:
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x14068F920 (IopLiveDumpWriteDumpFileWithHvPages.c)
 * Callees:
 *     IopLiveDumpGetCapturePagesNoLock @ 0x140416788 (IopLiveDumpGetCapturePagesNoLock.c)
 */

_UNKNOWN **__fastcall IopLiveDumpGetNtMergePages(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4, _QWORD *a5)
{
  _UNKNOWN **result; // rax

  result = IopLiveDumpGetCapturePagesNoLock((unsigned __int64 *)(a1 + 368), a1 + 488, a2, (__int64)a4, a4, a5);
  if ( *a4 )
  {
    result = *(_UNKNOWN ***)(a1 + 552);
    *a3 = result[*a5];
  }
  return result;
}
