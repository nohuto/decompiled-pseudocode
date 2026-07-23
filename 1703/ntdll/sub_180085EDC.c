/*
 * XREFs of sub_180085EDC @ 0x180085EDC
 * Callers:
 *     sub_180091AB4 @ 0x180091AB4 (sub_180091AB4.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlAppendUnicodeStringToString @ 0x18003C260 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x180044AB0 (RtlAppendUnicodeToString.c)
 *     LdrAddDllDirectory @ 0x18008F390 (LdrAddDllDirectory.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_1800D5274 @ 0x1800D5274 (sub_1800D5274.c)
 *     sub_1800DFF68 @ 0x1800DFF68 (sub_1800DFF68.c)
 */

__int64 __fastcall sub_180085EDC(__int64 (__fastcall *a1)(_BYTE *, __int64))
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
  if ( !stru_18015C030.Buffer )
  {
LABEL_11:
    LdrAddDllDirectory(&Source, &Cookie);
    return 0LL;
  }
  v3 = v1 + stru_18015C030.Length + 2;
  Destination.Buffer = (PWCH)RtlAllocateHeap(
                               NtCurrentPeb()->ProcessHeap,
                               0,
                               v1 + (unsigned int)stru_18015C030.Length + 2LL);
  if ( Destination.Buffer )
  {
    Destination.Length = 0;
    Destination.MaximumLength = v3;
    RtlAppendUnicodeStringToString(&Destination, &stru_18015C030);
    RtlAppendUnicodeStringToString(&Destination, &Source);
    RtlAppendUnicodeToString(&Destination, ";");
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, stru_18015C030.Buffer);
    stru_18015C030 = Destination;
    *((_QWORD *)&xmmword_18015C020 + 1) = _mm_srli_si128((__m128i)Destination, 8).m128i_u64[0];
    sub_1800DFF68();
    goto LABEL_11;
  }
  v4 = dword_180155A10;
  if ( (dword_180155A10 & 3) != 0 )
  {
    sub_1800D5274(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      3223,
      (unsigned int)"LdrpInitializePerUserWindowsDirectory",
      0,
      "Failed to reallocate the system dirs string !\n");
    v4 = dword_180155A10;
  }
  if ( (v4 & 0x10) != 0 )
    __debugbreak();
  return 3221225495LL;
}
