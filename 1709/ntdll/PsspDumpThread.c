/*
 * XREFs of PsspDumpThread @ 0x18005CAA4
 * Callers:
 *     PsspCaptureThreadInformation @ 0x18005C79C (PsspCaptureThreadInformation.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x1800A0560 (ZwQueryInformationThread.c)
 *     ZwGetContextThread @ 0x1800A1DF0 (ZwGetContextThread.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall PsspDumpThread(__int64 *a1, __int16 a2, int a3, int a4, int a5, __int64 a6)
{
  unsigned int v6; // eax
  __int64 v7; // rbx
  unsigned int v8; // r13d
  __int16 v11; // r15
  unsigned int v12; // ebp
  unsigned int v13; // ecx
  __int64 v14; // rsi
  __int64 result; // rax
  __int16 v16; // ax

  v6 = *((_DWORD *)a1 + 3);
  v7 = *a1;
  v8 = (a4 + 15) & 0xFFFFFFF0;
  v11 = a4;
  v12 = v8 + 128;
  v13 = v6 + v8 + 128;
  if ( v13 < v6 )
    return v13 < v6 ? 0xC0000095 : 0;
  if ( v13 > *((_DWORD *)a1 + 2) )
    return 3221225507LL;
  memset((void *)v7, 0, 0x80uLL);
  v14 = a6;
  result = ZwQueryInformationThread(a6, 0LL, v7);
  if ( (int)result >= 0 )
  {
    if ( (a2 & 0x400) != 0 && (int)ZwQueryInformationThread(v14, 21LL, v7 + 48) < 0 )
      *(_WORD *)(v7 + 56) = -1;
    result = ZwQueryInformationThread(v14, 1LL, v7 + 72);
    if ( (int)result >= 0 )
    {
      result = ZwQueryInformationThread(v14, 9LL, v7 + 104);
      if ( (int)result >= 0 )
      {
        result = ZwQueryInformationThread(v14, 20LL, &a5);
        if ( (int)result >= 0 )
        {
          v16 = a5 != 0;
          *(_WORD *)(v7 + 122) &= ~1u;
          *(_WORD *)(v7 + 122) |= v16;
          result = ZwQueryInformationThread(v14, 35LL, &a5);
          if ( (int)result >= 0 )
          {
            *(_WORD *)(v7 + 120) = a5;
            if ( (a2 & 0x100) != 0 )
            {
              *(_WORD *)(v7 + 122) &= 1u;
              *(_WORD *)(v7 + 122) |= 2 * v11;
              memset((void *)(v7 + 128), 0, v8);
              *(_DWORD *)(v7 + 176) = a3;
              if ( (int)ZwGetContextThread(v14, v7 + 128) < 0 )
              {
                *(_WORD *)(v7 + 122) &= 1u;
                v12 = 128;
              }
            }
            *((_DWORD *)a1 + 3) += v12;
            ++*((_DWORD *)a1 + 4);
            *(_QWORD *)(v7 + 112) = MEMORY[0x7FFE0014];
            *a1 += v12;
            return 0LL;
          }
        }
      }
    }
  }
  return result;
}
