/*
 * XREFs of ?GetLastActiveItem@HolographicPositioner@@UEAAJPEAPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1800FCAD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _LogEventWithViewHostItemData @ 0x1800FA7D0 (_LogEventWithViewHostItemData.c)
 *     ?IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1800FCF30 (-IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x180100454 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     ??0?$ObjectArrayAdapter@UIApplicationView@@@@QEAA@PEAUIObjectArray@@@Z @ 0x180100FA0 (--0-$ObjectArrayAdapter@UIApplicationView@@@@QEAA@PEAUIObjectArray@@@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapter@UIApplicationView@@@@AEAAXXZ @ 0x180102B74 (-GetCurrentObject@Iterator@-$ObjectArrayAdapter@UIApplicationView@@@@AEAAXXZ.c)
 *     ??$GetLastActiveItem@AEAY06$$CBGH@HolographicPositionerTelemetry@@SAXAEAY06$$CBG$$QEAH@Z @ 0x1801031DC (--$GetLastActiveItem@AEAY06$$CBGH@HolographicPositionerTelemetry@@SAXAEAY06$$CBG$$QEAH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall HolographicPositioner::GetLastActiveItem(
        HolographicPositioner *this,
        struct Windows::Internal::Shell::Holographic::IViewHostItem **a2)
{
  struct IApplicationView *v4; // rsi
  __int64 v5; // rdi
  unsigned __int64 v6; // r15
  int v7; // eax
  unsigned int v8; // ebx
  struct IApplicationView *v9; // rbx
  __int64 v10; // r14
  struct IApplicationView *v11; // rcx
  __int64 v12; // rcx
  struct IApplicationView *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  struct IApplicationView *v16; // rcx
  __int64 v17; // rcx
  struct Windows::Internal::Shell::Holographic::IViewHostItem *v18; // rax
  __int64 v19; // rcx
  int v21; // [rsp+28h] [rbp-51h] BYREF
  struct IApplicationView *v22; // [rsp+30h] [rbp-49h]
  __int64 *v23; // [rsp+38h] [rbp-41h]
  unsigned __int64 v24; // [rsp+40h] [rbp-39h] BYREF
  __int64 v25; // [rsp+48h] [rbp-31h] BYREF
  struct IApplicationView *v26; // [rsp+50h] [rbp-29h]
  __int64 v27; // [rsp+58h] [rbp-21h] BYREF
  int v28; // [rsp+60h] [rbp-19h]
  int v29; // [rsp+68h] [rbp-11h] BYREF
  __int64 v30; // [rsp+70h] [rbp-9h]
  __int64 *v31; // [rsp+78h] [rbp-1h]
  __int64 v32; // [rsp+80h] [rbp+7h]
  struct IApplicationView *v33; // [rsp+88h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]
  int v35; // [rsp+E0h] [rbp+67h] BYREF
  int v36; // [rsp+E8h] [rbp+6Fh] BYREF
  int v37; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v38; // [rsp+F8h] [rbp+7Fh] BYREF

  v32 = -2LL;
  *a2 = 0LL;
  v4 = 0LL;
  v26 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v38 = 0LL;
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 11) + 24LL))(*((_QWORD *)this + 11), &v38);
  v8 = v7;
  if ( v7 >= 0 )
  {
    ObjectArrayAdapter<IApplicationView>::ObjectArrayAdapter<IApplicationView>(&v27);
    v21 = 0;
    v22 = 0LL;
    v23 = &v27;
    ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(&v21);
    v29 = v28;
    v30 = 0LL;
    v31 = &v27;
    ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(&v29);
    while ( v21 != v29 || v23 != v31 )
    {
      v9 = v22;
      v33 = v22;
      if ( v22 )
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v22 + 8LL))(v22);
      if ( (int)HolographicPositioner::IsViewManaged((HolographicPositioner *)((char *)this - 24), v9, &v36) >= 0 && v36 )
      {
        HolographicPositioner::_FindViewHostItem((char *)this - 160, &v25, v9);
        v10 = v25;
        if ( v25 && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v25 + 80LL))(v25, &v35) >= 0 && (_BYTE)v35 )
        {
          if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v10 + 120LL))(v10, &v37) >= 0 && v37 == 1 )
          {
            if ( v4 != v9 )
            {
              if ( v9 )
                (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v9 + 8LL))(v9);
              v13 = v4;
              v4 = v9;
              v26 = v9;
              if ( v13 )
                (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v13 + 16LL))(v13);
            }
            if ( v5 != v10 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
              v14 = v5;
              v5 = v10;
              if ( v14 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
            }
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
            if ( v9 )
              (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v9 + 16LL))(v9);
            break;
          }
          if ( (*(int (__fastcall **)(struct IApplicationView *, unsigned __int64 *))(*(_QWORD *)v9 + 160LL))(v9, &v24) >= 0
            && v24 > v6 )
          {
            v6 = v24;
            if ( v4 != v9 )
            {
              (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v9 + 8LL))(v9);
              v11 = v4;
              v4 = v9;
              v26 = v9;
              if ( v11 )
                (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v11 + 16LL))(v11);
            }
            if ( v5 != v10 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
              v12 = v5;
              v5 = v10;
              if ( v12 )
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
            }
          }
        }
        if ( v10 )
        {
          v25 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
      }
      if ( v9 )
        (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v9 + 16LL))(v9);
      ++v21;
      ObjectArrayAdapter<IApplicationView>::Iterator::GetCurrentObject(&v21);
    }
    v15 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
    v16 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v17 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    if ( v4 )
    {
      LogEventWithViewHostItemData(
        v5,
        (void (__fastcall *)(PCWSTR *, char *))HolographicPositionerTelemetry::GetLastActiveItem<unsigned short const *,unsigned int &>);
      v18 = (struct Windows::Internal::Shell::Holographic::IViewHostItem *)v5;
      v5 = 0LL;
      *a2 = v18;
    }
    else
    {
      v35 = 0;
      HolographicPositionerTelemetry::GetLastActiveItem<unsigned short const (&)[7],int>(v17, &v35);
    }
    v8 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x3C2,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v7);
  }
  v19 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( v4 )
    (*(void (__fastcall **)(struct IApplicationView *))(*(_QWORD *)v4 + 16LL))(v4);
  return v8;
}
