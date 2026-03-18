/*
 * XREFs of PopHiberChecksumHiberFileData @ 0x140433854
 * Callers:
 *     PopRequestRead @ 0x140434168 (PopRequestRead.c)
 *     PopRequestWrite @ 0x140434590 (PopRequestWrite.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     tcpxsum @ 0x140188C30 (tcpxsum.c)
 *     PopCheckpointSystemSleep @ 0x14043A498 (PopCheckpointSystemSleep.c)
 */

unsigned __int64 __fastcall PopHiberChecksumHiberFileData(
        __int64 a1,
        char a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int64 a5)
{
  unsigned __int64 result; // rax
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // r14
  unsigned int v15; // r8d
  __int64 v16; // rdx
  int v17; // ecx
  __int64 v18; // r8
  __int64 v19; // r9
  __int16 v20; // ax
  unsigned __int64 v21; // rax
  __int64 v22; // [rsp+78h] [rbp+20h]

  v22 = a4;
  result = __rdtsc();
  v8 = result;
  if ( *(_QWORD *)(a1 + 440) )
  {
    v9 = a2 ? *(_QWORD *)(a1 + 448) >> 1 : *(_QWORD *)(a1 + 424);
    v10 = a3 >> 9;
    if ( a3 >> 9 < v9 )
    {
      v11 = a5;
      if ( (a5 & 0x1FF) != 0 )
        v11 = a5 - (a5 & 0x1FF) + 512;
      v12 = v10 + (v11 >> 9);
      if ( v12 < v9 )
        v9 = v12;
      v13 = 0LL;
      while ( v10 < v9 )
      {
        v14 = *(_QWORD *)(a1 + 440);
        v15 = a5 - v13;
        if ( a5 - v13 > 0x200 )
          v15 = 512;
        v17 = tcpxsum(0, (const char *)(v13 + a4), v15);
        if ( a2 )
        {
          *(_WORD *)(v14 + 2 * v10) = v17;
        }
        else if ( *(unsigned __int16 *)(v14 + 2 * v10) != v17 )
        {
          PopCheckpointSystemSleep(30LL, v16, v18, v19);
          KeBugCheckEx(0xA0u, 0x10EuLL, 0xAuLL, *(unsigned __int16 *)(v14 + 2 * v10), *(unsigned __int16 *)(a1 + 432));
        }
        v20 = *(_WORD *)(v14 + 2 * v10);
        a4 = v22;
        v13 += 512LL;
        ++v10;
        *(_WORD *)(a1 + 432) = v20;
      }
      v21 = __rdtsc();
      result = (((unsigned __int64)HIDWORD(v21) << 32) | (unsigned int)v21) - v8;
      if ( a2 )
      {
        *(_QWORD *)(a1 + 424) = v10;
        qword_140365C88 += result;
      }
      else
      {
        qword_140365DC8 += result;
      }
    }
  }
  return result;
}
