/*
 * XREFs of ?AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z @ 0x18009BB64
 * Callers:
 *     ?NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x180098B00 (-NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18009BC90 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z @ 0x180179680 (-ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036770 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180098274 (-Add@-$CMergedRectBase@$03@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x1800983A4 (-NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ.c)
 *     ?ClearAllData@CDwmMetaRegion@@QEAAXXZ @ 0x1800BB98C (-ClearAllData@CDwmMetaRegion@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z @ 0x18014E7E8 (-AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z.c)
 *     ?AddRegionRectangleContainingMove@CDwmMetaRegion@@QEAAJPEBUtagRECT@@@Z @ 0x18014EFFC (-AddRegionRectangleContainingMove@CDwmMetaRegion@@QEAAJPEBUtagRECT@@@Z.c)
 */

void __fastcall CWindowNode::AddLocalDirtyRect(CWindowNode *this, const struct MilRectF *a2, char a3)
{
  bool v3; // zf
  float v5; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm8_4
  float v9; // xmm9_4
  float v10; // xmm1_4
  float v11; // xmm7_4
  float v12; // xmm9_4
  float v13; // xmm0_4
  float v14; // xmm6_4
  float v15; // xmm8_4
  CDwmMetaRegion *v16; // rcx
  struct tagRECT v17; // [rsp+28h] [rbp-19h] BYREF
  float v18; // [rsp+38h] [rbp-9h] BYREF
  float v19; // [rsp+3Ch] [rbp-5h]
  float v20; // [rsp+40h] [rbp-1h]
  float v21; // [rsp+44h] [rbp+3h]

  v3 = (*((_BYTE *)this + 93) & 1) == 0;
  v5 = *(float *)a2;
  v7 = *((float *)a2 + 1);
  v8 = *((float *)a2 + 2);
  v9 = *((float *)a2 + 3);
  v18 = *(float *)a2;
  v19 = v7;
  v20 = v8;
  v21 = v9;
  if ( !v3 )
  {
    *((_DWORD *)this + 144) = 0;
    *((_DWORD *)this + 146) = 0;
    *((_DWORD *)this + 145) = 1;
    *((_BYTE *)this + 93) &= ~1u;
    CDwmMetaRegion::ClearAllData((CWindowNode *)((char *)this + 1032));
  }
  if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v18) )
  {
    v10 = (float)(*((_DWORD *)this + 159) - *((_DWORD *)this + 171));
    v11 = v7 + v10;
    v12 = v9 + v10;
    v13 = (float)(*((_DWORD *)this + 158) - *((_DWORD *)this + 170));
    v19 = v11;
    v21 = v12;
    v14 = v5 + v13;
    v15 = v8 + v13;
    v18 = v14;
    v20 = v15;
    if ( qword_18026EEA8 && CDisplaySet::NeedsDesktopMoves(qword_18026EEA8) )
    {
      v16 = (CWindowNode *)((char *)this + 1032);
      v17.left = (int)v14;
      v17.right = (int)v15;
      v17.top = (int)v11;
      v17.bottom = (int)v12;
      if ( a3 )
        CDwmMetaRegion::AddRegionRectangleContainingMove(v16, &v17);
      else
        CDwmMetaRegion::AddDirtyRectangle(v16, &v17);
    }
    CMergedRectBase<4>::Add((__int64)this + 512, &v18);
  }
}
