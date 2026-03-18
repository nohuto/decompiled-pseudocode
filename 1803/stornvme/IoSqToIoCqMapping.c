/*
 * XREFs of IoSqToIoCqMapping @ 0x1C0002E10
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0004908 (NVMeControllerInitPart2.c)
 * Callees:
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall IoSqToIoCqMapping(__int64 a1)
{
  char v2; // r8
  __int64 result; // rax
  unsigned int v4; // edx
  __int64 v5; // rcx
  char v6; // al
  unsigned int v7; // r9d
  __int64 v8; // r8
  unsigned int v9; // r10d
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int i; // edx
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // r8
  unsigned int j; // edx
  __int64 v20; // rax

  v2 = 0;
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 552) + 50LL) = *(_WORD *)(*(_QWORD *)(a1 + 560) + 96LL);
    *(_DWORD *)(*(_QWORD *)(a1 + 560) + 104LL) = 0;
    result = 32902LL;
    if ( *(_WORD *)(a1 + 4) == 0x8086 )
    {
      result = 8209LL;
      if ( *(_WORD *)(a1 + 6) == 8209 )
      {
        result = *(_QWORD *)(a1 + 560);
        *(_DWORD *)(result + 104) = 1;
      }
    }
  }
  else
  {
    result = *(unsigned __int16 *)(a1 + 242);
    v4 = 0;
    if ( (_WORD)result )
    {
      do
      {
        v5 = *(_QWORD *)(a1 + 560) + 168LL * v4;
        if ( *(_DWORD *)(v5 + 108) )
        {
          v6 = v2;
          *(_QWORD *)(v5 + 108) = 0LL;
          if ( !v2 )
            v6 = 1;
          v2 = v6;
        }
        v7 = *(unsigned __int16 *)(a1 + 242);
        ++v4;
      }
      while ( v4 < v7 );
      result = (unsigned __int16)v7;
      if ( v2 )
      {
        result = (unsigned __int16)v7;
        v8 = (8 * v7 * ((*(unsigned __int16 *)(a1 + 240) - 1) / (int)v7 + 1)) >> 2;
        if ( (_DWORD)v8 )
        {
          memset(*(void **)(*(_QWORD *)(a1 + 560) + 120LL), 0, 4 * v8);
          result = *(unsigned __int16 *)(a1 + 242);
        }
      }
    }
    v9 = 0;
    if ( *(_WORD *)(a1 + 240) )
    {
      do
      {
        v10 = v9++;
        v11 = *(_QWORD *)(a1 + 552) + 136 * v10;
        v12 = (unsigned __int16)((*(unsigned __int16 *)(v11 + 40) - 1) % *(unsigned __int16 *)(a1 + 242) + 1);
        *(_WORD *)(v11 + 50) = v12;
        v13 = *(_QWORD *)(a1 + 560);
        v14 = 168 * v12;
        *(_QWORD *)(*(_QWORD *)(168 * v12 + v13 - 48) + 8LL * *(unsigned int *)(168 * v12 + v13 - 56)) = v11;
        ++*(_DWORD *)(v14 + v13 - 56);
        ++*(_DWORD *)(v14 + v13 - 60);
      }
      while ( v9 < *(unsigned __int16 *)(a1 + 240) );
      result = *(unsigned __int16 *)(a1 + 242);
    }
    for ( i = 0; i < (unsigned int)result; result = *(unsigned __int16 *)(a1 + 242) )
    {
      v16 = *(_QWORD *)(a1 + 216);
      v17 = i;
      v18 = *(_QWORD *)(a1 + 560) + 168LL * i;
      if ( *(_WORD *)(a1 + 208) != 1 )
        v17 = i + 1;
      ++i;
      *(_DWORD *)(v18 + 104) = *(_DWORD *)(v16 + 24 * v17);
      *(_QWORD *)(v16 + 24 * v17 + 16) = v18;
    }
    for ( j = 0; j < (unsigned int)result; result = *(unsigned __int16 *)(a1 + 242) )
    {
      v20 = j++;
      *(_DWORD *)(168 * v20 + *(_QWORD *)(a1 + 560) + 112) = 0;
    }
  }
  return result;
}
