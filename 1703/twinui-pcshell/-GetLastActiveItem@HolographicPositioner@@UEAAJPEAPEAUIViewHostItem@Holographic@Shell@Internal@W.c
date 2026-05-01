/*
 * XREFs of ?GetLastActiveItem@HolographicPositioner@@UEAAJPEAPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1800D94B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??DIterator@?$ObjectArrayAdapter@UIImmersiveMonitor@@@@QEAA?AV?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@XZ @ 0x18004363C (--DIterator@-$ObjectArrayAdapter@UIImmersiveMonitor@@@@QEAA-AV-$ComPtr@UIImmersiveMonitor@@@WRL@.c)
 *     ?IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1800D97A0 (-IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1800DBB20 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     ?end@?$ObjectArrayAdapter@UIApplicationView@@@@QEAA?AVIterator@1@XZ @ 0x1800DC620 (-end@-$ObjectArrayAdapter@UIApplicationView@@@@QEAA-AVIterator@1@XZ.c)
 *     ?begin@?$ObjectArrayAdapter@UIApplicationView@@@@QEAA?AVIterator@1@XZ @ 0x1800DC65C (-begin@-$ObjectArrayAdapter@UIApplicationView@@@@QEAA-AVIterator@1@XZ.c)
 *     ??0?$ObjectArrayAdapter@UIApplicationView@@@@QEAA@PEAUIObjectArray@@@Z @ 0x1800DC694 (--0-$ObjectArrayAdapter@UIApplicationView@@@@QEAA@PEAUIObjectArray@@@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIApplicationView@@@@AEAAXXZ @ 0x1800DE2E0 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIApplicationView@@@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall HolographicPositioner::GetLastActiveItem(
        HolographicPositioner *this,
        struct Windows::Internal::Shell::Holographic::IViewHostItem **a2)
{
  struct IApplicationView *v4; // rbx
  unsigned __int64 v5; // rsi
  int v6; // eax
  unsigned int v7; // edi
  struct IApplicationView *v8; // rdi
  struct IApplicationView *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  struct Windows::Internal::Shell::Holographic::IViewHostItem **ViewHostItem; // rax
  struct Windows::Internal::Shell::Holographic::IViewHostItem *v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  struct IApplicationView *v18; // [rsp+20h] [rbp-39h] BYREF
  struct IApplicationView *v19; // [rsp+28h] [rbp-31h]
  __int64 v20; // [rsp+30h] [rbp-29h]
  _QWORD v21[2]; // [rsp+38h] [rbp-21h] BYREF
  int v22; // [rsp+48h] [rbp-11h] BYREF
  __int64 v23; // [rsp+50h] [rbp-9h]
  __int64 v24; // [rsp+58h] [rbp-1h]
  int v25; // [rsp+60h] [rbp+7h] BYREF
  __int64 v26; // [rsp+68h] [rbp+Fh]
  __int64 v27; // [rsp+70h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]
  __int64 v29; // [rsp+C0h] [rbp+67h] BYREF
  int v30; // [rsp+C8h] [rbp+6Fh] BYREF
  __int64 v31; // [rsp+D0h] [rbp+77h] BYREF
  unsigned __int64 v32; // [rsp+D8h] [rbp+7Fh] BYREF

  v20 = -2LL;
  *a2 = 0LL;
  v4 = 0LL;
  v19 = 0LL;
  v5 = 0LL;
  v31 = 0LL;
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 7) + 24LL))(*((_QWORD *)this + 7), &v31);
  v7 = v6;
  if ( v6 >= 0 )
  {
    ObjectArrayAdapter<IApplicationView>::ObjectArrayAdapter<IApplicationView>(v21);
    ObjectArrayAdapter<IApplicationView>::begin(v21, &v22);
    ObjectArrayAdapter<IApplicationView>::end(v21, &v25);
    while ( v22 != v25 || v24 != v27 )
    {
      ObjectArrayAdapter<IImmersiveMonitor>::Iterator::operator*((__int64)&v22, &v18);
      v8 = v18;
      if ( (int)HolographicPositioner::IsViewManaged((HolographicPositioner *)((char *)this - 24), v18, (int *)&v29) >= 0 )
      {
        if ( (_DWORD)v29 )
        {
          if ( (*(int (__fastcall **)(struct IApplicationView *, unsigned __int64 *))(*(_QWORD *)v8 + 160LL))(v8, &v32) >= 0
            && v32 > v5
            && (*(int (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)v8 + 64LL))(v8, &v30) >= 0 )
          {
            if ( v30 )
            {
              v5 = v32;
              if ( v4 != v8 )
              {
                (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v8 + 8LL))(v8);
                v9 = v4;
                v4 = v8;
                v19 = v8;
                if ( v9 )
                  (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v9 + 16LL))(v9);
              }
            }
          }
        }
      }
      if ( v8 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v8 + 16LL))(v8);
      }
      ++v22;
      ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(&v22);
    }
    v10 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
    v11 = v23;
    if ( v23 )
    {
      v23 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    v12 = v21[0];
    if ( v21[0] )
    {
      v21[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    if ( v4 )
    {
      ViewHostItem = (struct Windows::Internal::Shell::Holographic::IViewHostItem **)HolographicPositioner::_FindViewHostItem(
                                                                                       (char *)this - 136,
                                                                                       &v29,
                                                                                       v4);
      v14 = *ViewHostItem;
      *ViewHostItem = 0LL;
      *a2 = v14;
      v15 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x378,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v6);
  }
  v16 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  if ( v4 )
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v4 + 16LL))(v4);
  return v7;
}
