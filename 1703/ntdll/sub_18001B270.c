/*
 * XREFs of sub_18001B270 @ 0x18001B270
 * Callers:
 *     EtwNotificationRegister @ 0x18001B3E0 (EtwNotificationRegister.c)
 * Callees:
 *     sub_18001AF94 @ 0x18001AF94 (sub_18001AF94.c)
 *     RtlRunOnceExecuteOnce @ 0x18001B510 (RtlRunOnceExecuteOnce.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     ZwTraceControl @ 0x1800A8990 (ZwTraceControl.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

ULONG __fastcall sub_18001B270(__int64 a1, __int64 a2, int a3)
{
  char v6; // bp
  _BYTE *v7; // rbx
  int v8; // esi
  NTSTATUS v9; // eax
  __int128 v10; // xmm0
  NTSTATUS v11; // eax
  ULONG v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 Heap; // rax
  unsigned int v17; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v18[160]; // [rsp+38h] [rbp-C0h] BYREF

  v6 = 0;
  memset(v18, 0, sizeof(v18));
  v7 = v18;
  v8 = 160;
  if ( !byte_18015B388 )
  {
    v9 = RtlRunOnceExecuteOnce(&unk_18015C358, sub_180010150, 0LL, 0LL);
    if ( v9 )
      return RtlNtStatusToDosError(v9);
  }
  while ( 1 )
  {
    v10 = *(_OWORD *)(a1 + 32);
    *((_DWORD *)v7 + 4) = a3;
    *(_OWORD *)v7 = v10;
    *((_DWORD *)v7 + 5) = *(unsigned __int16 *)(a1 + 96);
    *((_QWORD *)v7 + 4) = a2;
    v11 = ZwTraceControl(15LL, v7, 160LL, v7, v8, &v17);
    if ( v11 != -1073741789 )
      break;
    if ( v6 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL);
    v6 = 1;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, v17);
    v8 = v17;
    v7 = (_BYTE *)Heap;
    if ( !Heap )
    {
      v11 = -1073741801;
      break;
    }
  }
  if ( !v11 )
  {
    v12 = 0;
LABEL_6:
    *(_QWORD *)(a1 + 88) = *((_QWORD *)v7 + 3);
    if ( (unsigned int)(a3 - 2) <= 1 )
      sub_18001AF94(a1, (__int64)(v7 + 40));
    v13 = *(_QWORD *)(a1 + 32) - 0x4C8E042A3595AB5CLL;
    if ( *(_QWORD *)(a1 + 32) == 0x4C8E042A3595AB5CLL )
      v13 = *(_QWORD *)(a1 + 40) + 0x4E4E0164FAD2BD47LL;
    v14 = qword_1801593B0;
    if ( !v13 )
      v14 = a1;
    qword_1801593B0 = v14;
    goto LABEL_13;
  }
  v12 = RtlNtStatusToDosError(v11);
  if ( !v12 )
    goto LABEL_6;
LABEL_13:
  if ( v6 )
  {
    if ( v7 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL);
  }
  return v12;
}
