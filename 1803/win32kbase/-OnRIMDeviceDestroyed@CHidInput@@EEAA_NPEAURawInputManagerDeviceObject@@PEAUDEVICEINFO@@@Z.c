/*
 * XREFs of ?OnRIMDeviceDestroyed@CHidInput@@EEAA_NPEAURawInputManagerDeviceObject@@PEAUDEVICEINFO@@@Z @ 0x1C0127700
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     HMMarkObjectDestroy @ 0x1C005F400 (HMMarkObjectDestroy.c)
 *     HMRemoveHandleForObject @ 0x1C00B1190 (HMRemoveHandleForObject.c)
 *     ?RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C0126148 (-RemoveProcessor@CPTPProcessorFactory@@SAXPEAUtagHID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?IsPublicPointerDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z @ 0x1C0126F20 (-IsPublicPointerDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z.c)
 *     ?LogDeviceRemovedEvent@CHidInput@@AEAAXGIIKKHPEAU_UNICODE_STRING@@0@Z @ 0x1C01270BC (-LogDeviceRemovedEvent@CHidInput@@AEAAXGIIKKHPEAU_UNICODE_STRING@@0@Z.c)
 *     ApiSetUpdatePointerDeviceSystemMetrics @ 0x1C0141CFC (ApiSetUpdatePointerDeviceSystemMetrics.c)
 */

bool __fastcall CHidInput::OnRIMDeviceDestroyed(
        CHidInput *this,
        struct RawInputManagerDeviceObject *a2,
        struct DEVICEINFO *a3)
{
  bool v4; // di
  __int64 v5; // rbx
  CHidInput *v6; // rcx
  bool v7; // si
  int v8; // eax

  v4 = 1;
  if ( (*((_DWORD *)a2 + 70) & 0x80u) != 0 )
  {
    v5 = *((_QWORD *)a2 + 70);
    v7 = 1;
    if ( (*((_DWORD *)a3 + 46) & 0x1000) == 0 )
    {
      CHidInput::LogDeviceRemovedEvent(
        (CHidInput *)(v5 + 280),
        *(unsigned __int16 *)(*((_QWORD *)a2 + 68) + 40LL),
        *(unsigned __int16 *)(*((_QWORD *)a2 + 68) + 110LL),
        *(unsigned __int16 *)(*((_QWORD *)a2 + 68) + 112LL),
        *(_DWORD *)(v5 + 24),
        *(_DWORD *)(v5 + 680),
        *(_DWORD *)(v5 + 24) == 6,
        (struct _UNICODE_STRING *)(v5 + 280),
        (struct _UNICODE_STRING *)(v5 + 808));
      if ( (*((_DWORD *)a3 + 46) & 0x1000) == 0 && !CHidInput::IsPublicPointerDevice(v6, a3) )
        v7 = 0;
    }
    if ( *(_QWORD *)(v5 + 960) )
      CPTPProcessorFactory::RemoveProcessor((struct tagHID_POINTER_DEVICE_INFO *)v5);
    HMUnlockObject(v5);
    v8 = *(_DWORD *)(v5 + 8);
    v4 = v8 == 0;
    if ( !v8 )
    {
      HMMarkObjectDestroy((_DWORD *)v5);
      HMRemoveHandleForObject((int *)v5);
      v4 = 1;
    }
    if ( v7 )
      ApiSetUpdatePointerDeviceSystemMetrics(0LL);
  }
  return v4;
}
