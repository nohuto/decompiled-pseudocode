/*
 * XREFs of ?TryFireViewHitTest@DWMInputRouter@@UEAA_NPEAXKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@@Z @ 0x18007FB40
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall DWMInputRouter::TryFireViewHitTest(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  int v10; // eax
  int v11; // esi
  __int64 (__fastcall ***v12)(_QWORD, GUID *, _QWORD *); // rcx
  int v13; // eax
  wil::details::in1diag3 *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v18; // rcx
  int v19; // eax
  bool v20; // zf
  int v21; // eax
  int v22; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v23[2]; // [rsp+28h] [rbp-58h] BYREF
  __int128 v24; // [rsp+38h] [rbp-48h]
  __int64 v25; // [rsp+48h] [rbp-38h]
  __int128 v26; // [rsp+60h] [rbp-20h] BYREF
  __int64 v27; // [rsp+70h] [rbp-10h]
  int v28; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v23[1] = -2LL;
  if ( !a5 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 216) + 24LL))(*(_QWORD *)(a1 + 216), &a5);
    if ( v10 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x6F9,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v10);
      goto LABEL_17;
    }
  }
  v11 = 0;
  v12 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(a1 + 272);
  if ( !v12 )
    goto LABEL_8;
  v23[0] = 0LL;
  v13 = (**v12)(v12, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, v23);
  v14 = retaddr;
  if ( v13 < 0 )
  {
LABEL_17:
    wil::details::in1diag3::FailFast_Hr(
      v14,
      (void *)0x703,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v13);
    __debugbreak();
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v23[0] + 48LL))(v23[0], &v22);
  if ( v15 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x707,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)(unsigned int)v15);
    JUMPOUT(0x18007FCFALL);
  }
  v11 = v22;
  v16 = v23[0];
  if ( v23[0] )
  {
    v23[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
LABEL_8:
  if ( *(_DWORD *)(a1 + 332) == a2 && v11 == a2 )
    return 0;
  *(_DWORD *)(a1 + 332) = a2;
  v18 = *(_QWORD *)(a1 + 320);
  if ( v18 )
  {
    *(_QWORD *)&v24 = __PAIR64__(a3, a2);
    *((_QWORD *)&v24 + 1) = __PAIR64__(a6, a5);
    v25 = HIDWORD(a6);
    v19 = *(_DWORD *)(a1 + 328);
    v20 = v19 == -1;
    v21 = v19 + 1;
    *(_DWORD *)(a1 + 328) = v21;
    if ( v20 )
      *(_DWORD *)(a1 + 328) = ++v21;
    HIDWORD(v25) = v21;
    v26 = v24;
    v27 = v25;
    v28 = a4;
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v18 + 24LL))(v18, &v26);
  }
  return 1;
}
