/*
 * XREFs of ?Partition_SetMagnifier@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SETMAGNIFIER@@@Z @ 0x180128ABC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Release@CWeakReferenceBase@@QEAAKXZ @ 0x18006B3FC (-Release@CWeakReferenceBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AA2B0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?RemoveAtOrderNotPreserved@?$DynArray@PEAV?$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z @ 0x18011C390 (-RemoveAtOrderNotPreserved@-$DynArray@PEAV-$CWeakReference@VCVisual@@@@$0A@@@QEAAJI@Z.c)
 *     ?AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z @ 0x180127C68 (-AddToMagnifierList@CComposition@@QEAAJPEAVCVisual@@@Z.c)
 *     ?FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z @ 0x180127F00 (-FailFastOnMalformedPacket@CComposition@@AEAAXW4MILCMD_CRASHID@@PEBX@Z.c)
 *     ?FindMagnifier@CComposition@@QEAAIPEAVCVisual@@@Z @ 0x180127F54 (-FindMagnifier@CComposition@@QEAAIPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CComposition::Partition_SetMagnifier(
        CComposition *this,
        struct CChannelContext *a2,
        struct CResourceTable *a3,
        const struct MILCMD_PARTITION_SETMAGNIFIER *a4)
{
  struct CVisual *Resource; // rax
  signed int v7; // eax
  unsigned int Magnifier; // eax
  unsigned int v9; // edi

  Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a3, *((_DWORD *)a4 + 1), 0x86u);
  if ( !Resource )
    CComposition::FailFastOnMalformedPacket((__int64)this, 629443961, 0LL);
  if ( *((_DWORD *)a4 + 2) )
  {
    v7 = CComposition::AddToMagnifierList(this, Resource);
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x70Eu);
  }
  else
  {
    Magnifier = CComposition::FindMagnifier(this, Resource);
    v9 = Magnifier;
    if ( Magnifier != *((_DWORD *)this + 238) )
    {
      CWeakReferenceBase::Release(*(CWeakReferenceBase **)(*((_QWORD *)this + 116) + 8LL * Magnifier));
      DynArray<CWeakReference<CVisual> *,0>::RemoveAtOrderNotPreserved((__int64)this + 928, v9);
    }
  }
  return 0LL;
}
