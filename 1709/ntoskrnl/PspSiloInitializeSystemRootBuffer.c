/*
 * XREFs of PspSiloInitializeSystemRootBuffer @ 0x14071594C
 * Callers:
 *     PspSiloInitializeUserSharedData @ 0x140715AD4 (PspSiloInitializeUserSharedData.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x140085200 (RtlCopyUnicodeString.c)
 *     PsDereferenceSiloContext @ 0x1401262F0 (PsDereferenceSiloContext.c)
 *     PsRemoveSiloContext @ 0x140714840 (PsRemoveSiloContext.c)
 */

__int64 __fastcall PspSiloInitializeSystemRootBuffer(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  PCUNICODE_STRING SourceString; // [rsp+38h] [rbp+10h] BYREF

  result = PsRemoveSiloContext(a1, (unsigned int)PsSystemRootSiloContextSlot, (__int64)&SourceString);
  if ( (int)result >= 0 )
  {
    v3 = *(_QWORD *)(a1 + 1256);
    v4 = *(_QWORD *)(v3 + 1104);
    *(_DWORD *)(v3 + 1048) = 34078720;
    *(_QWORD *)(v3 + 1056) = v4 + 30;
    RtlCopyUnicodeString((PUNICODE_STRING)(v3 + 1048), SourceString);
    PsDereferenceSiloContext((void *)SourceString);
    return 0LL;
  }
  return result;
}
