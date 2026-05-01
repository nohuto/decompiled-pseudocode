/*
 * XREFs of ?CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME@@1@Z @ 0x18001C548
 * Callers:
 *     ?AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@@1@Z @ 0x18000D710 (-AddCommitMemoryWnfStates@ResourceManager@ExecutionModel@@QEAAJKPEAT_RM_SID@@PEAT_LARGE_INTEGER@.c)
 * Callees:
 *     ?RmpUtilCreateWnfStateNameForApplicationClient@@YAJPEAT_RM_SID@@KPEAU_WNF_STATE_NAME@@@Z @ 0x18001C63C (-RmpUtilCreateWnfStateNameForApplicationClient@@YAJPEAT_RM_SID@@KPEAU_WNF_STATE_NAME@@@Z.c)
 *     QueryTransientObjectSecurityDescriptor @ 0x18001CDF4 (QueryTransientObjectSecurityDescriptor.c)
 *     AccessHlprFree @ 0x18001CF08 (AccessHlprFree.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::CreateCommitMemoryWnfStates(
        union _RM_SID *a1,
        struct _WNF_STATE_NAME *a2,
        struct _WNF_STATE_NAME *a3)
{
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r8
  unsigned int v9; // ebx
  signed int v11; // eax
  __int64 v12; // [rsp+40h] [rbp-20h] BYREF
  _WNF_STATE_NAME v13; // [rsp+48h] [rbp-18h] BYREF
  struct _WNF_STATE_NAME v14; // [rsp+50h] [rbp-10h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( (int)QueryTransientObjectSecurityDescriptor(a1, a2, &v12) >= 0 )
  {
    v6 = NtCreateWnfStateName(&v13, 3LL, 0LL);
    if ( v6 < 0 )
      goto LABEL_17;
    v6 = NtCreateWnfStateName(&v14, 3LL, 0LL);
  }
  else
  {
    v6 = RmpUtilCreateWnfStateNameForApplicationClient(a1, 8u, &v13);
    if ( v6 < 0 )
      goto LABEL_17;
    v6 = RmpUtilCreateWnfStateNameForApplicationClient(a1, 0x10u, &v14);
  }
  if ( v6 >= 0 )
  {
    *a2 = v13;
    v13 = 0LL;
    *a3 = v14;
    v14 = 0LL;
    v9 = 0;
    goto LABEL_6;
  }
LABEL_17:
  v11 = RtlNtStatusToDosError(v6);
  v9 = v11;
  if ( v11 > 0 )
    v9 = (unsigned __int16)v11 | 0x80070000;
LABEL_6:
  if ( v12 )
    AccessHlprFree(v12, v7, v8);
  if ( v13.Data[0] || v13.Data[1] )
    NtDeleteWnfStateName(&v13);
  if ( v14.Data[0] || v14.Data[1] )
    NtDeleteWnfStateName(&v14);
  return v9;
}
