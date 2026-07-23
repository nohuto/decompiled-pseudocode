/*
 * XREFs of RtlInstallFunctionTableCallback @ 0x180074550
 * Callers:
 *     <none>
 * Callees:
 *     RtlProtectHeap @ 0x18000D6A0 (RtlProtectHeap.c)
 *     sub_18001DEA8 @ 0x18001DEA8 (sub_18001DEA8.c)
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x180029F40 (RtlAllocateHeap.c)
 *     sub_1800456F0 @ 0x1800456F0 (sub_1800456F0.c)
 *     RtlAvlInsertNodeEx @ 0x180074D90 (RtlAvlInsertNodeEx.c)
 *     sub_180083738 @ 0x180083738 (sub_180083738.c)
 *     ZwQuerySystemTime @ 0x1800A5E40 (ZwQuerySystemTime.c)
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
  ULONG_PTR v12; // rax
  SIZE_T v13; // r8
  PVOID ProcessHeap; // rcx
  LARGE_INTEGER *Heap; // rax
  __int64 v16; // rbx
  _QWORD *v17; // rdx
  __int64 v18; // r8
  _QWORD *v19; // rax
  __int64 *v20; // rax
  int v22; // ebx
  int v23; // edx
  int v24; // ecx

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
  if ( (int)sub_180083738() < 0 )
    return 0;
  v12 = LdrSystemDllInitBlock.MitigationOptionsMap.Map[2];
  if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
  {
    RtlAcquireSRWLockExclusive(&stru_18015AF70);
    v22 = *(_DWORD *)qword_18016B270;
    if ( !*(_DWORD *)qword_18016B270 )
      RtlProtectHeap(qword_18016B260, 0);
    if ( v22 == -1 )
    {
      RtlReleaseSRWLockExclusive(&stru_18015AF70);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016B270 = v22 + 1;
    RtlReleaseSRWLockExclusive(&stru_18015AF70);
    v12 = LdrSystemDllInitBlock.MitigationOptionsMap.Map[2];
  }
  v13 = v10 + 112;
  if ( v12 )
  {
    if ( v13 >= 0xFF000 )
      goto LABEL_38;
    ProcessHeap = qword_18016B260;
  }
  else
  {
    ProcessHeap = NtCurrentPeb()->ProcessHeap;
  }
  Heap = (LARGE_INTEGER *)RtlAllocateHeap(ProcessHeap, 0, v13);
  v16 = (__int64)Heap;
  if ( !Heap )
  {
    v12 = LdrSystemDllInitBlock.MitigationOptionsMap.Map[2];
LABEL_38:
    if ( v12 )
    {
      RtlAcquireSRWLockExclusive(&stru_18015AF70);
      v24 = *(_DWORD *)qword_18016B270;
      if ( !*(_DWORD *)qword_18016B270 )
      {
        RtlReleaseSRWLockExclusive(&stru_18015AF70);
        __fastfail(0xEu);
      }
      *(_DWORD *)qword_18016B270 = v24 - 1;
      if ( v24 == 1 )
        RtlProtectHeap(qword_18016B260, 1u);
      RtlReleaseSRWLockExclusive(&stru_18015AF70);
    }
    return 0;
  }
  Heap[2].QuadPart = TableIdentifier;
  ZwQuerySystemTime(Heap + 3);
  *(_QWORD *)(v16 + 32) = BaseAddress;
  *(_QWORD *)(v16 + 40) = BaseAddress + v6;
  *(_QWORD *)(v16 + 64) = Context;
  *(_QWORD *)(v16 + 48) = BaseAddress;
  *(_QWORD *)(v16 + 56) = Callback;
  *(_DWORD *)(v16 + 80) = 2;
  *(_QWORD *)(v16 + 72) = 0LL;
  if ( OutOfProcessCallbackDll )
  {
    *(_QWORD *)(v16 + 72) = v16 + 112;
    sub_1800456F0((_WORD *)(v16 + 112), v10, (__int64)OutOfProcessCallbackDll);
  }
  sub_18001DEA8(0);
  RtlAcquireSRWLockExclusive(&stru_18015A2B0);
  v17 = (_QWORD *)qword_18016B290;
  LOBYTE(v18) = 0;
  if ( qword_18016B290 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v16 + 32) < *(v17 - 7) )
      {
        v19 = (_QWORD *)*v17;
        if ( !*v17 )
        {
          LOBYTE(v18) = 0;
          break;
        }
      }
      else
      {
        v19 = (_QWORD *)v17[1];
        if ( !v19 )
        {
          LOBYTE(v18) = 1;
          break;
        }
      }
      v17 = v19;
    }
  }
  RtlAvlInsertNodeEx(&qword_18016B290, v17, v18, v16 + 88);
  v20 = (__int64 *)qword_18016B2A0;
  if ( *(__int64 **)qword_18016B2A0 != &qword_18016B298 )
    __fastfail(3u);
  *(_QWORD *)v16 = &qword_18016B298;
  *(_QWORD *)(v16 + 8) = v20;
  *v20 = v16;
  qword_18016B2A0 = v16;
  RtlReleaseSRWLockExclusive(&stru_18015A2B0);
  sub_18001DEA8(1);
  if ( LdrSystemDllInitBlock.MitigationOptionsMap.Map[2] )
  {
    RtlAcquireSRWLockExclusive(&stru_18015AF70);
    v23 = *(_DWORD *)qword_18016B270;
    if ( !*(_DWORD *)qword_18016B270 )
    {
      RtlReleaseSRWLockExclusive(&stru_18015AF70);
      __fastfail(0xEu);
    }
    *(_DWORD *)qword_18016B270 = v23 - 1;
    if ( v23 == 1 )
      RtlProtectHeap(qword_18016B260, 1u);
    RtlReleaseSRWLockExclusive(&stru_18015AF70);
  }
  return 1;
}
