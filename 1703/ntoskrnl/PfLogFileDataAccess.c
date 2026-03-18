/*
 * XREFs of PfLogFileDataAccess @ 0x140226EBC
 * Callers:
 *     MiLogRelocationRva @ 0x14049620C (MiLogRelocationRva.c)
 * Callees:
 *     PfLogEvent @ 0x14005F30C (PfLogEvent.c)
 *     PsGetPagePriorityThread @ 0x1400FBE90 (PsGetPagePriorityThread.c)
 */

__int64 __fastcall PfLogFileDataAccess(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD v12[4]; // [rsp+20h] [rbp-38h] BYREF
  int v13; // [rsp+40h] [rbp-18h]
  int v14; // [rsp+44h] [rbp-14h]

  if ( (unsigned int)PsGetPagePriorityThread(a2) < dword_14036CA6C )
    return 0LL;
  v10 = *(_QWORD *)(v5 + 544);
  v12[2] = v7 & 0x7FFFFFFFFFFFFFFFLL | ((__int64)a5 << 63);
  v11 = v10 ^ *(_QWORD *)(v10 + 776);
  v12[1] = v6 >> 12;
  v12[0] = v8;
  v12[3] = v11 & 0x1FFFFFFFFFFFFFFFLL;
  v13 = dword_140382C10;
  v14 = *(_DWORD *)(v10 + 736);
  return PfLogEvent(
           10,
           dword_14036DE5C
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                         + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
           v12,
           0x28u);
}
