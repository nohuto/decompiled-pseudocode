/*
 * XREFs of TabletModeDragPattern::GenerateStringWithMap @ 0x1802E4F0C
 * Callers:
 *     ?GenerateAppResizeDropEffect@TabletModeDragPattern@@YAJPEAUIAppLayoutOperation@@W4ResizeAction@@PEAV?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@PEAPEAG@Z @ 0x1802E4C04 (-GenerateAppResizeDropEffect@TabletModeDragPattern@@YAJPEAUIAppLayoutOperation@@W4ResizeAction@@.c)
 *     ?GenerateWindowArrangementDropEffect@TabletModeDragPattern@@YAJPEAUIApplicationView@@PEAUIAppLayout@@W4ARRANGEMENT_ACTION@@PEAV?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@PEAPEAG@Z @ 0x1802E51EC (-GenerateWindowArrangementDropEffect@TabletModeDragPattern@@YAJPEAUIApplicationView@@PEAUIAppLay.c)
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18001CF60 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18001D0C0 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ??1?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x18001D2D4 (--1-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindAndSize@ResourceString@Internal@Windows@@SA_NPEAUHINSTANCE__@@IGPEAPEBGPEAG@Z @ 0x18021D04C (-FindAndSize@ResourceString@Internal@Windows@@SA_NPEAUHINSTANCE__@@IGPEAPEBGPEAG@Z.c)
 *     TabletModeDragPattern::GetWindowTitleWithMap @ 0x1802E547C (TabletModeDragPattern--GetWindowTitleWithMap.c)
 *     ?InitializeMessage@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1802E55DC (-InitializeMessage@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA.c)
 */

__int64 __fastcall TabletModeDragPattern::GenerateStringWithMap(
        int a1,
        ApplicationViewHelpers *a2,
        ApplicationViewHelpers *a3,
        __int64 a4,
        unsigned int a5,
        char a6,
        _QWORD *a7)
{
  _QWORD *v7; // r13
  int v10; // ebx
  int v12; // edi
  __int64 v13; // r8
  int WindowTitleWithMap; // eax
  __int64 v15; // r8
  int v16; // edi
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  int v19; // eax
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rdx
  unsigned __int16 *v25; // [rsp+38h] [rbp-51h] BYREF
  __int64 v26; // [rsp+40h] [rbp-49h] BYREF
  __int64 v27; // [rsp+48h] [rbp-41h]
  __int64 v28; // [rsp+50h] [rbp-39h]
  wchar_t *v29; // [rsp+58h] [rbp-31h] BYREF
  __int64 v30; // [rsp+60h] [rbp-29h]
  __int64 v31; // [rsp+68h] [rbp-21h]
  __int64 v32; // [rsp+70h] [rbp-19h] BYREF
  __int64 v33; // [rsp+78h] [rbp-11h]
  __int64 v34; // [rsp+80h] [rbp-9h]
  const wchar_t *v35[4]; // [rsp+88h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+47h]

  v7 = a7;
  memset(v35, 0, 24);
  *a7 = 0LL;
  v10 = -2147467259;
  v12 = -2147467259;
  if ( !Windows::Internal::ResourceString::FindAndSize(
          &_ImageBase,
          a5,
          (__int64)a3,
          (const unsigned __int16 **)&v25,
          (unsigned __int16 *)&a7)
    || (v12 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                (__int64)v35,
                (__int64)v25,
                (unsigned __int16)a7),
        v12 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
      (const char *)(unsigned int)v12);
    v10 = v12;
    goto LABEL_34;
  }
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  if ( a2 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v26);
    v27 = -1LL;
    v28 = -1LL;
    WindowTitleWithMap = TabletModeDragPattern::GetWindowTitleWithMap(a2);
    v16 = WindowTitleWithMap;
    if ( WindowTitleWithMap < 0 )
    {
      v17 = (unsigned int)WindowTitleWithMap;
      v18 = 65LL;
LABEL_31:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
        (const char *)v17);
      v10 = v16;
      goto LABEL_32;
    }
  }
  else
  {
    v16 = -2147467259;
    if ( !Windows::Internal::ResourceString::FindAndSize(
            &_ImageBase,
            0x7D1u,
            v13,
            (const unsigned __int16 **)&v25,
            (unsigned __int16 *)&a7)
      || (v16 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                  (__int64)&v26,
                  (__int64)v25,
                  (unsigned __int16)a7),
          v16 < 0) )
    {
      v17 = (unsigned int)v16;
      v18 = 69LL;
      goto LABEL_31;
    }
  }
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  if ( a3 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v32);
    v33 = -1LL;
    v34 = -1LL;
    v19 = TabletModeDragPattern::GetWindowTitleWithMap(a3);
    v10 = v19;
    if ( v19 < 0 )
    {
      v20 = (unsigned int)v19;
      v21 = 76LL;
LABEL_28:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v21,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
        (const char *)v20);
      goto LABEL_29;
    }
  }
  else if ( !Windows::Internal::ResourceString::FindAndSize(
               &_ImageBase,
               0x7D1u,
               v15,
               (const unsigned __int16 **)&v25,
               (unsigned __int16 *)&a7)
         || (v10 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
                     (__int64)&v32,
                     (__int64)v25,
                     (unsigned __int16)a7),
             v10 < 0) )
  {
    v20 = (unsigned int)v10;
    v21 = 80LL;
    goto LABEL_28;
  }
  v29 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  if ( a1 != 2 )
  {
    if ( a6 )
    {
      v22 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeMessage(
              &v29,
              v35[0],
              v26);
      v10 = v22;
      if ( v22 < 0 )
      {
        v23 = 101LL;
        goto LABEL_24;
      }
    }
    else
    {
      v22 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
              &v29,
              v35[0],
              v26);
      v10 = v22;
      if ( v22 < 0 )
      {
        v23 = 106LL;
        goto LABEL_24;
      }
    }
    goto LABEL_25;
  }
  if ( !a6 )
  {
    v22 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
            &v29,
            v35[0],
            v26,
            v32);
    v10 = v22;
    if ( v22 < 0 )
    {
      v23 = 94LL;
      goto LABEL_24;
    }
LABEL_25:
    v10 = 0;
    *v7 = v29;
    v29 = 0LL;
    v31 = 0LL;
    v30 = 0LL;
    goto LABEL_26;
  }
  v22 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeMessage(
          &v29,
          v35[0],
          v26);
  v10 = v22;
  if ( v22 >= 0 )
    goto LABEL_25;
  v23 = 90LL;
LABEL_24:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v23,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
    (const char *)(unsigned int)v22);
LABEL_26:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)&v29);
LABEL_29:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)&v32);
LABEL_32:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)&v26);
LABEL_34:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>((__int64)v35);
  return (unsigned int)v10;
}
