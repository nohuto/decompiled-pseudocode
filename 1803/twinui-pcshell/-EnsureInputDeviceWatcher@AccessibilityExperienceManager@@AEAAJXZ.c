/*
 * XREFs of ?EnsureInputDeviceWatcher@AccessibilityExperienceManager@@AEAAJXZ @ 0x180258994
 * Callers:
 *     ?RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ @ 0x1802596A0 (-RuntimeClassInitialize@AccessibilityExperienceManager@@QEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall AccessibilityExperienceManager::EnsureInputDeviceWatcher(AccessibilityExperienceManager *this)
{
  int InputDeviceWatcher; // edi
  __int64 *v2; // rbx

  InputDeviceWatcher = 0;
  v2 = (__int64 *)((char *)this + 232);
  if ( !*((_QWORD *)this + 29) )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 29);
    InputDeviceWatcher = CreateInputDeviceWatcher((char *)this + 160, 0x4000LL, v2);
    if ( InputDeviceWatcher < 0 )
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v2);
  }
  return (unsigned int)InputDeviceWatcher;
}
