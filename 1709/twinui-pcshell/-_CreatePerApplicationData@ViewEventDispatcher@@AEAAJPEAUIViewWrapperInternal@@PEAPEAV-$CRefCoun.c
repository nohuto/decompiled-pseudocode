/*
 * XREFs of ?_CreatePerApplicationData@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@Z @ 0x180125438
 * Callers:
 *     ?_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x180125100 (-_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x180024508 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::_CreatePerApplicationData(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  int v8; // edi
  int v9; // eax
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rbp
  _QWORD *v17; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void *v20; // [rsp+70h] [rbp+18h] BYREF
  _QWORD *v21; // [rsp+78h] [rbp+20h]

  *a3 = 0LL;
  v6 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    v6[1] = 0LL;
    v6[2] = 0LL;
    v6[1] = 0LL;
    *v6 = &CRefCountedObject<LightweightPropertySet::LightweightProperty>::`vftable';
    *((_DWORD *)v6 + 6) = 0;
  }
  else
  {
    v7 = 0LL;
  }
  v21 = v7;
  if ( !v7 )
  {
    v8 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDCB,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_31;
  }
  (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
  v7[2] = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)a2 + 56LL))(a2, v7 + 1);
  v8 = v9;
  if ( v9 < 0 )
  {
    v10 = (unsigned int)v9;
    v11 = 3533LL;
LABEL_30:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)v10);
    goto LABEL_31;
  }
  v12 = *(_QWORD *)(a1 + 592);
  v13 = *(_QWORD *)(a1 + 608);
  if ( v12 == v13 )
  {
    v14 = v12 + 1;
    v8 = -2147024774;
    if ( (unsigned __int64)(v12 + 1) <= 0xFFFFFFFE )
    {
      v8 = 0;
      if ( v14 > v13 )
      {
        v15 = 2 * v13;
        if ( !is_mul_ok(v13, 2uLL) )
        {
          v15 = -1LL;
          v8 = -2147024362;
        }
        if ( v8 < 0 )
          goto LABEL_29;
        v16 = v13 + 4096;
        if ( v15 - v13 <= 0x1000 )
          v16 = v15;
        if ( v14 > v16 )
          v16 = v12 + 1;
        if ( v16 > 0xFFFFFFFE )
          v16 = 4294967294LL;
        v20 = 0LL;
        if ( is_mul_ok(v16, 8uLL) )
        {
          v8 = CTCoAllocPolicy::Realloc(
                 (IMalloc *)&v20,
                 (v16 * (unsigned __int128)8uLL) >> 64,
                 *(void **)(a1 + 584),
                 8 * v16,
                 &v20);
          if ( v8 >= 0 )
          {
            *(_QWORD *)(a1 + 608) = v16;
            *(_QWORD *)(a1 + 584) = v20;
          }
        }
        else
        {
          v8 = -2147024362;
        }
      }
    }
    if ( v8 >= 0 )
      goto LABEL_26;
LABEL_29:
    v10 = (unsigned int)v8;
    v11 = 3534LL;
    goto LABEL_30;
  }
LABEL_26:
  v17 = (_QWORD *)(*(_QWORD *)(a1 + 584) + 8 * (*(_QWORD *)(a1 + 592))++);
  if ( v17 )
  {
    *v17 = v7;
    (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
  }
  (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
  *a3 = v7;
  v8 = 0;
LABEL_31:
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
  return (unsigned int)v8;
}
