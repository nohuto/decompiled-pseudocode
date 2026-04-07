/*
 * XREFs of ?_WindowEnumCallback@CTabSwitch@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800A2580
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180009A0C (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z @ 0x180011CBC (-SetBeginAlpha@CAnimatedTransitionVisual@@QEAAXM@Z.c)
 *     ?SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z @ 0x180011D0C (-SetBeginRect@CAnimatedTransitionVisual@@QEAAXPEBUtagRECT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CTabSwitch::_WindowEnumCallback(CStoryboard *a1, struct CWindowData *a2, char a3, int *a4)
{
  int v4; // edi
  unsigned int v8; // edx
  char v9; // bl
  int v10; // eax
  int v11; // eax
  CAnimatedTransitionVisual **v12; // rbx
  struct tagRECT v13; // xmm6
  struct tagPOINT *v14; // rcx
  CAnimatedTransitionVisual *v15; // rcx
  float v16; // xmm6_4
  CAnimatedTransitionVisual *v17; // rcx
  char result; // al
  struct tagRECT v19; // [rsp+50h] [rbp-38h] BYREF
  struct CAnimationComponent *v20; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0;
  v20 = 0LL;
  if ( (a3 & 1) != 0 )
  {
    v8 = *((_DWORD *)a2 + 150);
    if ( (v8 & 0xFFF) - 2 <= 1 )
    {
      v9 = ~(v8 >> 29) & 1;
      v10 = (*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)a1 + 88LL))(a1);
      v11 = CStoryboard::_CreateAndAddAnimationComponentControlReuse(a1, a2, 1, v10, 0LL, 0LL, 0xFFFFFFFF, v9, &v20);
      v12 = (CAnimatedTransitionVisual **)v20;
      v4 = v11;
      if ( v11 >= 0 )
      {
        if ( !v20 )
          goto LABEL_12;
        v14 = (struct tagPOINT *)*((_QWORD *)v20 + 5);
        v19 = *(struct tagRECT *)((char *)v20 + 88);
        v13 = v19;
        CAnimatedTransitionVisual::SetBeginRect(v14, &v19);
        v15 = v12[5];
        *(struct tagRECT *)((char *)v15 + 872) = v13;
        CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v15 + 8), 4096);
        if ( (*((_DWORD *)a2 + 150) & 0xFFF) == 3 )
          v16 = 0.0;
        else
          v16 = FLOAT_0_99000001;
        CAnimatedTransitionVisual::SetBeginAlpha(v12[5], v16);
        v17 = v12[5];
        *((float *)v17 + 233) = v16;
        CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)v17 + 8), 4096);
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v11, 0x1387u);
      }
      if ( v12 )
        CBaseObject::Release((CBaseObject *)v12);
    }
  }
LABEL_12:
  result = 1;
  *a4 = v4;
  return result;
}
