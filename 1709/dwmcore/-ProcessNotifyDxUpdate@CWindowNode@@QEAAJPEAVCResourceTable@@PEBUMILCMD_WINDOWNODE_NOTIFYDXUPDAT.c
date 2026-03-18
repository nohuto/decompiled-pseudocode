/*
 * XREFs of ?ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDATE@@@Z @ 0x180179234
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ClipToNode@CWindowNode@@AEAA_NAEBUtagRECT@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009BAAC (-ClipToNode@CWindowNode@@AEAA_NAEBUtagRECT@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ?RegisterForDxUpdates@CLegacySurfaceManager@@QEAAJPEAVCWindowNode@@K@Z @ 0x18013B62C (-RegisterForDxUpdates@CLegacySurfaceManager@@QEAAJPEAVCWindowNode@@K@Z.c)
 *     ?UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z @ 0x180166688 (-UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UPendingDxUpdate@CWindowNode@@$0A@@@QEAAJPEFBUPendingDxUpdate@CWindowNode@@I@Z @ 0x1801787F0 (-AddMultipleAndSet@-$DynArray@UPendingDxUpdate@CWindowNode@@$0A@@@QEAAJPEFBUPendingDxUpdate@CWin.c)
 *     ?FindElement@?$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAPEAVTokenToUpdateListRecord@CWindowNode@@K@Z @ 0x180178990 (-FindElement@-$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAPEAVTokenToUpdateLi.c)
 *     ?FlushVistaBltTokens@CWindowNode@@QEAAXXZ @ 0x1801789D4 (-FlushVistaBltTokens@CWindowNode@@QEAAXXZ.c)
 *     ?ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ @ 0x1801798FC (-ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ.c)
 *     McTemplateU0xxxn @ 0x18017A01C (McTemplateU0xxxn.c)
 *     ?Create@CDxAccumulationContext@@SAJPEAVCWindowNode@@PEAPEAV1@@Z @ 0x18018B77C (-Create@CDxAccumulationContext@@SAJPEAVCWindowNode@@PEAPEAV1@@Z.c)
 *     ?UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z @ 0x18018B8C4 (-UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessNotifyDxUpdate(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_NOTIFYDXUPDATE *a3)
{
  unsigned int v6; // ebx
  unsigned int v7; // edx
  DWORD v8; // r9d
  __int64 Resource; // rax
  __int64 v10; // rsi
  char v11; // r15
  CDxAccumulationContext **v12; // r14
  bool v13; // dl
  int updated; // eax
  __int64 v15; // rax
  union _ULARGE_INTEGER v16; // rdx
  unsigned int v17; // r8d
  char *Element; // r14
  _QWORD *v19; // rsi
  signed int v20; // eax
  int v21; // r8d
  int v22; // eax
  __int64 v23; // rdx
  unsigned int v25; // [rsp+20h] [rbp-B9h]
  unsigned int Buffer; // [rsp+40h] [rbp-99h] BYREF
  __int64 v27; // [rsp+48h] [rbp-91h]
  void *v28[4]; // [rsp+50h] [rbp-89h] BYREF
  char v29[8]; // [rsp+70h] [rbp-69h] BYREF
  unsigned int v30[2]; // [rsp+78h] [rbp-61h]
  __int64 v31; // [rsp+80h] [rbp-59h]
  __int64 v32; // [rsp+88h] [rbp-51h]
  __int128 v33; // [rsp+90h] [rbp-49h]
  int v34; // [rsp+A0h] [rbp-39h]
  void *v35[2]; // [rsp+A8h] [rbp-31h] BYREF
  int v36; // [rsp+B8h] [rbp-21h]
  int v37; // [rsp+BCh] [rbp-1Dh]
  int v38; // [rsp+C0h] [rbp-19h]
  int v39; // [rsp+D0h] [rbp-9h]
  int v40; // [rsp+D4h] [rbp-5h]
  int v41; // [rsp+D8h] [rbp-1h]
  int v42; // [rsp+DCh] [rbp+3h]
  __int128 v43; // [rsp+E0h] [rbp+7h] BYREF

  v6 = 0;
  CWindowNode::ClipToNode((__int64)this, (const RECT *)((char *)a3 + 40), (__int64)&v43);
  v7 = *((_DWORD *)a3 + 2);
  if ( v7 )
  {
    Resource = CResourceTable::GetResource((__int64)a2, v7, 0x32u);
    if ( Resource )
      v10 = Resource - 16;
    else
      v10 = 0LL;
    v11 = 0;
    v12 = (CDxAccumulationContext **)((char *)this + 1000);
    v13 = 0;
    if ( !*((_QWORD *)this + 125) )
    {
      updated = CDxAccumulationContext::Create(this, (struct CDxAccumulationContext **)this + 125);
      v6 = updated;
      if ( updated < 0 )
      {
        v25 = 706;
        goto LABEL_14;
      }
      v13 = 1;
    }
    if ( *v12 )
    {
      updated = CDxAccumulationContext::UpdateDxClipShape(*v12, v13);
      v6 = updated;
      if ( updated < 0 )
      {
        v25 = 715;
LABEL_14:
        v8 = updated;
        goto LABEL_3;
      }
    }
    if ( !v10 )
      return v6;
    v15 = *(_QWORD *)((char *)a3 + 20);
    v16 = *(union _ULARGE_INTEGER *)((char *)a3 + 28);
    v35[0] = 0LL;
    v35[1] = 0LL;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v31 = v15;
    v32 = *(_QWORD *)((char *)a3 + 12);
    v34 = *((_DWORD *)a3 + 15);
    v29[0] = 0;
    v33 = v43;
    *(union _ULARGE_INTEGER *)v30 = v16;
    CFlipChain::UpdatePending((CFlipChain *)v10, v16);
    Element = (char *)CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::FindElement(
                        (struct _RTL_GENERIC_TABLE *)((char *)this + 712),
                        v30[1]);
    if ( !Element )
    {
      memset_0(&Buffer, 0, 0x30uLL);
      CMILCOMBase::InternalAddRef((CMILCOMBase *)(v10 + 16));
      Buffer = v30[1];
      v27 = v10;
      Element = (char *)RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 712), &Buffer, 0x30u, 0LL);
      if ( !Element )
      {
        v6 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x2E9u);
        DynArrayImpl<1>::~DynArrayImpl<1>(v28);
LABEL_28:
        CWindowNode::PendingDxUpdate::ReleaseResponses((CWindowNode::PendingDxUpdate *)v29);
        DynArrayImpl<1>::~DynArrayImpl<1>(v35);
        return v6;
      }
      v11 = 1;
      DynArrayImpl<1>::~DynArrayImpl<1>(v28);
    }
    v19 = Element + 16;
    v20 = DynArray<CWindowNode::PendingDxUpdate,0>::AddMultipleAndSet((__int64)(Element + 16), (__int64)v29, v17);
    v6 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v20, 0x2EDu);
    }
    else
    {
      v21 = v30[1];
      *((_DWORD *)this + 246) = v30[1];
      if ( v11
        && (int)CLegacySurfaceManager::RegisterForDxUpdates(
                  (CLegacySurfaceManager *)(*(_QWORD *)(*((_QWORD *)this + 2) + 80LL) + 96LL),
                  this,
                  v21) < 0 )
      {
        CWindowNode::FlushVistaBltTokens(this);
      }
      v22 = *((_DWORD *)Element + 10);
      if ( v22 )
      {
        v23 = 88LL * (unsigned int)(v22 - 1);
        v39 = (int)*(float *)(v23 + *v19 + 32);
        v40 = (int)*(float *)(v23 + *v19 + 36);
        v41 = (int)*(float *)(v23 + *v19 + 40);
        v42 = (int)*(float *)(v23 + *v19 + 44);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          McTemplateU0xxxn(
            (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
            (unsigned int)&EVTDESC_ETWGUID_FLIPCHAIN_Pending,
            *(_DWORD *)(v23 + *v19 + 12),
            *((_QWORD *)this + 74),
            *(_DWORD *)(v23 + *v19 + 8));
      }
    }
    goto LABEL_28;
  }
  v6 = -2147024809;
  v25 = 694;
  v8 = -2147024809;
LABEL_3:
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, v25);
  return v6;
}
