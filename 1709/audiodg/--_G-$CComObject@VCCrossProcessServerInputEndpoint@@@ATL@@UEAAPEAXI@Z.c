/*
 * XREFs of ??_G?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAPEAXI@Z @ 0x140016330
 * Callers:
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140016290 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 * Callees:
 *     ?Unlock@CAudioDGModule@@UEAAJXZ @ 0x1400129A0 (-Unlock@CAudioDGModule@@UEAAJXZ.c)
 *     ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x140016FAC (--1CCrossProcessBaseServerEndpoint@@UEAA@XZ.c)
 *     ?AERTFree@@YAXPEAX0@Z @ 0x140017184 (-AERTFree@@YAXPEAX0@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140017200 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ @ 0x14001C2A0 (-OnCancel@SendCommandAsyncOperation@Devices@Media@Windows@@MEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
CCrossProcessBaseServerEndpoint *__fastcall ATL::CComObject<CCrossProcessServerInputEndpoint>::`scalar deleting destructor'(
        CCrossProcessBaseServerEndpoint *this,
        char a2)
{
  __int64 (__fastcall *v4)(CAudioDGModule *); // rax
  void *v5; // rax

  *(_QWORD *)this = &ATL::CComObject<CCrossProcessServerInputEndpoint>::`vftable'{for `IAudioEndpoint'};
  *((_QWORD *)this + 1) = &ATL::CComObject<CCrossProcessServerInputEndpoint>::`vftable'{for `IAudioEndpointRT'};
  *((_QWORD *)this + 48) = &ATL::CComObject<CCrossProcessServerInputEndpoint>::`vftable'{for `CCrossProcessBaseServerEndpoint'};
  *((_QWORD *)this + 55) = &ATL::CComObject<CCrossProcessServerInputEndpoint>::`vftable'{for `CCrossProcessInputEndpoint'};
  *((_DWORD *)this + 116) = -1073741823;
  v4 = *(__int64 (__fastcall **)(CAudioDGModule *))(*(_QWORD *)ATL::_pAtlModule + 16LL);
  if ( v4 == CAudioDGModule::Unlock )
    CAudioDGModule::Unlock(ATL::_pAtlModule);
  else
    v4(ATL::_pAtlModule);
  CCrossProcessBaseServerEndpoint::~CCrossProcessBaseServerEndpoint(this);
  if ( *((_BYTE *)this + 512) )
  {
    *((_BYTE *)this + 512) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 472));
  }
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      Windows::Media::Devices::SendCommandAsyncOperation::OnCancel(this);
    }
    else
    {
      v5 = AERTGetDLLRTHeap();
      AERTFree(this, v5);
    }
  }
  return this;
}
