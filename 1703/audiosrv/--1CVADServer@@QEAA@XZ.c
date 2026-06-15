/*
 * XREFs of ??1CVADServer@@QEAA@XZ @ 0x18007AA8C
 * Callers:
 *     _ATL::CComObject_CVADServer_::_scalar_deleting_destructor__::_1_::dtor$0 @ 0x18005AF60 (_ATL--CComObject_CVADServer_--_scalar_deleting_destructor__--_1_--dtor$0.c)
 *     _ATL::CComObject_CVADServer_::CreateInstance_::_1_::dtor$1 @ 0x18005B2F6 (_ATL--CComObject_CVADServer_--CreateInstance_--_1_--dtor$1.c)
 * Callees:
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18001F8AC (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180020560 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AA50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800393B0 (--1-$com_ptr_t@UIAudioSessionInfo@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall CVADServer::~CVADServer(CVADServer *this)
{
  void *v2; // rcx
  std::_Ref_count_base *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 53);
  if ( v2 )
    operator delete(v2, (const struct std::nothrow_t *)1);
  wil::com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionInfo,wil::err_returncode_policy>((__int64 *)this + 52);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 51);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 216));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 26) - 24LL));
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 25) - 24LL));
  CoTaskMemFree(*((LPVOID *)this + 22));
  *((_QWORD *)this + 22) = 0LL;
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CVADServer *)((char *)this + 72));
  if ( *((_BYTE *)this + 56) )
  {
    *((_BYTE *)this + 56) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  }
}
