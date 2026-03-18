/*
 * XREFs of SepInformLsaOfDeletedLogon @ 0x1405A7BCC
 * Callers:
 *     SepDeReferenceLogonSession @ 0x1405A7534 (SepDeReferenceLogonSession.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     SepQueueWorkItem @ 0x140133A70 (SepQueueWorkItem.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

void __fastcall SepInformLsaOfDeletedLogon(__int64 *a1, void *a2, _QWORD *a3)
{
  _QWORD *PoolWithTag; // rbx
  __int64 v6; // rax

  PoolWithTag = a3;
  if ( !a3 )
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x774C6553u);
  if ( PoolWithTag )
  {
    v6 = *a1;
    PoolWithTag[5] = 0LL;
    *((_DWORD *)PoolWithTag + 12) = 0;
    *((_DWORD *)PoolWithTag + 5) = 0;
    PoolWithTag[3] = v6;
    *((_DWORD *)PoolWithTag + 8) = 3;
    *((_DWORD *)PoolWithTag + 9) = 8;
    *((_DWORD *)PoolWithTag + 4) = 1;
    PoolWithTag[7] = a2;
    if ( !SepQueueWorkItem((__int64)&SepLsaDeletedLogonQueueInfo, (__int64)PoolWithTag, 0LL) )
    {
      if ( a2 )
        ObfDereferenceObjectWithTag(a2, 0x734C6553u);
      ExFreePoolWithTag(PoolWithTag, 0);
    }
  }
  else if ( a2 )
  {
    ObfDereferenceObjectWithTag(a2, 0x734C6553u);
  }
}
