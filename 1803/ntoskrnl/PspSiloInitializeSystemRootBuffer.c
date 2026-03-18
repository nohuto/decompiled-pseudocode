/*
 * XREFs of PspSiloInitializeSystemRootBuffer @ 0x140779ADC
 * Callers:
 *     PspSiloInitializeUserSharedData @ 0x140779C68 (PspSiloInitializeUserSharedData.c)
 * Callees:
 *     PsDereferenceSiloContext @ 0x1400C5610 (PsDereferenceSiloContext.c)
 *     RtlCopyUnicodeString @ 0x140106C50 (RtlCopyUnicodeString.c)
 *     PsRemoveSiloContext @ 0x140778A40 (PsRemoveSiloContext.c)
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
