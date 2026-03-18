/*
 * XREFs of ?Grow@?$DynArrayImpl@$00@@IEAAJIIHPEAPEBX@Z @ 0x18007E508
 * Callers:
 *     ?InsertAt@?$DynArray@PEAVCRenderTarget@@$00@@QEAAJAEBQEAVCRenderTarget@@I@Z @ 0x18007BB3C (-InsertAt@-$DynArray@PEAVCRenderTarget@@$00@@QEAAJAEBQEAVCRenderTarget@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x18007E7AC (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x18007E80C (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ?ProcessSetCreationParams@CCompositionCubeMap@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONCUBEMAP_SETCREATIONPARAMS@@@Z @ 0x18015A80C (-ProcessSetCreationParams@CCompositionCubeMap@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONCU.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 */

__int64 __fastcall DynArrayImpl<1>::Grow(__int64 a1, unsigned int a2, int a3, int a4, unsigned __int64 *a5)
{
  unsigned int v5; // r10d
  char *v6; // rsi
  unsigned int v10; // eax
  unsigned int v11; // r8d
  DWORD v12; // ebx
  unsigned int v13; // r10d
  unsigned __int64 v14; // rax
  int v15; // r9d
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // edx
  unsigned int v19; // ebp
  unsigned int v20; // ecx
  void *v21; // r8
  int v22; // eax
  SIZE_T v24; // r9
  char *v25; // rax
  unsigned __int64 v26; // rdx
  unsigned int v27; // [rsp+60h] [rbp+18h]

  v5 = *(_DWORD *)(a1 + 24);
  v6 = 0LL;
  v10 = v5 + a3;
  v11 = v27;
  if ( v10 >= v5 )
    v11 = v10;
  v12 = v10 < v5 ? 0x80070216 : 0;
  if ( v10 < v5 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0xE7u);
    return v12;
  }
  v13 = *(_DWORD *)(a1 + 20);
  if ( v11 > v13 )
  {
    v14 = a2 * (unsigned __int64)v11;
    v15 = -1;
    if ( v14 <= 0xFFFFFFFF )
      v15 = a2 * v11;
    v12 = v14 > 0xFFFFFFFF ? 0x80070216 : 0;
    if ( v14 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0xF0u);
      return v12;
    }
    if ( a4 )
      goto LABEL_38;
    v16 = 16;
    v17 = 8092;
    v18 = v11 - v13;
    if ( v13 > 0x10 )
      v16 = v13;
    if ( v16 < 0x1F9C )
      v17 = v16;
    if ( v18 <= v17 )
      v18 = v17;
    if ( v13 + v18 < v13 || (v19 = v13 + v18, a2 * (unsigned __int64)(v13 + v18) > 0xFFFFFFFF) )
    {
LABEL_38:
      v20 = v15;
      v19 = v11;
    }
    else
    {
      v20 = a2 * (v13 + v18);
    }
    if ( v19 > 0xFFFFFFFF / a2 )
    {
      v12 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x80070216, 0x10Au);
    }
    else
    {
      v21 = *(void **)a1;
      if ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) )
      {
        v12 = 0;
        if ( v20 )
        {
          v6 = (char *)HeapAlloc(WPF::g_processHeap, 0, v20);
          if ( !v6 )
            v12 = -2147024882;
        }
        else
        {
          v12 = -2147024809;
        }
        if ( (v12 & 0x80000000) != 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x111u);
          return v12;
        }
        v22 = *(_DWORD *)(a1 + 24);
        if ( v22 )
          memcpy_0(v6, *(const void **)a1, a2 * v22);
      }
      else
      {
        v24 = v20;
        if ( v21 )
        {
          v25 = (char *)HeapReAlloc(WPF::g_processHeap, 0, v21, v20);
        }
        else
        {
          if ( !v20 )
            v24 = 1LL;
          v25 = (char *)HeapAlloc(WPF::g_processHeap, 0, v24);
        }
        v6 = v25;
        if ( !v25 )
        {
          v12 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x12Au);
          return v12;
        }
        v12 = 0;
        if ( v25 != *(char **)a1 )
        {
          if ( a5 )
          {
            v26 = *a5;
            if ( *a5 >= *(_QWORD *)a1 && v26 < *(_QWORD *)a1 + (unsigned __int64)(a2 * *(_DWORD *)(a1 + 20)) )
              *a5 = (unsigned __int64)&v25[v26 - *(_QWORD *)a1];
          }
        }
      }
      memset_0(&v6[a2 * *(_DWORD *)(a1 + 20)], 0, a2 * (v19 - *(_DWORD *)(a1 + 20)));
      *(_DWORD *)(a1 + 20) = v19;
      *(_QWORD *)a1 = v6;
    }
  }
  return v12;
}
