/*
 * XREFs of ??1?$CComPtr@VAudioDeviceMgr@@@ATL@@QEAA@XZ @ 0x18009A214
 * Callers:
 *     _AudioDeviceMgr::CreateInstance_::_1_::dtor$0 @ 0x18006B363 (_AudioDeviceMgr--CreateInstance_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@AudioDeviceMgr@@UEAAKXZ @ 0x180056600 (-Release@AudioDeviceMgr@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComPtr<AudioDeviceMgr>::~CComPtr<AudioDeviceMgr>(AudioDeviceMgr **a1)
{
  AudioDeviceMgr *v1; // rcx
  __int64 (__fastcall *v2)(AudioDeviceMgr *); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(__int64 (__fastcall **)(AudioDeviceMgr *))(*(_QWORD *)v1 + 16LL);
    if ( v2 == AudioDeviceMgr::Release )
      AudioDeviceMgr::Release(v1);
    else
      v2(v1);
  }
}
