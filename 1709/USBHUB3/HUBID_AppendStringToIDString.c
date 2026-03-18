/*
 * XREFs of HUBID_AppendStringToIDString @ 0x1C0017A5C
 * Callers:
 *     HUBID_AssignIDString @ 0x1C0017B38 (HUBID_AssignIDString.c)
 * Callees:
 *     memmove @ 0x1C0038E80 (memmove.c)
 *     memset @ 0x1C00391C0 (memset.c)
 */

__int64 __fastcall HUBID_AppendStringToIDString(const void **a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // edi
  unsigned int v6; // r12d
  char *PoolWithTag; // rax
  char *v8; // rbp
  void *v9; // rcx

  v2 = 0;
  if ( *(_QWORD *)(a2 + 8) )
    v5 = *(_DWORD *)(a2 + 4) - 2;
  else
    v5 = 0;
  v6 = v5 + *(unsigned __int16 *)a1 + 4;
  PoolWithTag = (char *)ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v6, 0x64334855u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v6);
    if ( v5 )
      memmove(v8, *(const void **)(a2 + 8), v5);
    memmove(&v8[v5], a1[1], *(unsigned __int16 *)a1);
    v9 = *(void **)(a2 + 8);
    *(_QWORD *)(a2 + 8) = v8;
    *(_DWORD *)(a2 + 4) = v6;
    if ( v9 )
      ExFreePoolWithTag(v9, 0x64334855u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
