/*
 * XREFs of RtlQueryImageFileExecutionOptions @ 0x14062F9A8
 * Callers:
 *     PsBootPhaseComplete @ 0x14062F6F0 (PsBootPhaseComplete.c)
 * Callees:
 *     RtlpOpenBaseImageFileOptionsKey @ 0x14056CF78 (RtlpOpenBaseImageFileOptionsKey.c)
 *     RtlQueryImageFileKeyOption @ 0x140574600 (RtlQueryImageFileKeyOption.c)
 */

NTSTATUS __fastcall RtlQueryImageFileExecutionOptions(void *a1, const WCHAR *a2, __int64 a3, ULONG *a4)
{
  NTSTATUS result; // eax
  HANDLE KeyHandle; // [rsp+40h] [rbp+8h] BYREF

  KeyHandle = a1;
  result = RtlpOpenBaseImageFileOptionsKey(&KeyHandle);
  if ( result >= 0 )
    return RtlQueryImageFileKeyOption(KeyHandle, a2, 4, a4, 4u, 0LL);
  return result;
}
