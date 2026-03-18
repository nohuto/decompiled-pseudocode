/*
 * XREFs of ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x1800B312C
 * Callers:
 *     ?InsertAt@?$DynArray@PEAVCRenderTarget@@$00@@QEAAJAEBQEAVCRenderTarget@@I@Z @ 0x1800B19B4 (-InsertAt@-$DynArray@PEAVCRenderTarget@@$00@@QEAAJAEBQEAVCRenderTarget@@I@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x1800B33A8 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800B3414 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x1800D5396 (memcpy_0.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall DynArrayImpl<1>::Grow(__int64 a1, unsigned int a2, int a3, unsigned int a4, unsigned __int64 *a5)
{
  unsigned int v5; // r9d
  char *v6; // rsi
  unsigned int v9; // eax
  unsigned int v10; // r8d
  unsigned int v11; // ebx
  unsigned int v12; // r11d
  unsigned __int64 v13; // r10
  unsigned int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // edx
  unsigned int v17; // r14d
  unsigned __int64 v18; // rcx
  char *v19; // r8
  int v20; // eax
  SIZE_T v22; // r9
  char *v23; // rax
  unsigned __int64 v24; // rdx
  int v25; // r9d
  unsigned int v26; // [rsp+20h] [rbp-28h]

  v5 = *(_DWORD *)(a1 + 24);
  v6 = 0LL;
  v9 = v5 + a3;
  v10 = a4;
  if ( v9 >= v5 )
    v10 = v9;
  v11 = v9 < v5 ? 0x80070216 : 0;
  if ( v9 < v5 )
  {
    v26 = 231;
LABEL_44:
    v25 = v11;
    goto LABEL_45;
  }
  v12 = *(_DWORD *)(a1 + 20);
  if ( v10 > v12 )
  {
    v13 = a2 * (unsigned __int64)v10;
    if ( v13 > 0xFFFFFFFF )
    {
      v26 = 240;
    }
    else
    {
      v14 = 16;
      v15 = 8092;
      v16 = v10 - v12;
      if ( v12 > 0x10 )
        v14 = v12;
      if ( v14 < 0x1F9C )
        v15 = v14;
      if ( v16 <= v15 )
        v16 = v15;
      if ( v12 + v16 < v12 || (v17 = v12 + v16, v18 = a2 * (unsigned __int64)(v12 + v16), v18 > 0xFFFFFFFF) )
      {
        v17 = v10;
        LODWORD(v18) = v13;
      }
      if ( v17 <= 0xFFFFFFFF / a2 )
      {
        v19 = *(char **)a1;
        if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) )
        {
          v22 = (unsigned int)v18;
          if ( v19 )
          {
            v23 = (char *)HeapReAlloc(WPF::g_processHeap, 0, v19, (unsigned int)v18);
          }
          else
          {
            if ( !(_DWORD)v18 )
              v22 = 1LL;
            v23 = (char *)HeapAlloc(WPF::g_processHeap, 0, v22);
          }
          v6 = v23;
          if ( !v23 )
          {
            v11 = -2147024882;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x12Au);
            return v11;
          }
          v11 = 0;
          if ( v23 != *(char **)a1 )
          {
            if ( a5 )
            {
              v24 = *a5;
              if ( *a5 >= *(_QWORD *)a1 && v24 < *(_QWORD *)a1 + (unsigned __int64)(a2 * *(_DWORD *)(a1 + 20)) )
                *a5 = (unsigned __int64)&v23[v24 - *(_QWORD *)a1];
            }
          }
          goto LABEL_22;
        }
        v11 = 0;
        if ( (_DWORD)v18 )
        {
          v6 = (char *)HeapAlloc(WPF::g_processHeap, 0, (unsigned int)v18);
          if ( !v6 )
            v11 = -2147024882;
        }
        else
        {
          v11 = -2147024809;
        }
        if ( (v11 & 0x80000000) == 0 )
        {
          v20 = *(_DWORD *)(a1 + 24);
          if ( v20 )
            memcpy_0(v6, *(const void **)a1, a2 * v20);
LABEL_22:
          memset_0(&v6[a2 * *(_DWORD *)(a1 + 20)], 0, a2 * (v17 - *(_DWORD *)(a1 + 20)));
          *(_DWORD *)(a1 + 20) = v17;
          *(_QWORD *)a1 = v6;
          return v11;
        }
        v26 = 273;
        goto LABEL_44;
      }
      v26 = 266;
    }
    v11 = -2147024362;
    v25 = -2147024362;
LABEL_45:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, v26);
  }
  return v11;
}
