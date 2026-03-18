/*
 * XREFs of PspSiloInitializeSystemRootBuffer @ 0x1406DF4CC
 * Callers:
 *     PspSiloInitializeUserSharedData @ 0x1406DF654 (PspSiloInitializeUserSharedData.c)
 * Callees:
 *     PsDereferenceSiloContext @ 0x14003ABD0 (PsDereferenceSiloContext.c)
 *     RtlCopyUnicodeString @ 0x1400F1110 (RtlCopyUnicodeString.c)
 *     PsRemoveSiloContext @ 0x1406DE390 (PsRemoveSiloContext.c)
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
    v4 = *(_QWORD *)(v3 + 1072);
    *(_DWORD *)(v3 + 1016) = 34078720;
    *(_QWORD *)(v3 + 1024) = v4 + 30;
    RtlCopyUnicodeString((PUNICODE_STRING)(v3 + 1016), SourceString);
    PsDereferenceSiloContext((void *)SourceString);
    return 0LL;
  }
  return result;
}
