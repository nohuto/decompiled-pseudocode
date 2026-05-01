/*
 * XREFs of ?GetSupplementalDataForMonitorUpdate@CApplicationManager@@UEAAXPEAUUPDATE_MONITOR_SUPPLEMENTAL_DATA@@@Z @ 0x18000DDF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::GetSupplementalDataForMonitorUpdate(
        CApplicationManager *this,
        struct UPDATE_MONITOR_SUPPLEMENTAL_DATA *a2)
{
  *((_DWORD *)a2 + 1) = 0;
  *(_DWORD *)a2 = *((_DWORD *)this + 148);
}
