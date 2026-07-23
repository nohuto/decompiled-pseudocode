/*
 * XREFs of EtwpSetProviderTraitsKm @ 0x140603DF4
 * Callers:
 *     EtwSetInformation @ 0x140603DA0 (EtwSetInformation.c)
 * Callees:
 *     EtwEventEnabled @ 0x1400F3870 (EtwEventEnabled.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     EtwpSetProviderTraitsCommon @ 0x140591004 (EtwpSetProviderTraitsCommon.c)
 *     EtwpEventWriteRegistrationStatus @ 0x1407AB088 (EtwpEventWriteRegistrationStatus.c)
 */

__int64 __fastcall EtwpSetProviderTraitsKm(__int64 a1, void *Src, unsigned __int16 a3)
{
  unsigned int v6; // ebp
  _RTL_BALANCED_NODE *PoolWithTag; // rax
  _RTL_BALANCED_NODE *Node; // rbx
  unsigned int v9; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // [rsp+60h] [rbp+8h] BYREF

  if ( (*(_BYTE *)(a1 + 98) & 8) != 0 )
  {
    v9 = -1073741811;
  }
  else if ( *(_QWORD *)(a1 + 104) )
  {
    v9 = -1073741823;
  }
  else
  {
    v6 = a3;
    PoolWithTag = (_RTL_BALANCED_NODE *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)a3 + 28, 0x54777445u);
    Node = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove((char *)&PoolWithTag[1].Left + 4, Src, a3);
      v9 = EtwpSetProviderTraitsCommon(
             0LL,
             0,
             (unsigned int *)&v14,
             a1,
             Node,
             v6,
             &EtwpProviderTraitsKmMutex,
             &EtwpProviderTraitsKmTree);
      if ( !v9 )
        return v9;
    }
    else
    {
      v9 = -1073741670;
    }
  }
  if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SET_TRAITS_FAILED) )
    EtwpEventWriteRegistrationStatus(v12, v11, v13, a1, v9);
  return v9;
}
