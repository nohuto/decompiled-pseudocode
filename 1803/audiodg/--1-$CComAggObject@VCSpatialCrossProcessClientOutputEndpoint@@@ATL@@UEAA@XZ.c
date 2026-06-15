/*
 * XREFs of ??1?$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAA@XZ @ 0x140057F1C
 * Callers:
 *     ??_G?$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140058530 (--_G-$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ??1CSpatialCrossProcessClientEndpoint@@UEAA@XZ @ 0x1400582F4 (--1CSpatialCrossProcessClientEndpoint@@UEAA@XZ.c)
 */

void __fastcall ATL::CComAggObject<CSpatialCrossProcessClientOutputEndpoint>::~CComAggObject<CSpatialCrossProcessClientOutputEndpoint>(
        __int64 a1)
{
  *(_QWORD *)a1 = &ATL::CComAggObject<CSpatialCrossProcessClientOutputEndpoint>::`vftable';
  *(_DWORD *)(a1 + 8) = -1073741823;
  (*(void (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL))(ATL::_pAtlModule);
  CSpatialCrossProcessClientEndpoint::~CSpatialCrossProcessClientEndpoint((CSpatialCrossProcessClientEndpoint *)(a1 + 24));
  if ( *(_BYTE *)(a1 + 1064) )
  {
    *(_BYTE *)(a1 + 1064) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 1024));
  }
}
