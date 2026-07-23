/*
 * XREFs of sub_180080B70 @ 0x180080B70
 * Callers:
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlAppendUnicodeToString @ 0x180034F00 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x180040250 (RtlAppendUnicodeStringToString.c)
 *     LdrAddDllDirectory @ 0x180089810 (LdrAddDllDirectory.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_1800CA554 @ 0x1800CA554 (sub_1800CA554.c)
 *     sub_1800D97E4 @ 0x1800D97E4 (sub_1800D97E4.c)
 */

__int64 __fastcall sub_180080B70(__int64 (__fastcall *a1)(_BYTE *, __int64))
{
  int v1; // eax
  USHORT v3; // bx
  char v4; // al
  _UNICODE_STRING Destination; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING Source; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Cookie; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v8[528]; // [rsp+60h] [rbp-A0h] BYREF

  v1 = 2 * a1(v8, 260LL);
  if ( !v1 )
    return 0LL;
  Source.Length = v1;
  Source.Buffer = (PWCH)v8;
  Source.MaximumLength = 520;
  if ( !stru_18015CFD0.Buffer )
  {
LABEL_11:
    LdrAddDllDirectory(&Source, &Cookie);
    return 0LL;
  }
  v3 = v1 + stru_18015CFD0.Length + 2;
  Destination.Buffer = (PWCH)RtlAllocateHeap(
                               NtCurrentPeb()->ProcessHeap,
                               0,
                               v1 + (unsigned int)stru_18015CFD0.Length + 2LL);
  if ( Destination.Buffer )
  {
    Destination.Length = 0;
    Destination.MaximumLength = v3;
    RtlAppendUnicodeStringToString(&Destination, &stru_18015CFD0);
    RtlAppendUnicodeStringToString(&Destination, &Source);
    RtlAppendUnicodeToString(&Destination, ";");
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, stru_18015CFD0.Buffer);
    stru_18015CFD0 = Destination;
    *((_QWORD *)&xmmword_18015CFC0 + 1) = _mm_srli_si128((__m128i)Destination, 8).m128i_u64[0];
    sub_1800D97E4();
    goto LABEL_11;
  }
  v4 = dword_180156A70;
  if ( (dword_180156A70 & 3) != 0 )
  {
    sub_1800CA554(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3201,
      (unsigned int)"LdrpInitializePerUserWindowsDirectory",
      0,
      "Failed to reallocate the system dirs string !\n");
    v4 = dword_180156A70;
  }
  if ( (v4 & 0x10) != 0 )
    __debugbreak();
  return 3221225495LL;
}
