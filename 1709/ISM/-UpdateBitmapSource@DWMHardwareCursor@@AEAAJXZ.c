/*
 * XREFs of ?UpdateBitmapSource@DWMHardwareCursor@@AEAAJXZ @ 0x1800281E0
 * Callers:
 *     ?Initialize@DWMHardwareCursor@@IEAAJXZ @ 0x1800277FC (-Initialize@DWMHardwareCursor@@IEAAJXZ.c)
 *     ?SetPosition@DWMHardwareCursor@@UEAAJJJ@Z @ 0x180028990 (-SetPosition@DWMHardwareCursor@@UEAAJJJ@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180007834 (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ??A?$map@HUCursorGlyphInfo@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@3@@std@@QEAAAEAUCursorGlyphInfo@@$$QEAH@Z @ 0x180028B90 (--A-$map@HUCursorGlyphInfo@@U-$less@H@std@@V-$allocator@U-$pair@$$CBHUCursorGlyphInfo@@@std@@@3@.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180028C1C (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180028C80 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??$_Resetp@E@?$shared_ptr@E@std@@AEAAXPEAE@Z @ 0x1800291AC (--$_Resetp@E@-$shared_ptr@E@std@@AEAAXPEAE@Z.c)
 *     ??$_Construct@PEAD@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXPEADQEADUinput_iterator_tag@1@@Z @ 0x1800293BC (--$_Construct@PEAD@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXPEADQEADUin.c)
 *     std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7f96eb1dcf99da5daec8c2467d2d5499___ @ 0x18002955C (std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigned_short_.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB5C4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800CC377 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall DWMHardwareCursor::UpdateBitmapSource(DWMHardwareCursor *this)
{
  int v2; // r15d
  __int64 v3; // rax
  __int128 *v4; // rbx
  unsigned __int64 v5; // r13
  unsigned int v6; // r12d
  unsigned __int64 v7; // rsi
  __int128 *v8; // rbx
  char *v9; // rbx
  char *v10; // r13
  _QWORD *v11; // rsi
  float v12; // xmm7_4
  float v13; // xmm6_4
  HRESULT v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  unsigned int *v26; // r15
  unsigned int *v27; // r14
  unsigned int v28; // esi
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  int v32; // ecx
  int v33; // esi
  unsigned int v34; // esi
  void *v35; // rax
  volatile signed __int32 *v36; // rbx
  __int64 v37; // rcx
  __int64 (__fastcall ***v38)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v39; // rcx
  LPVOID v40; // rcx
  __int64 v42; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v43; // [rsp+50h] [rbp-B8h] BYREF
  LPVOID ppv; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v45; // [rsp+60h] [rbp-A8h] BYREF
  __int64 (__fastcall ***v46)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp-A0h] BYREF
  __int64 v47; // [rsp+70h] [rbp-98h] BYREF
  __int128 v48; // [rsp+78h] [rbp-90h] BYREF
  __int64 v49; // [rsp+88h] [rbp-80h]
  __int64 v50; // [rsp+90h] [rbp-78h]
  __int64 v51; // [rsp+98h] [rbp-70h]
  void *v52; // [rsp+A0h] [rbp-68h]
  __int128 v53; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int64 v54; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v55; // [rsp+C0h] [rbp-48h]
  _QWORD Src[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v57; // [rsp+D8h] [rbp-30h]
  unsigned __int64 v58; // [rsp+E0h] [rbp-28h]
  _QWORD v59[2]; // [rsp+E8h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+150h] [rbp+48h]

  v49 = -2LL;
  v2 = (_DWORD)this + 400;
  v3 = std::map<int,CursorGlyphInfo>::operator[]((int)this + 400);
  v4 = (__int128 *)v3;
  v54 = 0LL;
  v55 = 0LL;
  v5 = *(_QWORD *)(v3 + 16);
  if ( *(_QWORD *)(v3 + 24) >= 0x10uLL )
    v4 = *(__int128 **)v3;
  v6 = 1;
  if ( v5 >= 0x10 )
  {
    v50 = 0x7FFFFFFFFFFFFFFFLL;
    v7 = v5 | 0xF;
    v51 = v5 | 0xF;
    if ( (v5 | 0xF) > 0x7FFFFFFFFFFFFFFFLL )
      v7 = 0x7FFFFFFFFFFFFFFFLL;
    v52 = std::_Allocate(v7 + 1, 1uLL);
    *(_QWORD *)&v53 = v52;
    memcpy_0(v52, v4, v5 + 1);
  }
  else
  {
    v53 = *v4;
    v7 = 15LL;
  }
  v55 = v7;
  v54 = v5;
  v8 = &v53;
  if ( v7 >= 0x10 )
    v8 = (__int128 *)v53;
  v9 = (char *)v8 + v5;
  v10 = (char *)&v53;
  if ( v7 >= 0x10 )
    v10 = (char *)v53;
  v57 = 0LL;
  v58 = 7LL;
  LOWORD(Src[0]) = 0;
  if ( (unsigned __int64)(v9 - v10) >= 8 )
  {
    std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Reallocate_grow_by__lambda_7f96eb1dcf99da5daec8c2467d2d5499___(Src);
    v57 = 0LL;
  }
  std::wstring::_Construct<char *>(Src);
  v11 = Src;
  if ( v58 >= 8 )
    v11 = (_QWORD *)Src[0];
  v12 = *(float *)(std::map<int,CursorGlyphInfo>::operator[](v2) + 32);
  v13 = *(float *)(std::map<int,CursorGlyphInfo>::operator[](v2) + 36);
  ppv = 0LL;
  v14 = CoCreateInstance(&CLSID_WICImagingFactory2, 0LL, 1u, &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70, &ppv);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xF7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmhardwarecursor.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_80;
  }
  v47 = 0LL;
  v16 = (*(__int64 (__fastcall **)(LPVOID, _QWORD *, GUID *, __int64, _DWORD, __int64 *))(*(_QWORD *)ppv + 24LL))(
          ppv,
          v11,
          &GUID_VendorMicrosoftBuiltIn,
          0x80000000LL,
          0,
          &v47);
  v15 = v16;
  if ( v16 >= 0 )
  {
    v46 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v47 + 104LL))(v47, 0LL, &v46);
    v15 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xFD,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmhardwarecursor.cpp",
        (const char *)(unsigned int)v17);
LABEL_76:
      v38 = v46;
      if ( v46 )
      {
        v46 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v38)[2])(v38);
      }
      goto LABEL_78;
    }
    v42 = 0LL;
    v18 = (**v46)(v46, &GUID_00000120_a8f2_4877_ba0a_fd2b6645fb94, &v42);
    v15 = v18;
    if ( v18 < 0 )
    {
      v19 = 255LL;
LABEL_51:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v19,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmhardwarecursor.cpp",
        (const char *)(unsigned int)v18);
      goto LABEL_74;
    }
    v18 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v42 + 32LL))(v42, v59);
    v15 = v18;
    if ( v18 < 0 )
    {
      v19 = 259LL;
      goto LABEL_51;
    }
    if ( v59[0] != *(_QWORD *)&GUID_WICPixelFormat32bppBGRA.Data1
      || v59[1] != *(_QWORD *)GUID_WICPixelFormat32bppBGRA.Data4 )
    {
      v15 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x104,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmhardwarecursor.cpp",
        (const char *)0x8000FFFFLL);
LABEL_74:
      v37 = v42;
      if ( v42 )
      {
        v42 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
      }
      goto LABEL_76;
    }
    if ( *((_DWORD *)this + 99) != 1 )
    {
      v43 = 0LL;
      v20 = (*(__int64 (__fastcall **)(LPVOID, __int64 *))(*(_QWORD *)ppv + 104LL))(ppv, &v43);
      v15 = v20;
      if ( v20 < 0 )
      {
        v21 = 270LL;
LABEL_43:
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)v21,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmhardwarecursor.cpp",
          (const char *)(unsigned int)v20);
LABEL_47:
        v25 = v43;
        if ( !v43 )
          goto LABEL_74;
        v43 = 0LL;
LABEL_72:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
        goto LABEL_74;
      }
      v22 = *((_DWORD *)this + 99);
      switch ( v22 )
      {
        case 2:
          v12 = 1.0 - *(float *)(std::map<int,CursorGlyphInfo>::operator[](v2) + 36);
          v13 = *(float *)(std::map<int,CursorGlyphInfo>::operator[](v2) + 32);
          break;
        case 3:
          v6 = 2;
          v12 = 1.0 - *(float *)(std::map<int,CursorGlyphInfo>::operator[](v2) + 32);
          v13 = 1.0 - *(float *)(std::map<int,CursorGlyphInfo>::operator[](v2) + 36);
          break;
        case 4:
          v6 = 3;
          v12 = *(float *)(std::map<int,CursorGlyphInfo>::operator[](v2) + 36);
          v13 = 1.0 - *(float *)(std::map<int,CursorGlyphInfo>::operator[](v2) + 32);
          break;
        default:
          v15 = -2147418113;
          goto LABEL_47;
      }
      v20 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v43 + 64LL))(v43, v42, v6);
      v15 = v20;
      if ( v20 < 0 )
      {
        v21 = 295LL;
        goto LABEL_43;
      }
      v23 = v42;
      if ( v42 )
      {
        v42 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      }
      v20 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v43)(
              v43,
              &GUID_00000120_a8f2_4877_ba0a_fd2b6645fb94,
              &v42);
      v15 = v20;
      if ( v20 < 0 )
      {
        v21 = 296LL;
        goto LABEL_43;
      }
      v24 = v43;
      if ( v43 )
      {
        v43 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
    }
    v26 = (unsigned int *)((char *)this + 380);
    v27 = (unsigned int *)((char *)this + 376);
    v18 = (*(__int64 (__fastcall **)(__int64, char *, char *))(*(_QWORD *)v42 + 24LL))(
            v42,
            (char *)this + 376,
            (char *)this + 380);
    v15 = v18;
    if ( v18 < 0 )
    {
      v19 = 302LL;
      goto LABEL_51;
    }
    v28 = (int)(*((double *)this + 46) * 32.0);
    v45 = 0LL;
    v29 = (*(__int64 (__fastcall **)(LPVOID, __int64 *))(*(_QWORD *)ppv + 88LL))(ppv, &v45);
    v15 = v29;
    if ( v29 >= 0 )
    {
      v29 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int))(*(_QWORD *)v45 + 64LL))(
              v45,
              v42,
              v28,
              v28,
              4);
      v15 = v29;
      if ( v29 >= 0 )
      {
        *v27 = v28;
        *v26 = v28;
        v31 = v42;
        if ( v42 )
        {
          v42 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
        }
        v29 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v45)(
                v45,
                &GUID_00000120_a8f2_4877_ba0a_fd2b6645fb94,
                &v42);
        v15 = v29;
        if ( v29 >= 0 )
        {
          v32 = *v27;
          *((_DWORD *)this + 96) = (int)(float)((float)(int)*v27 * v12);
          v33 = *v26;
          *((_DWORD *)this + 97) = (int)(float)((float)(int)*v26 * v13);
          v34 = *((_DWORD *)this + 105) * v32 * v33;
          v35 = operator new[](v34, (const struct std::nothrow_t *)&std::nothrow);
          v48 = 0LL;
          std::shared_ptr<unsigned char>::_Resetp<unsigned char>(&v48, v35);
          v36 = (volatile signed __int32 *)*((_QWORD *)this + 58);
          *(_OWORD *)((char *)this + 456) = v48;
          if ( v36 )
          {
            if ( _InterlockedExchangeAdd(v36 + 2, 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v36)(v36);
              if ( _InterlockedExchangeAdd(v36 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v36 + 8LL))(v36);
            }
          }
          if ( !*((_QWORD *)this + 57) )
          {
            v15 = -2147024882;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x14A,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmha"
                       "rdwarecursor.cpp",
              (const char *)0x8007000ELL);
LABEL_70:
            v25 = v45;
            if ( !v45 )
              goto LABEL_74;
            v45 = 0LL;
            goto LABEL_72;
          }
          v29 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v42 + 56LL))(
                  v42,
                  0LL,
                  *v27 * *((_DWORD *)this + 105),
                  v34,
                  *((_QWORD *)this + 57));
          v15 = v29;
          if ( v29 >= 0 )
          {
            *((_BYTE *)this + 392) = 0;
            v15 = 0;
            goto LABEL_70;
          }
          v30 = 331LL;
        }
        else
        {
          v30 = 321LL;
        }
      }
      else
      {
        v30 = 314LL;
      }
    }
    else
    {
      v30 = 309LL;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v30,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmhardwarecursor.cpp",
      (const char *)(unsigned int)v29);
    goto LABEL_70;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0xF9,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmhardwarecursor.cpp",
    (const char *)(unsigned int)v16);
LABEL_78:
  v39 = v47;
  if ( v47 )
  {
    v47 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
  }
LABEL_80:
  v40 = ppv;
  if ( ppv )
  {
    ppv = 0LL;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v40 + 16LL))(v40);
  }
  std::wstring::_Tidy_deallocate(Src);
  std::string::~string(&v53);
  return v15;
}
