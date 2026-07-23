/*
 * XREFs of EtwpProcessorRundown @ 0x1407AF830
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140628E98 (EtwpKernelTraceRundown.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140036ED0 (KeQueryActiveProcessorCountEx.c)
 *     KeGetProcessorNumberFromIndex @ 0x140040C40 (KeGetProcessorNumberFromIndex.c)
 *     KeQueryActiveGroupCount @ 0x14007DAC0 (KeQueryActiveGroupCount.c)
 *     KeQueryHighestNodeNumber @ 0x14007ED40 (KeQueryHighestNodeNumber.c)
 *     KeQueryNodeActiveAffinity @ 0x14007ED60 (KeQueryNodeActiveAffinity.c)
 *     KeQueryGroupAffinity @ 0x1400C6900 (KeQueryGroupAffinity.c)
 *     EtwpLogKernelEvent @ 0x1401080D0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

void __fastcall EtwpProcessorRundown(__int64 a1)
{
  _PROCESSOR_NUMBER *PoolWithTag; // rdi
  ULONG ActiveProcessorCount; // eax
  __int64 v4; // rbx
  unsigned int v5; // r8d
  __int64 v6; // rdx
  USHORT ActiveGroupCount; // ax
  unsigned int v8; // edi
  unsigned int v9; // ebx
  KAFFINITY *v10; // rsi
  KAFFINITY GroupAffinity; // rax
  unsigned int v12; // r8d
  __int64 v13; // rdx
  USHORT HighestNodeNumber; // ax
  unsigned int v15; // ebx
  bool v16; // zf
  int v17; // eax
  unsigned int v18; // r8d
  __int64 v19; // rdx
  unsigned int v20; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v21; // [rsp+34h] [rbp-CCh] BYREF
  int v22; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD P[64]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int *v24; // [rsp+440h] [rbp+340h] BYREF
  int v25; // [rsp+448h] [rbp+348h]
  int v26; // [rsp+44Ch] [rbp+34Ch]
  _PROCESSOR_NUMBER *v27; // [rsp+450h] [rbp+350h]
  int v28; // [rsp+458h] [rbp+358h]
  int v29; // [rsp+45Ch] [rbp+35Ch]

  PoolWithTag = (_PROCESSOR_NUMBER *)P;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v20 = ActiveProcessorCount;
  if ( ActiveProcessorCount > 0x20 )
  {
    PoolWithTag = (_PROCESSOR_NUMBER *)ExAllocatePoolWithTag(PagedPool, 4LL * ActiveProcessorCount, 0x74777445u);
    if ( !PoolWithTag )
      goto LABEL_8;
    ActiveProcessorCount = v20;
  }
  v4 = 0LL;
  if ( ActiveProcessorCount )
  {
    do
    {
      KeGetProcessorNumberFromIndex(v4, &PoolWithTag[v4]);
      ActiveProcessorCount = v20;
      v4 = (unsigned int)(v4 + 1);
    }
    while ( (unsigned int)v4 < v20 );
  }
  v5 = *(_DWORD *)a1;
  v6 = *(_QWORD *)(a1 + 1112);
  v26 = 0;
  v29 = 0;
  v28 = 4 * ActiveProcessorCount;
  v24 = &v20;
  v25 = 4;
  v27 = PoolWithTag;
  EtwpLogKernelEvent((__int64)&v24, v6, v5, 2u, 0xB1Bu, 0x401802u);
  if ( PoolWithTag != (_PROCESSOR_NUMBER *)P )
    ExFreePoolWithTag(PoolWithTag, 0);
LABEL_8:
  ActiveGroupCount = KeQueryActiveGroupCount();
  v8 = ActiveGroupCount;
  v9 = 0;
  v22 = ActiveGroupCount;
  if ( ActiveGroupCount )
  {
    v10 = (KAFFINITY *)P;
    do
    {
      GroupAffinity = KeQueryGroupAffinity(v9++);
      *v10++ = GroupAffinity;
    }
    while ( v9 < v8 );
  }
  v12 = *(_DWORD *)a1;
  v13 = *(_QWORD *)(a1 + 1112);
  v26 = 0;
  v29 = 0;
  v24 = (unsigned int *)&v22;
  v27 = (_PROCESSOR_NUMBER *)P;
  v28 = 8 * v8;
  v25 = 4;
  EtwpLogKernelEvent((__int64)&v24, v13, v12, 2u, 0xB1Au, 0x401802u);
  HighestNodeNumber = KeQueryHighestNodeNumber();
  v15 = 0;
  v16 = HighestNodeNumber == -1;
  v17 = HighestNodeNumber + 1;
  v21 = v17;
  if ( !v16 )
  {
    do
    {
      KeQueryNodeActiveAffinity(v15, (PGROUP_AFFINITY)&P[v15], 0LL);
      v17 = v21;
      ++v15;
    }
    while ( v15 < v21 );
  }
  v26 = 0;
  v29 = 0;
  v18 = *(_DWORD *)a1;
  v19 = *(_QWORD *)(a1 + 1112);
  v24 = &v21;
  v28 = 16 * v17;
  v27 = (_PROCESSOR_NUMBER *)P;
  v25 = 4;
  EtwpLogKernelEvent((__int64)&v24, v19, v18, 2u, 0xB18u, 0x401802u);
}
