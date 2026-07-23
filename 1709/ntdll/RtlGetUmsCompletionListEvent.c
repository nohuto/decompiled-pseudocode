/*
 * XREFs of RtlGetUmsCompletionListEvent @ 0x1800F36E0
 * Callers:
 *     <none>
 * Callees:
 *     ZwDuplicateObject @ 0x1800A0840 (ZwDuplicateObject.c)
 */

NTSTATUS __fastcall RtlGetUmsCompletionListEvent(__int64 a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  HANDLE v4; // [rsp+50h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return -1073741811;
  result = ZwDuplicateObject(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             *(HANDLE *)(a1 + 8),
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &v4,
             0,
             0,
             2u);
  if ( result >= 0 )
  {
    *a2 = v4;
    return 0;
  }
  return result;
}
