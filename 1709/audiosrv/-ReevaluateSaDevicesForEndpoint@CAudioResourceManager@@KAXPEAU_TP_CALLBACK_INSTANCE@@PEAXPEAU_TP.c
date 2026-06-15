/*
 * XREFs of ?ReevaluateSaDevicesForEndpoint@CAudioResourceManager@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18009B4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002A270 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x18009AC78 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioResourceManager::ReevaluateSaDevicesForEndpoint(
        PTP_CALLBACK_INSTANCE Instance,
        char *Context,
        PTP_TIMER Timer)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  CAudioResourceManager *v5; // rcx
  _QWORD *v6; // rax
  const unsigned __int16 ***v7; // rbx
  std::_Ref_count_base *v8; // rcx

  v4 = (struct _RTL_CRITICAL_SECTION *)(Context + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)(Context + 48));
  if ( Context[88] )
  {
    v6 = (_QWORD *)*((_QWORD *)Context + 12);
    if ( v6 )
      v6 = (_QWORD *)*v6;
    v7 = *(const unsigned __int16 ****)(v6[1] + 8 * (*((_QWORD *)Context + 15) & (v6[2] - 1LL)));
    CAudioResourceManager::ReevaluateSaDeviceSettings(v5, **v7);
    CloseThreadpoolTimer((PTP_TIMER)(*v7)[1]);
    v8 = *(std::_Ref_count_base **)(*(_QWORD *)(*((_QWORD *)Context + 13)
                                              + 8 * (*((_QWORD *)Context + 15) & (*((_QWORD *)Context + 14) - 1LL)))
                                  + 8LL);
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
    if ( (*((_QWORD *)Context + 16))-- == 1LL )
      *((_QWORD *)Context + 15) = 0LL;
    else
      ++*((_QWORD *)Context + 15);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
}
