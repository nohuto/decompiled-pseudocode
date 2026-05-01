/*
 * XREFs of ??1?$CLinkedList@UPendingActivationData@ViewEventDispatcher@@@@QEAA@XZ @ 0x180127E70
 * Callers:
 *     ??1ViewEventDispatcher@@EEAA@XZ @ 0x18011BB78 (--1ViewEventDispatcher@@EEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CLinkedList<ViewEventDispatcher::PendingActivationData>::~CLinkedList<ViewEventDispatcher::PendingActivationData>(
        _QWORD **a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  HSTRING v8; // rcx

  v2 = 0LL;
  while ( 1 )
  {
LABEL_2:
    if ( v2 )
    {
      v2 = (_QWORD *)*v2;
    }
    else
    {
      if ( !a1 )
        return;
      v2 = *a1;
    }
    if ( !v2 )
      break;
    v3 = *a1;
    v4 = 0LL;
    while ( v3 )
    {
      if ( v3 == v2 )
      {
        v5 = (_QWORD *)*v2;
        if ( v4 )
          *v4 = v5;
        else
          *a1 = v5;
        v2 = v4;
        v6 = v3[4];
        if ( v6 )
        {
          v3[4] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        }
        v7 = v3[3];
        if ( v7 )
        {
          v3[3] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        }
        v8 = (HSTRING)v3[2];
        if ( v8 )
          WindowsDeleteString(v8);
        operator delete(v3);
        goto LABEL_2;
      }
      v4 = v3;
      v3 = (_QWORD *)*v3;
    }
  }
}
