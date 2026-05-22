/*
 * XREFs of ?RuntimeClassInitialize@MPCMouseProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180096BCC
 * Callers:
 *     ?Create@MPCMouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180096B10 (-Create@MPCMouseProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x18002634C (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x180049778 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?InitializeConstants@MPCMouseProcessor@@EEAAXXZ @ 0x180096E30 (-InitializeConstants@MPCMouseProcessor@@EEAAXXZ.c)
 *     ?AttachMouse@MPCMouseProcessor@@AEAAXPEAUDeviceInfo@@@Z @ 0x180097AC8 (-AttachMouse@MPCMouseProcessor@@AEAAXPEAUDeviceInfo@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCMouseProcessor::RuntimeClassInitialize(
        MPCMouseProcessor *this,
        const struct InputProcessorCreateParams *a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  unsigned __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  _QWORD *v11; // rbx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  int v21; // eax
  __int128 v22; // [rsp+20h] [rbp-30h] BYREF
  __int64 v23; // [rsp+30h] [rbp-20h]
  __int128 v24; // [rsp+38h] [rbp-18h] BYREF
  char *v25; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  LARGE_INTEGER Frequency; // [rsp+70h] [rbp+20h] BYREF

  v4 = (__int64 *)*((_QWORD *)a2 + 1);
  v22 = *(_OWORD *)a2;
  v5 = *v4;
  v23 = *((_QWORD *)a2 + 2);
  v6 = (*(__int64 (__fastcall **)(__int64 *))(v5 + 32))(v4);
  *((_DWORD *)this + 589) = 2;
  *((_DWORD *)this + 588) = v6;
  *(_QWORD *)&v22 = (char *)this + 2352;
  QueryPerformanceFrequency(&Frequency);
  v7 = Frequency.QuadPart * *((_QWORD *)this + 435);
  v24 = v22;
  *((_QWORD *)this + 435) = v7 / 0x2710;
  v25 = (char *)this + 16;
  v8 = MPCInputProviderBase::RuntimeClassInitialize(
         (MPCMouseProcessor *)((char *)this + 16),
         (const struct InputProcessorCreateParams *)&v22);
  v9 = v8;
  if ( v8 >= 0 )
  {
    MPCMouseProcessor::InitializeConstants((MPCMouseProcessor *)((char *)this + 40));
    MPCMouseProcessor::AttachMouse(this, *(struct DeviceInfo **)a2);
    v11 = (_QWORD *)((char *)this + 2328);
    v12 = *((_QWORD *)this + 291);
    if ( v12 )
    {
      *v11 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v13 = CreateChildInputProcessor(2, &v24, (__int64)this + 2328);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x4D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v13);
      __debugbreak();
    }
    v14 = *((_QWORD *)this + 292);
    if ( v14 )
    {
      *((_QWORD *)this + 292) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v15 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v11)(
            *v11,
            &GUID_5f803b2b_07e1_432d_a888_acfaad4b25d8,
            (char *)this + 2336);
    if ( v15 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x4F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v15);
      __debugbreak();
    }
    v16 = *((_QWORD *)this + 293);
    if ( v16 )
    {
      *((_QWORD *)this + 293) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v17 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))*v11)(
            *v11,
            &GUID_9cc90918_33c0_4e97_85b4_faf84befe1a8,
            (char *)this + 2344);
    if ( v17 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x50,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v17);
      __debugbreak();
    }
    v18 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 64LL))(*((_QWORD *)this + 7));
    v19 = *((_QWORD *)this + 290);
    v20 = v18;
    if ( v19 )
    {
      *((_QWORD *)this + 290) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v21 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v20 + 72LL))(v20, (char *)this + 2320);
    if ( v21 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x53,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v21);
      JUMPOUT(0x180096E1ALL);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x42,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpcmouse\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)v8);
    return v9;
  }
}
