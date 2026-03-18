/*
 * XREFs of ?ProcessNotifyDxImmediateUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXIMMEDIATEUPDATE@@@Z @ 0x180179058
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x180051190 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ClipToNode@CWindowNode@@AEAA_NAEBUtagRECT@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009BAAC (-ClipToNode@CWindowNode@@AEAA_NAEBUtagRECT@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180165A80 (-ProcessVistaBltToken@CFlipChain@@QEAAXT_ULARGE_INTEGER@@PEAXPEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z @ 0x180166688 (-UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z.c)
 *     McTemplateU0xxxn @ 0x18017A01C (McTemplateU0xxxn.c)
 *     ?Create@CDxAccumulationContext@@SAJPEAVCWindowNode@@PEAPEAV1@@Z @ 0x18018B77C (-Create@CDxAccumulationContext@@SAJPEAVCWindowNode@@PEAPEAV1@@Z.c)
 *     ?UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z @ 0x18018B8C4 (-UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessNotifyDxImmediateUpdate(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_NOTIFYDXIMMEDIATEUPDATE *a3)
{
  __int64 v5; // rdi
  int v6; // r15d
  unsigned int v8; // esi
  int v9; // r12d
  unsigned int v10; // edx
  DWORD v11; // r9d
  __int64 Resource; // rax
  CFlipChain *v13; // rbp
  CDxAccumulationContext **v14; // rbx
  char v15; // al
  int updated; // eax
  bool v17; // dl
  CDxAccumulationContext *v18; // rcx
  CWindowNode *v19; // rcx
  union _ULARGE_INTEGER v20; // rbx
  unsigned int v22; // [rsp+20h] [rbp-88h]
  _DWORD v23[8]; // [rsp+48h] [rbp-60h] BYREF

  v5 = 0LL;
  v6 = *((_DWORD *)a3 + 9) & 0x20;
  v8 = 0;
  v9 = *((_DWORD *)a3 + 9) & 0x40;
  CWindowNode::ClipToNode((__int64)this, (const RECT *)((char *)a3 + 40), (__int64)v23);
  v10 = *((_DWORD *)a3 + 2);
  if ( !v10 )
  {
    v8 = -2147024809;
    v22 = 819;
    v11 = -2147024809;
LABEL_3:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, v22);
    return v8;
  }
  Resource = CResourceTable::GetResource((__int64)a2, v10, 0x32u);
  v13 = (CFlipChain *)(Resource - 16);
  if ( !Resource )
    v13 = 0LL;
  v14 = (CDxAccumulationContext **)((char *)this + 1000);
  v15 = 0;
  if ( *((_QWORD *)this + 125) )
    goto LABEL_33;
  if ( !v9 )
  {
    updated = CDxAccumulationContext::Create(this, (struct CDxAccumulationContext **)this + 125);
    v8 = updated;
    if ( updated < 0 )
    {
      v22 = 831;
      goto LABEL_17;
    }
    v15 = 1;
  }
  if ( *v14 )
  {
LABEL_33:
    if ( v6 || (v17 = 0, v15) )
      v17 = 1;
    updated = CDxAccumulationContext::UpdateDxClipShape(*v14, v17);
    v8 = updated;
    if ( updated < 0 )
    {
      v22 = 840;
LABEL_17:
      v11 = updated;
      goto LABEL_3;
    }
  }
  if ( !v6 )
    return v8;
  v18 = *v14;
  if ( !*v14 )
  {
    if ( !v13 )
      return v8;
    *((_BYTE *)this + 1008) = 0;
    v19 = this;
    goto LABEL_24;
  }
  if ( !*((_BYTE *)v18 + 16) )
  {
    *((_BYTE *)v18 + 16) = 1;
    v19 = *(CWindowNode **)v18;
    *((_BYTE *)v19 + 1008) = 0;
LABEL_24:
    CVisual::PropagateFlags((__int64)v19, 5u, 0);
  }
  if ( v13 )
  {
    v20 = *(union _ULARGE_INTEGER *)((char *)a3 + 28);
    CFlipChain::UpdatePending(v13, v20);
    CFlipChain::ProcessVistaBltToken(v13, v20.QuadPart, *(_QWORD *)((char *)a3 + 12), (__int64)v23);
    do
    {
      v23[v5 + 4] = (int)*(float *)&v23[v5];
      ++v5;
    }
    while ( v5 < 4 );
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0xxxn(
        (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
        (unsigned int)&EVTDESC_ETWGUID_FLIPCHAIN_Dirty,
        v20.HighPart,
        *((_QWORD *)this + 74),
        v20.LowPart);
  }
  return v8;
}
