/*
 * XREFs of RtlUnicodeStringCopy @ 0x140008980
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x1404A9C80 (CmpGetSymbolicLinkTarget.c)
 *     PopUnicodeStringDeepCopy @ 0x1405252C0 (PopUnicodeStringDeepCopy.c)
 *     CmpDoWritethroughReparse @ 0x1405529F0 (CmpDoWritethroughReparse.c)
 *     CmpLinkHiveToMaster @ 0x140557540 (CmpLinkHiveToMaster.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x140583DF4 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x1406F5AC8 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140708A30 (VrpHandleIoctlInitializeJobForVreg.c)
 *     AslpPathWildcardAllocMatchNode @ 0x1407DB5F8 (AslpPathWildcardAllocMatchNode.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x140008A4C (RtlUnicodeStringValidateWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCopy(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  ULONG v2; // r8d
  __int16 v3; // di
  __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  NTSTATUS result; // eax
  size_t v9; // rdx
  __int64 v10; // rcx
  ULONG v11; // r8d
  int v12; // ecx
  wchar_t *Buffer; // r10
  unsigned __int64 v14; // r11
  __int64 v15; // rsi

  v3 = 0;
  v5 = 0LL;
  v6 = 0LL;
  result = RtlUnicodeStringValidateWorker(DestinationString, (const size_t)SourceString, v2);
  if ( result >= 0 )
  {
    if ( v10 )
    {
      v5 = *(_QWORD *)(v10 + 8);
      v6 = (unsigned __int64)*(unsigned __int16 *)(v10 + 2) >> 1;
    }
    v12 = RtlUnicodeStringValidateWorker(SourceString, v9, v11);
    if ( v12 >= 0 )
    {
      if ( SourceString )
      {
        Buffer = SourceString->Buffer;
        v14 = (unsigned __int64)SourceString->Length >> 1;
      }
      v12 = 0;
      if ( v6 )
      {
        v15 = v5 - (_QWORD)Buffer;
        while ( v14 )
        {
          --v14;
          *(wchar_t *)((char *)Buffer + v15) = *Buffer;
          ++v3;
          ++Buffer;
          if ( !--v6 )
            goto LABEL_11;
        }
      }
      else
      {
LABEL_11:
        if ( v14 )
          v12 = -2147483643;
      }
    }
    result = v12;
    DestinationString->Length = 2 * v3;
  }
  return result;
}
