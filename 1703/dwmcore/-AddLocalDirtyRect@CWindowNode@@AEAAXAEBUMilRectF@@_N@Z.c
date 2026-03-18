/*
 * XREFs of ?AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z @ 0x18012A814
 * Callers:
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800537B0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z @ 0x1800D0400 (-ProcessVistaBltToken@CWindowNode@@QEAA_NT_ULARGE_INTEGER@@PEA_N1@Z.c)
 * Callees:
 *     ?ClearAllData@CDwmMetaRegion@@QEAAXXZ @ 0x18004FCFC (-ClearAllData@CDwmMetaRegion@@QEAAXXZ.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18006FBC0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800735BC (-Add@-$CMergedRectBase@$03@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x1800B779C (-NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z @ 0x1801591CC (-AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z.c)
 *     ?AddRegionRectangleContainingMove@CDwmMetaRegion@@QEAAJPEBUtagRECT@@@Z @ 0x1801599E4 (-AddRegionRectangleContainingMove@CDwmMetaRegion@@QEAAJPEBUtagRECT@@@Z.c)
 */

void __fastcall CWindowNode::AddLocalDirtyRect(CWindowNode *this, const struct MilRectF *a2, char a3)
{
  bool v3; // zf
  float v5; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm8_4
  float v9; // xmm9_4
  __int64 v10; // r8
  _BYTE *v11; // r9
  float v12; // xmm1_4
  float v13; // xmm7_4
  float v14; // xmm9_4
  float v15; // xmm0_4
  float v16; // xmm6_4
  float v17; // xmm8_4
  CDwmMetaRegion *v18; // rcx
  struct tagRECT v19; // [rsp+28h] [rbp-19h] BYREF
  float v20; // [rsp+38h] [rbp-9h] BYREF
  float v21; // [rsp+3Ch] [rbp-5h]
  float v22; // [rsp+40h] [rbp-1h]
  float v23; // [rsp+44h] [rbp+3h]

  v3 = (*((_BYTE *)this + 90) & 1) == 0;
  v5 = *(float *)a2;
  v7 = *((float *)a2 + 1);
  v8 = *((float *)a2 + 2);
  v9 = *((float *)a2 + 3);
  v20 = *(float *)a2;
  v21 = v7;
  v22 = v8;
  v23 = v9;
  if ( !v3 )
  {
    *((_DWORD *)this + 140) = 0;
    *((_DWORD *)this + 142) = 0;
    *((_DWORD *)this + 141) = 1;
    *((_BYTE *)this + 90) &= ~1u;
    CDwmMetaRegion::ClearAllData((CWindowNode *)((char *)this + 1008));
  }
  if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v20) )
  {
    v12 = (float)(*((_DWORD *)this + 152) - *((_DWORD *)this + 164));
    v13 = v7 + v12;
    v14 = v9 + v12;
    v15 = (float)(*((_DWORD *)this + 151) - *((_DWORD *)this + 163));
    v21 = v13;
    v23 = v14;
    v16 = v5 + v15;
    v17 = v8 + v15;
    v20 = v16;
    v22 = v17;
    if ( qword_18023E528 && CDisplaySet::NeedsDesktopMoves(qword_18023E528) )
    {
      v18 = (CWindowNode *)((char *)this + 1008);
      v19.left = (int)v16;
      v19.right = (int)v17;
      v19.top = (int)v13;
      v19.bottom = (int)v14;
      if ( a3 )
        CDwmMetaRegion::AddRegionRectangleContainingMove(v18, &v19);
      else
        CDwmMetaRegion::AddDirtyRectangle(v18, &v19);
    }
    CMergedRectBase<4>::Add((__int64)this + 496, &v20, v10, v11);
  }
}
