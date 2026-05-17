/*
 * XREFs of sub_18007278C @ 0x18007278C
 * Callers:
 *     EtwEventSetInformation @ 0x180072750 (EtwEventSetInformation.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180008390 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180029AF4 @ 0x180029AF4 (sub_180029AF4.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwTraceControl @ 0x18009E210 (ZwTraceControl.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall sub_18007278C(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int16 v4; // r14
  __int64 v6; // rbx
  __int64 v7; // rax
  _BYTE *Heap; // rsi
  int v9; // r14d
  NTSTATUS v10; // eax
  NTSTATUS v11; // edi
  ULONG v12; // edi
  unsigned int v14; // [rsp+30h] [rbp-79h]
  _QWORD v15[2]; // [rsp+38h] [rbp-71h] BYREF
  __int16 v16; // [rsp+48h] [rbp-61h]
  _BYTE v17[120]; // [rsp+50h] [rbp-59h] BYREF

  v4 = (__int16)a3;
  if ( !HIWORD(a1)
    || (v6 = a1 & 0xFFFFFFFFFFFFLL, (a1 & 1) != 0)
    || HIWORD(a1) != *(_WORD *)((a1 & 0xFFFFFFFFFFFFLL) + 0x60) )
  {
    v12 = 6;
LABEL_15:
    RtlSetLastWin32Error(v12);
    return v12;
  }
  RtlAcquireSRWLockExclusive(v6 + 64, a2, a3, a4);
  *(_DWORD *)(v6 + 80) = NtCurrentTeb()->ClientId.UniqueThread;
  memset(v17, 0, sizeof(v17));
  v7 = *(_QWORD *)(v6 + 88);
  Heap = v17;
  v16 = v4;
  v9 = 0;
  v15[0] = v7;
  v15[1] = a2;
  while ( 1 )
  {
    v10 = ZwTraceControl(30LL, v15, 24LL);
    v11 = v10;
    if ( v10 != -1073741789 )
      break;
    if ( Heap != v17 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
    Heap = (_BYTE *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v14);
    if ( !Heap )
    {
      v11 = -1073741801;
      goto LABEL_22;
    }
    if ( (unsigned int)++v9 >= 0x10 )
      goto LABEL_22;
  }
  if ( !v10 )
  {
    v12 = 0;
    goto LABEL_8;
  }
LABEL_22:
  v12 = RtlNtStatusToDosError(v11);
  if ( v12 )
    goto LABEL_10;
LABEL_8:
  *(_WORD *)(v6 + 98) |= 0x4000u;
  if ( v14 )
    sub_180029AF4(v6, (__int64)Heap);
LABEL_10:
  *(_DWORD *)(v6 + 80) = 0;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v6 + 64));
  if ( Heap && Heap != v17 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
  if ( v12 )
    goto LABEL_15;
  return v12;
}
