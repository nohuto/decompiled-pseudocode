/*
 * XREFs of EtwpTraceThreadRundownWithStack @ 0x1402B20B8
 * Callers:
 *     EtwpThreadEnumCallback @ 0x1406297A0 (EtwpThreadEnumCallback.c)
 * Callees:
 *     KeInsertQueueApc @ 0x140044AB0 (KeInsertQueueApc.c)
 *     KeRemoveQueueApc @ 0x1400C6B54 (KeRemoveQueueApc.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeInitializeApc @ 0x140132910 (KeInitializeApc.c)
 *     EtwpTraceThreadRundown @ 0x140172374 (EtwpTraceThreadRundown.c)
 */

int __fastcall EtwpTraceThreadRundownWithStack(struct _KTHREAD *a1, __int64 a2)
{
  int v4; // esi
  __int64 v5; // rdx
  unsigned int v6; // ecx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  int v9; // ecx
  __int64 v10; // rcx
  __int16 Object; // [rsp+40h] [rbp-39h] BYREF
  char v13; // [rsp+42h] [rbp-37h]
  int v14; // [rsp+44h] [rbp-35h]
  _QWORD v15[3]; // [rsp+48h] [rbp-31h] BYREF
  _BYTE v16[96]; // [rsp+60h] [rbp-19h] BYREF
  LARGE_INTEGER Timeout; // [rsp+E0h] [rbp+67h] BYREF

  if ( a1 == KeGetCurrentThread() )
    goto LABEL_11;
  if ( *(_BYTE *)(a2 + 107) )
    goto LABEL_11;
  v14 = 0;
  v15[1] = v15;
  v15[0] = v15;
  Object = 1;
  v13 = 6;
  KeInitializeApc((__int64)v16, (__int64)a1, 0, (__int64)EtwpThreadRundownApc, 0LL, 0LL, 0, 0LL);
  if ( !KeInsertQueueApc((__int64)v16, (__int64)&Object, a2, 0) )
    goto LABEL_11;
  Timeout.QuadPart = EtwpOneMs * (unsigned int)EtwpStackCaptureTimeout;
  v4 = MEMORY[0xFFFFF78000000320];
  if ( KeWaitForSingleObject(&Object, WrExecutive, 0, 0, &Timeout) == 258 )
  {
    if ( !KeRemoveQueueApc((__int64)v16, v5) )
    {
      LODWORD(v8) = KeWaitForSingleObject(&Object, WrExecutive, 0, 0, 0LL);
      v9 = MEMORY[0xFFFFF78000000320];
      ++*(_DWORD *)(a2 + 84);
      v10 = (unsigned int)(v9 - v4);
      *(_QWORD *)(a2 + 88) += v10;
      *(_QWORD *)(a2 + 96) += v10 * v10;
      return v8;
    }
    ++*(_DWORD *)(a2 + 68);
LABEL_11:
    LODWORD(v8) = EtwpTraceThreadRundown((__int64)a1, a2);
    return v8;
  }
  v6 = MEMORY[0xFFFFF78000000320] - v4;
  v7 = (unsigned int)(MEMORY[0xFFFFF78000000320] - v4) / *(_DWORD *)(a2 + 64);
  if ( (unsigned int)v7 >= 4 )
    v7 = 3LL;
  ++*(_DWORD *)(a2 + 4 * v7 + 72);
  *(_QWORD *)(a2 + 88) += v6;
  v8 = v6 * (unsigned __int64)v6;
  *(_QWORD *)(a2 + 96) += v8;
  return v8;
}
