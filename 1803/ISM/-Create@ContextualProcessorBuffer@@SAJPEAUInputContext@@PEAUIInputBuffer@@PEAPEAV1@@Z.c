/*
 * XREFs of ?Create@ContextualProcessorBuffer@@SAJPEAUInputContext@@PEAUIInputBuffer@@PEAPEAV1@@Z @ 0x1800AFB28
 * Callers:
 *     ?OnHitTest@ContextualProcessorManager@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800AF5B8 (-OnHitTest@ContextualProcessorManager@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUIInputBuffer@@P.c)
 *     ?OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800AF814 (-OnFocusRequest@ContextualProcessorManager@@QEAAJPEAUDeviceInfo@@PEAUInputContext@@PEAUIInputBuf.c)
 * Callees:
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ContextualProcessorBuffer::Create(
        struct InputContext *a1,
        struct IInputBuffer *a2,
        struct ContextualProcessorBuffer **a3)
{
  unsigned int v3; // ebx
  _QWORD *v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // rcx

  v3 = 0;
  if ( a3 )
  {
    v7 = malloc(0x68uLL);
    v8 = v7;
    if ( v7 )
    {
      memset_0(v7, 0, 0x68uLL);
      v9 = *(_QWORD *)a1;
      v8[2] = &RefCountedObject::`vftable';
      *((_DWORD *)v8 + 6) = 1;
      *v8 = &ContextualProcessorBuffer::`vftable'{for `IDCompInputTarget'};
      v8[1] = &ContextualProcessorBuffer::`vftable'{for `IFocusInputTarget'};
      v8[2] = &ContextualProcessorBuffer::`vftable'{for `RefCountedObject'};
      v8[4] = 0LL;
      v8[5] = 0LL;
      v8[6] = 0LL;
      v8[7] = 0LL;
      v8[8] = 0LL;
      v8[9] = 0LL;
      v8[10] = a1;
      v8[11] = v9;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v8[12] = a2;
      if ( a2 )
        (*(void (__fastcall **)(struct IInputBuffer *))(*(_QWORD *)a2 + 8LL))(a2);
    }
    else
    {
      v8 = 0LL;
    }
    if ( v8 )
      *a3 = (struct ContextualProcessorBuffer *)v8;
    else
      return (unsigned int)-2147024882;
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v3;
}
