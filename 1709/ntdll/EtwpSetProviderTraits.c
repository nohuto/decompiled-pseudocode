/*
 * XREFs of EtwpSetProviderTraits @ 0x1800755AC
 * Callers:
 *     EtwEventSetInformation @ 0x180075570 (EtwEventSetInformation.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x18001AD60 (RtlNtStatusToDosError.c)
 *     EtwpUpdateEnableInfoAndCallback @ 0x180036244 (EtwpUpdateEnableInfoAndCallback.c)
 *     RtlReleaseSRWLockExclusive @ 0x180038940 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x18003ECC0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180040DF0 (RtlAllocateHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x180046170 (RtlAcquireSRWLockExclusive.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtTraceControl @ 0x1800A37D0 (NtTraceControl.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall EtwpSetProviderTraits(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
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
    v10 = NtTraceControl(30LL, v15, 24LL);
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
    EtwpUpdateEnableInfoAndCallback(v6, (__int64)Heap);
LABEL_10:
  *(_DWORD *)(v6 + 80) = 0;
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v6 + 64));
  if ( Heap && Heap != v17 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
  if ( v12 )
    goto LABEL_15;
  return v12;
}
