/*
 * XREFs of ?HandleDuckingIdGainChanged@CApplicationManager@@QEAAJPEAUDuckingGainValueChangedContext@@@Z @ 0x18001E8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z @ 0x18001CCE4 (-UpdateVolumeForAllAppsInSession@CApplicationManager@@QEAAJKW4AudioVolumeChangeType@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationManager::HandleDuckingIdGainChanged(
        CApplicationManager *this,
        struct DuckingGainValueChangedContext *a2)
{
  return (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)g_StreamClassPolicyManager + 2) + 32LL))(
           (char *)g_StreamClassPolicyManager + 16,
           *((unsigned int *)a2 + 2),
           *(_QWORD *)a2);
}
