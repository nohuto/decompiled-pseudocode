/*
 * XREFs of ?SendCharacterEvent@InputServiceProxy@@UEAAJPEAUCharacterEventPayload@@I@Z @ 0x180025D80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputServiceProxy::SendCharacterEvent(
        InputServiceProxy *this,
        struct CharacterEventPayload *a2,
        int a3)
{
  __int16 v4; // dx
  __int16 v7; // cx
  unsigned int v8; // eax
  int v10; // eax
  int v11; // eax
  __int16 v12; // [rsp+20h] [rbp-68h]
  __int16 v13; // [rsp+28h] [rbp-60h]
  __int64 v14; // [rsp+50h] [rbp-38h] BYREF
  __int16 v15; // [rsp+58h] [rbp-30h] BYREF
  __int16 v16; // [rsp+5Ah] [rbp-2Eh]
  __int16 v17; // [rsp+5Ch] [rbp-2Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v4 = *((_WORD *)a2 + 1);
  v17 = 0;
  if ( (unsigned __int16)(v4 + 10240) > 0x3FFu )
  {
    if ( (unsigned __int16)(v4 + 9216) > 0x3FFu )
    {
      v8 = 1;
      v15 = v4;
      v16 = 0;
    }
    else
    {
      v7 = *((_WORD *)this + 24);
      if ( !v7 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x97,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
          (const char *)0x80070057LL);
        return 2147942487LL;
      }
      if ( (unsigned __int16)(v7 + 10240) > 0x3FFu )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x8E,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
          (const char *)0x2800);
        __debugbreak();
      }
      v8 = 2;
      v15 = v7;
      v16 = v4;
    }
    if ( *((_QWORD *)this + 4) )
    {
      v14 = 0LL;
      v10 = MsgStringCreateShared(&v15, v8, &v14);
      if ( v10 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xA8,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
          (const char *)(unsigned int)v10);
        __debugbreak();
      }
      v13 = -1;
      v12 = -1;
      v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, __int16, __int16, _DWORD, int))(**((_QWORD **)this + 4) + 240LL))(
              *((_QWORD *)this + 4),
              *(unsigned __int16 *)a2,
              0LL,
              v14,
              v12,
              v13,
              *((_DWORD *)a2 + 1),
              a3);
      if ( v11 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xB1,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\delivery\\server\\inputserviceproxy.cpp",
          (const char *)(unsigned int)v11);
        JUMPOUT(0x180025F07LL);
      }
    }
    v4 = 0;
  }
  *((_WORD *)this + 24) = v4;
  return 0LL;
}
