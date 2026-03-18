/*
 * XREFs of vMatchAPal @ 0x1C00EF560
 * Callers:
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00F4F60 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 * Callees:
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1C00DB3F8 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 */

_DWORD *__fastcall vMatchAPal(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, _DWORD *a5)
{
  int v5; // eax
  _DWORD *v6; // rbx
  unsigned int v7; // ecx
  _DWORD *v8; // r14
  __int64 v9; // r13
  int v10; // ebp
  int v11; // esi
  __int64 v12; // r10
  __int64 v13; // r11
  __int64 v14; // rcx
  __int64 v15; // r11
  __int64 v16; // r15
  __int64 v17; // r12
  int v18; // eax
  int v19; // ecx
  __int64 v20; // rax
  signed __int32 v21; // ecx
  __int64 v22; // rdx
  signed __int32 v23; // eax
  __int64 v24; // rcx
  signed __int32 v25; // eax
  _DWORD *result; // rax
  int v27; // [rsp+20h] [rbp-48h]
  __int64 v28; // [rsp+78h] [rbp+10h] BYREF
  int v29; // [rsp+80h] [rbp+18h]
  _DWORD *v30; // [rsp+88h] [rbp+20h]

  v30 = a4;
  v28 = a2;
  v5 = *(_DWORD *)(a2 + 24);
  v6 = a4;
  if ( (v5 & 0x1000) != 0 )
  {
    v7 = 1;
  }
  else if ( (v5 & 0x10000) != 0 )
  {
    v7 = 0;
  }
  else
  {
    v7 = *(_DWORD *)(a2 + 60) >> 1;
  }
  v8 = *(_DWORD **)(a3 + 72);
  v9 = *(_QWORD *)(a3 + 80);
  v10 = 0;
  v11 = 0;
  if ( v7 < 256 - v7 )
  {
    v12 = 4LL * v7;
    v13 = 256 - v7 - v7;
    do
    {
      v14 = *(_QWORD *)(a2 + 120);
      v29 = *(_DWORD *)(v12 + v14);
      HIBYTE(v29) &= 0xDEu;
      *(_DWORD *)(v12 + v14) = v29;
      v12 += 4LL;
      --v13;
    }
    while ( v13 );
  }
  v15 = 0LL;
  if ( *(_DWORD *)(a3 + 28) )
  {
    do
    {
      if ( !v9 || *(_BYTE *)(v15 + v9 + 4) != *((_BYTE *)v8 + v15 + 4) )
        ++v11;
      v16 = *((unsigned __int8 *)v8 + v15 + 4);
      v17 = *(_QWORD *)(a2 + 120);
      v18 = *(_DWORD *)(v17 + 4 * v16);
      v29 = v18;
      if ( (v18 & 0x20000000) == 0 )
      {
        v19 = *(_DWORD *)(*(_QWORD *)(a3 + 120) + 4 * v15);
        v27 = v19;
        if ( (v19 & 0x2000000) == 0
          && ((_BYTE)v19 != (_BYTE)v29
           || BYTE1(v19) != BYTE1(v18)
           || BYTE2(v19) != BYTE2(v18)
           || ((HIBYTE(v19) ^ HIBYTE(v18)) & 1) != 0) )
        {
          HIBYTE(v27) = HIBYTE(v19) & 1;
          ++v10;
          HIBYTE(v18) = HIBYTE(v19) & 1;
          v29 = v27;
        }
        HIBYTE(v29) = HIBYTE(v18) | 0x30;
        *(_DWORD *)(v17 + 4 * v16) = v29;
      }
      v15 = (unsigned int)(v15 + 1);
    }
    while ( (unsigned int)v15 < *(_DWORD *)(a3 + 28) );
    v6 = v30;
  }
  v20 = v28;
  v21 = _InterlockedIncrement((volatile signed __int32 *)&ulXlatePalUnique);
  *(_DWORD *)(v28 + 32) = v21;
  v22 = *(_QWORD *)(v20 + 128);
  if ( v22 != v20 )
    *(_DWORD *)(v22 + 32) = v21;
  v23 = _InterlockedExchangeAdd((volatile signed __int32 *)&ulXlatePalUnique, 1u);
  v24 = *(_QWORD *)(a3 + 128);
  v25 = v23 + 1;
  *(_DWORD *)(a3 + 32) = v25;
  if ( v24 != a3 )
    *(_DWORD *)(v24 + 32) = v25;
  *v8 = XEPALOBJ::ulTime((XEPALOBJ *)&v28);
  result = a5;
  *v6 = v10;
  *result = v11;
  return result;
}
