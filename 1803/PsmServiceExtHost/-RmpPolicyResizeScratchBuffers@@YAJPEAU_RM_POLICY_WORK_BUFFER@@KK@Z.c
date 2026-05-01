/*
 * XREFs of ?RmpPolicyResizeScratchBuffers@@YAJPEAU_RM_POLICY_WORK_BUFFER@@KK@Z @ 0x18000E6EC
 * Callers:
 *     ?RmpPartitionAddRemoveHost@@YAJPEAU_RM_PARTITION@@JK@Z @ 0x18000E6C0 (-RmpPartitionAddRemoveHost@@YAJPEAU_RM_PARTITION@@JK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpPolicyResizeScratchBuffers(struct _RTL_BITMAP *a1, unsigned int a2, int a3)
{
  ULONG v5; // ebx
  unsigned int SizeOfBitMap; // ecx
  ULONG v7; // edx
  unsigned int v8; // r9d
  unsigned int v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // ebx
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  PVOID v15; // r15
  ULONG *v16; // rax
  ULONG *v17; // rbp
  void *v18; // r8
  PULONG v19; // r8
  ULONG *Heap; // rdi
  PULONG Buffer; // r8

  v5 = (a3 + 32) & 0xFFFFFFE0;
  if ( v5 > a1[1].SizeOfBitMap )
  {
    Heap = (ULONG *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v5 >> 3);
    if ( !Heap )
      return (unsigned int)-1073741801;
    Buffer = a1[1].Buffer;
    if ( Buffer )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Buffer);
    RtlInitializeBitMap(a1 + 1, Heap, v5);
  }
  SizeOfBitMap = a1[2].SizeOfBitMap;
  if ( SizeOfBitMap <= a2 )
  {
    if ( a2 )
    {
      v10 = 4;
      if ( SizeOfBitMap > 4 )
        v10 = a1[2].SizeOfBitMap;
      while ( v10 < a2 )
      {
        v13 = v10;
        v10 = -1;
        v14 = 2 * v13;
        if ( v14 <= 0xFFFFFFFF )
          v10 = v14;
      }
    }
    else
    {
      v10 = a1[2].SizeOfBitMap;
    }
  }
  else
  {
    v7 = a1[2].SizeOfBitMap;
    do
    {
      v8 = v7;
      v9 = 4;
      v7 >>= 1;
      if ( 2 * a2 > 4 )
        v9 = 2 * a2;
    }
    while ( v7 >= v9 );
    v10 = v8;
  }
  if ( v10 == SizeOfBitMap )
    return 0;
  v15 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v10 << 6);
  v16 = (ULONG *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 24LL * v10);
  v17 = v16;
  if ( v15 && v16 )
  {
    v18 = *(void **)&a1->SizeOfBitMap;
    *(_QWORD *)&a1->SizeOfBitMap = v15;
    if ( v18 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
    v19 = a1->Buffer;
    a1->Buffer = v17;
    if ( v19 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v19);
    a1[2].SizeOfBitMap = v10;
    return 0;
  }
  v11 = a1[2].SizeOfBitMap < a2 ? 0xC0000017 : 0;
  if ( v15 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
  if ( v17 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v17);
  return v11;
}
