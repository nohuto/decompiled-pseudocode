/*
 * XREFs of LdrpCorValidateImage @ 0x18008772C
 * Callers:
 *     LdrpCompleteMapModule @ 0x180021F28 (LdrpCompleteMapModule.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180026720 (RtlpImageDirectoryEntryToDataEx.c)
 */

__int64 __fastcall LdrpCorValidateImage(unsigned __int64 a1)
{
  NTSTATUS v1; // eax
  __int64 v2; // rcx
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF
  __int64 v5; // [rsp+50h] [rbp+18h] BYREF

  v1 = RtlpImageDirectoryEntryToDataEx(a1, 1, 9u, &v4, &v5);
  v2 = v5;
  if ( v1 < 0 )
    v2 = 0LL;
  return v2 != 0 ? 0xC000007B : 0;
}
