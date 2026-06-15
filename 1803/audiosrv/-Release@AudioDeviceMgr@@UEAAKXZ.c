/*
 * XREFs of ?Release@AudioDeviceMgr@@UEAAKXZ @ 0x180056600
 * Callers:
 *     ?CreateInstance@AudioDeviceMgr@@SAJPEAUIEndpointNotificationCallback@@PEAPEAUIAudioDeviceMgr@@@Z @ 0x18005F730 (-CreateInstance@AudioDeviceMgr@@SAJPEAUIEndpointNotificationCallback@@PEAPEAUIAudioDeviceMgr@@@Z.c)
 *     ?Release@AudioDeviceMgr@@W7EAAKXZ @ 0x180066820 (-Release@AudioDeviceMgr@@W7EAAKXZ.c)
 *     ??1?$CComPtr@VAudioDeviceMgr@@@ATL@@QEAA@XZ @ 0x18009A214 (--1-$CComPtr@VAudioDeviceMgr@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioDeviceMgr::Release(AudioDeviceMgr *this)
{
  CUnknown *v1; // rcx
  __int64 (*v2)(void); // rax

  v1 = (CUnknown *)*((_QWORD *)this + 3);
  v2 = *(__int64 (**)(void))(*(_QWORD *)v1 + 16LL);
  if ( (char *)v2 == (char *)CUnknown::NonDelegatingRelease )
    return CUnknown::NonDelegatingRelease(v1);
  else
    return v2();
}
