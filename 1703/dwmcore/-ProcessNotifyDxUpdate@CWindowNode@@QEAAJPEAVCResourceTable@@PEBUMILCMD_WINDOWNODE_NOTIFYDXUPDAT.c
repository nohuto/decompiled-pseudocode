/*
 * XREFs of ?ProcessNotifyDxUpdate@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_NOTIFYDXUPDATE@@@Z @ 0x1800D0650
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18005B2F0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z @ 0x1800B12A4 (-UpdatePending@CFlipChain@@QEAAXT_ULARGE_INTEGER@@H@Z.c)
 *     ?ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ @ 0x1800CC130 (-ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ.c)
 *     ?UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z @ 0x1800D0830 (-UpdateDxClipShape@CDxAccumulationContext@@QEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 *     ?ClipToNode@CWindowNode@@AEAA_NAEBUtagRECT@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18012A758 (-ClipToNode@CWindowNode@@AEAA_NAEBUtagRECT@@AEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotN.c)
 *     ?FlushVistaBltTokens@CWindowNode@@QEAAXXZ @ 0x18012AD28 (-FlushVistaBltTokens@CWindowNode@@QEAAXXZ.c)
 *     ?FindElement@?$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAPEAVTokenToUpdateListRecord@CWindowNode@@K@Z @ 0x180133A70 (-FindElement@-$CGenericTableMap@KVTokenToUpdateListRecord@CWindowNode@@@@QEAAPEAVTokenToUpdateLi.c)
 *     ?RegisterForDxUpdates@CLegacySurfaceManager@@QEAAJPEAVCWindowNode@@K@Z @ 0x180149C34 (-RegisterForDxUpdates@CLegacySurfaceManager@@QEAAJPEAVCWindowNode@@K@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UPendingDxUpdate@CWindowNode@@$0A@@@QEAAJPEFBUPendingDxUpdate@CWindowNode@@I@Z @ 0x18016248C (-AddMultipleAndSet@-$DynArray@UPendingDxUpdate@CWindowNode@@$0A@@@QEAAJPEFBUPendingDxUpdate@CWin.c)
 *     Template_xxxn @ 0x1801630F4 (Template_xxxn.c)
 *     ?Create@CDxAccumulationContext@@SAJPEAVCWindowNode@@PEAPEAV1@@Z @ 0x180181150 (-Create@CDxAccumulationContext@@SAJPEAVCWindowNode@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CWindowNode::ProcessNotifyDxUpdate(
        CWindowNode *this,
        struct CResourceTable *a2,
        const struct MILCMD_WINDOWNODE_NOTIFYDXUPDATE *a3)
{
  unsigned int v6; // ebx
  unsigned int v7; // edx
  __int64 Resource; // rax
  __int64 v9; // rsi
  char v10; // r15
  CDxAccumulationContext **v11; // r14
  bool v12; // dl
  int updated; // eax
  __int64 v14; // rax
  union _ULARGE_INTEGER v15; // rdx
  char *Element; // r14
  _QWORD *v17; // rsi
  int v18; // eax
  unsigned int v19; // r8d
  __int64 v20; // rdx
  int v22; // eax
  unsigned int v23; // [rsp+20h] [rbp-B9h]
  unsigned int Buffer; // [rsp+40h] [rbp-99h] BYREF
  __int64 v25; // [rsp+48h] [rbp-91h]
  void *v26[4]; // [rsp+50h] [rbp-89h] BYREF
  char v27[8]; // [rsp+70h] [rbp-69h] BYREF
  unsigned int v28[2]; // [rsp+78h] [rbp-61h]
  __int64 v29; // [rsp+80h] [rbp-59h]
  __int64 v30; // [rsp+88h] [rbp-51h]
  __int128 v31; // [rsp+90h] [rbp-49h]
  int v32; // [rsp+A0h] [rbp-39h]
  void *v33[2]; // [rsp+A8h] [rbp-31h] BYREF
  int v34; // [rsp+B8h] [rbp-21h]
  int v35; // [rsp+BCh] [rbp-1Dh]
  int v36; // [rsp+C0h] [rbp-19h]
  int v37; // [rsp+D0h] [rbp-9h]
  int v38; // [rsp+D4h] [rbp-5h]
  int v39; // [rsp+D8h] [rbp-1h]
  int v40; // [rsp+DCh] [rbp+3h]
  __int128 v41; // [rsp+E0h] [rbp+7h] BYREF

  v6 = 0;
  CWindowNode::ClipToNode(this, (char *)a3 + 40, &v41);
  v7 = *((_DWORD *)a3 + 2);
  if ( !v7 )
  {
    v6 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x2C7u);
    return v6;
  }
  Resource = CResourceTable::GetResource((__int64)a2, v7, 0x60u);
  if ( Resource )
    v9 = Resource - 16;
  else
    v9 = 0LL;
  v10 = 0;
  v11 = (CDxAccumulationContext **)((char *)this + 976);
  v12 = 0;
  if ( !*((_QWORD *)this + 122) )
  {
    updated = CDxAccumulationContext::Create(this, (struct CDxAccumulationContext **)this + 122);
    v6 = updated;
    if ( updated < 0 )
    {
      v23 = 723;
LABEL_21:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, v23);
      return v6;
    }
    v12 = 1;
  }
  if ( *v11 )
  {
    updated = CDxAccumulationContext::UpdateDxClipShape(*v11, v12);
    v6 = updated;
    if ( updated < 0 )
    {
      v23 = 732;
      goto LABEL_21;
    }
  }
  if ( v9 )
  {
    v14 = *(_QWORD *)((char *)a3 + 20);
    v15 = *(union _ULARGE_INTEGER *)((char *)a3 + 28);
    v33[0] = 0LL;
    v33[1] = 0LL;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v29 = v14;
    v30 = *(_QWORD *)((char *)a3 + 12);
    v32 = *((_DWORD *)a3 + 15);
    v27[0] = 0;
    v31 = v41;
    *(union _ULARGE_INTEGER *)v28 = v15;
    CFlipChain::UpdatePending((CFlipChain *)v9, v15);
    Element = (char *)CGenericTableMap<unsigned long,CWindowNode::TokenToUpdateListRecord>::FindElement(
                        (char *)this + 688,
                        v28[1]);
    if ( !Element )
    {
      memset_0(&Buffer, 0, 0x30uLL);
      CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)(v9 + 16));
      Buffer = v28[1];
      v25 = v9;
      Element = (char *)RtlInsertElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 688), &Buffer, 0x30u, 0LL);
      if ( !Element )
      {
        v6 = -2147024882;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2FAu);
        DynArrayImpl<1>::~DynArrayImpl<1>(v26);
LABEL_17:
        CWindowNode::PendingDxUpdate::ReleaseResponses((CWindowNode::PendingDxUpdate *)v27);
        DynArrayImpl<1>::~DynArrayImpl<1>(v33);
        return v6;
      }
      v10 = 1;
      DynArrayImpl<1>::~DynArrayImpl<1>(v26);
    }
    v17 = Element + 16;
    v18 = DynArray<CWindowNode::PendingDxUpdate,0>::AddMultipleAndSet(Element + 16, v27);
    v6 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x2FEu);
    }
    else
    {
      v19 = v28[1];
      *((_DWORD *)this + 240) = v28[1];
      if ( v10
        && (int)CLegacySurfaceManager::RegisterForDxUpdates(
                  (CLegacySurfaceManager *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 96LL),
                  this,
                  v19) < 0 )
      {
        CWindowNode::FlushVistaBltTokens(this);
      }
      v22 = *((_DWORD *)Element + 10);
      if ( v22 )
      {
        v20 = 88LL * (unsigned int)(v22 - 1);
        v37 = (int)*(float *)(v20 + *v17 + 32);
        v38 = (int)*(float *)(v20 + *v17 + 36);
        v39 = (int)*(float *)(v20 + *v17 + 40);
        v40 = (int)*(float *)(v20 + *v17 + 44);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
          Template_xxxn(
            *(_DWORD *)(v20 + *v17 + 8),
            (unsigned int)&EVTDESC_ETWGUID_FLIPCHAIN_Pending,
            *(_DWORD *)(v20 + *v17 + 12),
            *((_QWORD *)this + 72),
            *(_DWORD *)(v20 + *v17 + 8));
      }
    }
    goto LABEL_17;
  }
  return v6;
}
