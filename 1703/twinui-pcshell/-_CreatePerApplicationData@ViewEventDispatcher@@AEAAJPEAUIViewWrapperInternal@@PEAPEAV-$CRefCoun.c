/*
 * XREFs of ?_CreatePerApplicationData@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@Z @ 0x1800FA104
 * Callers:
 *     ?_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x1800F9DD0 (-_AddValidView@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x180023BE8 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 *     ??$CreateRefCountedObj@UPerApplicationData@ViewEventDispatcher@@@@YA?AV?$ComPtr@V?$CRefCountedObject@UPerApplicationData@ViewEventDispatcher@@@@@WRL@Microsoft@@XZ @ 0x1800FF048 (--$CreateRefCountedObj@UPerApplicationData@ViewEventDispatcher@@@@YA-AV-$ComPtr@V-$CRefCountedOb.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewEventDispatcher::_CreatePerApplicationData(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rbx
  int v7; // edi
  int v8; // eax
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rbp
  _QWORD *v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void *v19; // [rsp+70h] [rbp+18h] BYREF
  __int64 v20; // [rsp+78h] [rbp+20h] BYREF

  *a3 = 0LL;
  CreateRefCountedObj<ViewEventDispatcher::PerApplicationData>(&v20);
  v6 = v20;
  if ( !v20 )
  {
    v7 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD49,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_28;
  }
  *(_QWORD *)(v20 + 16) = 0LL;
  v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 56LL))(a2, v6 + 8);
  v7 = v8;
  if ( v8 < 0 )
  {
    v9 = (unsigned int)v8;
    v10 = 3403LL;
LABEL_26:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)v9);
    goto LABEL_28;
  }
  v11 = *(_QWORD *)(a1 + 520);
  v12 = *(_QWORD *)(a1 + 536);
  if ( v11 == v12 )
  {
    v13 = v11 + 1;
    v7 = -2147024774;
    if ( (unsigned __int64)(v11 + 1) <= 0xFFFFFFFE )
    {
      v7 = 0;
      if ( v13 > v12 )
      {
        v14 = 2 * v12;
        if ( !is_mul_ok(v12, 2uLL) )
        {
          v14 = -1LL;
          v7 = -2147024362;
        }
        if ( v7 < 0 )
          goto LABEL_25;
        v15 = v12 + 4096;
        if ( v14 - v12 <= 0x1000 )
          v15 = v14;
        if ( v13 > v15 )
          v15 = v11 + 1;
        if ( v15 > 0xFFFFFFFE )
          v15 = 4294967294LL;
        v19 = 0LL;
        if ( is_mul_ok(v15, 8uLL) )
        {
          v7 = CTCoAllocPolicy::Realloc(
                 (IMalloc *)&v19,
                 (v15 * (unsigned __int128)8uLL) >> 64,
                 *(void **)(a1 + 512),
                 8 * v15,
                 &v19);
          if ( v7 >= 0 )
          {
            *(_QWORD *)(a1 + 536) = v15;
            *(_QWORD *)(a1 + 512) = v19;
          }
        }
        else
        {
          v7 = -2147024362;
        }
      }
    }
    if ( v7 >= 0 )
      goto LABEL_22;
LABEL_25:
    v9 = (unsigned int)v7;
    v10 = 3404LL;
    goto LABEL_26;
  }
LABEL_22:
  v16 = (_QWORD *)(*(_QWORD *)(a1 + 512) + 8 * (*(_QWORD *)(a1 + 520))++);
  if ( v16 )
  {
    *v16 = v6;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  *a3 = v6;
  v7 = 0;
LABEL_28:
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v7;
}
