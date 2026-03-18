/*
 * XREFs of KiComputeDueTime @ 0x140038E70
 * Callers:
 *     KiCommitThreadWait @ 0x1400EAB20 (KiCommitThreadWait.c)
 *     KiResumeThread @ 0x140110E20 (KiResumeThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiComputeDueTime(int *a1, __int64 a2, unsigned __int8 a3, _DWORD *a4)
{
  unsigned __int64 v4; // r10
  __int64 result; // rax
  __int64 v7; // rcx
  int v8; // [rsp+0h] [rbp-28h]

  v4 = 0LL;
  v8 = *a1;
  BYTE1(v8) = a3;
  if ( a2 < 0 || (a3 |= 1u, BYTE1(v8) = a3, a2 = MEMORY[0xFFFFF78000000014] - a2, a2 < 0) )
  {
    if ( (a3 & 0xFC) != 0 )
      v4 = (unsigned __int64)(a3 & 0xFC) << 16;
    result = 1LL;
    v7 = MEMORY[0xFFFFF78000000008] - a2;
    *((_QWORD *)a1 + 3) = MEMORY[0xFFFFF78000000008] - a2;
    HIBYTE(v8) |= 0x40u;
    LODWORD(v7) = (unsigned __int8)((v4 + v7) >> 18);
    BYTE2(v8) = v7;
    *a4 = v7;
    *a1 = v8;
  }
  else
  {
    *a1 = v8;
    result = 0LL;
    *((_QWORD *)a1 + 3) = 0LL;
  }
  return result;
}
