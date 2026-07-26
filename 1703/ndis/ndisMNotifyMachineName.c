/*
 * XREFs of ndisMNotifyMachineName @ 0x1C00BD424
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 *     ndisPmInitializeMiniport @ 0x1C0104FCC (ndisPmInitializeMiniport.c)
 * Callees:
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     WPP_SF_qSD @ 0x1C0045B70 (WPP_SF_qSD.c)
 *     ndisMDoMiniportOp @ 0x1C00BD580 (ndisMDoMiniportOp.c)
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
      else if ( (unsigned __int8)byte_1C0092612 >= 2u )
      {
        WPP_SF_qD(0x6Au, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, DestinationString.MaximumLength);
      }
    }
    else if ( (unsigned __int8)byte_1C0092612 >= 2u )
    {
      WPP_SF_(0x69u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids);
    }
  }
  else if ( (unsigned __int8)byte_1C0092612 >= 2u )
  {
    LODWORD(v7) = v3;
    WPP_SF_qSD(v5, v4, a1, QueryTable[0].Name, v7);
  }
  if ( SourceString )
    ExFreePoolWithTag((PVOID)SourceString, 0);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
