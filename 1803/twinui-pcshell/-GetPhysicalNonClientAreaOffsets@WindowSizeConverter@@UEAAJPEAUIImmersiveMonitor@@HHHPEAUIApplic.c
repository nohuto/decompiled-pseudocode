/*
 * XREFs of ?GetPhysicalNonClientAreaOffsets@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@HHHPEAUIApplicationViewTitlebarConfiguration@@PEAUtagRECT@@@Z @ 0x1802B6E80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@Z @ 0x1800F550C (-GetFrameForMonitor@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIApplicationFrame@@@.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$MakeAndInitialize@VSizeConversionViewInfo@@V1@AEAPEAUIImmersiveMonitor@@AEAHAEAHAEAPEAUIApplicationViewTitlebarConfiguration@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VSizeConversionViewInfo@@@WRL@Microsoft@@@012@AEAPEAUIImmersiveMonitor@@AEAH2AEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1802B5728 (--$MakeAndInitialize@VSizeConversionViewInfo@@V1@AEAPEAUIImmersiveMonitor@@AEAHAEAH_ea_1802B5728.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowSizeConverter::GetPhysicalNonClientAreaOffsets(
        WindowSizeConverter *this,
        struct IImmersiveMonitor *a2,
        int a3,
        int a4,
        int a5,
        struct IApplicationViewTitlebarConfiguration *a6,
        struct tagRECT *a7)
{
  struct IApplicationViewTitlebarConfiguration *v9; // rdi
  struct tagRECT *v10; // r15
  int v11; // eax
  unsigned int LastError; // ebx
  int FrameForMonitor; // eax
  __int64 v14; // rdx
  struct IApplicationFrame *v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  bool v19; // cf
  const char *v20; // r9
  __int64 v21; // rdx
  struct IApplicationFrame *v23; // [rsp+30h] [rbp-71h] BYREF
  __int64 *v24; // [rsp+38h] [rbp-69h] BYREF
  unsigned int v25; // [rsp+40h] [rbp-61h] BYREF
  unsigned int v26; // [rsp+44h] [rbp-5Dh] BYREF
  HWND hWnd; // [rsp+48h] [rbp-59h] BYREF
  __int64 v28; // [rsp+50h] [rbp-51h] BYREF
  struct tagRECT v29; // [rsp+58h] [rbp-49h] BYREF
  int v30[2]; // [rsp+68h] [rbp-39h] BYREF
  __int64 v31; // [rsp+70h] [rbp-31h]
  struct tagRECT Rect; // [rsp+78h] [rbp-29h] BYREF
  __int128 v33; // [rsp+88h] [rbp-19h] BYREF
  struct tagRECT v34; // [rsp+98h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+47h]
  int v36; // [rsp+100h] [rbp+5Fh] BYREF
  int v37; // [rsp+108h] [rbp+67h] BYREF

  v37 = a4;
  v36 = a3;
  v31 = -2LL;
  *(_QWORD *)&v29.left = a2;
  v9 = a6;
  *(_QWORD *)v30 = a6;
  v10 = a7;
  v33 = 0uLL;
  *a7 = 0uLL;
  v28 = 0LL;
  v11 = Microsoft::WRL::Details::MakeAndInitialize<SizeConversionViewInfo,SizeConversionViewInfo,IImmersiveMonitor * &,int &,int &,IApplicationViewTitlebarConfiguration * &>(
          &v28,
          (struct IImmersiveMonitor **)&v29,
          &v36,
          &v37,
          (struct IApplicationViewTitlebarConfiguration **)v30);
  LastError = v11;
  if ( v11 >= 0 )
  {
    v23 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
    FrameForMonitor = WindowSizeConverter::GetFrameForMonitor((WindowSizeConverter *)((char *)this - 88), a2, &v23);
    LastError = FrameForMonitor;
    if ( FrameForMonitor < 0 )
    {
      v14 = 375LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
        (const char *)(unsigned int)FrameForMonitor);
LABEL_32:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v23);
      goto LABEL_33;
    }
    FrameForMonitor = (*(__int64 (__fastcall **)(struct IApplicationFrame *, __int64, _QWORD))(*(_QWORD *)v23 + 112LL))(
                        v23,
                        255LL,
                        *(_DWORD *)(v28 + 24) & 1);
    LastError = FrameForMonitor;
    if ( FrameForMonitor < 0 )
    {
      v14 = 376LL;
      goto LABEL_9;
    }
    FrameForMonitor = (*(__int64 (__fastcall **)(struct IApplicationViewTitlebarConfiguration *, unsigned int *, unsigned int *))(*(_QWORD *)v9 + 48LL))(
                        v9,
                        &v26,
                        &v25);
    LastError = FrameForMonitor;
    if ( FrameForMonitor < 0 )
    {
      v14 = 380LL;
      goto LABEL_9;
    }
    v24 = 0LL;
    v15 = v23;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    v16 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, __int64 **))(*(_QWORD *)v15 + 144LL))(v15, &v24);
    LastError = v16;
    if ( v16 >= 0 )
    {
      v16 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v24 + 64))(v24, v26, v25);
      LastError = v16;
      if ( v16 >= 0 )
      {
        v16 = (*(__int64 (__fastcall **)(__int64 *, bool))(*v24 + 32))(v24, (v25 & 1) == 0);
        LastError = v16;
        if ( v16 >= 0 )
        {
          v18 = *v24;
          v19 = a5 != 0;
          a5 = -a5;
          v16 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v18 + 136))(v24, v19 ? 8 : 0);
          LastError = v16;
          if ( v16 >= 0 )
          {
            v16 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, HWND *))(*(_QWORD *)v23 + 24LL))(v23, &hWnd);
            LastError = v16;
            if ( v16 >= 0 )
            {
              Rect = 0LL;
              if ( GetClientRect(hWnd, &Rect) )
              {
                if ( MapWindowPoints(hWnd, 0LL, (LPPOINT)&Rect, 2u) )
                {
                  v16 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, __int128 *))(*(_QWORD *)v23 + 120LL))(
                          v23,
                          &v33);
                  LastError = v16;
                  if ( v16 < 0 )
                  {
                    v17 = 400LL;
                    goto LABEL_26;
                  }
                  Rect.top += DWORD1(v33);
                  Rect.bottom += HIDWORD(v33);
                  Rect.left += v33;
                  Rect.right += DWORD2(v33);
                  v34 = 0LL;
                  if ( GetWindowRect(hWnd, &v34) )
                  {
                    v29.left = Rect.left - v34.left;
                    v29.top = Rect.top - v34.top;
                    v29.right = v34.right - Rect.right;
                    v29.bottom = v34.bottom - Rect.bottom;
                    *v10 = v29;
                    LastError = 0;
                    goto LABEL_31;
                  }
                  v21 = 408LL;
                }
                else
                {
                  v21 = 397LL;
                }
              }
              else
              {
                v21 = 393LL;
              }
              LastError = wil::details::in1diag3::Return_GetLastError(
                            retaddr,
                            (void *)v21,
                            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
                            v20);
              goto LABEL_31;
            }
            v17 = 390LL;
          }
          else
          {
            v17 = 386LL;
          }
        }
        else
        {
          v17 = 385LL;
        }
      }
      else
      {
        v17 = 384LL;
      }
    }
    else
    {
      v17 = 383LL;
    }
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v16);
LABEL_31:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v24);
    goto LABEL_32;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x174,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)(unsigned int)v11);
LABEL_33:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  return LastError;
}
