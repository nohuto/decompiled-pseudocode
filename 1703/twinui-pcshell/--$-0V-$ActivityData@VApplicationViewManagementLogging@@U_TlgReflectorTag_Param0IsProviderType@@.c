/*
 * XREFs of ??$?0V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@RefAndObject@?$shared_object@V?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAA@$$QEAV?$ActivityData@VApplicationViewManagementLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@3@@Z @ 0x1800778F4
 * Callers:
 *     ??0?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180077A00 (--0-$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 * Callees:
 *     ??0StoredCallContextInfo@details@wil@@QEAA@$$QEAV012@@Z @ 0x18006E85C (--0StoredCallContextInfo@details@wil@@QEAA@$$QEAV012@@Z.c)
 */

__int64 __fastcall wil::details::shared_object<wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityData<ApplicationViewManagementLogging,_TlgReflectorTag_Param0IsProviderType>>::RefAndObject::RefAndObject(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)a1 = 1;
  *(_DWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)a2;
  *(_BYTE *)(a1 + 12) = *(_BYTE *)(a2 + 4);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(a2 + 8);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 24);
  *(_DWORD *)a2 = 0;
  *(_BYTE *)(a2 + 4) = 0;
  wil::details::StoredCallContextInfo::StoredCallContextInfo((_DWORD *)(a1 + 48), a2 + 40);
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 72);
  *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 76);
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a2 + 80);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a2 + 96);
  *(_OWORD *)(a1 + 120) = *(_OWORD *)(a2 + 112);
  *(_OWORD *)(a1 + 136) = *(_OWORD *)(a2 + 128);
  *(_OWORD *)(a1 + 152) = *(_OWORD *)(a2 + 144);
  *(_OWORD *)(a1 + 168) = *(_OWORD *)(a2 + 160);
  *(_OWORD *)(a1 + 184) = *(_OWORD *)(a2 + 176);
  *(_OWORD *)(a1 + 200) = *(_OWORD *)(a2 + 192);
  *(_OWORD *)(a1 + 216) = *(_OWORD *)(a2 + 208);
  *(_QWORD *)(a1 + 232) = *(_QWORD *)(a2 + 224);
  *(_QWORD *)(a1 + 240) = *(_QWORD *)(a2 + 232);
  result = a1;
  *(_QWORD *)(a2 + 224) = 0LL;
  *(_QWORD *)(a2 + 232) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  return result;
}
