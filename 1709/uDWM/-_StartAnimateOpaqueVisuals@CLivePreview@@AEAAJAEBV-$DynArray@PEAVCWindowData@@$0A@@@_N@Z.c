/*
 * XREFs of ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x18006BD38
 * Callers:
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z @ 0x18006A20C (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?UpdateOpacity@CVisual@@UEAAJXZ @ 0x180018FF0 (-UpdateOpacity@CVisual@@UEAAJXZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020A08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x18002C250 (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ?_ContainsWindow@CLivePreview@@AEAA_NAEBV?$DynArray@PEAVCWindowData@@$0A@@@PEAUHWND__@@@Z @ 0x18006AC2C (-_ContainsWindow@CLivePreview@@AEAA_NAEBV-$DynArray@PEAVCWindowData@@$0A@@@PEAUHWND__@@@Z.c)
 *     ?_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ @ 0x18006BC18 (-_ShowHideImmersiveBackground@CLivePreview@@AEAAXXZ.c)
 *     ?StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z @ 0x1800793A0 (-StartLivePreviewAnimation@CTopLevelWindow@@QEAAJW4Enum@LivePreviewAnimation@@@Z.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x18007B644 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall CLivePreview::_StartAnimateOpaqueVisuals(CLivePreview *this, __int64 a2, char a3)
{
  unsigned int v3; // edi
  __int64 v4; // rbx
  CLivePreview *v7; // rbp
  unsigned int v8; // r8d
  int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // rbx
  int updated; // eax
  __int64 v13; // r14
  __int64 v14; // r8
  __int64 v15; // r8
  int v16; // eax
  int started; // eax
  __int128 i; // [rsp+30h] [rbp-48h] BYREF
  int v20; // [rsp+40h] [rbp-38h]
  int v21; // [rsp+44h] [rbp-34h]
  int v22; // [rsp+48h] [rbp-30h]
  struct CWindowData *MDIOwner; // [rsp+80h] [rbp+8h] BYREF

  v3 = 0;
  v4 = 0LL;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v7 = this;
  for ( i = 0LL; (unsigned int)v4 < *(_DWORD *)(a2 + 24); v4 = (unsigned int)(v4 + 1) )
  {
    MDIOwner = CWindowData::GetMDIOwner(*(CWindowData **)(*(_QWORD *)a2 + 8 * v4));
    if ( MDIOwner )
      DynArray<CWindowData *,0>::AddMultipleAndSet((__int64)&i, &MDIOwner, v8);
  }
  v9 = *((_DWORD *)v7 + 90) - 1;
  v10 = v9;
  if ( v9 >= 0 )
  {
    v11 = 48LL * v9;
    do
    {
      if ( !a3 || (this = (CLivePreview *)*((_QWORD *)v7 + 42), *(_DWORD *)((char *)this + v11 + 40)) )
      {
        v13 = *((_QWORD *)v7 + 42);
        if ( CLivePreview::_ContainsWindow((__int64)this, a2, *(_QWORD *)(v11 + v13 + 24))
          || CLivePreview::_ContainsWindow((__int64)this, (__int64)&i, v14)
          || CLivePreview::_ContainsWindow((__int64)this, a2, *(_QWORD *)(v11 + v13 + 32))
          || CLivePreview::_ContainsWindow((__int64)this, (__int64)&i, v15) )
        {
          if ( *(_DWORD *)(v11 + v13 + 40) == 1 )
          {
            started = CTopLevelWindow::StartLivePreviewAnimation(*(_QWORD *)(v11 + v13), 4LL);
            v3 = started;
            if ( started < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, started, 0x200u);
              goto LABEL_24;
            }
            *(_DWORD *)(v11 + *((_QWORD *)v7 + 42) + 40) = 0;
          }
        }
        else if ( !*(_DWORD *)(v11 + v13 + 40) )
        {
          v16 = CTopLevelWindow::StartLivePreviewAnimation(*(_QWORD *)(v11 + v13), 3LL);
          v3 = v16;
          if ( v16 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x209u);
            goto LABEL_24;
          }
          *(_DWORD *)(v11 + *((_QWORD *)v7 + 42) + 40) = 1;
        }
      }
      else
      {
        updated = CVisual::UpdateOpacity(*(CVisual **)((char *)this + v11));
        v3 = updated;
        if ( updated < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x1F4u);
          goto LABEL_24;
        }
      }
      v11 -= 48LL;
      --v10;
    }
    while ( v10 >= 0 );
  }
  CLivePreview::_ShowHideImmersiveBackground(v7);
LABEL_24:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&i);
  return v3;
}
