/*
 * XREFs of RtlInstallFunctionTableCallback @ 0x18006A010
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     LdrControlFlowGuardEnforced @ 0x180023A90 (LdrControlFlowGuardEnforced.c)
 *     sub_1800259B4 @ 0x1800259B4 (sub_1800259B4.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     RtlProtectHeap @ 0x18002A2B0 (RtlProtectHeap.c)
 *     sub_1800377C0 @ 0x1800377C0 (sub_1800377C0.c)
 *     RtlAvlInsertNodeEx @ 0x18006AFD0 (RtlAvlInsertNodeEx.c)
 *     sub_18007CFD4 @ 0x18007CFD4 (sub_18007CFD4.c)
 *     ZwQuerySystemTime @ 0x18009B600 (ZwQuerySystemTime.c)
 */

BOOLEAN __cdecl RtlInstallFunctionTableCallback(
        ULONG64 TableIdentifier,
        ULONG64 BaseAddress,
        ULONG Length,
        PGET_RUNTIME_FUNCTION_CALLBACK Callback,
        PVOID Context,
        PCWSTR OutOfProcessCallbackDll)
{
  __int64 v6; // rbp
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 *v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  unsigned __int64 *v16; // r8
  __int64 v17; // r9
  void *ProcessHeap; // rcx
  __int64 Heap; // rax
  __int64 v20; // rbx
  unsigned __int64 v21; // rdx
  unsigned __int64 *v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rdx
  __int64 v25; // r8
  _QWORD *v26; // rax
  __int64 *v27; // rax
  unsigned __int64 v28; // rdx
  unsigned __int64 *v29; // r8
  __int64 v30; // r9
  int v32; // ebx
  int v33; // edx
  int v34; // ecx

  v6 = Length;
  if ( (TableIdentifier & 3) != 3 || (Length & 0x80000000) != 0 )
    return 0;
  v10 = 0LL;
  if ( OutOfProcessCallbackDll )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( OutOfProcessCallbackDll[v11] );
    v10 = 2 * v11 + 2;
  }
  if ( (int)sub_18007CFD4() < 0 )
    return 0;
  if ( qword_18016F380 && (byte_18016F36C & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015BF98, v12, v13, v14);
    v32 = *(_DWORD *)qword_18016F280;
    if ( !*(_DWORD *)qword_18016F280 )
      RtlProtectHeap((_DWORD *)qword_18016F270, 0);
    if ( v32 == -1 )
    {
      RtlReleaseSRWLockExclusive(&qword_18015BF98);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016F280 = v32 + 1;
    RtlReleaseSRWLockExclusive(&qword_18015BF98);
  }
  if ( LdrControlFlowGuardEnforced() )
  {
    if ( v10 + 112 >= 0xFF000 )
    {
LABEL_39:
      if ( qword_18016F380 && (byte_18016F36C & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015BF98, v15, v16, v17);
        v34 = *(_DWORD *)qword_18016F280;
        if ( !*(_DWORD *)qword_18016F280 )
        {
          RtlReleaseSRWLockExclusive(&qword_18015BF98);
          __fastfail(0xEu);
        }
        *(_DWORD *)qword_18016F280 = v34 - 1;
        if ( v34 == 1 )
          RtlProtectHeap((_DWORD *)qword_18016F270, 1);
        RtlReleaseSRWLockExclusive(&qword_18015BF98);
      }
      return 0;
    }
    ProcessHeap = (void *)qword_18016F270;
  }
  else
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  }
  Heap = RtlAllocateHeap((__int64)ProcessHeap, 0, v10 + 112);
  v20 = Heap;
  if ( !Heap )
    goto LABEL_39;
  *(_QWORD *)(Heap + 16) = TableIdentifier;
  ZwQuerySystemTime(Heap + 24);
  *(_QWORD *)(v20 + 32) = BaseAddress;
  *(_QWORD *)(v20 + 40) = BaseAddress + v6;
  *(_QWORD *)(v20 + 64) = Context;
  *(_QWORD *)(v20 + 48) = BaseAddress;
  *(_QWORD *)(v20 + 56) = Callback;
  *(_DWORD *)(v20 + 80) = 2;
  *(_QWORD *)(v20 + 72) = 0LL;
  if ( OutOfProcessCallbackDll )
  {
    *(_QWORD *)(v20 + 72) = v20 + 112;
    sub_1800377C0((_WORD *)(v20 + 112), v10, (__int64)OutOfProcessCallbackDll);
  }
  sub_1800259B4(0);
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015B2B0, v21, v22, v23);
  v24 = (_QWORD *)qword_18016F2A0;
  LOBYTE(v25) = 0;
  if ( qword_18016F2A0 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v20 + 32) < *(v24 - 7) )
      {
        v26 = (_QWORD *)*v24;
        if ( !*v24 )
        {
          LOBYTE(v25) = 0;
          break;
        }
      }
      else
      {
        v26 = (_QWORD *)v24[1];
        if ( !v26 )
        {
          LOBYTE(v25) = 1;
          break;
        }
      }
      v24 = v26;
    }
  }
  RtlAvlInsertNodeEx(&qword_18016F2A0, v24, v25, v20 + 88);
  v27 = (__int64 *)qword_18016F2B0;
  if ( *(__int64 **)qword_18016F2B0 != &qword_18016F2A8 )
    __fastfail(3u);
  *(_QWORD *)v20 = &qword_18016F2A8;
  *(_QWORD *)(v20 + 8) = v27;
  *v27 = v20;
  qword_18016F2B0 = v20;
  RtlReleaseSRWLockExclusive(&qword_18015B2B0);
  sub_1800259B4(1);
  if ( qword_18016F380 && (byte_18016F36C & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015BF98, v28, v29, v30);
    v33 = *(_DWORD *)qword_18016F280;
    if ( !*(_DWORD *)qword_18016F280 )
    {
      RtlReleaseSRWLockExclusive(&qword_18015BF98);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016F280 = v33 - 1;
    if ( v33 == 1 )
      RtlProtectHeap((_DWORD *)qword_18016F270, 1);
    RtlReleaseSRWLockExclusive(&qword_18015BF98);
  }
  return 1;
}
