/*
 * XREFs of vFontFileCache @ 0x1C022C6F4
 * Callers:
 *     bLoadFontFile @ 0x1C0228AE4 (bLoadFontFile.c)
 * Callees:
 *     EngFntCacheAlloc @ 0x1C0142780 (EngFntCacheAlloc.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     EngFntCacheFault @ 0x1C02686B0 (EngFntCacheFault.c)
 */

void __fastcall vFontFileCache(__int64 a1, ULONG a2, int a3)
{
  unsigned int v6; // r14d
  unsigned int v7; // r9d
  __int64 v8; // r10
  unsigned int v9; // r8d
  unsigned int v10; // ebx
  unsigned int v11; // edx
  unsigned int v12; // eax
  unsigned int v13; // ebx
  ULONG v14; // edx
  unsigned int v15; // eax
  _DWORD *v16; // rax
  _DWORD *v17; // rsi
  __int64 v18; // r12
  char *v19; // r13
  __int64 i; // r14
  __int64 v21; // r8
  _DWORD *v22; // rbx
  __int64 (__fastcall *v23)(); // rcx
  __int64 v24; // rax
  __int64 v25; // [rsp+30h] [rbp-38h]
  _DWORD *v26; // [rsp+88h] [rbp+20h]

  if ( a2 )
  {
    v6 = 0;
    v7 = 0;
    v8 = 0LL;
    v9 = -1;
    while ( 1 )
    {
      v10 = v7;
      if ( (unsigned int)v8 >= *(_DWORD *)(a1 + 12) )
        break;
      if ( *(_DWORD *)(a1 + 16LL * (unsigned int)v8 + 44) == 1 )
      {
        v11 = ((*(_DWORD *)(*(_QWORD *)(a1 + 16 * (v8 + 3)) + 352LL) + 7) & 0xFFFFFFF8) + v7 + 240;
        v12 = -1;
        if ( v11 >= v7 )
          v12 = ((*(_DWORD *)(*(_QWORD *)(a1 + 16 * (v8 + 3)) + 352LL) + 7) & 0xFFFFFFF8) + v7 + 240;
        v7 = v12;
        if ( v11 < v10 )
          return;
      }
      v8 = (unsigned int)(v8 + 1);
    }
    v13 = (4 * *(_DWORD *)(a1 + 8) + 23) & 0xFFFFFFF8;
    if ( v13 + v7 >= v7 )
    {
      v14 = v13 + v7;
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 48) + 300LL) & 0x100) == 0 )
        goto LABEL_14;
      v6 = v13 + v7;
      v15 = v13 + v7 + ((**(_DWORD **)(a1 + 32) + 7) & 0xFFFFFFF8);
      if ( v15 >= v14 )
        v9 = v13 + v7 + ((**(_DWORD **)(a1 + 32) + 7) & 0xFFFFFFF8);
      v14 = v9;
      if ( v15 >= v6 )
      {
LABEL_14:
        v16 = EngFntCacheAlloc(a2, v14);
        v17 = v16;
        if ( v16 )
        {
          v18 = 0LL;
          *v16 = 1416914532;
          v16[1] = a3;
          v16[2] = *(_DWORD *)(a1 + 8);
          v16[3] = v6;
          v19 = (char *)v16 + v13;
          for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 12); i = (unsigned int)(i + 1) )
          {
            v21 = *(_QWORD *)(a1 + 16 * (i + 3));
            v25 = v21;
            if ( *(_DWORD *)(a1 + 16LL * (unsigned int)i + 44) == 1 )
            {
              v26 = v19;
              v17[v18 + 4] = (_DWORD)v19 - (_DWORD)v17;
              *(_OWORD *)(v19 + 4) = *(_OWORD *)(v21 + 112);
              *(_OWORD *)(v19 + 20) = *(_OWORD *)(v21 + 128);
              *(_OWORD *)(v19 + 36) = *(_OWORD *)(v21 + 144);
              *(_OWORD *)(v19 + 52) = *(_OWORD *)(v21 + 160);
              *(_OWORD *)(v19 + 68) = *(_OWORD *)(v21 + 176);
              *(_OWORD *)(v19 + 84) = *(_OWORD *)(v21 + 192);
              *(_OWORD *)(v19 + 100) = *(_OWORD *)(v21 + 208);
              *(_OWORD *)(v19 + 116) = *(_OWORD *)(v21 + 224);
              *(_OWORD *)(v19 + 132) = *(_OWORD *)(v21 + 240);
              *(_OWORD *)(v19 + 148) = *(_OWORD *)(v21 + 256);
              *(_OWORD *)(v19 + 164) = *(_OWORD *)(v21 + 272);
              *(_OWORD *)(v19 + 180) = *(_OWORD *)(v21 + 288);
              *(_OWORD *)(v19 + 196) = *(_OWORD *)(v21 + 304);
              *(_OWORD *)(v19 + 212) = *(_OWORD *)(v21 + 320);
              *(_QWORD *)(v19 + 228) = *(_QWORD *)(v21 + 336);
              *((_DWORD *)v19 + 59) = *(_DWORD *)(v21 + 344);
              v22 = (_DWORD *)(v21 + 352);
              memmove(v19 + 240, (const void *)(v21 + 352), *(unsigned int *)(v21 + 352));
              v19 += ((*v22 + 7) & 0xFFFFFFF8) + 240;
              if ( *(_DWORD *)(v25 + 284) == 2 )
              {
                v23 = *(__int64 (__fastcall **)())(v25 + 8);
                if ( v23 == SearchMortTable )
                  *v26 = 2;
                else
                  *v26 = v23 == SearchGsubTable;
              }
              else
              {
                *v26 = 0;
              }
              v18 = (unsigned int)(v18 + 1);
            }
          }
          v24 = (unsigned int)v17[3];
          if ( (_DWORD)v24 )
            memmove((char *)v17 + v24, *(const void **)(a1 + 32), **(unsigned int **)(a1 + 32));
        }
      }
    }
  }
}
