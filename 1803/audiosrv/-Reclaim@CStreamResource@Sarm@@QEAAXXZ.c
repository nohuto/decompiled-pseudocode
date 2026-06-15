/*
 * XREFs of ?Reclaim@CStreamResource@Sarm@@QEAAXXZ @ 0x1800F7690
 * Callers:
 *     ??1CStreamResource@Sarm@@QEAA@XZ @ 0x1800F1F8C (--1CStreamResource@Sarm@@QEAA@XZ.c)
 *     ?Add@?$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource@Sarm@@PEAUIAudioStreamInfo@@PEAPEAU__POSITION@@@Z @ 0x1800F2254 (-Add@-$InterfaceMap@UIAudioStreamInfo@@VCStreamResource@Sarm@@@util@@QEAAPEAVCStreamResource@Sar.c)
 *     ?AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL_STREAM_PROPERTIES@@PEAVCEndpointResourcePool@2@@Z @ 0x1800F2598 (-AddStream@CSpatialAudioResourceManager@Sarm@@AEAAJPEAUIAudioStreamInfo@@KPEBU_GUID@@PEBUSPATIAL.c)
 *     ?FreeNode@?$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V?$CElementTraits@PEAUIAudioStreamInfo@@@ATL@@V?$CElementTraits@VCStreamResource@Sarm@@@5@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x1800F2AE4 (-FreeNode@-$CAtlMap@PEAUIAudioStreamInfo@@VCStreamResource@Sarm@@V-$CElementTraits@PEAUIAudioStr.c)
 *     ?RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z @ 0x1800F447C (-RemoveStream@CSpatialAudioResourceManager@Sarm@@AEAAXPEAVCStreamResource@2@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?AddToDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z @ 0x1800F6494 (-AddToDynamicPool@CEndpointResourcePool@Sarm@@QEAAJI@Z.c)
 *     ?FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ @ 0x1800F6D0C (-FailFast_IfMsg@in1diag3@details@wil@@YA_NPEAXIPEBD_N1ZZ.c)
 */

void __fastcall Sarm::CStreamResource::Reclaim(Sarm::CStreamResource *this)
{
  Sarm::CEndpointResourcePool *v1; // rdi
  unsigned int v3; // edx
  __int64 v4; // rcx
  const char *v5; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (Sarm::CEndpointResourcePool *)*((_QWORD *)this + 1);
  if ( v1 )
  {
    v3 = *((_DWORD *)this + 21) + *((_DWORD *)this + 20);
    if ( v3 )
    {
      Sarm::CEndpointResourcePool::AddToDynamicPool(v1, v3);
      v1 = (Sarm::CEndpointResourcePool *)*((_QWORD *)this + 1);
      *((_QWORD *)this + 10) = 0LL;
      *((_DWORD *)this + 19) = 0;
    }
    wil::details::in1diag3::FailFast_IfMsg(
      retaddr,
      (void *)0x2B,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\endpointresourcepool.h",
      (const char *)(*((_DWORD *)v1 + 3) == 0),
      (bool)"Detaching from CEndpointResourcePool when nothing attached",
      v5);
    --*((_DWORD *)v1 + 3);
    *((_QWORD *)this + 1) = 0LL;
  }
  v4 = *(_QWORD *)this;
  *(_QWORD *)this = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_BYTE *)this + 88) = 0;
  *((GUID *)this + 1) = GUID_00000000_0000_0000_0000_000000000000;
}
