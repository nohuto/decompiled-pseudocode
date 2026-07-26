/*
 * XREFs of ndisReadMiniportMediaSpecificPortAuthStates @ 0x1C00AF298
 * Callers:
 *     ndisReadMiniportDefaultPortAuthStates @ 0x1C00AF1A4 (ndisReadMiniportDefaultPortAuthStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ndisReadMiniportSpecificPortAuthStates @ 0x1C00AF0D8 (ndisReadMiniportSpecificPortAuthStates.c)
 *     NdisCloseConfiguration @ 0x1C00B0D80 (NdisCloseConfiguration.c)
 *     NdisOpenProtocolConfiguration @ 0x1C00B3A10 (NdisOpenProtocolConfiguration.c)
 */

__int64 __fastcall ndisReadMiniportMediaSpecificPortAuthStates(__int64 a1)
{
  wchar_t *PoolWithTag; // rax
  unsigned int MiniportSpecificPortAuthStates; // ebx
  _UNICODE_STRING Destination; // [rsp+28h] [rbp-69h] BYREF
  NTSTATUS v6; // [rsp+38h] [rbp-59h] BYREF
  NDIS_HANDLE ConfigurationHandle; // [rsp+40h] [rbp-51h] BYREF
  _UNICODE_STRING String; // [rsp+48h] [rbp-49h] BYREF
  _UNICODE_STRING v9; // [rsp+58h] [rbp-39h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-29h] BYREF
  _UNICODE_STRING Source; // [rsp+78h] [rbp-19h] BYREF
  char v12; // [rsp+88h] [rbp-9h] BYREF
  char v13; // [rsp+B0h] [rbp+1Fh] BYREF

  *(_DWORD *)&Destination.Length = 0;
  Destination.Buffer = 0LL;
  ConfigurationHandle = 0LL;
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_q(0x33u, &WPP_666d18e4e4b135fd66b72aa04d21ecd1_Traceguids, a1);
  *(_DWORD *)&String.Length = 2621440;
  String.Buffer = (wchar_t *)&v12;
  *(_DWORD *)&v9.Length = 2621440;
  v9.Buffer = (wchar_t *)&v13;
  if ( RtlIntegerToUnicodeString(*(unsigned __int16 *)(*(_QWORD *)(a1 + 4064) + 524LL), 0xAu, &String)
    || RtlIntegerToUnicodeString(*(_DWORD *)(a1 + 1832), 0xAu, &v9) )
  {
    MiniportSpecificPortAuthStates = -1073741670;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"Ndis\\IfTypes\\");
    RtlInitUnicodeString(&Source, L"\\");
    Destination.Length = 0;
    Destination.MaximumLength = String.Length + v9.Length + DestinationString.Length + Source.Length + 4;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, Destination.MaximumLength, 0x2020444Eu);
    Destination.Buffer = PoolWithTag;
    if ( !PoolWithTag )
    {
      MiniportSpecificPortAuthStates = -1073741670;
      goto LABEL_9;
    }
    memset(PoolWithTag, 0, Destination.MaximumLength);
    RtlCopyUnicodeString(&Destination, &DestinationString);
    RtlAppendUnicodeStringToString(&Destination, &String);
    RtlAppendUnicodeStringToString(&Destination, &Source);
    RtlAppendUnicodeStringToString(&Destination, &v9);
    v6 = RtlCheckRegistryKey(1u, (PWSTR)Destination.Buffer);
    MiniportSpecificPortAuthStates = v6;
    if ( !v6 )
    {
      NdisOpenProtocolConfiguration(&v6, &ConfigurationHandle, &Destination);
      MiniportSpecificPortAuthStates = v6;
      if ( !v6 )
      {
        MiniportSpecificPortAuthStates = ndisReadMiniportSpecificPortAuthStates((_DWORD *)a1, ConfigurationHandle);
        NdisCloseConfiguration(ConfigurationHandle);
        if ( !MiniportSpecificPortAuthStates )
          *(_DWORD *)(a1 + 2692) |= 0x10u;
      }
    }
  }
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
LABEL_9:
  if ( (unsigned __int8)byte_1C0098754 >= 4u )
    WPP_SF_qD(0x34u, &WPP_666d18e4e4b135fd66b72aa04d21ecd1_Traceguids, a1, MiniportSpecificPortAuthStates);
  return MiniportSpecificPortAuthStates;
}
