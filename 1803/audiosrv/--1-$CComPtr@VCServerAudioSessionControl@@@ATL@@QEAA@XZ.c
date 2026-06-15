/*
 * XREFs of ??1?$CComPtr@VCServerAudioSessionControl@@@ATL@@QEAA@XZ @ 0x180098C28
 * Callers:
 *     _CAudioSessionManager::CreateAudioSessionControl_::_1_::dtor$0 @ 0x1800672D6 (_CAudioSessionManager--CreateAudioSessionControl_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ATL::CComPtr<CServerAudioSessionControl>::~CComPtr<CServerAudioSessionControl>(
        CServerAudioSessionControl **a1)
{
  CServerAudioSessionControl *v1; // rcx
  __int64 (__fastcall *v2)(CServerAudioSessionControl *); // rax

  v1 = *a1;
  if ( v1 )
  {
    v2 = *(__int64 (__fastcall **)(CServerAudioSessionControl *))(*(_QWORD *)v1 + 16LL);
    if ( v2 == CServerAudioSessionControl::Release )
      CServerAudioSessionControl::Release(v1);
    else
      v2(v1);
  }
}
