/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAudioPolicyManager@@UISessionInternalEvents@@UIAudioPolicyNotificationManager@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18000AA90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioPolicyManager,ISessionInternalEvents,IAudioPolicyNotificationManager>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[7] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x20);
  return a1;
}
