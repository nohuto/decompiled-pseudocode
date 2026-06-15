/*
 * XREFs of ??1?$CComPtr@UIPolicyConfig@@@ATL@@QEAA@XZ @ 0x180098720
 * Callers:
 *     _CMeterControlBase::GetChannelCountFromDeviceFormat_::_1_::dtor$0 @ 0x180066B19 (_CMeterControlBase--GetChannelCountFromDeviceFormat_--_1_--dtor$0.c)
 *     _CVolumeSoftware::Initialize_::_1_::dtor$0 @ 0x1800A273F (_CVolumeSoftware--Initialize_--_1_--dtor$0.c)
 *     _CMonitor::Initialize_::_1_::dtor$1 @ 0x1800E352C (_CMonitor--Initialize_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComPtr<IPolicyConfig>::~CComPtr<IPolicyConfig>(CPolicyConfig **a1)
{
  CPolicyConfig *v1; // rcx
  __int64 (__fastcall *v2)(CPolicyConfig *); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(__int64 (__fastcall **)(CPolicyConfig *))(*(_QWORD *)v1 + 16LL);
    if ( v2 == CPolicyConfig::Release )
      CPolicyConfig::Release(v1);
    else
      v2(v1);
  }
}
