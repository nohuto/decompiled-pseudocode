/*
 * XREFs of ?LowPowerEpochCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z @ 0x1C019FAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C019F924 (-IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 */

__int64 __fastcall LowPowerEpochCallBackFn(__int64 SettingGuid, int *Value, ULONG ValueLength, PVOID Context)
{
  int v4; // edi
  int v5; // ebx
  __int64 v6; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v8; // rcx

  v4 = *Value;
  v5 = *Value != 0;
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal(SettingGuid) + 399) != v5 )
  {
    Global = DXGGLOBAL::GetGlobal(v6);
    DXGGLOBAL::IterateProcessAndApplyCSFn((__int64)Global, 2 - (v4 != 0));
    *((_DWORD *)DXGGLOBAL::GetGlobal(v8) + 399) = v5;
  }
  return 0LL;
}
