/*
 * XREFs of ACPIMatchHardwareId @ 0x1C0091EB0
 * Callers:
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C00920B0 (ACPIDetectCouldExtensionBeInRelation.c)
 * Callees:
 *     WPP_RECORDER_SF_SqLL @ 0x1C002251C (WPP_RECORDER_SF_SqLL.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C008C110 (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall ACPIMatchHardwareId(PDEVICE_OBJECT DeviceObject, PCUNICODE_STRING String2, _BYTE *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // r14d
  const WCHAR *v10; // rbx
  int v12; // [rsp+20h] [rbp-59h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v14[20]; // [rsp+60h] [rbp-19h] BYREF
  PCWSTR SourceString; // [rsp+E8h] [rbp+6Fh] BYREF

  *a3 = 0;
  memset(v14, 0, 0x48uLL);
  LOWORD(v14[0]) = 4891;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v14[2] = 1;
  v9 = ACPIInternalSendSynchronousIrp(DeviceObject, (__int64)v14, (unsigned __int64 *)&SourceString);
  if ( v9 >= 0 )
  {
    v10 = SourceString;
    if ( SourceString )
    {
      while ( *v10 )
      {
        RtlInitUnicodeString(&DestinationString, v10);
        v10 += (unsigned __int64)DestinationString.MaximumLength >> 1;
        if ( RtlEqualUnicodeString(&DestinationString, String2, 1u) )
        {
          *a3 = 1;
          break;
        }
        if ( !v10 )
          break;
      }
    }
    ExFreePoolWithTag((PVOID)SourceString, 0);
  }
  WPP_RECORDER_SF_SqLL((__int64)WPP_GLOBAL_Control->DeviceExtension, v6, v7, v8, v12, String2->Buffer);
  return (unsigned int)v9;
}
