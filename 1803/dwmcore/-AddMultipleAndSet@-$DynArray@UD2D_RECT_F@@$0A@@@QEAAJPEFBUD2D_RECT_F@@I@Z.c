/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UD2D_RECT_F@@$0A@@@QEAAJPEFBUD2D_RECT_F@@I@Z @ 0x18000638C
 * Callers:
 *     ?GetAllHollowRects@CoordMap@@QEBAJAEAV?$DynArray@UD2D_RECT_F@@$0A@@@@Z @ 0x1800044C8 (-GetAllHollowRects@CoordMap@@QEBAJAEAV-$DynArray@UD2D_RECT_F@@$0A@@@@Z.c)
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N2@Z @ 0x180004500 (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N2@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     memcpy_0 @ 0x1800DD3FB (memcpy_0.c)
 */

__int64 __fastcall DynArray<D2D_RECT_F,0>::AddMultipleAndSet(__int64 a1, const void *a2, __int64 a3)
{
  unsigned int v3; // eax
  unsigned int v5; // esi
  unsigned int v6; // ebx
  int v8; // eax

  v3 = *(_DWORD *)(a1 + 24);
  v5 = v3 + a3;
  v6 = v3 + (unsigned int)a3 < v3 ? 0x80070216 : 0;
  if ( v3 + (unsigned int)a3 < v3 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xB5u);
  }
  else if ( v5 > *(_DWORD *)(a1 + 20) )
  {
    v8 = DynArrayImpl<0>::AddMultipleAndSet(a1, 16LL, a3, a2);
    v6 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xC0u);
  }
  else
  {
    memcpy_0((void *)(*(_QWORD *)a1 + 16LL * v3), a2, 16LL * (unsigned int)a3);
    *(_DWORD *)(a1 + 24) = v5;
  }
  return v6;
}
