/*
 * XREFs of _Init_thread_footer @ 0x1800333A8
 * Callers:
 *     ?OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z @ 0x18000A8F4 (-OnPropertyChange@SpatialPolicy@@SAJPEAUIMMDevice@@AEBU_tagpropertykey@@@Z.c)
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PEAH@Z @ 0x18002294C (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PE.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x180086F54 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 *     ?GetPacketSizeConstraints@@YAJPEAUIPropertyStore@@PEAPEAUPacketSizeConstraints@@@Z @ 0x1800B5784 (-GetPacketSizeConstraints@@YAJPEAUIPropertyStore@@PEAPEAUPacketSizeConstraints@@@Z.c)
 *     PackSysFx2List @ 0x1800BADF8 (PackSysFx2List.c)
 *     ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@@Z @ 0x1800DA05C (-TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@W4APO_TYPE@@_N2AEBU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Init_thread_footer(_DWORD *a1)
{
  __int64 v2; // rdx

  EnterCriticalSection(&stru_18014B9C8);
  v2 = (unsigned int)tls_index;
  *a1 = ++Init_global_epoch;
  *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v2) + 4LL) = Init_global_epoch;
  LeaveCriticalSection(&stru_18014B9C8);
  return Init_thread_notify();
}
