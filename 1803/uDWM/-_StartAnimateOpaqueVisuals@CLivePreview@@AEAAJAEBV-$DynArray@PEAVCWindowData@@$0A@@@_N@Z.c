/*
 * XREFs of ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x180072B44
 * Callers:
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z @ 0x180070F28 (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020D08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?UpdateOpacity@CVisual@@UEAAJXZ @ 0x180026AE0 (-UpdateOpacity@CVisual@@UEAAJXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x18002F980 (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_ContainsWindow@CLivePreview@@AEAA_NAEBV?$DynArray@PEAVCWindowData@@$0A@@@PEAUHWND__@@@Z @ 0x1800719D4 (-_ContainsWindow@CLivePreview@@AEAA_NAEBV-$DynArray@PEAVCWindowData@@$0A@@@PEAUHWND__@@@Z.c)
 *     ?_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ @ 0x180072A24 (-_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x18008253C (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180084A24 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall CLivePreview::_StartAnimateOpaqueVisuals(CLivePreview *this, __int64 a2, char a3)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  CLivePreview *v7; // rbp
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rbx
  int updated; // eax
  __int64 v12; // r14
  __int64 v13; // r8
  __int64 v14; // r8
  int v15; // eax
  int started; // eax
  __int128 i; // [rsp+30h] [rbp-48h] BYREF
  int v19; // [rsp+40h] [rbp-38h]
  int v20; // [rsp+44h] [rbp-34h]
  int v21; // [rsp+48h] [rbp-30h]
  struct CWindowData *MDIOwner; // [rsp+80h] [rbp+8h] BYREF

  v3 = 0;
  v4 = 0LL;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v7 = this;
  for ( i = 0LL; (unsigned int)v4 < *(_DWORD *)(a2 + 24); v4 = (unsigned int)(v4 + 1) )
  {
    MDIOwner = CWindowData::GetMDIOwner(*(CWindowData **)(*(_QWORD *)a2 + 8 * v4));
    if ( MDIOwner )
      DynArray<CWindowData *,0>::AddMultipleAndSet((__int64)&i, &MDIOwner);
  }
  v8 = *((_DWORD *)v7 + 90) - 1;
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = 48LL * v8;
    do
    {
      if ( !a3 || (this = (CLivePreview *)*((_QWORD *)v7 + 42), *(_DWORD *)((char *)this + v10 + 40)) )
      {
        v12 = *((_QWORD *)v7 + 42);
        if ( CLivePreview::_ContainsWindow((__int64)this, a2, *(_QWORD *)(v10 + v12 + 24))
          || CLivePreview::_ContainsWindow((__int64)this, (__int64)&i, v13)
          || CLivePreview::_ContainsWindow((__int64)this, a2, *(_QWORD *)(v10 + v12 + 32))
          || CLivePreview::_ContainsWindow((__int64)this, (__int64)&i, v14) )
        {
          if ( *(_DWORD *)(v10 + v12 + 40) == 1 )
          {
            started = CTopLevelWindow::StartLivePreviewAnimation(*(_QWORD *)(v10 + v12), 4LL);
            v3 = started;
            if ( started < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x201u);
              goto LABEL_24;
            }
            *(_DWORD *)(v10 + *((_QWORD *)v7 + 42) + 40) = 0;
          }
        }
        else if ( !*(_DWORD *)(v10 + v12 + 40) )
        {
          v15 = CTopLevelWindow::StartLivePreviewAnimation(*(_QWORD *)(v10 + v12), 3LL);
          v3 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x20Au);
            goto LABEL_24;
          }
          *(_DWORD *)(v10 + *((_QWORD *)v7 + 42) + 40) = 1;
        }
      }
      else
      {
        updated = CVisual::UpdateOpacity(*(CVisual **)((char *)this + v10));
        v3 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x1F5u);
          goto LABEL_24;
        }
      }
      v10 -= 48LL;
      --v9;
    }
    while ( v9 >= 0 );
  }
  CLivePreview::_ShowHideImmersiveBackground(v7);
LABEL_24:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&i);
  return v3;
}
