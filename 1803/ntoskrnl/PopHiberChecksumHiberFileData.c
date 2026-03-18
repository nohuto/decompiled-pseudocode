/*
 * XREFs of PopHiberChecksumHiberFileData @ 0x1404747D8
 * Callers:
 *     PopRequestWrite @ 0x1404743B4 (PopRequestWrite.c)
 *     PopRequestRead @ 0x1404865F4 (PopRequestRead.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     tcpxsum @ 0x1401B2890 (tcpxsum.c)
 *     PopCheckpointSystemSleep @ 0x140473498 (PopCheckpointSystemSleep.c)
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
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r14
  __int64 v13; // r12
  __int64 v14; // r15
  unsigned int v15; // r8d
  int v16; // eax
  int v17; // ecx
  unsigned __int64 v18; // rax
  __int64 v19; // [rsp+78h] [rbp+20h]

  v19 = a4;
  result = __rdtsc();
  v8 = result;
  if ( *(_QWORD *)(a1 + 432) )
  {
    v9 = a2 ? *(_QWORD *)(a1 + 440) >> 1 : *(_QWORD *)(a1 + 416);
    v10 = a3 >> 9;
    if ( a3 >> 9 < v9 )
    {
      v11 = a5;
      if ( (a5 & 0x1FF) != 0 )
        v11 = a5 - (a5 & 0x1FF) + 512;
      v12 = (v11 >> 9) + v10;
      if ( v12 >= v9 )
        v12 = v9;
      v13 = 0LL;
      while ( v10 < v12 )
      {
        v14 = *(_QWORD *)(a1 + 432);
        v15 = a5 - v13;
        if ( a5 - v13 > 0x200 )
          v15 = 512;
        v16 = tcpxsum(0, (const char *)(v13 + a4), v15);
        v17 = v16;
        if ( a2 )
        {
          *(_WORD *)(v14 + 2 * v10) = v16;
        }
        else
        {
          v16 = *(unsigned __int16 *)(v14 + 2 * v10);
          if ( v16 != v17 )
          {
            PopCheckpointSystemSleep(30);
            KeBugCheckEx(0xA0u, 0x10EuLL, 0xAuLL, *(unsigned __int16 *)(v14 + 2 * v10), *(unsigned __int16 *)(a1 + 424));
          }
        }
        a4 = v19;
        v13 += 512LL;
        *(_WORD *)(a1 + 424) = v16;
        ++v10;
      }
      if ( a2 )
        *(_QWORD *)(a1 + 416) = v10;
      v18 = __rdtsc();
      result = (((unsigned __int64)HIDWORD(v18) << 32) | (unsigned int)v18) - v8;
      if ( a2 )
        qword_1403AA528 += result;
      else
        qword_1403AA668 += result;
    }
  }
  return result;
}
