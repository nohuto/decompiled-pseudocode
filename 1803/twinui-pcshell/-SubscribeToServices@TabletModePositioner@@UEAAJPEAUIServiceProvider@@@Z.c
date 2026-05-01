/*
 * XREFs of ?SubscribeToServices@TabletModePositioner@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802CDDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TabletModePositioner::SubscribeToServices(TabletModePositioner *this, struct IServiceProvider *a2)
{
  char *v2; // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  _QWORD *v8; // r15
  char *v9; // r14
  _QWORD v11[3]; // [rsp+30h] [rbp-20h] BYREF
  char *v12; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 v14; // [rsp+90h] [rbp+40h] BYREF
  __int64 v15; // [rsp+98h] [rbp+48h] BYREF

  v15 = 0LL;
  v2 = (char *)this + 312;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 39);
  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
         &GUID_2c08adf0_a386_4b35_9250_0fe183476fcc,
         v2);
  v6 = v5;
  if ( v5 >= 0 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 40);
    v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
           a2,
           &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
           &GUID_af6eec2f_c097_4f4a_b536_3cb918550cb3,
           (char *)this + 320);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v8 = (_QWORD *)((char *)this + 328);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 41);
      v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
             a2,
             &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
             &GUID_4fda780a_acd2_41f7_b4f2_ebe674c9bf2a,
             (char *)this + 328);
      v6 = v5;
      if ( v5 >= 0 )
      {
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 42);
        v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
               a2,
               &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
               &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
               (char *)this + 336);
        v6 = v5;
        if ( v5 >= 0 )
        {
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 43);
          v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
                 a2,
                 &GUID_05ac56a6_baf7_414f_b92c_7156052701de,
                 &GUID_2010122c_468a_480f_8cd1_b85e76f5882e,
                 (char *)this + 344);
          v6 = v5;
          if ( v5 >= 0 )
          {
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 44);
            v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
                   a2,
                   &SID_VirtualDesktopManager,
                   &GUID_f31574d6_b682_4cdc_bd56_1827860abec6,
                   (char *)this + 352);
            v6 = v5;
            if ( v5 >= 0 )
            {
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 45);
              v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
                     a2,
                     &GUID_6fdc29fe_42bd_4dc0_b783_b7854dcba425,
                     &GUID_6fdc29fe_42bd_4dc0_b783_b7854dcba425,
                     (char *)this + 360);
              v6 = v5;
              if ( v5 >= 0 )
              {
                Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 46);
                v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, void *, GUID *, char *))a2->lpVtbl->QueryService)(
                       a2,
                       &unk_1803B4198,
                       &GUID_bed1afcc_2de8_451c_9d0f_b5e62404b714,
                       (char *)this + 368);
                v6 = v5;
                if ( v5 >= 0 )
                {
                  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
                  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
                         a2,
                         &SID_IImmersiveMonitorService,
                         &GUID_7c7a3e75_4362_4d12_860d_68ee72909f83,
                         &v15);
                  v6 = v5;
                  if ( v5 >= 0 )
                  {
                    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 47);
                    v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
                           a2,
                           &SID_ImmersiveShellHookService,
                           &GUID_914d9b3a_5e53_4e14_bbba_46062acb35a4,
                           (char *)this + 376);
                    v6 = v5;
                    if ( v5 >= 0 )
                    {
                      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 48);
                      v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
                             a2,
                             &SID_MultitaskingViewVisibilityService,
                             &GUID_ac11cda3_1601_4ad7_a40e_fe2ced187307,
                             (char *)this + 384);
                      v6 = v5;
                      if ( v5 >= 0 )
                      {
                        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
                        v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 *))a2->lpVtbl->QueryService)(
                               a2,
                               &SID_ShellTargetingTracker,
                               &GUID_e535b915_429c_4e9f_b0e9_94819002d685,
                               &v14);
                        v6 = v5;
                        if ( v5 >= 0 )
                        {
                          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 49);
                          v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
                                 a2,
                                 &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
                                 &GUID_88ed940d_d632_4b84_9529_a3110b5af527,
                                 (char *)this + 392);
                          v6 = v5;
                          if ( v5 >= 0 )
                          {
                            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 52);
                            v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
                                   a2,
                                   &GUID_3e50d2b3_b66b_48b0_87d3_ad0bccb8bcca,
                                   &GUID_3e50d2b3_b66b_48b0_87d3_ad0bccb8bcca,
                                   (char *)this + 416);
                            v6 = v5;
                            if ( v5 >= 0 )
                            {
                              v9 = (char *)this - 24;
                              v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 40) + 24LL))(
                                     *((_QWORD *)this + 40),
                                     ((unsigned __int64)this + 112) & ((unsigned __int128)-(__int128)((unsigned __int64)this - 24) >> 64),
                                     (char *)this + 440);
                              v6 = v5;
                              if ( v5 >= 0 )
                              {
                                v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)*v8 + 72LL))(
                                       *v8,
                                       ((unsigned __int64)this + 120) & ((unsigned __int128)-(__int128)(unsigned __int64)v9 >> 64),
                                       (char *)this + 444);
                                v6 = v5;
                                if ( v5 >= 0 )
                                {
                                  (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v8 + 24LL))(
                                    *v8,
                                    (char *)this + 212);
                                  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 51);
                                  v5 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
                                         a2,
                                         &SID_TransitionCoordinator,
                                         &GUID_b1bed1ae_63da_4687_8063_c89ec276d28a,
                                         (char *)this + 408);
                                  v6 = v5;
                                  if ( v5 >= 0 )
                                  {
                                    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 51)
                                                                                           + 24LL))(
                                           *((_QWORD *)this + 51),
                                           ((unsigned __int64)this + 176) & ((unsigned __int128)-(__int128)(unsigned __int64)v9 >> 64),
                                           (char *)this + 464);
                                    v6 = v5;
                                    if ( v5 >= 0 )
                                    {
                                      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v15 + 24LL))(
                                             v15,
                                             ((unsigned __int64)this + 128) & ((unsigned __int128)-(__int128)(unsigned __int64)v9 >> 64),
                                             (char *)this + 448);
                                      v6 = v5;
                                      if ( v5 >= 0 )
                                      {
                                        v5 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64, unsigned __int64, char *))(**((_QWORD **)this + 47) + 24LL))(
                                               *((_QWORD *)this + 47),
                                               &unk_1803B4180,
                                               1LL,
                                               ((unsigned __int64)this + 144) & -(__int64)(this != (TabletModePositioner *)24),
                                               (char *)this + 452);
                                        v6 = v5;
                                        if ( v5 >= 0 )
                                        {
                                          v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 48)
                                                                                                 + 32LL))(
                                                 *((_QWORD *)this + 48),
                                                 ((unsigned __int64)this + 152) & ((unsigned __int128)-(__int128)(unsigned __int64)v9 >> 64),
                                                 (char *)this + 456);
                                          v6 = v5;
                                          if ( v5 >= 0 )
                                          {
                                            v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v14 + 24LL))(
                                                   v14,
                                                   ((unsigned __int64)this + 160) & ((unsigned __int128)-(__int128)(unsigned __int64)v9 >> 64),
                                                   (char *)this + 460);
                                            v6 = v5;
                                            if ( v5 >= 0 )
                                            {
                                              v11[0] = *((_QWORD *)this + 39);
                                              v11[1] = *v8;
                                              v11[2] = *((_QWORD *)this + 43);
                                              if ( this == (TabletModePositioner *)24 )
                                                v12 = 0LL;
                                              else
                                                v12 = (char *)this + 64;
                                              v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 35)
                                                                                               + 24LL))(
                                                     *((_QWORD *)this + 35),
                                                     v11);
                                              v6 = v5;
                                              if ( v5 >= 0 )
                                              {
                                                v6 = 0;
                                                goto LABEL_52;
                                              }
                                              v7 = 361LL;
                                            }
                                            else
                                            {
                                              v7 = 352LL;
                                            }
                                          }
                                          else
                                          {
                                            v7 = 351LL;
                                          }
                                        }
                                        else
                                        {
                                          v7 = 350LL;
                                        }
                                      }
                                      else
                                      {
                                        v7 = 344LL;
                                      }
                                    }
                                    else
                                    {
                                      v7 = 342LL;
                                    }
                                  }
                                  else
                                  {
                                    v7 = 341LL;
                                  }
                                }
                                else
                                {
                                  v7 = 338LL;
                                }
                              }
                              else
                              {
                                v7 = 336LL;
                              }
                            }
                            else
                            {
                              v7 = 334LL;
                            }
                          }
                          else
                          {
                            v7 = 333LL;
                          }
                        }
                        else
                        {
                          v7 = 332LL;
                        }
                      }
                      else
                      {
                        v7 = 331LL;
                      }
                    }
                    else
                    {
                      v7 = 330LL;
                    }
                  }
                  else
                  {
                    v7 = 329LL;
                  }
                }
                else
                {
                  v7 = 328LL;
                }
              }
              else
              {
                v7 = 327LL;
              }
            }
            else
            {
              v7 = 326LL;
            }
          }
          else
          {
            v7 = 325LL;
          }
        }
        else
        {
          v7 = 324LL;
        }
      }
      else
      {
        v7 = 323LL;
      }
    }
    else
    {
      v7 = 322LL;
    }
  }
  else
  {
    v7 = 321LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v5);
LABEL_52:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  return v6;
}
