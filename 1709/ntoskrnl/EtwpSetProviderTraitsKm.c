/*
 * XREFs of EtwpSetProviderTraitsKm @ 0x1405ABE94
 * Callers:
 *     EtwSetInformation @ 0x1405ABE40 (EtwSetInformation.c)
 * Callees:
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     EtwpSetProviderTraitsCommon @ 0x14048E848 (EtwpSetProviderTraitsCommon.c)
 *     EtwpEventWriteRegistrationStatus @ 0x1407493BC (EtwpEventWriteRegistrationStatus.c)
 */

__int64 __fastcall EtwpSetProviderTraitsKm(__int64 a1, void *Src, unsigned __int16 a3)
{
  unsigned int v6; // ebp
  char *PoolWithTag; // rax
  char *P; // rbx
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
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)a3 + 28, 0x54777445u);
    P = PoolWithTag;
    if ( PoolWithTag )
    {
      memmove(PoolWithTag + 28, Src, a3);
      v9 = EtwpSetProviderTraitsCommon(
             0,
             0,
             (__int64)&v14,
             a1,
             P,
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
