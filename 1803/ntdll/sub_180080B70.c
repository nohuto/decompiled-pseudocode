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
  if ( !*((_QWORD *)&xmmword_18015CFD0 + 1) )
  {
LABEL_11:
    LdrAddDllDirectory(v6, v8);
    return 0LL;
  }
  v3 = v1 + xmmword_18015CFD0 + 2;
  v5.m128i_i64[1] = RtlAllocateHeap(
                      (__int64)NtCurrentPeb()->ProcessHeap,
                      0,
                      v1 + (unsigned int)(unsigned __int16)xmmword_18015CFD0 + 2LL);
  if ( v5.m128i_i64[1] )
  {
    v5.m128i_i16[0] = 0;
    v5.m128i_i16[1] = v3;
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v5, (__int16 *)&xmmword_18015CFD0);
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v5, v6);
    RtlAppendUnicodeToString((unsigned __int16 *)&v5, ";");
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *((unsigned __int64 *)&xmmword_18015CFD0 + 1));
    xmmword_18015CFD0 = (__int128)v5;
    *((_QWORD *)&xmmword_18015CFC0 + 1) = _mm_srli_si128(v5, 8).m128i_u64[0];
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
