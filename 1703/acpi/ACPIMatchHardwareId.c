/*
 * XREFs of ACPIMatchHardwareId @ 0x1C008BAB8
 * Callers:
 *     ACPIDetectCouldExtensionBeInRelation @ 0x1C008DACC (ACPIDetectCouldExtensionBeInRelation.c)
 * Callees:
 *     WPP_RECORDER_SF_SqLL @ 0x1C0006C58 (WPP_RECORDER_SF_SqLL.c)
 *     memset @ 0x1C002CB80 (memset.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C008DE08 (ACPIInternalSendSynchronousIrp.c)
 */

__int64 __fastcall ACPIMatchHardwareId(PDEVICE_OBJECT DeviceObject, PCUNICODE_STRING String2, _BYTE *a3)
{
  int v6; // edx
  int v7; // r8d
  int v8; // r9d
  int v9; // r14d
  const WCHAR *v10; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v13[18]; // [rsp+60h] [rbp-19h] BYREF
  WCHAR *SourceString; // [rsp+E8h] [rbp+6Fh]

  *a3 = 0;
  memset(v13, 0, sizeof(v13));
  LOWORD(v13[0]) = 4891;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v13[2] = 1;
  v9 = ACPIInternalSendSynchronousIrp(DeviceObject);
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
    ExFreePoolWithTag(SourceString, 0);
  }
  WPP_RECORDER_SF_SqLL(WPP_GLOBAL_Control->DeviceExtension, v6, v7, v8);
  return (unsigned int)v9;
}
