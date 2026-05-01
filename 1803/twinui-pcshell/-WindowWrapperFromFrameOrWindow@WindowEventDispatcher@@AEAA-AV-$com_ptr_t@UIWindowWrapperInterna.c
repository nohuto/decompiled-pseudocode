/*
 * XREFs of ?WindowWrapperFromFrameOrWindow@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@PEAUHWND__@@@Z @ 0x1801DA5D8
 * Callers:
 *     ?HandleForegroundWindow@WindowEventDispatcher@@AEAAXPEAUHWND__@@@Z @ 0x1801D6308 (-HandleForegroundWindow@WindowEventDispatcher@@AEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall WindowEventDispatcher::WindowWrapperFromFrameOrWindow(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned int v6; // r14d
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx

  *a2 = 0LL;
  v6 = 0;
  v7 = *(_QWORD *)(a1 + 360);
  if ( (unsigned __int64)(*(_QWORD *)(a1 + 368) - v7) >= 8 )
  {
    v8 = 0LL;
    while ( 1 )
    {
      v9 = *(_QWORD *)(v7 + 8 * v8);
      if ( v9 )
      {
        v10 = (*(int (__fastcall **)(__int64))(*(_QWORD *)v9 + 216LL))(v9);
        v11 = *(_QWORD *)(*(_QWORD *)(a1 + 360) + 8 * v8);
        v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 288LL))(v11);
        if ( a3 == v10 || a3 == v12 )
          break;
      }
      ++v6;
      v7 = *(_QWORD *)(a1 + 360);
      v8 = v6;
      if ( v6 == (*(_QWORD *)(a1 + 368) - v7) >> 3 )
        return a2;
    }
    v13 = *a2;
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 360) + 8 * v8);
    *a2 = v14;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return a2;
}
