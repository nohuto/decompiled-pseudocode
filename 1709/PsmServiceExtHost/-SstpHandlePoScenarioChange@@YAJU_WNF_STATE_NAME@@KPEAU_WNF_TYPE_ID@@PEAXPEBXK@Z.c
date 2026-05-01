/*
 * XREFs of ?SstpHandlePoScenarioChange@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180049B40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SstpHandlePoScenarioChange(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        _DWORD *a4,
        _QWORD *a5)
{
  __int64 v5; // rax

  v5 = *a5 - *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1;
  if ( *a5 == *(_QWORD *)&GUID_SPM_LOW_POWER_CS.Data1 )
    v5 = a5[1] - *(_QWORD *)GUID_SPM_LOW_POWER_CS.Data4;
  if ( v5 )
    a4[4] &= ~4u;
  else
    a4[4] |= 4u;
  return 0LL;
}
