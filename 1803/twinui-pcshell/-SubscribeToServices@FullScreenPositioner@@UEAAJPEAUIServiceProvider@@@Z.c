/*
 * XREFs of ?SubscribeToServices@FullScreenPositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x18014E130
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall FullScreenPositioner::SubscribeToServices(FullScreenPositioner *this, struct IServiceProvider *a2)
{
  char *v4; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdx
  char *v11; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  int v14; // [rsp+70h] [rbp+30h] BYREF
  __int64 v15; // [rsp+78h] [rbp+38h] BYREF
  __int64 v16; // [rsp+80h] [rbp+40h] BYREF
  __int64 v17; // [rsp+88h] [rbp+48h] BYREF

  v4 = (char *)this + 144;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 18);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &IID_IImmersiveApplicationManager,
         &GUID_bf63999f_7411_40da_861c_df72c0ffee84,
         v4);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
    v7 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           &IID_IActiveZBandNotificationForMonitorService,
           &GUID_0f019ffe_0388_4dcf_a2e2_f059a60a5704,
           &v17);
    v6 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x97,
        (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v7);
LABEL_27:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v17);
      return v6;
    }
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    v8 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           &SID_IImmersiveMonitorService,
           &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
           &v16);
    v6 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9A,
        (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v8);
LABEL_26:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
      goto LABEL_27;
    }
    v15 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
           a2,
           &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
           &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
           &v15);
    v6 = v9;
    if ( v9 >= 0 )
    {
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 17);
      v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
             a2,
             &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
             &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
             (char *)this + 136);
      v6 = v9;
      if ( v9 >= 0 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 21);
        v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
               a2,
               &GUID_6fdc29fe_42bd_4dc0_b783_b7854dcba425,
               &GUID_6fdc29fe_42bd_4dc0_b783_b7854dcba425,
               (char *)this + 168);
        v6 = v9;
        if ( v9 >= 0 )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 22);
          v9 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
                 a2,
                 &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
                 &GUID_33ebffef_6a18_4802_8f40_9330e473ed1c,
                 (char *)this + 176);
          v6 = v9;
          if ( v9 >= 0 )
          {
            v11 = (char *)this - 24;
            v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v17 + 24LL))(
                   v17,
                   ((unsigned __int64)this + 88) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 24) >> 64),
                   (char *)this + 184);
            v6 = v9;
            if ( v9 >= 0 )
            {
              v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v16 + 24LL))(
                     v16,
                     ((unsigned __int64)this + 80) & ((unsigned __int128)-(__int128)(unsigned __int64)v11 >> 64),
                     (char *)this + 188);
              v6 = v9;
              if ( v9 >= 0 )
              {
                v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 17) + 88LL))(
                       *((_QWORD *)this + 17),
                       ((unsigned __int64)this + 96) & ((unsigned __int128)-(__int128)(unsigned __int64)v11 >> 64),
                       (char *)this + 192);
                v6 = v9;
                if ( v9 >= 0 )
                {
                  v9 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *))(*(_QWORD *)v15 + 72LL))(
                         v15,
                         ((unsigned __int64)this + 104) & -(__int64)(this != (FullScreenPositioner *)24),
                         (char *)this + 196);
                  v6 = v9;
                  if ( v9 >= 0 )
                  {
                    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 24LL))(v15, &v14);
                    *((_BYTE *)this + 256) = v14 == 1;
                    v6 = 0;
                    goto LABEL_25;
                  }
                  v10 = 166LL;
                }
                else
                {
                  v10 = 165LL;
                }
              }
              else
              {
                v10 = 164LL;
              }
            }
            else
            {
              v10 = 163LL;
            }
          }
          else
          {
            v10 = 161LL;
          }
        }
        else
        {
          v10 = 160LL;
        }
      }
      else
      {
        v10 = 159LL;
      }
    }
    else
    {
      v10 = 157LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
      (const char *)(unsigned int)v9);
LABEL_25:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    goto LABEL_26;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x94,
    (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
