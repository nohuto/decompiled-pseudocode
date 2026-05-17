/*
 * XREFs of sub_180005610 @ 0x180005610
 * Callers:
 *     <none>
 * Callees:
 *     EtwDeliverDataBlock @ 0x180005750 (EtwDeliverDataBlock.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     TpSetWaitEx @ 0x180025710 (TpSetWaitEx.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceControl @ 0x18009E210 (ZwTraceControl.c)
 */

_BYTE *__fastcall sub_180005610(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *Heap; // rbx
  char v6; // si
  int v7; // ebp
  int v8; // eax
  int v9; // edi
  _BYTE *result; // rax
  int v11; // [rsp+20h] [rbp-158h]
  unsigned int v12; // [rsp+30h] [rbp-148h] BYREF
  __int64 v13; // [rsp+38h] [rbp-140h] BYREF
  _BYTE v14[256]; // [rsp+40h] [rbp-138h] BYREF

  v13 = -600000000LL;
  Heap = v14;
  v6 = 0;
  v7 = 256;
  while ( 1 )
  {
    v11 = v7;
    v8 = ZwTraceControl(16LL, 0LL, 0LL);
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
  if ( Heap != v14 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
  v7 = v12;
  Heap = (_BYTE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, v12);
  if ( Heap )
  {
    v9 = 261;
    goto LABEL_4;
  }
  v6 = 1;
LABEL_5:
  TpSetWaitEx(a3, a2, (unsigned __int64)&v13 & -(__int64)(v6 != 0), 0LL, v11, &v12);
  result = v14;
  if ( Heap != v14 )
  {
    if ( Heap )
      return (_BYTE *)RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
  }
  return result;
}
