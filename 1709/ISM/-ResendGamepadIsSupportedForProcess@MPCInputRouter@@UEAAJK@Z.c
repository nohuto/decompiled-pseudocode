/*
 * XREFs of ?ResendGamepadIsSupportedForProcess@MPCInputRouter@@UEAAJK@Z @ 0x1800AA4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180016CD8 (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRoutingInfo@@PEAPEAUIInputTarget@@@Z @ 0x18001EB34 (-GetValueForKey@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJAEBUtagMsgRouti.c)
 *     ?GetKeys@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJPEAUtagMsgRoutingInfo@@I@Z @ 0x18001EE64 (-GetKeys@-$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAAJPEAUtagMsgRoutingInfo@.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCInputRouter::ResendGamepadIsSupportedForProcess(MPCInputRouter *this, int a2)
{
  char *v3; // r14
  __int64 (__fastcall ***v4)(_QWORD, GUID *, _QWORD *); // rbx
  unsigned __int64 v5; // rdi
  char *v6; // rax
  const char *v7; // r9
  char *v8; // r15
  int Keys; // eax
  __int64 v10; // rsi
  char *v11; // rdx
  int ValueForKey; // eax
  int v13; // eax
  __int64 (__fastcall ***v14)(_QWORD, GUID *, _QWORD *); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 (__fastcall ***v17)(_QWORD, GUID *, _QWORD *); // [rsp+60h] [rbp+8h] BYREF
  __int64 (__fastcall ***v18)(_QWORD, GUID *, _QWORD *); // [rsp+70h] [rbp+18h]

  v3 = (char *)this - 720;
  v4 = 0LL;
  v5 = *((unsigned int *)this - 157);
  if ( (_DWORD)v5 )
  {
    v6 = (char *)operator new[](saturated_mul(v5, 0x28uLL));
    v8 = v6;
    if ( !v6 )
    {
      wil::details::in1diag3::_FailFast_NullAlloc(
        retaddr,
        (void *)0xAA8,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        v7);
      __debugbreak();
    }
    Keys = DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::GetKeys((__int64)(v3 + 80), (__int64)v6, v5);
    if ( Keys < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0xAAC,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)Keys);
      __debugbreak();
    }
    v10 = 0LL;
    do
    {
      v11 = &v8[40 * v10];
      if ( *(_DWORD *)v11 == a2 )
      {
        v18 = 0LL;
        ValueForKey = DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::GetValueForKey(
                        (__int64)(v3 + 80),
                        (__int64)v11);
        if ( ValueForKey < 0 )
        {
          wil::details::in1diag3::_FailFast_Hr(
            retaddr,
            (void *)0xAB9,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
            (const char *)(unsigned int)ValueForKey);
          __debugbreak();
        }
        v17 = 0LL;
        v13 = (**v18)(v18, &GUID_93d6f9bd_cc36_424f_ac6f_03108f7cf72f, &v17);
        v14 = v17;
        if ( v13 >= 0 )
        {
          if ( v17 )
          {
            ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v17)[1])(v17);
            v14 = v17;
          }
          v4 = v14;
        }
        if ( v14 )
        {
          v17 = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v14)[2])(v14);
        }
      }
      v10 = (unsigned int)(v10 + 1);
    }
    while ( (unsigned int)v10 < (unsigned int)v5 );
    operator delete(v8);
  }
  v18 = v4;
  if ( v4 )
  {
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v4)[1])(v4);
    (*(void (__fastcall **)(char *, __int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*(_QWORD *)v3 + 144LL))(v3, v4);
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v4)[2])(v4);
  }
  return 0LL;
}
