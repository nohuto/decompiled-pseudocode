/*
 * XREFs of ?DxgkIsExpandedResourceApplication@@YA_NPEAU_EPROCESS@@@Z @ 0x1C01B684C
 * Callers:
 *     ?Initialize@DXGPROCESS@@QEAAJXZ @ 0x1C00F76A4 (-Initialize@DXGPROCESS@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall DxgkIsExpandedResourceApplication(PEPROCESS Process)
{
  __int64 v2; // rcx
  char v3; // si
  __int64 v4; // rax
  PACCESS_TOKEN v5; // rdi
  NTSTATUS v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  int v12; // [rsp+20h] [rbp-28h] BYREF
  const wchar_t *v13; // [rsp+28h] [rbp-20h]
  char v14; // [rsp+58h] [rbp+10h] BYREF
  PVOID TokenInformation; // [rsp+60h] [rbp+18h] BYREF

  v3 = 1;
  if ( ExGetPreviousMode() != 1 )
  {
    v4 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v4 + 24) = 1186LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v12 = 2359330;
  v13 = L"expandedResources";
  v14 = 0;
  v5 = PsReferencePrimaryToken(Process);
  v6 = SeQueryInformationToken(v5, TokenIsAppContainer, &TokenInformation);
  PsDereferencePrimaryToken(v5);
  if ( v6 < 0 )
    goto LABEL_4;
  if ( !TokenInformation )
    return 0;
  if ( (int)RtlCapabilityCheck(0LL, &v12, &v14) < 0 )
  {
LABEL_4:
    v10 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v10 + 24) = Process;
    WdLogEvent5_WdWarning(v10);
    return 0;
  }
  if ( !TokenInformation || !v14 )
    return 0;
  return v3;
}
