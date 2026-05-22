/*
 * XREFs of ??0SpatialInputControllerCollection@@IEAA@PEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@@Z @ 0x18009254C
 * Callers:
 *     ?Create@SpatialInputControllerCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMessageSession@@PEAPEAXPEAPEAV1@@Z @ 0x180092294 (-Create@SpatialInputControllerCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAUIMe.c)
 * Callees:
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@EV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@U?$less@E@2@V?$allocator@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBEV?$shared_ptr@USpatialInputReportCaps@SpatialInteractionDevices@@@std@@@std@@PEAX@2@XZ @ 0x18001EA44 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@EV-$shared_ptr@USpatialInputReportCaps@SpatialI.c)
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x18009C714 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=21
SpatialInputControllerCollection *__fastcall SpatialInputControllerCollection::SpatialInputControllerCollection(
        SpatialInputControllerCollection *this,
        struct IRawInputClient *a2,
        struct IRawInputProvider *a3,
        struct IMessageSession *a4)
{
  _OWORD *v7; // rax

  HIDDeviceCollection::HIDDeviceCollection(this, a2);
  *(_QWORD *)this = &SpatialInputControllerCollection::`vftable';
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this + 69, 0, 0);
  *((_QWORD *)this + 350) = 0LL;
  *((_QWORD *)this + 351) = a4;
  if ( a4 )
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)a4 + 8LL))(a4);
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 2816), 0, 0);
  *((_QWORD *)this + 357) = 0LL;
  *((_QWORD *)this + 358) = 0LL;
  *((_QWORD *)this + 357) = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned char,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>,std::less<unsigned char>,std::allocator<std::pair<unsigned char const,std::shared_ptr<SpatialInteractionDevices::SpatialInputReportCaps>>>,0>>::_Buyheadnode();
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 2872), 0, 0);
  *((_QWORD *)this + 364) = 0LL;
  *((_QWORD *)this + 365) = 0LL;
  *((_QWORD *)this + 366) = 0LL;
  *((_QWORD *)this + 367) = 0LL;
  *((_QWORD *)this + 368) = 0LL;
  *((_DWORD *)this + 738) = 0;
  *(_OWORD *)((char *)this + 2956) = _xmm;
  *(_OWORD *)((char *)this + 2972) = _xmm;
  *(_OWORD *)((char *)this + 2988) = _xmm;
  *(_OWORD *)((char *)this + 3004) = _xmm;
  *(_OWORD *)((char *)this + 3020) = _xmm;
  *(_OWORD *)((char *)this + 3036) = _xmm;
  *(_OWORD *)((char *)this + 3052) = _xmm;
  *(_OWORD *)((char *)this + 3068) = _xmm;
  *((_QWORD *)this + 386) = 0LL;
  *((_QWORD *)this + 387) = 0LL;
  *((_QWORD *)this + 388) = 0LL;
  *((_QWORD *)this + 389) = 0LL;
  *((_QWORD *)this + 390) = 0LL;
  *((_QWORD *)this + 391) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 3136), 0, 0);
  *((_QWORD *)this + 397) = 0LL;
  *((_QWORD *)this + 398) = 0LL;
  *((_QWORD *)this + 399) = 0LL;
  *((_QWORD *)this + 400) = 0LL;
  *((_QWORD *)this + 401) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 3216), 0, 0);
  *((_BYTE *)this + 3256) = 0;
  *((_QWORD *)this + 408) = 0LL;
  *((_QWORD *)this + 409) = 0LL;
  *((_QWORD *)this + 410) = 0LL;
  *((_QWORD *)this + 411) = 0LL;
  *((_QWORD *)this + 412) = 0LL;
  v7 = operator new(0x10uLL);
  *((_QWORD *)this + 408) = v7;
  if ( v7 )
    *v7 = 0LL;
  **((_QWORD **)this + 408) = (char *)this + 3264;
  *((_QWORD *)this + 413) = 0LL;
  *((_QWORD *)this + 3) = a3;
  return this;
}
