/*
 * XREFs of HMChangeOwnerThread @ 0x1C0095C80
 * Callers:
 *     MarkThreadsObjects @ 0x1C0040960 (MarkThreadsObjects.c)
 * Callees:
 *     LockObjectAssignment @ 0x1C0043540 (LockObjectAssignment.c)
 */

LONG_PTR __fastcall HMChangeOwnerThread(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  char *v5; // rbx
  char *v6; // rdi
  LONG_PTR result; // rax
  __int64 v8; // rcx
  _QWORD *ClassPtr; // rbx
  __int64 v10; // rax
  __int64 CurrentProcessWin32Process; // rbx

  v3 = *(_QWORD *)(a1 + 16);
  v5 = (char *)gpKernelHandleTable + 16 * (unsigned __int16)*(_DWORD *)a1;
  v6 = (char *)qword_1C0189E38 + dword_1C0189E40 * (unsigned int)(unsigned __int16)*(_DWORD *)a1;
  --*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 1) + 376LL) + 68LL);
  *((_QWORD *)v5 + 1) = a2;
  *((_QWORD *)v6 + 1) = PsGetThreadId(*(PETHREAD *)a2);
  *(_QWORD *)(a1 + 16) = *((_QWORD *)v5 + 1);
  result = *((_QWORD *)v5 + 1);
  ++*(_DWORD *)(*(_QWORD *)(result + 376) + 68LL);
  if ( v6[24] == 1 )
  {
    ++*(_DWORD *)(a2 + 780);
    --*(_DWORD *)(v3 + 780);
    if ( (*(_BYTE *)(a1 + 71) & 0x10) != 0 && (int)IsFVisCountableSupported() >= 0 && (unsigned int)FVisCountable(a1) )
    {
      ++*(_DWORD *)(a2 + 784);
      --*(_DWORD *)(v3 + 784);
    }
    result = *(_QWORD *)(v3 + 376);
    if ( *(_QWORD *)(a2 + 376) != result )
    {
      if ( (int)IsGetClassPtrSupported() < 0 )
        ClassPtr = 0LL;
      else
        ClassPtr = (_QWORD *)GetClassPtr(
                               *(unsigned __int16 *)(*(_QWORD *)(a1 + 168) + 8LL),
                               *(_QWORD *)(a2 + 376),
                               hModuleWin);
      if ( !ClassPtr )
      {
        v10 = *(_QWORD *)(a1 + 24);
        if ( v10 )
          CurrentProcessWin32Process = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 40) + 24LL) + 16LL) + 376LL);
        else
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
        if ( (int)IsGetClassPtrSupported() < 0 )
          ClassPtr = 0LL;
        else
          ClassPtr = (_QWORD *)GetClassPtr(*((unsigned __int16 *)gpsi + 447), CurrentProcessWin32Process, hModuleWin);
      }
      if ( (int)IsDereferenceClassSupported() >= 0 )
        DereferenceClass(*(_QWORD *)(v3 + 376), a1);
      *(_QWORD *)(a1 + 168) = *ClassPtr;
      result = IsReferenceClassSupported();
      if ( (int)result >= 0 )
      {
        result = ReferenceClass(*(_QWORD *)(a1 + 168), a1);
        if ( !(_DWORD)result )
        {
          result = *(_QWORD *)(a1 + 168);
          ++*(_DWORD *)(result + 88);
        }
      }
    }
  }
  else if ( v6[24] == 5 )
  {
    result = *(unsigned int *)(a1 + 64);
    if ( (result & 1) != 0 )
      return LockObjectAssignment((void **)(a1 + 80), *(void **)(v3 + 408));
  }
  return result;
}
