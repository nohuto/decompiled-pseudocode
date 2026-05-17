/*
 * XREFs of RtlpInvalidatePathCache @ 0x180088670
 * Callers:
 *     LdrSetDllDirectory @ 0x180001F70 (LdrSetDllDirectory.c)
 *     RtlSetSearchPathMode @ 0x1800885D0 (RtlSetSearchPathMode.c)
 *     LdrRemoveDllDirectory @ 0x18008A4F0 (LdrRemoveDllDirectory.c)
 *     LdrAddDllDirectory @ 0x18008C4E0 (LdrAddDllDirectory.c)
 *     RtlpSignalSystemDirsModification @ 0x1800DE8E4 (RtlpSignalSystemDirsModification.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpInvalidatePathCache(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  *a1 = 0LL;
  if ( v1 )
  {
    if ( (*(_QWORD *)(v1 + 80))-- == 1LL )
      return v1;
  }
  return result;
}
