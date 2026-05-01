/*
 * XREFs of ?InitializeDuplication@DDAScreenCapture@@AEAAJXZ @ 0x1800ED0B8
 * Callers:
 *     ?CreateInstance@DDAScreenCapture@@SAJPEAPEAV1@PEAUHMONITOR__@@@Z @ 0x1800ECECC (-CreateInstance@DDAScreenCapture@@SAJPEAPEAV1@PEAUHMONITOR__@@@Z.c)
 *     ?GetScreenCaptureAsWicBitmapSource@DDAScreenCapture@@QEAAJPEAUIWICImagingFactory@@PEAPEAUIWICBitmapSource@@@Z @ 0x1800ED368 (-GetScreenCaptureAsWicBitmapSource@DDAScreenCapture@@QEAAJPEAUIWICImagingFactory@@PEAPEAUIWICBit.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DDAScreenCapture::InitializeDuplication(DDAScreenCapture *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  __int64 v7; // rbx
  int v8; // eax
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 (__fastcall ***v14)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v19; // [rsp+28h] [rbp-39h] BYREF
  __int64 v20; // [rsp+30h] [rbp-31h] BYREF
  _QWORD v21[2]; // [rsp+38h] [rbp-29h] BYREF
  _BYTE v22[88]; // [rsp+48h] [rbp-19h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v21[1] = -2LL;
  v21[0] = 0LL;
  v2 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))this + 13))(
         *((_QWORD *)this + 13),
         &GUID_6007896c_3244_4afd_bf18_a6d3beda5023,
         v21);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v20 = 0LL;
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v21[0] + 56LL))(v21[0], &v20);
    v3 = v4;
    if ( v4 >= 0 )
    {
      v5 = 0LL;
      v19 = 0LL;
      v6 = 0;
      while ( 1 )
      {
        v7 = v20;
        if ( v5 )
        {
          v19 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        }
        v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v7 + 56LL))(v7, v6, &v19);
        v3 = v8;
        if ( !++v6 )
        {
          v3 = -2147418113;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x69,
            (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
            (const char *)0x8000FFFFLL);
          goto LABEL_30;
        }
        if ( v8 < 0 )
        {
          v12 = 91LL;
          goto LABEL_25;
        }
        v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v19 + 56LL))(v19, v22);
        v3 = v8;
        if ( v8 < 0 )
        {
          v12 = 94LL;
          goto LABEL_25;
        }
        if ( v23 == *((_QWORD *)this + 16) )
          break;
        v5 = v19;
      }
      v9 = (_QWORD *)((char *)this + 120);
      v10 = *((_QWORD *)this + 15);
      if ( v10 )
      {
        *v9 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      v11 = *v9;
      if ( *v9 )
      {
        *v9 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))v19)(
             v19,
             &GUID_00cddea8_939b_4b83_a340_a685226666cc,
             (char *)this + 120);
      v3 = v8;
      if ( v8 < 0 )
      {
        v12 = 109LL;
LABEL_25:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v12,
          (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
          (const char *)(unsigned int)v8);
        goto LABEL_30;
      }
      v8 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v9 + 56LL))(*v9, (char *)this + 8);
      v3 = v8;
      if ( v8 < 0 )
      {
        v12 = 110LL;
        goto LABEL_25;
      }
      v13 = *v9;
      v14 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))this;
      if ( *(_QWORD *)this )
      {
        *(_QWORD *)this = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v14)[2])(v14);
      }
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, DDAScreenCapture *))(*(_QWORD *)v13 + 176LL))(
             v13,
             *((_QWORD *)this + 13),
             this);
      v3 = v8;
      if ( v8 < 0 )
      {
        v12 = 111LL;
        goto LABEL_25;
      }
      v3 = 0;
LABEL_30:
      v15 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x53,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v4);
    }
    v16 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x51,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v2);
  }
  v17 = v21[0];
  if ( v21[0] )
  {
    v21[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return v3;
}
