/*
 * XREFs of ??0StoredCallContextInfo@details@wil@@QEAA@$$QEAV012@@Z @ 0x18006E85C
 * Callers:
 *     ??0?$ActivityData@VQuickConnectLoggingProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV012@@Z @ 0x18006E8CC (--0-$ActivityData@VQuickConnectLoggingProvider@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activ.c)
 *     ??$?0V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@RefAndObject@?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAA@$$QEAV?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@3@@Z @ 0x1800778F4 (--$-0V-$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ??0?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x1800B9290 (--0-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflect.c)
 * Callees:
 *     memset @ 0x180194E50 (memset.c)
 */

_DWORD *__fastcall wil::details::StoredCallContextInfo::StoredCallContextInfo(_DWORD *a1, __int64 a2)
{
  bool v4; // zf
  HANDLE ProcessHeap; // rax
  char v6; // al
  _DWORD *result; // rax

  memset(a1, 0, 0x20uLL);
  v4 = *((_BYTE *)a1 + 24) == 0;
  *a1 = *(_DWORD *)a2;
  *((_QWORD *)a1 + 1) = *(_QWORD *)(a2 + 8);
  if ( !v4 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, *((LPVOID *)a1 + 2));
    *((_BYTE *)a1 + 24) = 0;
  }
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 2) = *(_QWORD *)(a2 + 16);
  v6 = *(_BYTE *)(a2 + 24);
  *(_QWORD *)(a2 + 16) = 0LL;
  *((_BYTE *)a1 + 24) = v6;
  result = a1;
  *(_BYTE *)(a2 + 24) = 0;
  return result;
}
