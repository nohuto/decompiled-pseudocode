/*
 * XREFs of ?QueueWorkItem@ButtonProcessor@@AEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x1800919F8
 * Callers:
 *     ?OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800915B0 (-OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Growmap@?$deque@V?$shared_ptr@VAsynchronousWorkItem@ButtonProcessor@@@std@@V?$allocator@V?$shared_ptr@VAsynchronousWorkItem@ButtonProcessor@@@std@@@2@@std@@IEAAX_K@Z @ 0x1800922B8 (-_Growmap@-$deque@V-$shared_ptr@VAsynchronousWorkItem@ButtonProcessor@@@std@@V-$allocator@V-$sha.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall ButtonProcessor::QueueWorkItem(__int64 a1, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r12
  __int64 v5; // rdx
  const char *v6; // r9
  _DWORD *v7; // rsi
  _BYTE *v8; // rcx
  __int64 (__fastcall ***v9)(_QWORD, _BYTE *); // r8
  _BYTE *v10; // rdx
  __int64 v11; // r13
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  _BYTE v18[56]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE *v19; // [rsp+78h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  unsigned int v21; // [rsp+C0h] [rbp+8h]

  try
  {
    v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 72);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 72));
    if ( !*(_BYTE *)(a1 + 112) )
    {
      v7 = operator new(0x50uLL);
      v7[2] = 1;
      v7[3] = 1;
      *(_QWORD *)v7 = &std::_Ref_count_obj<ButtonProcessor::AsynchronousWorkItem>::`vftable';
      v8 = 0LL;
      v19 = 0LL;
      v9 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a2 + 56);
      if ( v9 )
      {
        v8 = (_BYTE *)(**v9)(*(_QWORD *)(a2 + 56), v18);
        v19 = v8;
      }
      *((_QWORD *)v7 + 9) = 0LL;
      if ( v8 )
      {
        *((_QWORD *)v7 + 9) = (**(__int64 (__fastcall ***)(_BYTE *, __int64))v8)(v8, (__int64)(v7 + 4));
        v8 = v19;
      }
      if ( v8 )
      {
        v10 = v18;
        LOBYTE(v10) = v8 != v18;
        (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v8 + 32LL))(v8, v10);
        v19 = 0LL;
      }
      if ( *(_QWORD *)(a1 + 136) <= (unsigned __int64)(*(_QWORD *)(a1 + 152) + 1LL) )
        std::deque<std::shared_ptr<ButtonProcessor::AsynchronousWorkItem>>::_Growmap(a1 + 120);
      *(_QWORD *)(a1 + 144) &= *(_QWORD *)(a1 + 136) - 1LL;
      v5 = *(_QWORD *)(a1 + 152) + *(_QWORD *)(a1 + 144);
      v11 = v5 & (*(_QWORD *)(a1 + 136) - 1LL);
      v12 = *(_QWORD *)(a1 + 128);
      if ( !*(_QWORD *)(v12 + 8 * v11) )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8 * v11) = operator new(0x10uLL);
        v12 = *(_QWORD *)(a1 + 128);
      }
      v13 = *(_QWORD **)(v12 + 8 * v11);
      *v13 = v7 + 4;
      v13[1] = v7;
      if ( ++*(_QWORD *)(a1 + 152) == 1LL )
        SubmitThreadpoolWork(*(PTP_WORK *)(a1 + 160));
    }
    if ( v4 )
      LeaveCriticalSection(v4);
  }
  catch ( ... )
  {
    v21 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x1A3,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\button\\lib\\buttonprocessor.cpp",
            v6);
    v16 = *(_QWORD *)(a2 + 56);
    if ( v16 )
    {
      LOBYTE(v17) = v16 != a2;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 32LL))(v16, v17);
      *(_QWORD *)(a2 + 56) = 0LL;
    }
    return v21;
  }
  v14 = *(_QWORD *)(a2 + 56);
  if ( v14 )
  {
    LOBYTE(v5) = v14 != a2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 32LL))(v14, v5);
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  return 0LL;
}
