/*
 * XREFs of ?_WindowEnumCallback@CInplaceResize@@UEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x18009BC10
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x1800059B0 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180037B7C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPVLTarget@CInplaceResize@@UEAAHW4DWMTRANSITION_TARGET@@@Z @ 0x1800964A0 (-GetPVLTarget@CInplaceResize@@UEAAHW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?ResizeToSnapshot@CStoryboard@@SAXPEAUHWND__@@AEBUtagRECT@@PEAU3@@Z @ 0x1800977BC (-ResizeToSnapshot@CStoryboard@@SAXPEAUHWND__@@AEBUtagRECT@@PEAU3@@Z.c)
 */

char __fastcall CInplaceResize::_WindowEnumCallback(CStoryboard *a1, __int64 a2, char a3, int *a4)
{
  int v7; // esi
  int v8; // edx
  int v9; // ebx
  int v10; // r15d
  int PVLTarget; // eax
  int v12; // r15d
  int v13; // eax
  struct tagPOINT **v14; // rdi
  int v15; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  LONG top; // ecx
  int v22; // eax
  struct tagPOINT *v23; // rcx
  struct tagRECT v25; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v26; // [rsp+60h] [rbp-20h] BYREF
  struct tagRECT v27; // [rsp+70h] [rbp-10h] BYREF
  struct CAnimationComponent *v28; // [rsp+C8h] [rbp+48h] BYREF

  v28 = 0LL;
  v7 = 0;
  if ( (a3 & 1) == 0 )
    goto LABEL_25;
  v8 = *(_DWORD *)(a2 + 600);
  v9 = v8 & 0xFFF;
  v10 = v8;
  PVLTarget = CInplaceResize::GetPVLTarget((__int64)a1, v8);
  v12 = v10 & 0x20000000;
  v13 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(
          a1,
          (struct CWindowData *)a2,
          v12 != 0,
          PVLTarget,
          0LL,
          0LL,
          -1,
          1,
          &v28);
  v14 = (struct tagPOINT **)v28;
  v7 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v13, 0x6F6u);
    goto LABEL_23;
  }
  v27 = *(struct tagRECT *)((char *)v28 + 88);
  v25 = v27;
  if ( v12 )
  {
    CStoryboard::ResizeToSnapshot(*(HWND *)(a2 + 40), &v27, &v26);
    v25 = v26;
    v15 = v9 - 48;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          if ( v17 == 1 )
          {
            v18 = v26.right - v26.left;
            v25.right = v27.right;
            if ( v26.right - v26.left < 0 )
              v18 = 0;
            v25.left = v27.right - v18;
          }
        }
        else
        {
          v19 = v26.right - v26.left;
          v25.left = v27.left;
          if ( v26.right - v26.left < 0 )
            v19 = 0;
          v25.right = v27.left + v19;
        }
        goto LABEL_22;
      }
      v20 = v26.bottom - v26.top;
      v25.bottom = v27.bottom;
      if ( v26.bottom - v26.top < 0 )
        v20 = 0;
      top = v27.bottom - v20;
    }
    else
    {
      v22 = v26.bottom - v26.top;
      top = v27.top;
      if ( v26.bottom - v26.top < 0 )
        v22 = 0;
      v25.bottom = v27.top + v22;
    }
    v25.top = top;
  }
LABEL_22:
  CAnimatedTransitionVisual::SetBeginRect(v14[5], &v25);
  v23 = v14[5];
  *(struct tagRECT *)&v23[109].x = v25;
  CVisual::SetDirtyFlags((CVisual *)&v23[1], 4096);
LABEL_23:
  if ( v14 )
    CBaseObject::Release((CBaseObject *)v14);
LABEL_25:
  *a4 = v7;
  return 1;
}
