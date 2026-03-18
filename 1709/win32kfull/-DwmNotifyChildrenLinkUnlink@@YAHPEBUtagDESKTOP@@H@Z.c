/*
 * XREFs of ?DwmNotifyChildrenLinkUnlink@@YAHPEBUtagDESKTOP@@H@Z @ 0x1C0045444
 * Callers:
 *     DwmNotifyChildrenAddRemove @ 0x1C0045400 (DwmNotifyChildrenAddRemove.c)
 * Callees:
 *     DwmAsyncChildLink @ 0x1C0045688 (DwmAsyncChildLink.c)
 *     DwmAsyncChildUnlink @ 0x1C0045A9C (DwmAsyncChildUnlink.c)
 *     DwmAsyncOwnerChange @ 0x1C0060154 (DwmAsyncOwnerChange.c)
 *     FreeHwndList @ 0x1C006F360 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006F3E0 (BuildHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall DwmNotifyChildrenLinkUnlink(const struct tagDESKTOP *a1, int a2)
{
  unsigned int v4; // esi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r13
  _QWORD *i; // r14
  __int64 v9; // rax
  __int64 v10; // rdi
  void *v11; // rax
  void *v12; // rax
  __int64 v13; // rbx
  void *v14; // rcx
  void *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rbp
  _QWORD *j; // r14
  __int64 v21; // rax
  __int64 v22; // rdi
  void *v23; // rax
  void *v24; // rax

  v4 = 1;
  v5 = BuildHwndList(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 16LL) + 112LL), 3LL, 0LL);
  v7 = v5;
  if ( !v5 )
    return 0;
  for ( i = (_QWORD *)(v5 + 32); *i != 1LL; ++i )
  {
    LOBYTE(v6) = 1;
    v9 = HMValidateHandleNoSecure(*i, v6);
    v10 = v9;
    if ( v9 )
    {
      v11 = (void *)ReferenceDwmApiPort();
      if ( a2 )
      {
        DwmAsyncChildLink(v11, *(_DWORD *)(v10 + 320));
        v12 = (void *)ReferenceDwmApiPort();
        DwmAsyncOwnerChange(v12);
      }
      else
      {
        DwmAsyncChildUnlink(v11);
      }
    }
  }
  FreeHwndList(v7);
  v13 = *((_QWORD *)a1 + 13);
  v14 = (void *)ReferenceDwmApiPort();
  if ( a2 )
  {
    DwmAsyncChildLink(v14, *(_DWORD *)(v13 + 320));
    v15 = (void *)ReferenceDwmApiPort();
    DwmAsyncOwnerChange(v15);
  }
  else
  {
    DwmAsyncChildUnlink(v14);
  }
  v16 = *(_QWORD *)(*((_QWORD *)a1 + 13) + 112LL);
  if ( !v16 )
    return v4;
  v17 = BuildHwndList(v16, 3LL, 0LL);
  v19 = v17;
  if ( !v17 )
    return 0;
  for ( j = (_QWORD *)(v17 + 32); *j != 1LL; ++j )
  {
    LOBYTE(v18) = 1;
    v21 = HMValidateHandleNoSecure(*j, v18);
    v22 = v21;
    if ( v21 )
    {
      v23 = (void *)ReferenceDwmApiPort();
      if ( a2 )
      {
        DwmAsyncChildLink(v23, *(_DWORD *)(v22 + 320));
        v24 = (void *)ReferenceDwmApiPort();
        DwmAsyncOwnerChange(v24);
      }
      else
      {
        DwmAsyncChildUnlink(v23);
      }
    }
  }
  FreeHwndList(v19);
  return v4;
}
