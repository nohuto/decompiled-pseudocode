/*
 * XREFs of ?DxgkIsExpandedResourceApplication@@YA_NPEAU_EPROCESS@@@Z @ 0x1C0088100
 * Callers:
 *     ?Initialize@DXGPROCESS@@QEAAJXZ @ 0x1C00D65C8 (-Initialize@DXGPROCESS@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DxgkIsExpandedResourceApplication(PEPROCESS Process)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  char v6; // si
  __int64 v7; // rax
  PACCESS_TOKEN v8; // rdi
  NTSTATUS v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  int v16; // [rsp+20h] [rbp-28h] BYREF
  const wchar_t *v17; // [rsp+28h] [rbp-20h]
  char v18; // [rsp+58h] [rbp+10h] BYREF
  PVOID TokenInformation; // [rsp+60h] [rbp+18h] BYREF

  v6 = 1;
  if ( ExGetPreviousMode() != 1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v3, v2, v4, v5);
    *(_QWORD *)(v7 + 24) = 1051LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v16 = 2359330;
  v17 = L"expandedResources";
  v18 = 0;
  v8 = PsReferencePrimaryToken(Process);
  v9 = SeQueryInformationToken(v8, TokenIsAppContainer, &TokenInformation);
  PsDereferencePrimaryToken(v8);
  if ( v9 < 0 )
    goto LABEL_4;
  if ( !(_DWORD)TokenInformation )
    return 0;
  if ( (int)RtlCapabilityCheck(0LL, &v16, &v18) < 0 )
  {
LABEL_4:
    v14 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
    *(_QWORD *)(v14 + 24) = Process;
    WdLogEvent5_WdWarning(v14);
    return 0;
  }
  if ( !(_DWORD)TokenInformation || !v18 )
    return 0;
  return v6;
}
