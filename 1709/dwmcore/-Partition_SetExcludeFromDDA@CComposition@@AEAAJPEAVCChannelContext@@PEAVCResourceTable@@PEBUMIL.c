/*
 * XREFs of ?Partition_SetExcludeFromDDA@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETEXCLUDEFROMDDA@@@Z @ 0x180128A18
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x18006B3FC (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?RemoveAtOrderNotPreserved@?$DynArray@PEAV?$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z @ 0x18011C390 (-RemoveAtOrderNotPreserved@-$DynArray@PEAV-$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z.c)
 *     ?AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180127B70 (-AddToDDAExcludeVisualList@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z @ 0x180127F00 (-FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z.c)
 *     ?FindDDAExcludeVisual@CComposition@@QEAAIPEAVCVisual@@@Z @ 0x180127F2C (-FindDDAExcludeVisual@CComposition@@QEAAIPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CComposition::Partition_SetExcludeFromDDA(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_SETEXCLUDEFROMDDA *a4)
{
  struct CVisual *Resource; // rax
  signed int v7; // eax
  unsigned int DDAExcludeVisual; // eax
  unsigned int v9; // edi

  Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a3, *((_DWORD *)a4 + 1), 0x86u);
  if ( !Resource )
    CComposition::FailFastOnMalformedPacket((__int64)this, -229628237, 0LL);
  if ( *((_DWORD *)a4 + 2) )
  {
    v7 = CComposition::AddToDDAExcludeVisualList(this, Resource);
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x731u);
  }
  else
  {
    DDAExcludeVisual = CComposition::FindDDAExcludeVisual(this, Resource);
    v9 = DDAExcludeVisual;
    if ( DDAExcludeVisual != *((_DWORD *)this + 246) )
    {
      CWeakReferenceBase::Release(*(CWeakReferenceBase **)(*((_QWORD *)this + 120) + 8LL * DDAExcludeVisual));
      DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved((__int64)this + 960, v9);
    }
  }
  return 0LL;
}
