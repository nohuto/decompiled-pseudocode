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
  __int16 v3; // bx
  char v4; // al
  __m128i v5; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v6[4]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE *v7; // [rsp+48h] [rbp-B8h]
  _BYTE v8[16]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v9[528]; // [rsp+60h] [rbp-A0h] BYREF

  v1 = 2 * a1(v9, 260LL);
  if ( !v1 )
    return 0LL;
  v6[0] = v1;
  v7 = v9;
  v6[1] = 520;
  if ( !*((_QWORD *)&RtlpSystemDirs + 1) )
  {
LABEL_11:
    LdrAddDllDirectory(v6, v8);
    return 0LL;
  }
  v3 = v1 + RtlpSystemDirs + 2;
  v5.m128i_i64[1] = RtlAllocateHeap(
                      (__int64)NtCurrentPeb()->ProcessHeap,
                      0,
                      v1 + (unsigned int)(unsigned __int16)RtlpSystemDirs + 2LL);
  if ( v5.m128i_i64[1] )
  {
    v5.m128i_i16[0] = 0;
    v5.m128i_i16[1] = v3;
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v5, (__int16 *)&RtlpSystemDirs);
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v5, v6);
    RtlAppendUnicodeToString((unsigned __int16 *)&v5, L";");
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *((unsigned __int64 *)&RtlpSystemDirs + 1));
    RtlpSystemDirs = (__int128)v5;
    *((_QWORD *)&RtlpSystem32Dirs + 1) = _mm_srli_si128(v5, 8).m128i_u64[0];
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
