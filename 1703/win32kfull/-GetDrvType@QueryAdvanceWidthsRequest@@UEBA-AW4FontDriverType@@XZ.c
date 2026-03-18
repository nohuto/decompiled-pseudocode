/*
 * XREFs of ?GetDrvType@QueryAdvanceWidthsRequest@@UEBA?AW4FontDriverType@@XZ @ 0x1C011D680
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall QueryAdvanceWidthsRequest::GetDrvType(__int64 a1)
{
  return *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL) + 8LL);
}
