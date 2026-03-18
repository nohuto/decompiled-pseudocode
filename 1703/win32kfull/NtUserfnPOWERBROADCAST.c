/*
 * XREFs of NtUserfnPOWERBROADCAST @ 0x1C00FD6B0
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?TraceLoggingStubInvalidParamEvent@@YAXIKPEAD@Z @ 0x1C013D7FC (-TraceLoggingStubInvalidParamEvent@@YAXIKPEAD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

__int64 __fastcall NtUserfnPOWERBROADCAST(
        __int64 a1,
        unsigned int a2,
        __int16 a3,
        unsigned int *a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v8; // rdi
  int v9; // ecx
  size_t v10; // r14
  __int64 v11; // rax
  __int64 v12; // rbx
  __int128 v14; // [rsp+48h] [rbp-40h]
  _QWORD v15[3]; // [rsp+58h] [rbp-30h] BYREF

  v8 = 0LL;
  if ( a2 != 536 || a6 - 683 > 0xC || (v9 = 4547, !_bittest(&v9, a6 - 683)) )
  {
    UserSetLastError(87LL);
    TraceLoggingStubInvalidParamEvent(a2, a6, "NtUserfnPOWERBROADCAST");
    v12 = 0LL;
    UserSetLastError(87LL);
    return v12;
  }
  if ( a3 < 0 && a4 )
  {
    ProbeForRead(a4, 0x14uLL, 1u);
    v14 = *(_OWORD *)a4;
    v10 = a4[4];
    if ( (int)v10 + 20 < (unsigned int)v10 )
    {
      v12 = 0LL;
      goto LABEL_12;
    }
    ProbeForRead(a4, (unsigned int)(v10 + 20), 1u);
    v11 = Win32AllocPoolWithQuota((unsigned int)(v10 + 20), 1651536725LL);
    v8 = v11;
    if ( !v11 )
    {
      UserSetLastError(8LL);
      v12 = 0LL;
      goto LABEL_12;
    }
    PushW32ThreadLock(v11, v15, (__int64)Win32FreePool);
    *(_OWORD *)v8 = v14;
    *(_DWORD *)(v8 + 16) = v10;
    memmove((void *)(v8 + 20), a4 + 5, v10);
  }
  v12 = _guard_dispatch_icall_fptr();
LABEL_12:
  if ( v8 )
    PopAndFreeAlwaysW32ThreadLock((__int64)v15);
  return v12;
}
