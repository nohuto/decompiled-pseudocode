/*
 * XREFs of sub_180052270 @ 0x180052270
 * Callers:
 *     <none>
 * Callees:
 *     TpSetWaitEx @ 0x180017300 (TpSetWaitEx.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     EtwDeliverDataBlock @ 0x1800523B0 (EtwDeliverDataBlock.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceControl @ 0x1800A8990 (ZwTraceControl.c)
 */

_BYTE *__fastcall sub_180052270(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *Heap; // rbx
  char v6; // si
  int v7; // ebp
  int v8; // eax
  int v9; // edi
  _BYTE *result; // rax
  unsigned int v11; // [rsp+30h] [rbp-148h] BYREF
  __int64 v12; // [rsp+38h] [rbp-140h] BYREF
  _BYTE v13[256]; // [rsp+40h] [rbp-138h] BYREF

  v12 = -600000000LL;
  Heap = v13;
  v6 = 0;
  v7 = 256;
  while ( 1 )
  {
    v8 = ZwTraceControl(16LL, 0LL, 0LL, Heap, v7, &v11);
    v9 = v8;
    if ( v8 < 0 )
      break;
    EtwDeliverDataBlock(Heap);
LABEL_4:
    if ( v9 != 261 )
      goto LABEL_5;
  }
  if ( v8 != -1073741789 )
    goto LABEL_4;
  if ( Heap != v13 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
  v7 = v11;
  Heap = (_BYTE *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v11);
  if ( Heap )
  {
    v9 = 261;
    goto LABEL_4;
  }
  v6 = 1;
LABEL_5:
  TpSetWaitEx(a3, a2, (_QWORD *)((unsigned __int64)&v12 & -(__int64)(v6 != 0)), 0LL);
  result = v13;
  if ( Heap != v13 )
  {
    if ( Heap )
      return (_BYTE *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
  }
  return result;
}
