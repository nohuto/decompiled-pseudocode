/*
 * XREFs of ?FindWindowA@ViewHelper@@SAJPEAUIMonitorView@Server@Navigation@@V?$function@$$A6A_NPEAUIServerWindow@Server@Navigation@@@Z@std@@PEAPEAUIServerWindow@34@@Z @ 0x180035B70
 * Callers:
 *     ?GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z @ 0x1800355A4 (-GetWindowIdFromViewId@ViewHelper@@SA_KPEAUIViewHierarchy@@I@Z.c)
 *     ?GetProcessIdFromViewId@ViewHelper@@SAKPEAUIViewHierarchy@@I@Z @ 0x1800356B0 (-GetProcessIdFromViewId@ViewHelper@@SAKPEAUIViewHierarchy@@I@Z.c)
 *     ?GetThreadIdFromViewId@ViewHelper@@SAKPEAUIViewHierarchy@@I@Z @ 0x1800357C0 (-GetThreadIdFromViewId@ViewHelper@@SAKPEAUIViewHierarchy@@I@Z.c)
 *     std::_Func_impl__lambda_e02c20e621dd7e71d2931b5fe5336992__std::allocator_int__bool_Navigation::Server::IMonitorView_____ptr64_::_Do_call @ 0x180035F70 (std--_Func_impl__lambda_e02c20e621dd7e71d2931b5fe5336992__std--allocator_int__bool__ea_180035F70.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall ViewHelper::FindWindowA(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // rdx
  unsigned int v12; // edi
  int v13; // eax
  unsigned int v14; // esi
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 (__fastcall ***v18)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v19; // rcx
  __int64 (__fastcall ***v20)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 (__fastcall ***v25)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v31[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+30h]
  int v33; // [rsp+80h] [rbp+38h] BYREF
  __int64 v34; // [rsp+88h] [rbp+40h]
  __int64 v35; // [rsp+90h] [rbp+48h] BYREF
  __int64 (__fastcall ***v36)(_QWORD, GUID *, __int64 *); // [rsp+98h] [rbp+50h] BYREF

  v34 = a2;
  v31[1] = -2LL;
  *a3 = 0LL;
  v35 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 128LL))(a1, &v35);
  if ( v5 < 0 )
  {
    v6 = 283LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
      (const char *)(unsigned int)v5);
    v8 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v9 = *(_QWORD *)(a2 + 56);
    if ( v9 )
    {
      LOBYTE(v7) = v9 != a2;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 32LL))(v9, v7);
      *(_QWORD *)(a2 + 56) = 0LL;
    }
    return (unsigned int)v5;
  }
  v33 = 0;
  v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v35 + 48LL))(v35, &v33);
  if ( v5 < 0 )
  {
    v6 = 287LL;
    goto LABEL_3;
  }
  v12 = 0;
  if ( v33 <= 0 )
  {
LABEL_43:
    v28 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
    v29 = *(_QWORD *)(a2 + 56);
    if ( v29 )
    {
      LOBYTE(v11) = v29 != a2;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 32LL))(v29, v11);
      *(_QWORD *)(a2 + 56) = 0LL;
    }
    return 2147943568LL;
  }
  else
  {
    while ( 1 )
    {
      v36 = 0LL;
      v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v35 + 56LL))(v35, v12, &v36);
      v14 = v13;
      if ( v13 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x123,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
          (const char *)(unsigned int)v13);
        goto LABEL_36;
      }
      v30 = 0LL;
      v15 = (**v36)(v36, &GUID_8b494dca_e0e9_479a_adf3_023a8da54cb7, &v30);
      v14 = v15;
      if ( v15 < 0 )
        break;
      v31[0] = v30;
      v16 = *(_QWORD *)(a2 + 56);
      if ( !v16 )
      {
        std::_Xbad_function_call();
        __debugbreak();
      }
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v16 + 16LL))(v16, v31) )
      {
        v19 = v30;
        if ( v30 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
          v19 = v30;
        }
        *a3 = v19;
        if ( v19 )
        {
          v30 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
        v20 = v36;
        if ( v36 )
        {
          v36 = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v20)[2])(v20);
        }
        v21 = v35;
        if ( v35 )
        {
          v35 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        }
        v22 = *(_QWORD *)(a2 + 56);
        if ( v22 )
        {
          LOBYTE(v11) = v22 != a2;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 32LL))(v22, v11);
          *(_QWORD *)(a2 + 56) = 0LL;
        }
        return 0LL;
      }
      v17 = v30;
      if ( v30 )
      {
        v30 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      v18 = v36;
      if ( v36 )
      {
        v36 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v18)[2])(v18);
      }
      if ( (int)++v12 >= v33 )
        goto LABEL_43;
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x126,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\viewhelper\\lib\\viewhelper.cpp",
      (const char *)(unsigned int)v15);
    v24 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
LABEL_36:
    v25 = v36;
    if ( v36 )
    {
      v36 = 0LL;
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v25)[2])(v25);
    }
    v26 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
    }
    v27 = *(_QWORD *)(a2 + 56);
    if ( v27 )
    {
      LOBYTE(v23) = v27 != a2;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v27 + 32LL))(v27, v23);
      *(_QWORD *)(a2 + 56) = 0LL;
    }
    return v14;
  }
}
