/*
 * XREFs of ?InsertAt@?$DynArray@PEAVCHwndRenderTarget@@$0A@@@QEAAJAEBQEAVCHwndRenderTarget@@I@Z @ 0x1800B7388
 * Callers:
 *     ?AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x180016908 (-AddRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?FindPrimary@CDesktopRenderTarget@@AEAAJXZ @ 0x180133A74 (-FindPrimary@CDesktopRenderTarget@@AEAAJXZ.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180068650 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CHwndRenderTarget *,0>::InsertAt(__int64 a1, unsigned __int64 a2)
{
  signed int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rdx
  _QWORD *v6; // r8
  _QWORD *v7; // rdx
  _QWORD *v9; // r9
  _QWORD *v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = (_QWORD *)a2;
  v3 = DynArrayImpl<0>::Grow(a1, 8u, 1, 0, (unsigned __int64 *)&v10);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x1CCu);
  }
  else
  {
    v5 = *(unsigned int *)(a1 + 24);
    v6 = *(_QWORD **)a1;
    *(_DWORD *)(a1 + 24) = v5 + 1;
    if ( (_DWORD)v5 )
    {
      v9 = &v6[v5];
      do
      {
        LODWORD(v5) = v5 - 1;
        *v9-- = v6[(unsigned int)v5];
      }
      while ( (_DWORD)v5 );
    }
    v7 = v10;
    if ( v10 >= v6 && v10 < &v6[*(unsigned int *)(a1 + 24) - 1] )
      v7 = v10 + 1;
    *v6 = *v7;
  }
  return v4;
}
