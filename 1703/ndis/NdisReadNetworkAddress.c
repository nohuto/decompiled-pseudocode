/*
 * XREFs of NdisReadNetworkAddress @ 0x1C00AC320
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     NdisReadConfiguration @ 0x1C00AE8B0 (NdisReadConfiguration.c)
 */

void __stdcall NdisReadNetworkAddress(
        PNDIS_STATUS Status,
        PVOID *NetworkAddress,
        PUINT NetworkAddressLength,
        NDIS_HANDLE ConfigurationHandle)
{
  unsigned int v7; // ebp
  CHAR *Buffer; // rdi
  CHAR *v9; // r12
  CHAR *v10; // rsi
  unsigned __int64 v11; // r15
  NTSTATUS v12; // eax
  CHAR String; // [rsp+80h] [rbp+8h] BYREF
  CHAR v14; // [rsp+81h] [rbp+9h]
  char v15; // [rsp+82h] [rbp+Ah]
  PVOID *v16; // [rsp+88h] [rbp+10h]
  ULONG Value; // [rsp+90h] [rbp+18h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+98h] [rbp+20h] BYREF

  v16 = NetworkAddress;
  if ( (unsigned __int8)byte_1C009260F >= 4u )
    WPP_SF_q(0x19u, &WPP_99a60aa0491337cae2647d317c30bcf5_Traceguids, (__int64)ConfigurationHandle);
  *Status = -1073741823;
  *NetworkAddressLength = 0;
  NdisReadConfiguration(Status, &ParameterValue, ConfigurationHandle, (PNDIS_STRING)&Keyword, NdisParameterString);
  if ( *Status
    || ParameterValue->ParameterType != NdisParameterString
    || ParameterValue->ParameterData.StringData.Length < 4u )
  {
    *Status = -1073741823;
  }
  else
  {
    v15 = 0;
    v7 = 0;
    Buffer = (CHAR *)ParameterValue->ParameterData.StringData.Buffer;
    v9 = Buffer;
    v10 = Buffer + 4;
    v11 = (unsigned __int64)&Buffer[2 * ((unsigned __int64)ParameterValue->ParameterData.StringData.Length >> 1)];
    if ( (unsigned __int64)(Buffer + 4) <= v11 )
    {
      while ( 1 )
      {
        String = *Buffer;
        v14 = Buffer[2];
        Buffer += 4;
        v10 += 4;
        v12 = RtlCharToInteger(&String, 0x10u, &Value);
        if ( v12 < 0 )
          break;
        ++v7;
        *v9++ = Value;
        if ( (unsigned __int64)Buffer < v11 && *(_WORD *)Buffer == 45 )
        {
          Buffer += 2;
          v10 += 2;
        }
        if ( (unsigned __int64)v10 > v11 )
          goto LABEL_17;
      }
      *Status = -1073741823;
LABEL_17:
      if ( v12 >= 0 )
      {
        *Status = 0;
        *v16 = ParameterValue->ParameterData.StringData.Buffer;
        *NetworkAddressLength = v7;
        if ( !v7 )
          *Status = -1073741823;
      }
    }
  }
  if ( (unsigned __int8)byte_1C009260F >= 4u )
    WPP_SF_q(0x1Au, &WPP_99a60aa0491337cae2647d317c30bcf5_Traceguids, (__int64)ConfigurationHandle);
}
