/*
 * XREFs of ?Initialize@DWMHardwareCursor@@IEAAJXZ @ 0x1800277FC
 * Callers:
 *     ?Create@DWMHardwareCursor@@SAJPEAVDWMCursorBroker@@V?$ComPtr@UIDCompositionDevice@@@WRL@Microsoft@@UCursorId@@W4InputType@@PEAPEAV1@@Z @ 0x180027650 (-Create@DWMHardwareCursor@@SAJPEAVDWMCursorBroker@@V-$ComPtr@UIDCompositionDevice@@@WRL@Microsof.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?Initialize@DWMCursor@@QEAAJ_N@Z @ 0x18002678C (-Initialize@DWMCursor@@QEAAJ_N@Z.c)
 *     ?RegisterWithCursorBroker@DWMCursor@@IEAAJXZ @ 0x180026B1C (-RegisterWithCursorBroker@DWMCursor@@IEAAJXZ.c)
 *     ??4CursorGlyphInfo@@QEAAAEAU0@$$QEAU0@@Z @ 0x180027F4C (--4CursorGlyphInfo@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     ?UpdateBitmapSource@DWMHardwareCursor@@AEAAJXZ @ 0x1800281E0 (-UpdateBitmapSource@DWMHardwareCursor@@AEAAJXZ.c)
 *     ??A?$map@HUCursorGlyphInfo@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@3@@std@@QEAAAEAUCursorGlyphInfo@@$$QEAH@Z @ 0x180028B90 (--A-$map@HUCursorGlyphInfo@@U-$less@H@std@@V-$allocator@U-$pair@$$CBHUCursorGlyphInfo@@@std@@@3@.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180028C1C (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@AEBV10@QEBD@Z @ 0x180028D98 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_66f57f934f28d61049862f64df852ff0__char_const_____ptr64_ @ 0x180028F54 (std--basic_string_char_std--char_traits_char__std--allocator_char___--_Reallocate_for__lambda_66.c)
 *     ??1InputSecurityDescriptor@@QEAA@XZ @ 0x1800488DC (--1InputSecurityDescriptor@@QEAA@XZ.c)
 *     ?QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z @ 0x18004890C (-QueryDescriptor@InputSecurityDescriptor@@QEAAJW4TransientObject_Type@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall DWMHardwareCursor::Initialize(DWMHardwareCursor *this)
{
  __int64 v2; // r8
  const char *v3; // r9
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // r9d
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 *v21; // r14
  __int64 v22; // rcx
  __int64 v23; // rbx
  _QWORD *v24; // r15
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  int v28; // r9d
  _QWORD *v29; // rsi
  __int64 v30; // rcx
  __int64 v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v37; // [rsp+50h] [rbp-41h] BYREF
  unsigned int v38; // [rsp+58h] [rbp-39h] BYREF
  __int64 v39; // [rsp+60h] [rbp-31h] BYREF
  char v40; // [rsp+68h] [rbp-29h]
  __int64 v41; // [rsp+70h] [rbp-21h]
  _BYTE Src[32]; // [rsp+78h] [rbp-19h] BYREF
  float v43; // [rsp+98h] [rbp+7h]
  int v44; // [rsp+9Ch] [rbp+Bh]
  _BYTE v45[16]; // [rsp+A0h] [rbp+Fh] BYREF
  __m128i si128; // [rsp+B0h] [rbp+1Fh]

  v41 = -2LL;
  v39 = 0LL;
  v40 = 0;
  v38 = 0;
  v37 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v45[0] = 0;
  std::basic_string_char_std::char_traits_char__std::allocator_char___::_Reallocate_for__lambda_66f57f934f28d61049862f64df852ff0__char_const_____ptr64_(
    v45,
    116LL);
  v4 = DWMCursor::Initialize((DWMHardwareCursor *)((char *)this + 8), 1, v2, v3);
  v6 = v4;
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_43;
    v7 = 87;
    goto LABEL_42;
  }
  std::operator+<char>(Src, v45, "arrow_r_light.png");
  v43 = 0.0;
  v44 = 0;
  v8 = std::map<int,CursorGlyphInfo>::operator[]((int)this + 400);
  CursorGlyphInfo::operator=(v8, Src);
  std::string::~string(Src);
  std::operator+<char>(Src, v45, "beam_r_light.png");
  v43 = 0.5;
  v44 = 1056964608;
  v9 = std::map<int,CursorGlyphInfo>::operator[]((int)this + 400);
  CursorGlyphInfo::operator=(v9, Src);
  std::string::~string(Src);
  std::operator+<char>(Src, v45, "busy_r_light.png");
  v43 = 0.5;
  v44 = 1056964608;
  v10 = std::map<int,CursorGlyphInfo>::operator[]((int)this + 400);
  CursorGlyphInfo::operator=(v10, Src);
  std::string::~string(Src);
  std::operator+<char>(Src, v45, "cross_r_light.png");
  v43 = 0.5;
  v44 = 1056964608;
  v11 = std::map<int,CursorGlyphInfo>::operator[]((int)this + 400);
  CursorGlyphInfo::operator=(v11, Src);
  std::string::~string(Src);
  std::operator+<char>(Src, v45, "ew_r_light.png");
  v43 = 0.5;
  v44 = 1056964608;
  v12 = std::map<int,CursorGlyphInfo>::operator[]((int)this + 400);
  CursorGlyphInfo::operator=(v12, Src);
  std::string::~string(Src);
  std::operator+<char>(Src, v45, "helpsel_r_light.png");
  v43 = 0.0;
  v44 = 0;
  v13 = std::map<int,CursorGlyphInfo>::operator[]((int)this + 400);
  CursorGlyphInfo::operator=(v13, Src);
  std::string::~string(Src);
  std::operator+<char>(Src, v45, "link_r_light.png");
  v43 = FLOAT_0_20999999;
  v44 = 0;
  v14 = std::map<int,CursorGlyphInfo>::operator[]((int)this + 400);
  CursorGlyphInfo::operator=(v14, Src);
  std::string::~string(Src);
  std::operator+<char>(Src, v45, "move_r_light.png");
  v43 = 0.5;
  v44 = 1056964608;
  v15 = std::map<int,CursorGlyphInfo>::operator[]((int)this + 400);
  CursorGlyphInfo::operator=(v15, Src);
  std::string::~string(Src);
  std::operator+<char>(Src, v45, "nesw_r_light.png");
  v43 = 0.5;
  v44 = 1056964608;
  v16 = std::map<int,CursorGlyphInfo>::operator[]((int)this + 400);
  CursorGlyphInfo::operator=(v16, Src);
  std::string::~string(Src);
  std::operator+<char>(Src, v45, "ns_r_light.png");
  v43 = 0.5;
  v44 = 1056964608;
  v17 = std::map<int,CursorGlyphInfo>::operator[]((int)this + 400);
  CursorGlyphInfo::operator=(v17, Src);
  std::string::~string(Src);
  std::operator+<char>(Src, v45, "nwse_r_light.png");
  v43 = 0.5;
  v44 = 1056964608;
  v18 = std::map<int,CursorGlyphInfo>::operator[]((int)this + 400);
  CursorGlyphInfo::operator=(v18, Src);
  std::string::~string(Src);
  std::operator+<char>(Src, v45, "unavail_r_light.png");
  v43 = 0.5;
  v44 = 1056964608;
  v19 = std::map<int,CursorGlyphInfo>::operator[]((int)this + 400);
  CursorGlyphInfo::operator=(v19, Src);
  std::string::~string(Src);
  std::operator+<char>(Src, v45, "up_r_light.png");
  v43 = 0.5;
  v44 = 1056964608;
  v20 = std::map<int,CursorGlyphInfo>::operator[]((int)this + 400);
  CursorGlyphInfo::operator=(v20, Src);
  std::string::~string(Src);
  v4 = InputSecurityDescriptor::QueryDescriptor(&v39, 8LL, L"System\\Input\\HardwareCursorPort");
  v6 = v4;
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_43;
    v7 = 107;
    goto LABEL_42;
  }
  v21 = (__int64 *)((char *)this + 424);
  v22 = *((_QWORD *)this + 53);
  if ( v22 )
  {
    *v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  }
  v4 = CoreUICreate((char *)this + 424);
  v6 = v4;
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_43;
    v7 = 109;
    goto LABEL_42;
  }
  v23 = *v21;
  v24 = (_QWORD *)((char *)this + 448);
  v25 = *((_QWORD *)this + 56);
  if ( v25 )
  {
    *v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  v26 = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t *, char *))(*(_QWORD *)v23 + 48LL))(
          v23,
          v39,
          L"System\\Input\\HardwareCursorPort",
          (char *)this + 448);
  if ( v26 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_18;
    v28 = 114;
    goto LABEL_17;
  }
  v29 = (_QWORD *)((char *)this + 432);
  v30 = *((_QWORD *)this + 54);
  if ( v30 )
  {
    *v29 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  }
  v4 = CoreUIFactoryCreate((char *)this + 432);
  v6 = v4;
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_43;
    v7 = 116;
    goto LABEL_42;
  }
  v26 = (*(__int64 (__fastcall **)(_QWORD, GUID *, unsigned int *))(*(_QWORD *)*v29 + 24LL))(
          *v29,
          &GUID_2a41cba8_e142_47c3_a686_aafebe68f8a9,
          &v38);
  if ( v26 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
    {
LABEL_18:
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
    v28 = 120;
LABEL_17:
    McTemplateU0qqq(v27, &MinInput_Warning_CheckResult, 0, v28, v26);
    goto LABEL_18;
  }
  v31 = *v29;
  v32 = *((_QWORD *)this + 55);
  if ( v32 )
  {
    *((_QWORD *)this + 55) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  (*(void (__fastcall **)(__int64, DWMHardwareCursor *, _QWORD, _QWORD, const wchar_t *, _QWORD, char *))(*(_QWORD *)v31 + 32LL))(
    v31,
    this,
    0LL,
    v38,
    L"System\\Input\\HardwareCursorEndpoint",
    *v24,
    (char *)this + 440);
  v33 = *v21;
  v34 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
  }
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v33 + 24LL))(v33, &v37);
  v6 = v4;
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_43;
    v7 = 130;
    goto LABEL_42;
  }
  v4 = (*(__int64 (__fastcall **)(__int64, const wchar_t *, __int64, char *))(*(_QWORD *)v37 + 24LL))(
         v37,
         L"System\\Input\\CursorManagerEndpoint",
         1LL,
         (char *)this + 472);
  v6 = v4;
  if ( v4 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_43;
    v7 = 134;
    goto LABEL_42;
  }
  DWMHardwareCursor::UpdateBitmapSource(this);
  v4 = DWMCursor::RegisterWithCursorBroker((DWMHardwareCursor *)((char *)this + 8));
  v6 = v4;
  if ( v4 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    v7 = 138;
LABEL_42:
    McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, v7, v4);
  }
LABEL_43:
  std::string::~string(v45);
  v35 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
  }
  InputSecurityDescriptor::~InputSecurityDescriptor((InputSecurityDescriptor *)&v39);
  return v6;
}
