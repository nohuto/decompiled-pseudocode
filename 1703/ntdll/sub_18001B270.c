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
  _QWORD *v7; // rbx
  ULONG OutputBufferLength; // esi
  NTSTATUS v9; // eax
  __int128 v10; // xmm0
  NTSTATUS v11; // eax
  ULONG v12; // esi
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *Heap; // rax
  ULONG ReturnLength; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE InputBuffer[160]; // [rsp+38h] [rbp-C0h] BYREF

  v6 = 0;
  memset(InputBuffer, 0, sizeof(InputBuffer));
  v7 = InputBuffer;
  OutputBufferLength = 160;
  if ( !byte_18015B388 )
  {
    v9 = RtlRunOnceExecuteOnce(&stru_18015C358, (PRTL_RUN_ONCE_INIT_FN)sub_180010150, 0LL, 0LL);
    if ( v9 )
      return RtlNtStatusToDosError(v9);
  }
  while ( 1 )
  {
    v10 = *(_OWORD *)(a1 + 32);
    *((_DWORD *)v7 + 4) = a3;
    *(_OWORD *)v7 = v10;
    *((_DWORD *)v7 + 5) = *(unsigned __int16 *)(a1 + 96);
    v7[4] = a2;
    v11 = ZwTraceControl(EtwRegisterGuidsCode, v7, 0xA0u, v7, OutputBufferLength, &ReturnLength);
    if ( v11 != -1073741789 )
      break;
    if ( v6 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
    v6 = 1;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, ReturnLength);
    OutputBufferLength = ReturnLength;
    v7 = Heap;
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
    *(_QWORD *)(a1 + 88) = v7[3];
    if ( (unsigned int)(a3 - 2) <= 1 )
      sub_18001AF94(a1, (__int64)(v7 + 5));
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
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
  }
  return v12;
}
