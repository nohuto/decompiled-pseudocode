/*
 * XREFs of KiComputeDueTime @ 0x1400E2250
 * Callers:
 *     KiCommitThreadWait @ 0x14006DBD0 (KiCommitThreadWait.c)
 *     KiResumeThread @ 0x1400AA1FC (KiResumeThread.c)
 *     KeSetTimerEx @ 0x1400E2140 (KeSetTimerEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiComputeDueTime(int *a1, __int64 a2, unsigned __int8 a3, _DWORD *a4)
{
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 result; // rax
  int v8; // [rsp+0h] [rbp-28h]

  v8 = *a1;
  BYTE1(v8) = a3;
  if ( a2 < 0 || (a3 |= 1u, BYTE1(v8) = a3, a2 = MEMORY[0xFFFFF78000000014] - a2, a2 < 0) )
  {
    v5 = 0LL;
    if ( a3 >= 4u )
      v5 = (unsigned __int8)(a3 & 0xFC) << 16;
    v6 = MEMORY[0xFFFFF78000000008] - a2;
    *((_QWORD *)a1 + 3) = MEMORY[0xFFFFF78000000008] - a2;
    HIBYTE(v8) |= 0x40u;
    LODWORD(v6) = (unsigned __int8)((unsigned __int64)(v5 + v6) >> 18);
    BYTE2(v8) = v6;
    *a4 = v6;
    *a1 = v8;
    return 1LL;
  }
  else
  {
    *a1 = v8;
    result = 0LL;
    *((_QWORD *)a1 + 3) = 0LL;
  }
  return result;
}
