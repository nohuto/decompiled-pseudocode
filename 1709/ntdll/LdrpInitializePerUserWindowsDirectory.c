/*
 * XREFs of LdrpInitializePerUserWindowsDirectory @ 0x180085378
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x18002C120 (RtlAppendUnicodeToString.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlAppendUnicodeStringToString @ 0x18004D9D0 (RtlAppendUnicodeStringToString.c)
 *     LdrAddDllDirectory @ 0x18008C4E0 (LdrAddDllDirectory.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3A60 (_guard_dispatch_icall_nop.c)
 *     LdrpLogDbgPrint @ 0x1800D0E14 (LdrpLogDbgPrint.c)
 *     RtlpSignalSystemDirsModification @ 0x1800DE8E4 (RtlpSignalSystemDirsModification.c)
 */

__int64 __fastcall LdrpInitializePerUserWindowsDirectory(__int64 (__fastcall *a1)(_BYTE *, __int64))
{
  int v1; // eax
  unsigned __int16 v3; // bx
  char v4; // al
  _UNICODE_STRING Destination; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING Source; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Cookie; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v8[528]; // [rsp+60h] [rbp-A0h] BYREF

  v1 = 2 * a1(v8, 260LL);
  if ( !v1 )
    return 0LL;
  Source.Length = v1;
  Source.Buffer = (wchar_t *)v8;
  Source.MaximumLength = 520;
  if ( !RtlpSystemDirs.Buffer )
  {
LABEL_11:
    LdrAddDllDirectory(&Source, &Cookie);
    return 0LL;
  }
  v3 = v1 + RtlpSystemDirs.Length + 2;
  Destination.Buffer = (wchar_t *)RtlAllocateHeap(
                                    NtCurrentPeb()->ProcessHeap,
                                    0,
                                    v1 + (unsigned int)RtlpSystemDirs.Length + 2LL);
  if ( Destination.Buffer )
  {
    Destination.Length = 0;
    Destination.MaximumLength = v3;
    RtlAppendUnicodeStringToString(&Destination, &RtlpSystemDirs);
    RtlAppendUnicodeStringToString(&Destination, &Source);
    RtlAppendUnicodeToString(&Destination, L";");
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, RtlpSystemDirs.Buffer);
    RtlpSystemDirs = Destination;
    *((_QWORD *)&RtlpSystem32Dirs + 1) = _mm_srli_si128((__m128i)Destination, 8).m128i_u64[0];
    RtlpSignalSystemDirsModification();
    goto LABEL_11;
  }
  v4 = LdrpDebugFlags;
  if ( (LdrpDebugFlags & 3) != 0 )
  {
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3200,
      (unsigned int)"LdrpInitializePerUserWindowsDirectory",
      0,
      "Failed to reallocate the system dirs string !\n");
    v4 = LdrpDebugFlags;
  }
  if ( (v4 & 0x10) != 0 )
    __debugbreak();
  return 3221225495LL;
}
