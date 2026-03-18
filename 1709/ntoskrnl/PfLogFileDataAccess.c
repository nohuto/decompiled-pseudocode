/*
 * XREFs of PfLogFileDataAccess @ 0x1402398E0
 * Callers:
 *     MiLogRelocationRva @ 0x1404F7BA0 (MiLogRelocationRva.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x140061EB0 (PsGetPagePriorityThread.c)
 *     PfLogEvent @ 0x1400B9904 (PfLogEvent.c)
 */

__int64 __fastcall PfLogFileDataAccess(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rdx
  __int64 v6; // r9
  unsigned __int64 v7; // r10
  __int64 v8; // r11
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD v12[4]; // [rsp+20h] [rbp-38h] BYREF
  int v13; // [rsp+40h] [rbp-18h]
  int v14; // [rsp+44h] [rbp-14h]

  if ( (unsigned int)PsGetPagePriorityThread(a2) < dword_140388C6C )
    return 0LL;
  v10 = *(_QWORD *)(v5 + 544);
  v12[2] = v6 & 0x7FFFFFFFFFFFFFFFLL | ((__int64)a5 << 63);
  v11 = v10 ^ *(_QWORD *)(v10 + 776);
  v12[0] = v8;
  v12[1] = v7 >> 12;
  v12[3] = v11 & 0x1FFFFFFFFFFFFFFFLL;
  v13 = dword_14039E910;
  v14 = *(_DWORD *)(v10 + 736);
  return PfLogEvent(
           10,
           dword_14038D2BC
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                         + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
           v12,
           0x28u);
}
