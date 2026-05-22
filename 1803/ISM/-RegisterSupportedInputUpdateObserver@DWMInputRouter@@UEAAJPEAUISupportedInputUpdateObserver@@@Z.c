/*
 * XREFs of ?RegisterSupportedInputUpdateObserver@DWMInputRouter@@UEAAJPEAUISupportedInputUpdateObserver@@@Z @ 0x180080AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace_back@PEAVInputSite@@@?$vector@PEAVInputSite@@V?$allocator@PEAVInputSite@@@std@@@std@@QEAAAEAPEAVInputSite@@$$QEAPEAV2@@Z @ 0x18000C368 (--$emplace_back@PEAVInputSite@@@-$vector@PEAVInputSite@@V-$allocator@PEAVInputSite@@@std@@@std@@.c)
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x18001907C (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180051A7C (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E212C (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::RegisterSupportedInputUpdateObserver(
        DWMInputRouter *this,
        struct ISupportedInputUpdateObserver *a2)
{
  unsigned __int64 v3; // rdi
  const char *v4; // r9
  _QWORD *v5; // r14
  int v6; // esi
  __int64 v7; // r9
  __int64 v8; // r8
  char *v9; // rdx
  int v10; // r8d
  __int64 v11; // r10
  __int64 v12; // rbx
  struct ISupportedInputUpdateObserver *v13; // rsi
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  __int64 v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF
  struct ISupportedInputUpdateObserver *v21; // [rsp+58h] [rbp+10h] BYREF

  v21 = a2;
  v18 = -2LL;
  std::vector<InputSite *>::emplace_back<InputSite *>((__int64)this + 624, &v21);
  v3 = *((unsigned int *)this + 9);
  if ( (_DWORD)v3 )
  {
    v5 = operator new[](saturated_mul(v3, 8uLL));
    if ( !v5 )
    {
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        (void *)0x8FD,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        v4);
      __debugbreak();
    }
    v6 = 0;
    v7 = 0LL;
    v8 = 0LL;
    if ( *((_DWORD *)this + 8) )
    {
      v9 = (char *)this + 40;
      do
      {
        if ( !operator==(*((_QWORD *)this + 3) + 48 * v8, (__int64)v9) )
        {
          if ( (_DWORD)v7 == (_DWORD)v3 )
          {
            v6 = -2147024809;
            if ( IsDebuggerPresent() )
              __debugbreak();
            RaiseFailFastException(0LL, 0LL, 0);
            break;
          }
          v5[v7] = *(_QWORD *)(v11 + 40);
          v7 = (unsigned int)(v7 + 1);
        }
        v8 = (unsigned int)(v10 + 1);
      }
      while ( (unsigned int)v8 < *((_DWORD *)this + 8) );
    }
    if ( v6 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x901,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v6);
LABEL_24:
      wil::details::in1diag3::FailFast_Hr(
        v15,
        (void *)0x908,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v14);
      JUMPOUT(0x180080C88LL);
    }
    v12 = 0LL;
    v13 = v21;
    do
    {
      v20 = 0LL;
      if ( (**(int (__fastcall ***)(_QWORD, GUID *, __int64 *, __int64, __int64))v5[v12])(
             v5[v12],
             &GUID_93d6f9bd_cc36_424f_ac6f_03108f7cf72f,
             &v20,
             v7,
             v18) >= 0 )
      {
        v14 = (*(__int64 (__fastcall **)(struct ISupportedInputUpdateObserver *, __int64))(*(_QWORD *)v13 + 24LL))(
                v13,
                v20);
        v15 = retaddr;
        if ( v14 < 0 )
          goto LABEL_24;
      }
      v16 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      v12 = (unsigned int)(v12 + 1);
    }
    while ( (unsigned int)v12 < (unsigned int)v3 );
    operator delete(v5);
  }
  return 0LL;
}
