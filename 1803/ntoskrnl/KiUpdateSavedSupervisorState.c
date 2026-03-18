/*
 * XREFs of KiUpdateSavedSupervisorState @ 0x140484AE4
 * Callers:
 *     KiStartSavingSupervisorState @ 0x140484A40 (KiStartSavingSupervisorState.c)
 * Callees:
 *     KeIpiGenericCall @ 0x14016C6C0 (KeIpiGenericCall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 KiUpdateSavedSupervisorState()
{
  unsigned int v0; // r15d
  unsigned int v1; // ecx
  unsigned __int64 v2; // rax
  unsigned int v3; // ebx
  _QWORD *PoolWithTag; // rdi
  __int64 v5; // rsi
  unsigned int v6; // ebp
  _QWORD *v7; // r14
  PVOID v8; // rax
  PVOID *v10; // r14
  ULONG_PTR Context; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v12; // [rsp+28h] [rbp-30h]

  v0 = KeNumberProcessors_0;
  v1 = -1;
  v2 = 8LL * (unsigned int)KeNumberProcessors_0;
  if ( v2 <= 0xFFFFFFFF )
    v1 = 8 * KeNumberProcessors_0;
  v3 = v2 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v2 > 0xFFFFFFFF )
    return v3;
  v3 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v1, 0x65687358u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  v5 = 0LL;
  v6 = MEMORY[0xFFFFF78000000600] - MEMORY[0xFFFFF780000003E8] + 127;
  if ( !v0 )
  {
LABEL_13:
    Context = (ULONG_PTR)PoolWithTag;
    v12 = v0;
    KeIpiGenericCall((PKIPI_BROADCAST_WORKER)KiIpiUpdateExtendedSupervisorState, (ULONG_PTR)&Context);
    goto LABEL_14;
  }
  v7 = PoolWithTag;
  while ( *(_QWORD *)(*(_QWORD *)((char *)v7 + (char *)KiProcessorBlock - (char *)PoolWithTag) + 1728LL) )
  {
    *v7 = 0LL;
LABEL_12:
    v5 = (unsigned int)(v5 + 1);
    ++v7;
    if ( (unsigned int)v5 >= v0 )
      goto LABEL_13;
  }
  v8 = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x65707553u);
  *v7 = v8;
  if ( v8 )
  {
    memset(v8, 0, v6);
    goto LABEL_12;
  }
  if ( (_DWORD)v5 )
  {
    v10 = (PVOID *)PoolWithTag;
    do
    {
      if ( *v10 )
        ExFreePoolWithTag(*v10, 0);
      ++v10;
      --v5;
    }
    while ( v5 );
  }
  v3 = -1073741670;
LABEL_14:
  ExFreePoolWithTag(PoolWithTag, 0);
  return v3;
}
