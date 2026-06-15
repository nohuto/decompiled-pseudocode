/*
 * XREFs of ??0CGenericWorkItem@@QEAA@V?$function@$$A6AXXZ@std@@@Z @ 0x180029AF0
 * Callers:
 *     ?QueueGenericWorkItem@@YAJV?$function@$$A6AXXZ@std@@@Z @ 0x180029748 (-QueueGenericWorkItem@@YAJV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall CGenericWorkItem::CGenericWorkItem(_QWORD *a1, __int64 a2)
{
  HANDLE ProcessHeap; // rax
  __int64 v5; // rdx
  _DWORD *v6; // rdi
  __int64 (__fastcall ***v7)(_QWORD, char *); // rcx
  volatile signed __int32 *v8; // rbx
  __int64 v9; // rcx

  *a1 = &CGenericWorkItem::`vftable';
  a1[1] = 0LL;
  a1[2] = 0LL;
  ProcessHeap = GetProcessHeap();
  v6 = HeapAlloc(ProcessHeap, 0, 0x50uLL);
  if ( v6 )
  {
    v6[2] = 1;
    v6[3] = 1;
    *(_QWORD *)v6 = &std::_Ref_count_obj<std::function<void (void)>>::`vftable';
    *((_QWORD *)v6 + 9) = 0LL;
    v7 = *(__int64 (__fastcall ****)(_QWORD, char *))(a2 + 56);
    if ( v7 )
      *((_QWORD *)v6 + 9) = (**v7)(v7, (char *)v6 + 16);
  }
  else
  {
    v6 = 0LL;
  }
  a1[1] = v6 + 4;
  v8 = (volatile signed __int32 *)a1[2];
  a1[2] = v6;
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  v9 = *(_QWORD *)(a2 + 56);
  if ( v9 )
  {
    LOBYTE(v5) = v9 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 32LL))(v9, v5);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  return a1;
}
