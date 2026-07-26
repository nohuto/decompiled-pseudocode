/*
 * XREFs of ndisReferenceProtocolByName @ 0x1C010E318
 * Callers:
 *     ndisHandleProtocolUnloadNotification @ 0x1C00E4FFC (ndisHandleProtocolUnloadNotification.c)
 *     ndisHandleProtocolReconfigNotification @ 0x1C010D2D0 (ndisHandleProtocolReconfigNotification.c)
 * Callees:
 *     ndisReferenceProtocol @ 0x1C001AC14 (ndisReferenceProtocol.c)
 *     memcmp @ 0x1C0025D20 (memcmp.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_Z @ 0x1C0041C64 (WPP_SF_Z.c)
 */

__int64 __fastcall ndisReferenceProtocolByName(PCUNICODE_STRING SourceString, __int64 *a2, char a3, unsigned __int8 a4)
{
  unsigned int v8; // edi
  KIRQL v9; // al
  struct _NDIS_PROTOCOL_BLOCK *v10; // r14
  KIRQL v11; // r13
  struct _NDIS_PROTOCOL_BLOCK *NextProtocol; // rbx
  unsigned __int16 Length; // bp
  unsigned __int16 v14; // ax
  size_t v15; // r8
  wchar_t *Buffer; // rcx
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-38h] BYREF

  v8 = -1073741772;
  if ( (unsigned __int8)byte_1C009960C >= 4u )
    WPP_SF_Z(0x23u, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, &SourceString->Length);
  DestinationString.Length = SourceString->Length;
  DestinationString.MaximumLength = DestinationString.Length + 2;
  DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                          NonPagedPoolNx,
                                          (unsigned __int16)(DestinationString.Length + 2),
                                          0x7473444Eu);
  if ( !DestinationString.Buffer )
  {
    *a2 = 0LL;
    v8 = -1073741670;
    goto LABEL_24;
  }
  RtlUpcaseUnicodeString(&DestinationString, SourceString, 0);
  v9 = KeAcquireSpinLockRaiseToDpc(&ndisProtocolListLock);
  v10 = (struct _NDIS_PROTOCOL_BLOCK *)*a2;
  v11 = v9;
  NextProtocol = ndisProtocolList;
  if ( *a2 )
    NextProtocol = v10->NextProtocol;
  if ( NextProtocol )
  {
    Length = DestinationString.Length;
    do
    {
      if ( a3 )
      {
        if ( NextProtocol == v10 )
          goto LABEL_18;
        v14 = NextProtocol->Name.Length;
        if ( Length == v14 )
          goto LABEL_18;
        if ( Length < v14 )
          v14 = Length;
        v15 = v14;
      }
      else
      {
        if ( Length != NextProtocol->Name.Length )
          goto LABEL_18;
        v15 = Length;
      }
      if ( !memcmp(DestinationString.Buffer, NextProtocol->Name.Buffer, v15) )
      {
        if ( ndisReferenceProtocol((__int64)NextProtocol, a4) )
          v8 = 0;
        else
          NextProtocol = 0LL;
        break;
      }
LABEL_18:
      NextProtocol = NextProtocol->NextProtocol;
    }
    while ( NextProtocol );
  }
  KeReleaseSpinLock(&ndisProtocolListLock, v11);
  Buffer = DestinationString.Buffer;
  *a2 = (__int64)NextProtocol;
  ExFreePoolWithTag(Buffer, 0);
LABEL_24:
  if ( (unsigned __int8)byte_1C009960C >= 4u )
    WPP_SF_qD(0x24u, &WPP_0f5804d9ba813936e0c202df1238e587_Traceguids, *a2, v8);
  return v8;
}
