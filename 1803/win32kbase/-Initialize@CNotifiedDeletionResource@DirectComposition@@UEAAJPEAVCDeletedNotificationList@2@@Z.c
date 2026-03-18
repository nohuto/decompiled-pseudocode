/*
 * XREFs of ?Initialize@CNotifiedDeletionResource@DirectComposition@@UEAAJPEAVCDeletedNotificationList@2@@Z @ 0x1C00063E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C00149DC (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 */

__int64 __fastcall DirectComposition::CNotifiedDeletionResource::Initialize(
        DirectComposition::CNotifiedDeletionResource *this,
        struct DirectComposition::CDeletedNotificationList *a2)
{
  unsigned __int64 v2; // r15
  __int64 v4; // rbp
  int v6; // esi
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  size_t v11; // r8
  size_t v12; // rax
  void *v13; // rcx
  __int64 Src; // [rsp+48h] [rbp+10h] BYREF

  v2 = *((unsigned int *)a2 + 11);
  v4 = *((_QWORD *)a2 + 3);
  if ( (_DWORD)v2 + *((_DWORD *)a2 + 12) != v4 )
    goto LABEL_2;
  v8 = *((unsigned int *)a2 + 10);
  v6 = DirectComposition::CDCompDynamicArrayBase::Grow(a2, 1uLL, 0x626E4344u);
  if ( v2 > v4 - v8 )
  {
    v9 = *((unsigned int *)a2 + 10);
    v10 = *(_QWORD *)a2;
    v11 = *((_QWORD *)a2 + 4);
    *((_DWORD *)a2 + 10) = v9 + 1;
    v12 = v9 * v11;
    v13 = (void *)(v10 + v11 * (*((_QWORD *)a2 + 3) - 1LL));
    Src = *(_QWORD *)(v12 + v10);
    memmove(v13, &Src, v11);
  }
  if ( v6 >= 0 )
  {
LABEL_2:
    ++*((_DWORD *)a2 + 12);
    return (unsigned int)(**(__int64 (__fastcall ***)(DirectComposition::CNotifiedDeletionResource *))this)(this);
  }
  return (unsigned int)v6;
}
