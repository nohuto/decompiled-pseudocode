/*
 * XREFs of IoSqToIoCqMapping @ 0x1C0002E54
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C00048E4 (NVMeControllerInitPart2.c)
 * Callees:
 *     memset @ 0x1C0013D00 (memset.c)
 */

void __fastcall IoSqToIoCqMapping(__int64 a1)
{
  char v2; // r8
  unsigned int v3; // edx
  __int64 v4; // rcx
  char v5; // al
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int i; // r10d
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int j; // r8d
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned int k; // edx
  __int64 v18; // rax

  v2 = 0;
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 544) + 50LL) = *(_WORD *)(*(_QWORD *)(a1 + 552) + 96LL);
    *(_DWORD *)(*(_QWORD *)(a1 + 552) + 104LL) = 0;
    if ( *(_WORD *)(a1 + 4) == 0x8086 && *(_WORD *)(a1 + 6) == 8209 )
      *(_DWORD *)(*(_QWORD *)(a1 + 552) + 104LL) = 1;
  }
  else
  {
    v3 = 0;
    if ( *(_WORD *)(a1 + 234) )
    {
      do
      {
        v4 = *(_QWORD *)(a1 + 552) + 168LL * v3;
        if ( *(_DWORD *)(v4 + 108) )
        {
          v5 = v2;
          *(_QWORD *)(v4 + 108) = 0LL;
          if ( !v2 )
            v5 = 1;
          v2 = v5;
        }
        v6 = *(unsigned __int16 *)(a1 + 234);
        ++v3;
      }
      while ( v3 < v6 );
      if ( v2 )
      {
        v7 = (8 * v6 * ((*(unsigned __int16 *)(a1 + 232) - 1) / (int)v6 + 1)) >> 2;
        if ( v7 )
          memset(*(void **)(*(_QWORD *)(a1 + 552) + 120LL), 0, 4LL * v7);
      }
    }
    for ( i = 0; i < *(unsigned __int16 *)(a1 + 232); ++*(_DWORD *)(v13 + v12 - 60) )
    {
      v9 = i++;
      v10 = *(_QWORD *)(a1 + 544) + 136 * v9;
      v11 = (unsigned __int16)((*(unsigned __int16 *)(v10 + 40) - 1) % *(unsigned __int16 *)(a1 + 234) + 1);
      *(_WORD *)(v10 + 50) = v11;
      v12 = *(_QWORD *)(a1 + 552);
      v13 = 168 * v11;
      *(_QWORD *)(*(_QWORD *)(168 * v11 + v12 - 48) + 8LL * *(unsigned int *)(168 * v11 + v12 - 56)) = v10;
      ++*(_DWORD *)(v13 + v12 - 56);
    }
    for ( j = 0; j < *(unsigned __int16 *)(a1 + 234); *(_QWORD *)(v16 + 16) = v15 )
    {
      v15 = *(_QWORD *)(a1 + 552) + 168LL * j;
      if ( *(_WORD *)(a1 + 200) == 1 )
        v16 = *(_QWORD *)(a1 + 208) + 24LL * j;
      else
        v16 = *(_QWORD *)(a1 + 208) + 24LL * (j + 1);
      ++j;
      *(_DWORD *)(v15 + 104) = *(_DWORD *)v16;
    }
    for ( k = 0; k < *(unsigned __int16 *)(a1 + 234); *(_DWORD *)(168 * v18 + *(_QWORD *)(a1 + 552) + 112) = 0 )
      v18 = k++;
  }
}
