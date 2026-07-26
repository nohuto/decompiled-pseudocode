/*
 * XREFs of ndisMNotifyMachineName @ 0x1C00AD5EC
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 *     ndisPmInitializeMiniport @ 0x1C010DF4C (ndisPmInitializeMiniport.c)
 * Callees:
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qSD @ 0x1C0042D10 (WPP_SF_qSD.c)
 *     ndisMDoMiniportOp @ 0x1C00AD748 (ndisMDoMiniportOp.c)
 */

void __fastcall ndisMNotifyMachineName(__int64 a1)
{
  void *v2; // rbx
  NTSTATUS v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  PVOID PoolWithTag; // rax
  __int64 v7; // [rsp+28h] [rbp-49h]
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-29h] BYREF
  _RTL_QUERY_REGISTRY_TABLE QueryTable[2]; // [rsp+58h] [rbp-19h] BYREF
  PCWSTR SourceString; // [rsp+E0h] [rbp+6Fh] BYREF
  __int64 Context; // [rsp+E8h] [rbp+77h] BYREF

  SourceString = 0LL;
  v2 = 0LL;
  Context = 0LL;
  memset(QueryTable, 0, sizeof(QueryTable));
  QueryTable[0].DefaultType = 0;
  QueryTable[1].Name = 0LL;
  QueryTable[0].Flags = 20;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  QueryTable[0].QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))&ndisReadParameter;
  QueryTable[0].Name = L"HostName";
  QueryTable[0].EntryContext = &SourceString;
  v3 = RtlQueryRegistryValuesEx(1u, L"\\Tcpip\\Parameters", QueryTable, &Context, 0LL);
  if ( v3 >= 0 && (_DWORD)Context == 1 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( DestinationString.Buffer )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, DestinationString.MaximumLength, 0x6E61444Eu);
      v2 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, DestinationString.MaximumLength);
        memmove(v2, DestinationString.Buffer, DestinationString.Length);
        ndisMDoMiniportOp(a1, 0, 66074, (_DWORD)v2, DestinationString.Length, 119, 0);
      }
      else if ( (unsigned __int8)byte_1C0098752 >= 2u )
      {
        WPP_SF_qD(0x6Au, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, DestinationString.MaximumLength);
      }
    }
    else if ( (unsigned __int8)byte_1C0098752 >= 2u )
    {
      WPP_SF_(0x69u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids);
    }
  }
  else if ( (unsigned __int8)byte_1C0098752 >= 2u )
  {
    LODWORD(v7) = v3;
    WPP_SF_qSD(v5, v4, a1, QueryTable[0].Name, v7);
  }
  if ( SourceString )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
