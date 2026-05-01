/*
 * XREFs of ?_PropagateNewRegistration@ViewEventDispatcher@@AEAAXPEAUIViewWrapperInternal@@0@Z @ 0x1801208EC
 * Callers:
 *     _lambda_3e1390e1d2422aea3f572ae27706a686_::operator() @ 0x18011F56C (_lambda_3e1390e1d2422aea3f572ae27706a686_--operator().c)
 *     ?_PropagateNewRegistration@ViewEventDispatcher@@AEAAXW4CRSIdType@ViewEventHandlers@OneCore@Internal@Windows@@II@Z @ 0x18012081C (-_PropagateNewRegistration@ViewEventDispatcher@@AEAAXW4CRSIdType@ViewEventHandlers@OneCore@Inter.c)
 * Callees:
 *     ?_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x180123FF4 (-_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ViewEventDispatcher::_PropagateNewRegistration(
        ViewEventDispatcher *this,
        struct IViewWrapperInternal *a2,
        struct IViewWrapperInternal *a3)
{
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // rbx
  __int64 v11; // rax
  char v12; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    v6 = *(_QWORD *)a3;
    v7 = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)a2 + 576LL))(a2);
    (*(void (__fastcall **)(struct IViewWrapperInternal *, _QWORD))(v6 + 736))(a3, v7);
    v8 = *(_QWORD *)a3;
    v9 = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)a2 + 784LL))(a2);
    (*(void (__fastcall **)(struct IViewWrapperInternal *, _QWORD))(v8 + 760))(a3, v9);
    v10 = *(_QWORD *)a3;
    v11 = (*(__int64 (__fastcall **)(struct IViewWrapperInternal *, char *))(*(_QWORD *)a2 + 776LL))(a2, &v12);
    (*(void (__fastcall **)(struct IViewWrapperInternal *, __int64))(v10 + 768))(a3, v11);
  }
  ViewEventDispatcher::_HostChanged(this, a3);
}
