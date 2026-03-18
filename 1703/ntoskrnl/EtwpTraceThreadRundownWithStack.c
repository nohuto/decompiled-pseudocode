/*
 * XREFs of EtwpTraceThreadRundownWithStack @ 0x140256638
 * Callers:
 *     EtwpThreadEnumCallback @ 0x1404B0B80 (EtwpThreadEnumCallback.c)
 * Callees:
 *     KeRemoveQueueApc @ 0x14003179C (KeRemoveQueueApc.c)
 *     KeInsertQueueApc @ 0x14003FEC0 (KeInsertQueueApc.c)
 *     EtwpTraceThreadRundown @ 0x14006B3EC (EtwpTraceThreadRundown.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeInitializeApc @ 0x14010F400 (KeInitializeApc.c)
 */

int __fastcall EtwpTraceThreadRundownWithStack(struct _KTHREAD *a1, __int64 a2)
{
  int v4; // esi
  unsigned int v5; // ecx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  int v8; // ecx
  __int64 v9; // rcx
  __int16 Object; // [rsp+40h] [rbp-39h] BYREF
  char v12; // [rsp+42h] [rbp-37h]
  int v13; // [rsp+44h] [rbp-35h]
  _QWORD v14[3]; // [rsp+48h] [rbp-31h] BYREF
  _BYTE v15[96]; // [rsp+60h] [rbp-19h] BYREF
  LARGE_INTEGER Timeout; // [rsp+E0h] [rbp+67h] BYREF

  if ( a1 == KeGetCurrentThread() )
    goto LABEL_11;
  if ( *(_BYTE *)(a2 + 99) )
    goto LABEL_11;
  v13 = 0;
  v14[1] = v14;
  v14[0] = v14;
  Object = 1;
  v12 = 6;
  KeInitializeApc((__int64)v15, (__int64)a1, 0, (__int64)EtwpThreadRundownApc, 0LL, 0LL, 0, 0LL);
  if ( !(unsigned __int8)KeInsertQueueApc((__int64)v15, (__int64)&Object, a2, 0) )
    goto LABEL_11;
  Timeout.QuadPart = EtwpOneMs * (unsigned int)EtwpStackCaptureTimeout;
  v4 = MEMORY[0xFFFFF78000000320];
  if ( KeWaitForSingleObject(&Object, WrExecutive, 0, 0, &Timeout) == 258 )
  {
    if ( !(unsigned __int8)KeRemoveQueueApc((__int64)v15) )
    {
      LODWORD(v7) = KeWaitForSingleObject(&Object, WrExecutive, 0, 0, 0LL);
      v8 = MEMORY[0xFFFFF78000000320];
      ++*(_DWORD *)(a2 + 76);
      v9 = (unsigned int)(v8 - v4);
      *(_QWORD *)(a2 + 80) += v9;
      *(_QWORD *)(a2 + 88) += v9 * v9;
      return v7;
    }
    ++*(_DWORD *)(a2 + 60);
LABEL_11:
    LODWORD(v7) = EtwpTraceThreadRundown((__int64)a1, a2);
    return v7;
  }
  v5 = MEMORY[0xFFFFF78000000320] - v4;
  v6 = (unsigned int)(MEMORY[0xFFFFF78000000320] - v4) / *(_DWORD *)(a2 + 56);
  if ( (unsigned int)v6 >= 4 )
    v6 = 3LL;
  ++*(_DWORD *)(a2 + 4 * v6 + 64);
  *(_QWORD *)(a2 + 80) += v5;
  v7 = v5 * (unsigned __int64)v5;
  *(_QWORD *)(a2 + 88) += v7;
  return v7;
}
