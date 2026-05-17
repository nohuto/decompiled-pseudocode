/*
 * XREFs of RtlpMuiRegCreateLanguageList @ 0x180052B54
 * Callers:
 *     RtlpLoadUserUIByPolicy @ 0x180004460 (RtlpLoadUserUIByPolicy.c)
 *     RtlpMuiRegDupLanguageList @ 0x180004568 (RtlpMuiRegDupLanguageList.c)
 *     InitializeUserOrMachineLangList @ 0x180005C60 (InitializeUserOrMachineLangList.c)
 *     RtlpSetProcUserMachineLangList @ 0x180005D20 (RtlpSetProcUserMachineLangList.c)
 *     RtlGetThreadPreferredUILanguages @ 0x18002C530 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18004FA38 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     LdrpMergeLangFallbackLists @ 0x180051168 (LdrpMergeLangFallbackLists.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180051984 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     LdrpCreateLangFallbackList @ 0x180052B14 (LdrpCreateLangFallbackList.c)
 *     RtlpLoadMachineUIByPolicy @ 0x180084BB0 (RtlpLoadMachineUIByPolicy.c)
 * Callees:
 *     _SafeAllocBlob @ 0x180052BE0 (_SafeAllocBlob.c)
 */

__int64 __fastcall RtlpMuiRegCreateLanguageList(int a1, char a2, __int64 a3)
{
  int v5; // ebx
  __int64 result; // rax
  int v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0;
  v5 = 4;
  if ( a1 >= 1 )
    v5 = a1;
  result = SafeAllocBlob(64, v5, 6, 0, 0, (__int64)&v7);
  if ( result )
  {
    *(_DWORD *)result = v7;
    *(_QWORD *)(result + 24) = result + 64;
    *(_WORD *)(result + 4) = 0;
    *(_WORD *)(result + 6) = v5;
    *(_BYTE *)(result + 8) = a2;
    *(_DWORD *)(result + 40) = 0;
    *(_QWORD *)(result + 16) = a3;
  }
  return result;
}
