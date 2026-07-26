/*
 * XREFs of NdisOpenConfigurationKeyByName @ 0x1C00B21F0
 * Callers:
 *     ndisOidPostIovNicSwitchParameters @ 0x1C006CCF0 (ndisOidPostIovNicSwitchParameters.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00AD4D8 (ndisIovCreateDefaultNicSwitch.c)
 *     NdisOpenConfigurationKeyByIndex @ 0x1C00C8860 (NdisOpenConfigurationKeyByIndex.c)
 * Callees:
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ndisOpenProtocolSubkey @ 0x1C00B3BC4 (ndisOpenProtocolSubkey.c)
 */

void __stdcall NdisOpenConfigurationKeyByName(
        PNDIS_STATUS Status,
        NDIS_HANDLE ConfigurationHandle,
        PNDIS_STRING SubKeyName,
        PNDIS_HANDLE SubKeyHandle)
{
  HANDLE *v8; // rdi
  int v9; // eax
  char *PoolWithTag; // rax
  char *v11; // rbx
  NTSTATUS v12; // eax
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+20h] [rbp-48h] BYREF

  v8 = 0LL;
  if ( (unsigned __int8)byte_1C009874F >= 4u )
    WPP_SF_q(0xDu, &WPP_fb5e2801bcb8364427405c45392b258b_Traceguids, (__int64)ConfigurationHandle);
  if ( (*(_DWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 16LL) & 2) == 0
    || *((_QWORD *)ConfigurationHandle + 4)
    || (v9 = ndisOpenProtocolSubkey(ConfigurationHandle), *Status = v9, v9 >= 0) )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, SubKeyName->Length + 176LL, 0x6863444Eu);
    v8 = (HANDLE *)PoolWithTag;
    *Status = PoolWithTag == 0LL ? 0xC000009A : 0;
    if ( (PoolWithTag == 0LL ? 0xC000009A : 0) != 0 )
    {
      *SubKeyHandle = 0LL;
    }
    else
    {
      v11 = PoolWithTag + 40;
      *((_QWORD *)PoolWithTag + 2) = PoolWithTag + 40;
      PoolWithTag[40] = 10;
      *(_BYTE *)(*((_QWORD *)PoolWithTag + 2) + 1LL) = 1;
      *(_WORD *)(*((_QWORD *)PoolWithTag + 2) + 2LL) = 40;
      memmove(PoolWithTag + 176, SubKeyName->Buffer, SubKeyName->Length);
      *((_DWORD *)v11 + 14) = 0;
      *((_QWORD *)v11 + 10) = 0LL;
      *((_DWORD *)v11 + 22) = 0;
      *((_QWORD *)v11 + 12) = 0LL;
      *((_QWORD *)v11 + 3) = &ndisSaveParameters;
      *((_DWORD *)v11 + 8) = 20;
      *((_QWORD *)v11 + 1) = *(_QWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 8LL);
      ObjectAttributes.RootDirectory = (HANDLE)*((_QWORD *)ConfigurationHandle + 4);
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = SubKeyName;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v12 = ZwOpenKey(v8 + 4, 0xBu, &ObjectAttributes);
      *Status = v12;
      if ( v12 >= 0 )
      {
        v8[3] = 0LL;
        v8[1] = (HANDLE)*((_QWORD *)ConfigurationHandle + 1);
        *SubKeyHandle = v8;
      }
    }
  }
  if ( *Status < 0 && v8 )
    ExFreePoolWithTag(v8, 0);
  if ( (unsigned __int8)byte_1C009874F >= 4u )
    WPP_SF_q(0xEu, &WPP_fb5e2801bcb8364427405c45392b258b_Traceguids, (__int64)ConfigurationHandle);
}
