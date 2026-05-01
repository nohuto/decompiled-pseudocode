/*
 * XREFs of ?OnConvertibleSlateModeChanged@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18023F6CC
 * Callers:
 *     ?OnMessage@TouchKeyboardExperienceManager@@UEAAJI_K_J@Z @ 0x18023FC70 (-OnMessage@TouchKeyboardExperienceManager@@UEAAJI_K_J@Z.c)
 *     ?SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802425D0 (-SubscribeToServices@TouchKeyboardExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TouchKeyboardExperienceManager::OnConvertibleSlateModeChanged(TouchKeyboardExperienceManager *this)
{
  if ( *((_QWORD *)this + 83) )
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 83) + 96LL) + 506LL) = GetSystemMetrics(8195) != 0;
  return 0LL;
}
