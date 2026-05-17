/*
 * XREFs of sub_180029538 @ 0x180029538
 * Callers:
 *     EtwNotificationRegister @ 0x1800296B0 (EtwNotificationRegister.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlRunOnceExecuteOnce @ 0x1800297E0 (RtlRunOnceExecuteOnce.c)
 *     sub_180029AF4 @ 0x180029AF4 (sub_180029AF4.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceControl @ 0x18009E210 (ZwTraceControl.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

ULONG __fastcall sub_180029538(__int64 a1, __int64 a2, int a3)
{
  char v6; // bp
  _BYTE *Heap; // rbx
  NTSTATUS v8; // eax
  __int128 v9; // xmm0
  NTSTATUS v10; // eax
  ULONG v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v15; // [rsp+30h] [rbp-C8h]
  _BYTE v16[160]; // [rsp+38h] [rbp-C0h] BYREF

  v6 = 0;
  memset(v16, 0, sizeof(v16));
  Heap = v16;
  if ( !byte_18015C3A8 )
  {
    v8 = RtlRunOnceExecuteOnce(&unk_18015D390, sub_1800571C0, 0LL, 0LL);
    if ( v8 )
      return RtlNtStatusToDosError(v8);
  }
  while ( 1 )
  {
    v9 = *(_OWORD *)(a1 + 32);
    *((_DWORD *)Heap + 4) = a3;
    *(_OWORD *)Heap = v9;
    *((_DWORD *)Heap + 5) = *(unsigned __int16 *)(a1 + 96);
    *((_QWORD *)Heap + 4) = a2;
    v10 = ZwTraceControl(15LL, Heap, 160LL);
    if ( v10 != -1073741789 )
      break;
    if ( v6 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
    v6 = 1;
    Heap = (_BYTE *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v15);
    if ( !Heap )
    {
      v10 = -1073741801;
      break;
    }
  }
  if ( !v10 )
  {
    v11 = 0;
LABEL_6:
    *(_QWORD *)(a1 + 88) = *((_QWORD *)Heap + 3);
    if ( (unsigned int)(a3 - 2) <= 1 )
      sub_180029AF4(a1, Heap + 40);
    v12 = *(_QWORD *)(a1 + 32) - 0x4C8E042A3595AB5CLL;
    if ( *(_QWORD *)(a1 + 32) == 0x4C8E042A3595AB5CLL )
      v12 = *(_QWORD *)(a1 + 40) + 0x4E4E0164FAD2BD47LL;
    v13 = qword_18015A418;
    if ( !v12 )
      v13 = a1;
    qword_18015A418 = v13;
    goto LABEL_13;
  }
  v11 = RtlNtStatusToDosError(v10);
  if ( !v11 )
    goto LABEL_6;
LABEL_13:
  if ( v6 )
  {
    if ( Heap )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
  }
  return v11;
}
