/*
 * XREFs of IoSqToIoCqMapping @ 0x1C0002BAC
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C0004640 (NVMeControllerInitPart2.c)
 * Callees:
 *     memset @ 0x1C0012380 (memset.c)
 */

void __fastcall IoSqToIoCqMapping(__int64 a1)
{
  char v2; // r8
  unsigned int v3; // edx
  __int64 v4; // rcx
  char v5; // al
  unsigned int v6; // eax
  unsigned int i; // r9d
  __int64 v8; // rax
  __int64 v9; // r8
  unsigned __int16 v10; // dx
  __int64 v11; // rdx
  unsigned int j; // r8d
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned int k; // edx
  __int64 v16; // rax

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
        ++v3;
      }
      while ( v3 < *(unsigned __int16 *)(a1 + 234) );
      if ( v2 )
      {
        v6 = (8
            * (unsigned int)*(unsigned __int16 *)(a1 + 234)
            * ((*(unsigned __int16 *)(a1 + 232) - 1) / *(unsigned __int16 *)(a1 + 234) + 1)) >> 2;
        if ( v6 )
          memset(*(void **)(*(_QWORD *)(a1 + 552) + 120LL), 0, 4LL * v6);
      }
    }
    for ( i = 0; i < *(unsigned __int16 *)(a1 + 232); ++*(_DWORD *)(v11 + 108) )
    {
      v8 = i++;
      v9 = *(_QWORD *)(a1 + 544) + 136 * v8;
      v10 = (*(unsigned __int16 *)(v9 + 40) - 1) % *(unsigned __int16 *)(a1 + 234) + 1;
      *(_WORD *)(v9 + 50) = v10;
      v11 = *(_QWORD *)(a1 + 552) + 168LL * (v10 - 1);
      *(_QWORD *)(*(_QWORD *)(v11 + 120) + 8LL * (unsigned int)(*(_DWORD *)(v11 + 112))++) = v9;
    }
    for ( j = 0; j < *(unsigned __int16 *)(a1 + 234); *(_QWORD *)(v14 + 16) = v13 )
    {
      v13 = *(_QWORD *)(a1 + 552) + 168LL * j;
      if ( *(_WORD *)(a1 + 200) == 1 )
        v14 = *(_QWORD *)(a1 + 208) + 24LL * j;
      else
        v14 = *(_QWORD *)(a1 + 208) + 24LL * (j + 1);
      ++j;
      *(_DWORD *)(v13 + 104) = *(_DWORD *)v14;
    }
    for ( k = 0; k < *(unsigned __int16 *)(a1 + 234); *(_DWORD *)(168 * v16 + *(_QWORD *)(a1 + 552) + 112) = 0 )
      v16 = k++;
  }
}
