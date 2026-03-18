/*
 * XREFs of ?Partition_SetExcludeFromDDA@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETEXCLUDEFROMDDA@@@Z @ 0x18014A77C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18002D230 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x180034B54 (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RemoveAtOrderNotPreserved@?$DynArray@PEAV?$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z @ 0x18013F0AC (-RemoveAtOrderNotPreserved@-$DynArray@PEAV-$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z.c)
 *     ?AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180149DCC (-AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z @ 0x18014A1A4 (-FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z.c)
 *     ?FindDDAExcludeVisual@CComposition@@QEAAIPEAVCVisual@@@Z @ 0x18014A1D0 (-FindDDAExcludeVisual@CComposition@@QEAAIPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CComposition::Partition_SetExcludeFromDDA(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_SETEXCLUDEFROMDDA *a4)
{
  struct CVisual *Resource; // rax
  int v7; // eax
  unsigned int DDAExcludeVisual; // eax
  unsigned int v9; // edi

  Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a3, *((_DWORD *)a4 + 1), 0x97u);
  if ( !Resource )
    CComposition::FailFastOnMalformedPacket((__int64)this, -229628237, 0LL);
  if ( *((_DWORD *)a4 + 2) )
  {
    v7 = CComposition::AddToDDAExcludeVisualList(this, Resource);
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x703u);
  }
  else
  {
    DDAExcludeVisual = CComposition::FindDDAExcludeVisual(this, Resource);
    v9 = DDAExcludeVisual;
    if ( DDAExcludeVisual != *((_DWORD *)this + 252) )
    {
      CWeakReferenceBase::Release(*(CWeakReferenceBase **)(*((_QWORD *)this + 123) + 8LL * DDAExcludeVisual));
      DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved((__int64)this + 984, v9);
    }
  }
  return 0LL;
}
