/*
 * XREFs of ?NotifyDirtySurface@CWindowNode@@QEAAJPEBUtagRECT@@I_N1@Z @ 0x180098B00
 * Callers:
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z @ 0x18009D64C (-AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z @ 0x180096874 (-ProcessGdiUpdate@CDxAccumulationContext@@SAJPEAVCWindowNode@@_N@Z.c)
 *     ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x180098DC8 (-ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ.c)
 *     ?ClipToNode@CWindowNode@@AEAA_NAEBUtagRECT@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009BAAC (-ClipToNode@CWindowNode@@AEAA_NAEBUtagRECT@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z @ 0x18009BB64 (-AddLocalDirtyRect@CWindowNode@@AEAAXAEBUMilRectF@@_N@Z.c)
 *     ?ClearAllData@CDwmMetaRegion@@QEAAXXZ @ 0x1800BB98C (-ClearAllData@CDwmMetaRegion@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     McTemplateU0xnn @ 0x180179F3C (McTemplateU0xnn.c)
 */

__int64 __fastcall CWindowNode::NotifyDirtySurface(
        CWindowNode *this,
        const struct tagRECT *a2,
        unsigned int a3,
        unsigned __int8 a4,
        bool a5)
{
  signed int v9; // eax
  int v10; // r9d
  unsigned int v11; // esi
  unsigned int i; // edi
  unsigned int v13; // edx
  int v15; // [rsp+28h] [rbp-60h]
  _BYTE v16[16]; // [rsp+40h] [rbp-48h] BYREF

  if ( (*((_BYTE *)this + 93) & 1) != 0 )
  {
    *((_DWORD *)this + 144) = 0;
    *((_DWORD *)this + 146) = 0;
    *((_DWORD *)this + 145) = 1;
    *((_BYTE *)this + 93) &= ~1u;
    CDwmMetaRegion::ClearAllData((CWindowNode *)((char *)this + 1032));
  }
  if ( *((_BYTE *)this + 1010) )
    *((_BYTE *)this + 1011) = 0;
  v9 = CDxAccumulationContext::ProcessGdiUpdate(this, 0);
  v11 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x267u);
  }
  else
  {
    for ( i = 0; i < a3; ++i )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0xnn(
          (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
          (unsigned int)&EVTDESC_ETWGUID_DWMUPDATEWINDOW,
          *((_QWORD *)this + 74),
          v10,
          (__int64)&a2[i],
          v15,
          (__int64)this + 680);
      if ( !*((_BYTE *)this + 1010)
        && (!*((_BYTE *)this + 1009) || !a5)
        && (unsigned __int8)CWindowNode::ClipToNode(this, &a2[i], v16) )
      {
        CWindowNode::AddLocalDirtyRect(this, (const struct MilRectF *)v16, 0);
      }
    }
    if ( !*((_BYTE *)this + 1010) && *((_BYTE *)this + 1009) && a5 )
    {
      *((_BYTE *)this + 1008) = 0;
      v13 = 5;
    }
    else
    {
      v13 = a4 + 8;
    }
    CVisual::PropagateFlags((__int64)this, v13, 0);
    CWindowNode::ProcessReadyGdiSpriteBitmaps(this);
  }
  return v11;
}
