/*
 * XREFs of ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C00190F0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     ?LogDeviceRemovedEvent@CHidInput@@AEAAXGIIKKHPEAU_UNICODE_STRING@@0@Z @ 0x1C00191F4 (-LogDeviceRemovedEvent@CHidInput@@AEAAXGIIKKHPEAU_UNICODE_STRING@@0@Z.c)
 *     ?IsPublicPointerDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z @ 0x1C00195C8 (-IsPublicPointerDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z.c)
 *     HMMarkObjectDestroy @ 0x1C00727D0 (HMMarkObjectDestroy.c)
 *     HMRemoveHandleForObject @ 0x1C0091F70 (HMRemoveHandleForObject.c)
 *     ApiSetUpdatePointerDeviceSystemMetrics @ 0x1C00998F0 (ApiSetUpdatePointerDeviceSystemMetrics.c)
 *     ?RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C012B68C (-RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 */

bool __fastcall CHidInput::OnRIMDeviceDestroyed(
        CHidInput *this,
        struct RawInputManagerDeviceObject *a2,
        struct DEVICEINFO *a3)
{
  bool v4; // di
  __int64 v5; // rbx
  bool v6; // si
  int v7; // eax

  v4 = 1;
  if ( (*((_DWORD *)a2 + 66) & 0x80u) != 0 )
  {
    v5 = *((_QWORD *)a2 + 67);
    if ( (*((_DWORD *)a3 + 46) & 0x1000) == 0 )
      CHidInput::LogDeviceRemovedEvent(
        (CHidInput *)(v5 + 280),
        *(_WORD *)(*((_QWORD *)a2 + 65) + 40LL),
        *(unsigned __int16 *)(*((_QWORD *)a2 + 65) + 110LL),
        *(unsigned __int16 *)(*((_QWORD *)a2 + 65) + 112LL),
        *(_DWORD *)(v5 + 24),
        *(_DWORD *)(v5 + 680),
        *(_DWORD *)(v5 + 24) == 6,
        (struct _UNICODE_STRING *)(v5 + 280),
        (struct _UNICODE_STRING *)(v5 + 808));
    v6 = (*((_DWORD *)a3 + 46) & 0x1000) != 0 || (unsigned int)CHidInput::IsPublicPointerDevice(this, a3);
    if ( *(_QWORD *)(v5 + 960) )
      CPTPProcessorFactory::RemoveProcessor((struct tagHID_POINTER_DEVICE_INFO *)v5);
    HMUnlockObject(v5);
    v7 = *(_DWORD *)(v5 + 8);
    v4 = v7 == 0;
    if ( !v7 )
    {
      HMMarkObjectDestroy(v5);
      HMRemoveHandleForObject(v5);
      v4 = 1;
    }
    if ( v6 )
      ApiSetUpdatePointerDeviceSystemMetrics(0LL);
  }
  return v4;
}
