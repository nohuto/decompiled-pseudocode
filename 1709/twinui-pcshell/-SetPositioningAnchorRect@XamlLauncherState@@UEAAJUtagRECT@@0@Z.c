/*
 * XREFs of ?SetPositioningAnchorRect@XamlLauncherState@@UEAAJUtagRECT@@0@Z @ 0x180189D10
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncherState::SetPositioningAnchorRect(XamlLauncherState *this, __m128i *a2, __m128i *a3)
{
  __m128i v3; // xmm1
  __int64 v5; // r8
  unsigned __int64 v6; // rcx
  __m128i v7; // xmm1
  __int64 v8; // rdx
  __int128 v9; // xmm2
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int128 v12; // xmm1
  __int64 (__fastcall *v13)(__int64 *, __int128 *, __int128 *); // rax
  int v14; // eax
  unsigned int v15; // ebx
  __int128 v17; // [rsp+20h] [rbp-20h] BYREF
  __int128 v18; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]

  v3 = *a3;
  v5 = a3->m128i_i64[0];
  v6 = _mm_srli_si128(v3, 8).m128i_u64[0];
  v7 = *a2;
  v8 = a2->m128i_i64[0];
  v7.m128i_i64[0] = _mm_srli_si128(v7, 8).m128i_u64[0];
  *(float *)&v17 = (float)(int)v5;
  *((float *)&v17 + 1) = (float)SHIDWORD(v5);
  *((float *)&v17 + 2) = (float)((int)v6 - v5);
  *((float *)&v17 + 3) = (float)(HIDWORD(v6) - HIDWORD(v5));
  v9 = v17;
  *(float *)&v17 = (float)(int)v8;
  *((float *)&v17 + 1) = (float)SHIDWORD(v8);
  *((float *)&v17 + 2) = (float)(v7.m128i_i32[0] - v8);
  v10 = (__int64 *)*((_QWORD *)this + 7);
  v11 = *v10;
  *((float *)&v17 + 3) = (float)(v7.m128i_i32[1] - HIDWORD(v8));
  v12 = v17;
  v13 = *(__int64 (__fastcall **)(__int64 *, __int128 *, __int128 *))(v11 + 64);
  v17 = v9;
  v18 = v12;
  v14 = v13(v10, &v18, &v17);
  v15 = v14;
  if ( v14 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x333,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)v14);
  return v15;
}
