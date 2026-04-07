/*
 * XREFs of ?_WindowEnumCallback@CInplaceResize@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800A13F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180009A0C (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180011D0C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetPVLTarget@CInplaceResize@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x18009B8A0 (-GetPVLTarget@CInplaceResize@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?ResizeToSnapshot@CStoryboard@@SAXPEAUHWND__@@AEBUtagRECT@@PEAU3@@Z @ 0x18009CE0C (-ResizeToSnapshot@CStoryboard@@SAXPEAUHWND__@@AEBUtagRECT@@PEAU3@@Z.c)
 */

char __fastcall CInplaceResize::_WindowEnumCallback(CStoryboard *a1, __int64 a2, char a3, int *a4)
{
  int v4; // esi
  int v8; // ebx
  int PVLTarget; // eax
  int v10; // eax
  struct tagPOINT **v11; // rdi
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  LONG top; // edx
  int v19; // ecx
  struct tagPOINT *v20; // rcx
  struct tagRECT v22; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v23; // [rsp+60h] [rbp-20h] BYREF
  struct tagRECT v24; // [rsp+70h] [rbp-10h] BYREF
  struct CAnimationComponent *v25; // [rsp+C8h] [rbp+48h] BYREF

  v4 = 0;
  v25 = 0LL;
  if ( (a3 & 1) == 0 )
    goto LABEL_25;
  v8 = *(_DWORD *)(a2 + 600);
  PVLTarget = CInplaceResize::GetPVLTarget((__int64)a1, v8);
  v10 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
          a1,
          (struct CWindowData *)a2,
          (v8 & 0x20000000) != 0,
          PVLTarget,
          0LL,
          0LL,
          0xFFFFFFFF,
          1,
          &v25);
  v11 = (struct tagPOINT **)v25;
  v4 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v10, 0x6F6u);
    goto LABEL_23;
  }
  v24 = *(struct tagRECT *)((char *)v25 + 88);
  v22 = v24;
  if ( (v8 & 0x20000000) != 0 )
  {
    CStoryboard::ResizeToSnapshot(*(HWND *)(a2 + 40), &v24, &v23);
    v22 = v23;
    v12 = (v8 & 0xFFF) - 48;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          if ( v14 == 1 )
          {
            v15 = 0;
            v22.right = v24.right;
            if ( v23.right - v23.left >= 0 )
              v15 = v23.right - v23.left;
            v22.left = v24.right - v15;
          }
        }
        else
        {
          v16 = 0;
          v22.left = v24.left;
          if ( v23.right - v23.left >= 0 )
            v16 = v23.right - v23.left;
          v22.right = v24.left + v16;
        }
        goto LABEL_22;
      }
      v17 = 0;
      v22.bottom = v24.bottom;
      if ( v23.bottom - v23.top >= 0 )
        v17 = v23.bottom - v23.top;
      top = v24.bottom - v17;
    }
    else
    {
      v19 = 0;
      top = v24.top;
      if ( v23.bottom - v23.top >= 0 )
        v19 = v23.bottom - v23.top;
      v22.bottom = v24.top + v19;
    }
    v22.top = top;
  }
LABEL_22:
  CAnimatedTransitionVisual::SetBeginRect(v11[5], &v22);
  v20 = v11[5];
  *(struct tagRECT *)&v20[109].x = v22;
  CVisual::SetDirtyFlags((CVisual *)&v20[1], 4096);
LABEL_23:
  if ( v11 )
    CBaseObject::Release((CBaseObject *)v11);
LABEL_25:
  *a4 = v4;
  return 1;
}
