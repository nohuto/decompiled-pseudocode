/*
 * XREFs of DbgkpOpenHandles @ 0x14067EFEC
 * Callers:
 *     NtWaitForDebugEvent @ 0x140680748 (NtWaitForDebugEvent.c)
 * Callees:
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     ObOpenObjectByPointer @ 0x14050ED20 (ObOpenObjectByPointer.c)
 *     ObDuplicateObject @ 0x140517550 (ObDuplicateObject.c)
 */

void __fastcall DbgkpOpenHandles(__int64 a1, void *a2, void *a3)
{
  void *v5; // rsi
  _KPROCESS *v6; // r8
  _QWORD *v7; // rsi
  _KPROCESS *Process; // r8
  _QWORD *v9; // rdi

  switch ( *(_DWORD *)a1 )
  {
    case 2:
      v9 = (_QWORD *)(a1 + 24);
      if ( ObOpenObjectByPointer(a3, 0, 0LL, 0x12007Bu, (POBJECT_TYPE)PsThreadType, 0, (PHANDLE)(a1 + 24)) < 0 )
        *v9 = 0LL;
      break;
    case 3:
      v7 = (_QWORD *)(a1 + 32);
      if ( ObOpenObjectByPointer(a3, 0, 0LL, 0x12007Bu, (POBJECT_TYPE)PsThreadType, 0, (PHANDLE)(a1 + 32)) < 0 )
        *v7 = 0LL;
      if ( ObOpenObjectByPointer(a2, 0, 0LL, 0x12067Bu, (POBJECT_TYPE)PsProcessType, 0, (PHANDLE)(a1 + 24)) < 0 )
        *(_QWORD *)(a1 + 24) = 0LL;
      v5 = *(void **)(a1 + 48);
      if ( v5 )
      {
        Process = KeGetCurrentThread()->ApcState.Process;
        if ( (int)ObDuplicateObject(
                    (struct _EX_RUNDOWN_REF *)Process,
                    v5,
                    (ULONG_PTR)Process,
                    (__int64 *)(a1 + 48),
                    0,
                    0,
                    2,
                    0) < 0 )
          *(_QWORD *)(a1 + 48) = 0LL;
        goto LABEL_14;
      }
      break;
    case 9:
      v5 = *(void **)(a1 + 24);
      if ( v5 )
      {
        v6 = KeGetCurrentThread()->ApcState.Process;
        if ( (int)ObDuplicateObject((struct _EX_RUNDOWN_REF *)v6, v5, (ULONG_PTR)v6, (__int64 *)(a1 + 24), 0, 0, 2, 0) < 0 )
          *(_QWORD *)(a1 + 24) = 0LL;
LABEL_14:
        ObCloseHandle(v5, 0);
      }
      break;
  }
}
