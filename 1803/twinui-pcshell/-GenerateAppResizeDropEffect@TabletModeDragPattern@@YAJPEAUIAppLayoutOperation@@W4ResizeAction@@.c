/*
 * XREFs of ?GenerateAppResizeDropEffect@TabletModeDragPattern@@YAJPEAUIAppLayoutOperation@@W4ResizeAction@@PEAV?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@PEAPEAG@Z @ 0x1802E4C04
 * Callers:
 *     ?UpdateUIADropEffect@AppResizeView@@AEAAJPEAUIAppLayoutOperation@@W4ResizeAction@@@Z @ 0x1802E0DA8 (-UpdateUIADropEffect@AppResizeView@@AEAAJPEAUIAppLayoutOperation@@W4ResizeAction@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1801AD200 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     TabletModeDragPattern::GenerateStringWithMap @ 0x1802E4F0C (TabletModeDragPattern--GenerateStringWithMap.c)
 */

__int64 __fastcall TabletModeDragPattern::GenerateAppResizeDropEffect(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  unsigned int v7; // r14d
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // edi
  int v11; // eax
  int v12; // eax
  __int64 v13; // rbx
  int v14; // r13d
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rbx
  int StringWithMap; // eax
  int v24[2]; // [rsp+40h] [rbp-20h] BYREF
  int v25[2]; // [rsp+48h] [rbp-18h] BYREF
  CWinRTApplicationView *v26; // [rsp+50h] [rbp-10h] BYREF
  CWinRTApplicationView *v27; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v29; // [rsp+A8h] [rbp+48h] BYREF

  *a4 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( a2 < 0 )
    goto LABEL_29;
  if ( a2 <= 3 )
  {
    v29 = 0LL;
    v10 = 2004;
    v7 = 2;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
    v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 48LL))(a1, &v29);
    v9 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xEC,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
        (const char *)(unsigned int)v11);
LABEL_24:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
      goto LABEL_30;
    }
    v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 80LL))(v29, 1LL);
    *(_QWORD *)v25 = 0LL;
    v13 = v29;
    v14 = v12;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v25);
    v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, int *))(*(_QWORD *)v13 + 104LL))(
            v13,
            0LL,
            1LL,
            &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
            v25);
    v9 = v15;
    if ( v15 < 0 )
    {
      v16 = 239LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
        (const char *)(unsigned int)v15);
LABEL_23:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v25);
      goto LABEL_24;
    }
    v17 = *(_QWORD *)v25;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v26);
    v15 = (*(__int64 (__fastcall **)(__int64, GUID *, CWinRTApplicationView **))(*(_QWORD *)v17 + 48LL))(
            v17,
            &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
            &v26);
    v9 = v15;
    if ( v15 < 0 )
    {
      v16 = 240LL;
      goto LABEL_16;
    }
    if ( v14 == 2 )
    {
      v18 = v29;
      *(_QWORD *)v24 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v24);
      v19 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, GUID *, int *))(*(_QWORD *)v18 + 104LL))(
              v18,
              1LL,
              1LL,
              &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
              v24);
      v9 = v19;
      if ( v19 < 0 )
      {
        v20 = 244LL;
LABEL_22:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v20,
          (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
          (const char *)(unsigned int)v19);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v24);
        goto LABEL_23;
      }
      v21 = *(_QWORD *)v24;
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v27);
      v19 = (*(__int64 (__fastcall **)(__int64, GUID *, CWinRTApplicationView **))(*(_QWORD *)v21 + 48LL))(
              v21,
              &GUID_871f602a_2b58_42b4_8c4b_6c43d642c06f,
              &v27);
      v9 = v19;
      if ( v19 < 0 )
      {
        v20 = 245LL;
        goto LABEL_22;
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v24);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v25);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v29);
    goto LABEL_27;
  }
  if ( a2 > 5 )
  {
LABEL_29:
    v9 = 0;
    goto LABEL_30;
  }
  *(_QWORD *)v24 = 0LL;
  v7 = 1;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)v24);
  v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a1 + 112LL))(a1, v24);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD6,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
      (const char *)(unsigned int)v8);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)v24);
    goto LABEL_30;
  }
  if ( *(_QWORD *)v24 )
  {
    Microsoft::WRL::ComPtr<IApplicationView>::operator=(&v26, (CWinRTApplicationView **)v24);
    v10 = 2003;
  }
  else
  {
    v10 = 2002;
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((CWinRTApplicationView **)v24);
LABEL_27:
  StringWithMap = TabletModeDragPattern::GenerateStringWithMap(v7, v26, v27, a3, v10, 0, a4);
  v9 = StringWithMap;
  if ( StringWithMap < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFD,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
      (const char *)(unsigned int)StringWithMap);
LABEL_30:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v27);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v26);
  return v9;
}
