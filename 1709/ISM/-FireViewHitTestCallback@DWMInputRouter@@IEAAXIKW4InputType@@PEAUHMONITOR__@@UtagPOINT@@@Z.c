/*
 * XREFs of ?FireViewHitTestCallback@DWMInputRouter@@IEAAXIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@@Z @ 0x18001BB9C
 * Callers:
 *     ?DoConvergedFireViewHitTestCallback@DWMInputRouter@@UEAAXPEAX0W4InputType@@PEAUHMONITOR__@@UtagPOINT@@@Z @ 0x18001B1E0 (-DoConvergedFireViewHitTestCallback@DWMInputRouter@@UEAAXPEAX0W4InputType@@PEAUHMONITOR__@@UtagP.c)
 *     ?s_HitTestHandler@DWMInputRouter@@SAJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18001CC60 (-s_HitTestHandler@DWMInputRouter@@SAJPEAUIHitTestRequest@@PEAXPEAV-$vector@V-$ComPtr@UIInputTarg.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputRouter::FireViewHitTestCallback(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  unsigned int v10; // ebx
  __int64 result; // rax
  int v12; // r14d
  __int64 (__fastcall ***v13)(_QWORD, GUID *, _QWORD *); // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // eax
  bool v18; // zf
  int v19; // eax
  _QWORD v20[2]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v21; // [rsp+40h] [rbp-40h]
  __int64 v22; // [rsp+50h] [rbp-30h]
  __int128 v23; // [rsp+60h] [rbp-20h] BYREF
  __int64 v24; // [rsp+70h] [rbp-10h]
  unsigned int v25; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  int v27; // [rsp+B0h] [rbp+30h] BYREF

  v20[1] = -2LL;
  v10 = a6;
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, unsigned __int64))(**(_QWORD **)(a1 + 440) + 56LL))(
    *(_QWORD *)(a1 + 440),
    a4,
    (unsigned int)a6,
    HIDWORD(a6));
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 440) + 64LL))(*(_QWORD *)(a1 + 440), a2);
  v12 = 0;
  v13 = *(__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(a1 + 240);
  if ( v13 )
  {
    v20[0] = 0LL;
    v14 = (**v13)(v13, &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59, v20);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x7E2,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v14);
      __debugbreak();
    }
    result = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v20[0] + 48LL))(v20[0], &v27);
    if ( (int)result < 0 )
    {
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x7E6,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)result);
      __debugbreak();
    }
    v12 = v27;
    v15 = v20[0];
    if ( v20[0] )
    {
      v20[0] = 0LL;
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  if ( *(_DWORD *)(a1 + 348) != a2 || v12 != a2 )
  {
    *(_DWORD *)(a1 + 348) = a2;
    v16 = *(_QWORD *)(a1 + 336);
    if ( v16 )
    {
      *(_QWORD *)&v21 = __PAIR64__(a3, a2);
      *((_QWORD *)&v21 + 1) = __PAIR64__(v10, a5);
      v22 = HIDWORD(a6);
      v17 = *(_DWORD *)(a1 + 344);
      v18 = v17 == -1;
      v19 = v17 + 1;
      *(_DWORD *)(a1 + 344) = v19;
      if ( v18 )
        *(_DWORD *)(a1 + 344) = ++v19;
      HIDWORD(v22) = v19;
      v23 = v21;
      v24 = v22;
      v25 = a4;
      return (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v16 + 24LL))(v16, &v23);
    }
  }
  return result;
}
