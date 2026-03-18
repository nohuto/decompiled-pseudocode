/*
 * XREFs of HMChangeOwnerThread @ 0x1C008DA60
 * Callers:
 *     MarkThreadsObjects @ 0x1C003ECE0 (MarkThreadsObjects.c)
 * Callees:
 *     LockObjectAssignment @ 0x1C003C770 (LockObjectAssignment.c)
 */

LONG_PTR __fastcall HMChangeOwnerThread(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  char *v7; // rsi
  __int64 v8; // rcx
  LONG_PTR result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD *ClassPtr; // rbx
  __int64 v14; // rax
  __int64 CurrentProcessWin32Process; // rbx

  v3 = *(_QWORD *)(a1 + 16);
  v5 = gpKernelHandleTable;
  v6 = 3LL * (unsigned __int16)*(_DWORD *)a1;
  v7 = (char *)qword_1C018E9B8 + dword_1C018E9C0 * (unsigned int)(unsigned __int16)*(_DWORD *)a1;
  v8 = *(_QWORD *)(*((_QWORD *)gpKernelHandleTable + 3 * (unsigned __int16)*(_DWORD *)a1 + 1) + 400LL);
  --*(_DWORD *)(v8 + 68);
  v5[v6 + 1] = a2;
  *((_QWORD *)v7 + 1) = PsGetThreadId(*(PETHREAD *)a2);
  *(_QWORD *)(a1 + 16) = v5[v6 + 1];
  result = v5[v6 + 1];
  ++*(_DWORD *)(*(_QWORD *)(result + 400) + 68LL);
  if ( v7[24] == 1 )
  {
    ++*(_DWORD *)(a2 + 868);
    --*(_DWORD *)(v3 + 868);
    if ( (*(_BYTE *)(a1 + 71) & 0x10) != 0 && (int)IsFVisCountableSupported() >= 0 && (unsigned int)FVisCountable(a1) )
    {
      ++*(_DWORD *)(a2 + 872);
      --*(_DWORD *)(v3 + 872);
    }
    result = *(_QWORD *)(v3 + 400);
    if ( *(_QWORD *)(a2 + 400) != result )
    {
      if ( (int)IsGetClassPtrSupported() < 0 )
        ClassPtr = 0LL;
      else
        ClassPtr = (_QWORD *)GetClassPtr(
                               *(unsigned __int16 *)(*(_QWORD *)(a1 + 168) + 8LL),
                               *(_QWORD *)(a2 + 400),
                               hModuleWin);
      if ( !ClassPtr )
      {
        v14 = *(_QWORD *)(a1 + 24);
        if ( v14 )
          CurrentProcessWin32Process = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 40) + 24LL) + 16LL) + 400LL);
        else
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v11, v10, v12);
        if ( (int)IsGetClassPtrSupported() < 0 )
          ClassPtr = 0LL;
        else
          ClassPtr = (_QWORD *)GetClassPtr(*((unsigned __int16 *)gpsi + 447), CurrentProcessWin32Process, hModuleWin);
      }
      if ( (int)IsDereferenceClassSupported() >= 0 )
        DereferenceClass(*(_QWORD *)(v3 + 400), a1);
      *(_QWORD *)(a1 + 168) = *ClassPtr;
      result = IsReferenceClassSupported();
      if ( (int)result >= 0 )
      {
        result = ReferenceClass(*(_QWORD *)(a1 + 168), a1);
        if ( !(_DWORD)result )
        {
          result = *(_QWORD *)(a1 + 168);
          ++*(_DWORD *)(result + 96);
        }
      }
    }
  }
  else if ( v7[24] == 5 )
  {
    result = *(unsigned int *)(a1 + 64);
    if ( (result & 1) != 0 )
      return LockObjectAssignment((void **)(a1 + 80), *(void **)(v3 + 432));
  }
  return result;
}
