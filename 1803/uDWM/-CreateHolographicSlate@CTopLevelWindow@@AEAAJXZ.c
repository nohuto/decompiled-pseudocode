/*
 * XREFs of ?CreateHolographicSlate@CTopLevelWindow@@AEAAJXZ @ 0x1800818A8
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18001DD20 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18000FEC0 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateSlate@CHolographicSlate@@SAJQEAUHWND__@@PEAVCVisual@@IIPEAPEAV1@@Z @ 0x180076A5C (-CreateSlate@CHolographicSlate@@SAJQEAUHWND__@@PEAVCVisual@@IIPEAPEAV1@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::CreateHolographicSlate(CTopLevelWindow *this)
{
  unsigned int v1; // edi
  struct CHolographicSlate **v2; // rsi
  struct CVisual *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // r9d
  int v8; // r8d
  int v9; // eax
  HWND v10; // rcx
  unsigned int v11; // r8d
  int Slate; // eax

  v1 = 0;
  v2 = (struct CHolographicSlate **)((char *)this + 784);
  if ( !*((_QWORD *)this + 98) )
  {
    v4 = (struct CVisual *)*((_QWORD *)this + 59);
    v5 = *((_QWORD *)v4 + 3);
    *((_QWORD *)this + 99) = v5;
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      VisualCollection::Remove((VisualCollection *)(*((_QWORD *)this + 99) + 32LL), *((struct CVisual **)this + 59));
      v4 = (struct CVisual *)*((_QWORD *)this + 59);
    }
    v6 = *((_QWORD *)this + 90);
    v7 = 0;
    v8 = *(_DWORD *)(v6 + 208) - *(_DWORD *)(v6 + 200);
    v9 = *(_DWORD *)(v6 + 204) - *(_DWORD *)(v6 + 196);
    v10 = *(HWND *)(v6 + 40);
    if ( v8 >= 0 )
      v7 = v8;
    v11 = 0;
    if ( v9 >= 0 )
      v11 = v9;
    Slate = CHolographicSlate::CreateSlate(v10, v4, v11, v7, v2);
    v1 = Slate;
    if ( Slate < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, Slate, 0x15Fu);
  }
  return v1;
}
