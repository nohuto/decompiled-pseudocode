/*
 * XREFs of ViFreeMapRegistersToFile @ 0x1407ADD6C
 * Callers:
 *     ViFlushDoubleBuffer @ 0x1407ADA58 (ViFlushDoubleBuffer.c)
 * Callees:
 *     ViCheckTag @ 0x1407AD69C (ViCheckTag.c)
 *     ViFindMappedRegisterInFile @ 0x1407ADA24 (ViFindMappedRegisterInFile.c)
 */

__int64 __fastcall ViFreeMapRegistersToFile(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v5; // r8
  __int64 result; // rax
  __int64 v7; // rdi

  v3 = *(_DWORD *)(a1 + 32);
  if ( a3 )
  {
    v5 = ((a2 & 0xFFF) + (unsigned __int64)a3 + 4095) >> 12;
    if ( (unsigned int)v5 < v3 )
      v3 = v5;
  }
  else if ( v3 > 1 )
  {
    v3 = 1;
  }
  result = (__int64)ViFindMappedRegisterInFile(a1, a2, 0LL);
  if ( result )
  {
    if ( v3 )
    {
      v7 = result + 12;
      do
      {
        if ( !*(_QWORD *)(v7 - 12) )
          break;
        ViCheckTag(*(_QWORD *)(v7 + 4) + 4096LL + (*(_DWORD *)(v7 - 12) & 0xFFF), *(unsigned int *)(v7 - 4), 1, 3);
        *(_DWORD *)v7 &= 0xFFFFFFFC;
        *(_QWORD *)(v7 - 12) = 0LL;
        *(_DWORD *)(v7 - 4) = 0;
        v7 += 32LL;
        _InterlockedDecrement((volatile signed __int32 *)(a1 + 32));
        --v3;
      }
      while ( v3 );
    }
    return 1LL;
  }
  return result;
}
