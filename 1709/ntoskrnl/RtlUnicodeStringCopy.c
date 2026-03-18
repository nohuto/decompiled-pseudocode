/*
 * XREFs of RtlUnicodeStringCopy @ 0x1400AF93C
 * Callers:
 *     CmQueryMultipleValueForLayeredKey @ 0x1401E35BC (CmQueryMultipleValueForLayeredKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14047EAB0 (CmpGetSymbolicLinkTarget.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmpLinkHiveToMaster @ 0x1404E46C4 (CmpLinkHiveToMaster.c)
 *     PopUnicodeStringDeepCopy @ 0x1404E6130 (PopUnicodeStringDeepCopy.c)
 *     CmpDoWritethroughReparse @ 0x140581B10 (CmpDoWritethroughReparse.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x14059E850 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140692A38 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x1406A43C0 (VrpHandleIoctlInitializeJobForVreg.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x140016F20 (RtlUnicodeStringValidateWorker.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x1400AFA00 (RtlUnicodeStringValidateDestWorker.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCopy(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  size_t *v2; // r9
  size_t v5; // rdx
  NTSTATUS v6; // r8d
  wchar_t *Buffer; // rdi
  NTSTATUS v8; // r10d
  unsigned __int64 v9; // r11
  size_t v10; // rcx
  __int16 v11; // dx
  char *v12; // r9
  size_t v14; // [rsp+20h] [rbp-18h]
  ULONG v15; // [rsp+28h] [rbp-10h]
  size_t v16; // [rsp+50h] [rbp+18h] BYREF
  wchar_t *v17; // [rsp+58h] [rbp+20h] BYREF

  v6 = RtlUnicodeStringValidateDestWorker(DestinationString, &v17, &v16, v2, v14, v15);
  if ( v6 >= 0 )
  {
    Buffer = 0LL;
    v6 = RtlUnicodeStringValidateWorker(SourceString, v5, v6);
    if ( v6 >= 0 )
    {
      if ( SourceString )
      {
        Buffer = SourceString->Buffer;
        v9 = (unsigned __int64)SourceString->Length >> 1;
      }
      v10 = v16;
      v6 = v8;
      v11 = v8;
      if ( !v16 )
        goto LABEL_13;
      v12 = (char *)((char *)v17 - (char *)Buffer);
      do
      {
        if ( !v9 )
          break;
        --v9;
        *(wchar_t *)((char *)Buffer + (_QWORD)v12) = *Buffer;
        ++v11;
        ++Buffer;
        --v10;
      }
      while ( v10 );
      if ( !v10 )
      {
LABEL_13:
        if ( v9 )
          v6 = -2147483643;
      }
      LOWORD(v8) = v11;
    }
    DestinationString->Length = 2 * v8;
  }
  return v6;
}
