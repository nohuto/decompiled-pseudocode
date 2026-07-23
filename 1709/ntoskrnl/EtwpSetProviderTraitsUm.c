/*
 * XREFs of EtwpSetProviderTraitsUm @ 0x14048E6B0
 * Callers:
 *     NtTraceControl @ 0x14049AB40 (NtTraceControl.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     EtwEventEnabled @ 0x1400A0940 (EtwEventEnabled.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     EtwpSetProviderTraitsCommon @ 0x14048E848 (EtwpSetProviderTraitsCommon.c)
 *     ObReferenceObjectByHandle @ 0x1404B10F0 (ObReferenceObjectByHandle.c)
 *     EtwpEventWriteRegistrationStatus @ 0x1407493BC (EtwpEventWriteRegistrationStatus.c)
 */

__int64 __fastcall EtwpSetProviderTraitsUm(__int64 a1, int a2, int a3)
{
  PVOID v6; // rsi
  NTSTATUS v7; // ebx
  unsigned __int16 v8; // ax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  char *PoolWithTag; // rax
  void *v12; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  PVOID Object; // [rsp+80h] [rbp+8h] BYREF
  PVOID v18; // [rsp+98h] [rbp+20h]

  v6 = 0LL;
  if ( !*(_QWORD *)(a1 + 8) || !*(_WORD *)(a1 + 16) )
    goto LABEL_18;
  v7 = ObReferenceObjectByHandle(*(HANDLE *)a1, 0x800u, EtwpRegistrationObjectType, 1, &Object, 0LL);
  v6 = Object;
  v18 = Object;
  if ( v7 < 0 )
    goto LABEL_13;
  if ( (*((_BYTE *)Object + 98) & 8) == 0 )
  {
    if ( *((_QWORD *)Object + 13) )
    {
      v7 = -1073741823;
    }
    else
    {
      v8 = *(_WORD *)(a1 + 16);
      if ( v8 )
      {
        v9 = *(_QWORD *)(a1 + 8);
        v10 = v9 + v8;
        if ( v10 > 0x7FFFFFFF0000LL || v10 < v9 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      PoolWithTag = (char *)ExAllocatePoolWithTag(
                              PagedPool,
                              (unsigned int)*(unsigned __int16 *)(a1 + 16) + 28,
                              0x54777445u);
      v12 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag + 28, *(const void **)(a1 + 8), *(unsigned __int16 *)(a1 + 16));
        v7 = EtwpSetProviderTraitsCommon(
               a1,
               a2,
               a3,
               (int)v6,
               v12,
               *(unsigned __int16 *)(a1 + 16),
               (__int64)&EtwpProviderTraitsUmMutex,
               &EtwpProviderTraitsUmTree);
      }
      else
      {
        v7 = -1073741670;
      }
    }
  }
  else
  {
LABEL_18:
    v7 = -1073741811;
  }
LABEL_13:
  if ( v6 )
  {
    if ( v7 && EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_SET_TRAITS_FAILED) )
      EtwpEventWriteRegistrationStatus(v15, v14, v16, v6, v7);
    ObfDereferenceObject(v6);
  }
  return (unsigned int)v7;
}
