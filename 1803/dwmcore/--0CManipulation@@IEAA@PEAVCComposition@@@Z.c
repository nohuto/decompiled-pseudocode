/*
 * XREFs of ??0CManipulation@@IEAA@PEAVCComposition@@@Z @ 0x180198E98
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002BD94 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800CD620 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ??0ManipulationData@@QEAA@XZ @ 0x180193214 (--0ManipulationData@@QEAA@XZ.c)
 */

CManipulation *__fastcall CManipulation::CManipulation(CManipulation *this, struct CComposition *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CManipulation::`vftable'{for `CNotificationResource'};
  *((_QWORD *)this + 8) = &CManipulation::`vftable'{for `IManipulationResource'};
  ManipulationData::ManipulationData((CManipulation *)((char *)this + 72));
  ManipulationData::ManipulationData((CManipulation *)((char *)this + 256));
  `vector constructor iterator'(
    (CManipulation *)((char *)this + 452),
    8LL,
    3LL,
    (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))CManipulation::ScrollingConfiguration::ScrollingConfiguration);
  `vector constructor iterator'(
    (CManipulation *)((char *)this + 480),
    8LL,
    5LL,
    (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))wil::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>);
  *((_QWORD *)this + 65) = 0LL;
  memset_0((char *)this + 528, 0, 0x28uLL);
  *((_BYTE *)this + 568) = 0;
  memset_0((char *)this + 572, 0, 0x208uLL);
  *((_DWORD *)this + 273) = 0;
  memset_0((char *)this + 1096, 0, 0x28uLL);
  *((_QWORD *)this + 142) = 0LL;
  return this;
}
