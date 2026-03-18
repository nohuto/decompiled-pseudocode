/*
 * XREFs of IopConnectLinkTrackingPort @ 0x1406B4C20
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     NtSecureConnectPort @ 0x14046827C (NtSecureConnectPort.c)
 *     NtClose @ 0x1404AE620 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 */

LONG __fastcall IopConnectLinkTrackingPort(__int64 a1)
{
  NTSTATUS v1; // ebx
  ULONG MaxMessageLength[2]; // [rsp+50h] [rbp+17h] BYREF
  HANDLE PortHandle; // [rsp+58h] [rbp+1Fh] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp+27h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE SecurityQos; // [rsp+70h] [rbp+37h] BYREF

  v1 = 0;
  if ( !IopLinkTrackingServiceObject )
  {
    if ( *(_DWORD *)(IopLinkTrackingServiceEvent + 4) )
    {
      SecurityQos.ImpersonationLevel = SecurityImpersonation;
      *(_WORD *)&SecurityQos.ContextTrackingMode = 257;
      RtlInitUnicodeString(&DestinationString, L"\\Security\\TRKWKS_PORT");
      v1 = NtSecureConnectPort(&PortHandle, &DestinationString, &SecurityQos, 0LL, 0LL, 0LL, MaxMessageLength, 0LL, 0LL);
      if ( v1 >= 0 )
      {
        if ( MaxMessageLength[0] - 128 > 0x80 )
        {
          NtClose(PortHandle);
          v1 = -1073741811;
        }
        else
        {
          v1 = ObReferenceObjectByHandle(PortHandle, 0, LpcPortObjectType, 0, (PVOID *)MaxMessageLength, 0LL);
          IopLinkTrackingServiceObject = *(PVOID *)MaxMessageLength;
          NtClose(PortHandle);
        }
      }
    }
    else
    {
      v1 = -1073741772;
    }
  }
  *(_DWORD *)(a1 + 56) = v1;
  return KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
}
