/*
 * XREFs of ?LowPowerEpochCallBackFn@@YAJPEBU_GUID@@PEAXK1@Z @ 0x1C01AACC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z @ 0x1C01AAB4C (-IterateProcessAndApplyCSFn@DXGGLOBAL@@QEAAXW4_PROCESS_CSFN_TYPE@@@Z.c)
 */

__int64 __fastcall LowPowerEpochCallBackFn(__int64 SettingGuid, int *Value, ULONG ValueLength, PVOID Context)
{
  int v4; // edi
  int v5; // ebx
  __int64 v6; // rcx
  struct DXGGLOBAL *Global; // rcx
  unsigned int v8; // edx
  __int64 v9; // rcx

  v4 = *Value;
  v5 = *Value != 0;
  if ( *((_DWORD *)DXGGLOBAL::GetGlobal(SettingGuid) + 367) != v5 )
  {
    Global = DXGGLOBAL::GetGlobal(v6);
    v8 = 1;
    if ( !v4 )
      v8 = 2;
    DXGGLOBAL::IterateProcessAndApplyCSFn((__int64)Global, v8);
    *((_DWORD *)DXGGLOBAL::GetGlobal(v9) + 367) = v5;
  }
  return 0LL;
}
