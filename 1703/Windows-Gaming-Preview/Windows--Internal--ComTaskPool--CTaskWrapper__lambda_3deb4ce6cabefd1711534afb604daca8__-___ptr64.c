/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3deb4ce6cabefd1711534afb604daca8__&___ptr64_::Run @ 0x1800277A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002A4C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureTDLObjects@@YAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAPEAU1@PEAPEAU2@@Z @ 0x180023F08 (-EnsureTDLObjects@@YAJPEAUITileManager@@PEAUIVisualElementEnumerator@@PEAPEAU1@PEAPEAU2@@Z.c)
 *     ?CommitTDLItemWithRetry@@YAJV?$function@$$A6AJXZ@wistd@@0@Z @ 0x180024184 (-CommitTDLItemWithRetry@@YAJV-$function@$$A6AJXZ@wistd@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3deb4ce6cabefd1711534afb604daca8______ptr64_::Run(
        __int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rax
  __int64 v3; // rcx
  struct IVisualElementEnumerator *v4; // rdx
  struct ITileManager *v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  struct IVisualElementEnumerator *v8; // rcx
  struct ITileManager *v9; // rcx
  __int64 v10; // rcx
  LPVOID pv[3]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v12; // [rsp+38h] [rbp-C8h]
  __int128 v13; // [rsp+48h] [rbp-B8h]
  __int64 v14; // [rsp+58h] [rbp-A8h]
  __int128 v15; // [rsp+60h] [rbp-A0h]
  __int64 (__fastcall **v16)(); // [rsp+70h] [rbp-90h] BYREF
  __int128 v17; // [rsp+78h] [rbp-88h]
  __int128 v18; // [rsp+88h] [rbp-78h]
  __int64 v19; // [rsp+98h] [rbp-68h]
  __int64 (__fastcall ***v20)(); // [rsp+D8h] [rbp-28h]
  __int64 (__fastcall **v21)(); // [rsp+E0h] [rbp-20h] BYREF
  __int128 v22; // [rsp+E8h] [rbp-18h]
  __int64 (__fastcall ***v23)(); // [rsp+148h] [rbp+48h]
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]
  struct IVisualElementEnumerator *v25; // [rsp+160h] [rbp+60h] BYREF
  struct ITileManager *v26; // [rsp+168h] [rbp+68h] BYREF
  __int64 v27; // [rsp+170h] [rbp+70h] BYREF

  v1 = a1 + 16;
  v2 = *(void **)(a1 + 40);
  v3 = *(_QWORD *)(a1 + 48);
  pv[0] = v2;
  pv[2] = (LPVOID)-1LL;
  pv[1] = (LPVOID)-1LL;
  v27 = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = *(struct IVisualElementEnumerator **)(v1 + 16);
  v5 = *(struct ITileManager **)(v1 + 8);
  v26 = 0LL;
  v25 = 0LL;
  v6 = EnsureTDLObjects(v5, v4, &v26, &v25);
  if ( v6 >= 0 )
  {
    *((_QWORD *)&v12 + 1) = v1;
    *(_QWORD *)&v12 = &v27;
    *(_QWORD *)&v13 = pv;
    *((_QWORD *)&v13 + 1) = &v26;
    v14 = v1 + 40;
    *(_QWORD *)&v15 = &v27;
    *((_QWORD *)&v15 + 1) = &v25;
    v21 = off_18002F5B8;
    v23 = &v21;
    v22 = v15;
    v16 = off_18002F5E8;
    v20 = &v16;
    v18 = v13;
    v17 = v12;
    v19 = v1 + 40;
    v6 = CommitTDLItemWithRetry((wil::details::in1diag3 *)&v16, (__int64)&v21);
    if ( v6 >= 0 )
      goto LABEL_8;
    v7 = 524LL;
  }
  else
  {
    v7 = 492LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v7,
    (__int64)"onecoreuap\\shell\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
    (const char *)(unsigned int)v6);
LABEL_8:
  v8 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(struct IVisualElementEnumerator *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(struct ITileManager *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
}
