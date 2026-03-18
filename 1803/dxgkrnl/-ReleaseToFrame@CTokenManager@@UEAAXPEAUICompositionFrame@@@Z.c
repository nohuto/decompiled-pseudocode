/*
 * XREFs of ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x1C00106D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z @ 0x1C000D554 (-SetSyncRefreshCount@CompositionSurfaceObject@@QEAAXI@Z.c)
 *     ?RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z @ 0x1C000F8C8 (-RemoveTokenQueueTableEntry@CTokenManager@@IEAAXPEAUTokenQueueTableEntry@1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTokenManager::ReleaseToFrame(CTokenManager *this, struct ICompositionFrame *a2)
{
  char v3; // r12
  __int64 v4; // rcx
  bool v6; // r8
  ULONG v7; // edi
  struct CTokenManager::TokenQueueTableEntry *i; // r13
  char *v9; // rdi
  CTokenManager **v10; // rsi
  CTokenManager *v11; // rax
  char *v12; // rax
  __int64 v13; // rdi
  _QWORD *v14; // rdx
  _QWORD *j; // rcx
  __int64 v16; // rax
  char *v17; // rcx
  __int64 v18; // rsi
  char v19; // cl
  __int64 v20; // r14
  _QWORD *v21; // rax
  bool v22; // zf
  CompositionSurfaceObject **v23; // rcx
  struct ICompositionFrame **v24; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  struct ICompositionFrame **v27; // rcx
  CTokenManager *v28; // rax
  CTokenManager ***v29; // rax
  char *v30; // rcx
  char **v31; // rcx
  char *v32; // rcx
  void (__fastcall ***v33)(_QWORD, __int64); // r14
  char *v34; // [rsp+20h] [rbp-48h] BYREF
  CTokenManager **v35; // [rsp+28h] [rbp-40h]
  char v36; // [rsp+70h] [rbp+8h] BYREF
  char v37; // [rsp+78h] [rbp+10h] BYREF
  void (__fastcall ***v38)(_QWORD, __int64); // [rsp+80h] [rbp+18h]

  v3 = 0;
  v4 = *((_QWORD *)this + 23);
  if ( v4 )
  {
    v6 = 0;
    if ( *(_QWORD *)(v4 + 2088) == v4 + 16 )
      v6 = *(_DWORD *)(v4 + 32) == 0;
    if ( !v6 )
    {
      *((_QWORD *)a2 + 13) = v4;
      *(_QWORD *)(v4 + 2088) = v4 + 16;
      *(_BYTE *)(v4 + 2108) = 1;
      *((_BYTE *)a2 + 112) = 1;
      *((_QWORD *)this + 23) = 0LL;
    }
  }
  if ( *((_DWORD *)this + 20) )
  {
    v7 = RtlNumberGenericTableElements((PRTL_GENERIC_TABLE)((char *)this + 192)) - 1;
    for ( i = (struct CTokenManager::TokenQueueTableEntry *)RtlGetElementGenericTable(
                                                              (PRTL_GENERIC_TABLE)((char *)this + 192),
                                                              v7);
          i;
          i = (struct CTokenManager::TokenQueueTableEntry *)RtlGetElementGenericTable(
                                                              (PRTL_GENERIC_TABLE)((char *)this + 192),
                                                              v7) )
    {
      v18 = *((_QWORD *)i + 1);
      v19 = 0;
      v36 = 0;
      if ( *(_QWORD *)v18 == v18 )
      {
        ++*(_DWORD *)(v18 + 24);
        goto LABEL_40;
      }
      v20 = *(_QWORD *)(v18 + 8);
      if ( *(_QWORD *)v20 != v18 || (v21 = *(_QWORD **)(v20 + 8), *v21 != v20) )
        __fastfail(3u);
      *(_QWORD *)(v18 + 8) = v21;
      *v21 = v18;
      if ( v20 != v18 )
      {
        while ( 1 )
        {
          v22 = *(_QWORD *)(v18 + 16) == 0LL;
          v23 = (CompositionSurfaceObject **)(v20 - 8);
          v38 = (void (__fastcall ***)(_QWORD, __int64))(v20 - 8);
          if ( !v22 )
          {
            CompositionSurfaceObject::SetSyncRefreshCount(v23[4], 0);
            v23 = (CompositionSurfaceObject **)(v20 - 8);
            if ( *(_QWORD *)(v18 + 16) == v20 - 8 )
              *(_QWORD *)(v18 + 16) = 0LL;
          }
          if ( (*((int (__fastcall **)(CompositionSurfaceObject **, struct ICompositionFrame *, char *))*v23 + 4))(
                 v23,
                 a2,
                 &v37) < 0 )
          {
            v33 = v38;
            ((void (__fastcall *)(void (__fastcall ***)(_QWORD, __int64)))(*v38)[7])(v38);
            (**v33)(v33, 1LL);
          }
          else
          {
            if ( !v37 )
            {
              if ( *(_DWORD *)(v20 + 16) == 2 )
                v36 = 1;
              v26 = *(_QWORD **)(v18 + 8);
              if ( *v26 != v18 )
                __fastfail(3u);
              *(_QWORD *)v20 = v18;
              *(_QWORD *)(v20 + 8) = v26;
              *v26 = v20;
              *(_QWORD *)(v18 + 8) = v20;
LABEL_39:
              v19 = v36;
              break;
            }
            v24 = (struct ICompositionFrame **)*((_QWORD *)a2 + 19);
            if ( *v24 != (struct ICompositionFrame *)((char *)a2 + 144) )
              __fastfail(3u);
            *(_QWORD *)v20 = (char *)a2 + 144;
            *(_QWORD *)(v20 + 8) = v24;
            *v24 = (struct ICompositionFrame *)v20;
            *((_QWORD *)a2 + 19) = v20;
          }
          v20 = *(_QWORD *)(v18 + 8);
          if ( *(_QWORD *)v20 != v18 || (v25 = *(_QWORD **)(v20 + 8), *v25 != v20) )
            __fastfail(3u);
          *(_QWORD *)(v18 + 8) = v25;
          *v25 = v18;
          if ( v20 == v18 )
            goto LABEL_39;
        }
      }
LABEL_40:
      v3 |= v19;
      if ( *(_DWORD *)(*((_QWORD *)i + 1) + 24LL) >= 0x20u )
        CTokenManager::RemoveTokenQueueTableEntry(this, i);
      --v7;
    }
  }
  else
  {
    v3 = 1;
  }
  v9 = (char *)this + 264;
  v10 = (CTokenManager **)*((_QWORD *)this + 33);
  v35 = (CTokenManager **)&v34;
  v34 = (char *)&v34;
  if ( v10[1] != (CTokenManager *)((char *)this + 264) || (v11 = *v10, *((CTokenManager ***)*v10 + 1) != v10) )
    __fastfail(3u);
  *(_QWORD *)v9 = v11;
  for ( *((_QWORD *)v11 + 1) = v9; v10 != (CTokenManager **)v9; *((_QWORD *)v28 + 1) = v9 )
  {
    if ( (*((int (__fastcall **)(CTokenManager **, struct ICompositionFrame *, char *))*(v10 - 1) + 4))(
           v10 - 1,
           a2,
           &v36) < 0 )
    {
      (*((void (__fastcall **)(CTokenManager **))*(v10 - 1) + 7))(v10 - 1);
      ObfDereferenceObject(v10 - 5);
    }
    else if ( v36 )
    {
      v27 = (struct ICompositionFrame **)*((_QWORD *)a2 + 21);
      if ( *v27 != (struct ICompositionFrame *)((char *)a2 + 160) )
        __fastfail(3u);
      *v10 = (struct ICompositionFrame *)((char *)a2 + 160);
      v10[1] = (CTokenManager *)v27;
      *v27 = (struct ICompositionFrame *)v10;
      *((_QWORD *)a2 + 21) = v10;
    }
    else
    {
      v29 = (CTokenManager ***)v35;
      if ( *v35 != (CTokenManager *)&v34 )
        __fastfail(3u);
      v10[1] = (CTokenManager *)v35;
      *v10 = (CTokenManager *)&v34;
      *v29 = v10;
      v35 = v10;
    }
    v10 = *(CTokenManager ***)v9;
    if ( *(char **)(*(_QWORD *)v9 + 8LL) != v9 || (v28 = *v10, *((CTokenManager ***)*v10 + 1) != v10) )
      __fastfail(3u);
    *(_QWORD *)v9 = v28;
  }
  v12 = v34;
  if ( v34 != (char *)&v34 )
  {
    v30 = *(char **)v34;
    if ( *((char ***)v34 + 1) != &v34 || *((char **)v30 + 1) != v34 )
      __fastfail(3u);
    v34 = *(char **)v34;
    for ( *((_QWORD *)v30 + 1) = &v34; v12 != (char *)&v34; *((_QWORD *)v32 + 1) = &v34 )
    {
      v31 = (char **)*((_QWORD *)this + 34);
      if ( *v31 != v9 )
        __fastfail(3u);
      *((_QWORD *)v12 + 1) = v31;
      *(_QWORD *)v12 = v9;
      *v31 = v12;
      *((_QWORD *)this + 34) = v12;
      v12 = v34;
      if ( *((char ***)v34 + 1) != &v34 || (v32 = *(char **)v34, *(char **)(*(_QWORD *)v34 + 8LL) != v34) )
        __fastfail(3u);
      v34 = *(char **)v34;
    }
  }
  v13 = (*(__int64 (__fastcall **)(struct ICompositionFrame *))(*(_QWORD *)a2 + 72LL))(a2);
  ExAcquirePushLockExclusiveEx((char *)this + 144, 0LL);
  *((_BYTE *)this + 152) = 1;
  v14 = (_QWORD *)((char *)this + 128);
  *((_QWORD *)this + 15) = v13;
  if ( (_QWORD *)*v14 != v14 )
  {
    for ( j = (_QWORD *)*((_QWORD *)this + 17); j != v14; j = (_QWORD *)j[1] )
    {
      if ( j )
        v16 = (__int64)(j + 9);
      else
        v16 = 80LL;
      *(_QWORD *)v16 = v13;
    }
  }
  v17 = (char *)this + 144;
  if ( *((_BYTE *)this + 152) )
    ExReleasePushLockExclusiveEx(v17, 0LL);
  else
    ExReleasePushLockSharedEx(v17, 0LL);
  if ( !v3 )
    ZwClearEvent(*((HANDLE *)this + 7));
}
