/*
 * XREFs of EtwpNotificationThread @ 0x180063910
 * Callers:
 *     <none>
 * Callees:
 *     TpSetWaitEx @ 0x18000F630 (TpSetWaitEx.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     EtwDeliverDataBlock @ 0x180063BC0 (EtwDeliverDataBlock.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceControl @ 0x1800A37D0 (NtTraceControl.c)
 */

_BYTE *__fastcall EtwpNotificationThread(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *Heap; // rbx
  char v6; // si
  int v7; // eax
  int v8; // edi
  _BYTE *result; // rax
  unsigned int v10; // [rsp+30h] [rbp-148h]
  __int64 v11; // [rsp+38h] [rbp-140h] BYREF
  _BYTE v12[256]; // [rsp+40h] [rbp-138h] BYREF

  v11 = -600000000LL;
  Heap = v12;
  v6 = 0;
  while ( 1 )
  {
    v7 = NtTraceControl(16LL, 0LL, 0LL);
    v8 = v7;
    if ( v7 < 0 )
      break;
    EtwDeliverDataBlock(Heap);
LABEL_4:
    if ( v8 != 261 )
      goto LABEL_5;
  }
  if ( v7 != -1073741789 )
    goto LABEL_4;
  if ( Heap != v12 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
  Heap = (_BYTE *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v10);
  if ( Heap )
  {
    v8 = 261;
    goto LABEL_4;
  }
  v6 = 1;
LABEL_5:
  TpSetWaitEx(a3, a2, (_QWORD *)((unsigned __int64)&v11 & -(__int64)(v6 != 0)), 0LL);
  result = v12;
  if ( Heap != v12 )
  {
    if ( Heap )
      return (_BYTE *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
  }
  return result;
}
