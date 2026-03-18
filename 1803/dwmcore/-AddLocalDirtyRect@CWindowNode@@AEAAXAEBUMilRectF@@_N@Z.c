/*
 * XREFs of ?AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z @ 0x18013C3C0
 * Callers:
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180092DA0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180064E70 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x1800B7868 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800BD468 (-Add@-$CMergedRectBase@$03@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?ClearAllData@CDwmMetaRegion@@QEAAXXZ @ 0x1800C23B0 (-ClearAllData@CDwmMetaRegion@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z @ 0x180178038 (-AddDirtyRectangle@CDwmMetaRegion@@QEAAJPEAUtagRECT@@@Z.c)
 *     ?AddRegionRectangleContainingMove@CDwmMetaRegion@@QEAAJPEBUtagRECT@@@Z @ 0x180178848 (-AddRegionRectangleContainingMove@CDwmMetaRegion@@QEAAJPEBUtagRECT@@@Z.c)
 */

void __fastcall CWindowNode::AddLocalDirtyRect(CWindowNode *this, const struct MilRectF *a2, char a3)
{
  bool v3; // zf
  float v5; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm8_4
  float v9; // xmm9_4
  float v10; // xmm3_4
  float v11; // xmm1_4
  float v12; // xmm3_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  __int64 v16; // rdx
  __int64 v17; // r9
  int v18; // edx
  __int64 v19; // r8
  CDwmMetaRegion *v20; // rcx
  struct tagRECT v21; // [rsp+28h] [rbp-19h] BYREF
  struct D2D_RECT_F v22; // [rsp+38h] [rbp-9h] BYREF

  v3 = (*((_BYTE *)this + 93) & 0x10) == 0;
  v5 = *(float *)a2;
  v7 = *((float *)a2 + 1);
  v8 = *((float *)a2 + 2);
  v9 = *((float *)a2 + 3);
  v22.left = *(FLOAT *)a2;
  v22.top = v7;
  v22.right = v8;
  v22.bottom = v9;
  if ( !v3 )
  {
    *((_DWORD *)this + 146) = 0;
    *((_DWORD *)this + 148) = 0;
    *((_DWORD *)this + 147) = 1;
    *((_BYTE *)this + 93) &= ~0x10u;
    CDwmMetaRegion::ClearAllData((CWindowNode *)((char *)this + 936));
  }
  if ( !IsEmpty(&v22) )
  {
    v10 = (float)(*((_DWORD *)this + 161) - *((_DWORD *)this + 173));
    v11 = v10 + v9;
    v12 = v10 + v7;
    v13 = (float)(*((_DWORD *)this + 160) - *((_DWORD *)this + 172));
    v22.bottom = v11;
    v22.top = v12;
    v14 = v13 + v5;
    v15 = v13 + v8;
    v22.left = v14;
    v22.right = v15;
    if ( qword_1802D6428 )
    {
      v16 = 0LL;
      if ( *((_DWORD *)qword_1802D6428 + 18) )
      {
        v17 = *((_QWORD *)qword_1802D6428 + 6);
        while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v17 + 8 * v16)) )
        {
          v16 = (unsigned int)(v18 + 1);
          if ( (unsigned int)v16 >= *(_DWORD *)(v19 + 72) )
            goto LABEL_13;
        }
        v20 = (CWindowNode *)((char *)this + 936);
        v21.left = (int)v14;
        v21.right = (int)v15;
        v21.top = (int)v12;
        v21.bottom = (int)v11;
        if ( a3 )
          CDwmMetaRegion::AddRegionRectangleContainingMove(v20, &v21);
        else
          CDwmMetaRegion::AddDirtyRectangle(v20, &v21);
      }
    }
LABEL_13:
    CMergedRectBase<4>::Add((__int64)this + 520, &v22.left);
  }
}
