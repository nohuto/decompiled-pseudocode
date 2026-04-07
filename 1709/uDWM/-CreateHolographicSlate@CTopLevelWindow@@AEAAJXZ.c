/*
 * XREFs of ?CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ @ 0x180078498
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18001DC00 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180013020 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateSlate@CHolographicSlate@@SAJQEAUHWND__@@PEAVCVisual@@IIPEAPEAV1@@Z @ 0x18006FFCC (-CreateSlate@CHolographicSlate@@SAJQEAUHWND__@@PEAVCVisual@@IIPEAPEAV1@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::CreateHolographicSlate(CTopLevelWindow *this)
{
  unsigned int v1; // edi
  struct CHolographicSlate **v2; // rsi
  __int64 v4; // rcx
  __int64 v5; // rcx
  unsigned int v6; // r9d
  int v7; // edx
  int v8; // eax
  HWND v9; // rcx
  unsigned int v10; // r8d
  int Slate; // eax

  v1 = 0;
  v2 = (struct CHolographicSlate **)((char *)this + 784);
  if ( !*((_QWORD *)this + 98) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 59) + 24LL);
    *((_QWORD *)this + 99) = v4;
    if ( v4 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 99) + 32LL), *((struct CVisual **)this + 59));
    }
    v5 = *((_QWORD *)this + 90);
    v6 = 0;
    v7 = *(_DWORD *)(v5 + 216) - *(_DWORD *)(v5 + 208);
    v8 = *(_DWORD *)(v5 + 212) - *(_DWORD *)(v5 + 204);
    v9 = *(HWND *)(v5 + 40);
    if ( v7 >= 0 )
      v6 = v7;
    v10 = 0;
    if ( v8 >= 0 )
      v10 = v8;
    Slate = CHolographicSlate::CreateSlate(v9, *((struct CVisual **)this + 59), v10, v6, v2);
    v1 = Slate;
    if ( Slate < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Slate, 0x120u);
  }
  return v1;
}
