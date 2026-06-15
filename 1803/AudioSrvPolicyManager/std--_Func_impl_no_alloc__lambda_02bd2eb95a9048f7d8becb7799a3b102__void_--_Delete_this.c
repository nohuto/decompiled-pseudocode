/*
 * XREFs of std::_Func_impl_no_alloc__lambda_02bd2eb95a9048f7d8becb7799a3b102__void_::_Delete_this @ 0x18000AAC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_02bd2eb95a9048f7d8becb7799a3b102__void_::_Delete_this(
        _QWORD *lpMem,
        char a2)
{
  volatile signed __int32 *v4; // rbx
  HANDLE ProcessHeap; // rax

  v4 = (volatile signed __int32 *)lpMem[1];
  if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 32LL))(v4);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v4 + 24LL))(v4, 1LL);
  }
  if ( a2 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
}
