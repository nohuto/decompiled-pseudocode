/*
 * XREFs of PfpRpLogDeprioEvent @ 0x140001FA0
 * Callers:
 *     PfCheckDeprioritizeFile @ 0x14043EBAC (PfCheckDeprioritizeFile.c)
 * Callees:
 *     PfLogEvent @ 0x1400B9904 (PfLogEvent.c)
 */

__int64 __fastcall PfpRpLogDeprioEvent(__int64 a1, int a2, int a3)
{
  __int64 v4; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+2Ch] [rbp-1Ch]
  int v7; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+34h] [rbp-14h]

  v4 = a1;
  v8 = 0;
  v6 = a2;
  v5 = dword_14039E910;
  v7 = a3;
  return PfLogEvent(
           30LL,
           dword_14038D2BC
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                         + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
           &v4);
}
