/*
 * XREFs of ?GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x180084EB4
 * Callers:
 *     ?LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ @ 0x18007F4FC (-LaunchNotification@NotificationManagerService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180033540 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18005B1D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?_Grow@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA_N_K_N@Z @ 0x18005B304 (-_Grow@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA_N_K_N@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18005B3D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180065040 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180065194 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z @ 0x180067260 (-replace@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z.c)
 *     ?find@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z @ 0x180077CB8 (-find@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBA_KPEB_W_K1@Z.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=6
void **__fastcall CreativeFramework::NotificationManager::ToastHelpers::GetToastContentXML(__int64 a1, void **a2)
{
  int v4; // r14d
  __int64 *v5; // rdi
  __int64 *v6; // rbx
  int v7; // r14d
  unsigned __int64 v8; // rdx
  void **v9; // rax
  void **v10; // rax
  void **v11; // r15
  char *v12; // r12
  unsigned __int16 *v13; // r15
  char *v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rax
  void **v19; // rax
  unsigned __int64 v20; // rcx
  __int64 *v21; // rax
  __int64 *i; // rax
  unsigned __int64 v23; // rbx
  unsigned __int64 v24; // rcx
  __int64 *v25; // rax
  void **v26; // rbx
  void *v27; // rdx
  unsigned __int64 v28; // r8
  void **v29; // rax
  void **v30; // rdi
  unsigned __int64 v31; // r8
  char *v32; // rdx
  void *v34[2]; // [rsp+50h] [rbp-41h] BYREF
  __int64 v35; // [rsp+60h] [rbp-31h]
  unsigned __int64 v36; // [rsp+68h] [rbp-29h]
  void *Src[2]; // [rsp+70h] [rbp-21h] BYREF
  unsigned __int64 v38; // [rsp+80h] [rbp-11h]
  unsigned __int64 v39; // [rsp+88h] [rbp-9h]
  void *v40[2]; // [rsp+90h] [rbp-1h] BYREF
  void *v41; // [rsp+A0h] [rbp+Fh]
  unsigned __int64 v42; // [rsp+A8h] [rbp+17h]

  v4 = 0;
  v39 = 7LL;
  v38 = 0LL;
  LOWORD(Src[0]) = 0;
  std::wstring::assign(Src, (void **)a1, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  v5 = *(__int64 **)(a1 + 32);
  v6 = (__int64 *)*v5;
  while ( v6 != v5 )
  {
    v36 = 7LL;
    v35 = 0LL;
    LOWORD(v34[0]) = 0;
    v7 = v4 | 2;
    v8 = (asc_18013196C[0] != 0) + v6[6];
    if ( v8 != 7 && std::wstring::_Grow(v34, v8, 1) )
    {
      v35 = 0LL;
      v9 = v34;
      if ( v36 >= 8 )
        v9 = (void **)v34[0];
      *(_WORD *)v9 = 0;
    }
    std::wstring::append(v34, (char *)L"{", asc_18013196C[0] != 0);
    std::wstring::append((_WORD **)v34, v6 + 4, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    v10 = (void **)std::wstring::append(v34, (char *)L"}", asc_180131968[0] != 0);
    v11 = v10;
    v42 = 7LL;
    v41 = 0LL;
    LOWORD(v40[0]) = 0;
    if ( (unsigned __int64)v10[3] >= 8 )
    {
      v40[0] = *v10;
      *v10 = 0LL;
    }
    else if ( v10[2] != (void *)-1LL )
    {
      memmove(v40, v10, 2LL * ((_QWORD)v10[2] + 1));
    }
    v41 = v11[2];
    v42 = (unsigned __int64)v11[3];
    v11[3] = (void *)7;
    v11[2] = 0LL;
    *(_WORD *)v11 = 0;
    if ( v36 >= 8 )
      operator delete(v34[0]);
    v12 = (char *)(v6 + 8);
    if ( (unsigned __int64)v6[11] >= 8 )
      v12 = *(char **)v12;
    v13 = (unsigned __int16 *)v40;
    if ( v42 >= 8 )
      v13 = (unsigned __int16 *)v40[0];
    v14 = (char *)Src;
    if ( v39 >= 8 )
      v14 = (char *)Src[0];
    v36 = 7LL;
    v35 = 0LL;
    LOWORD(v34[0]) = 0;
    if ( *(_WORD *)v14 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( *(_WORD *)&v14[2 * v15] );
    }
    else
    {
      v15 = 0LL;
    }
    std::wstring::assign(v34, v14, v15);
    v4 = v7 | 0xC;
    if ( *v13 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( v13[v16] );
      goto LABEL_39;
    }
LABEL_36:
    v16 = 0LL;
LABEL_39:
    while ( 1 )
    {
      v20 = std::wstring::find((char *)v34, v13, 0LL, v16);
      if ( v20 == -1LL )
        break;
      v17 = -1LL;
      do
        ++v17;
      while ( v13[v17] );
      if ( *(_WORD *)v12 )
      {
        v18 = -1LL;
        do
          ++v18;
        while ( *(_WORD *)&v12[2 * v18] );
      }
      else
      {
        v18 = 0LL;
      }
      v19 = (void **)std::wstring::replace(v34, v20, v17, v12, v18);
      if ( v34 != v19 )
        std::wstring::assign(v34, v19, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
      if ( !*v13 )
        goto LABEL_36;
      v16 = -1LL;
      do
        ++v16;
      while ( v13[v16] );
    }
    if ( v39 >= 8 )
      operator delete(Src[0]);
    v39 = 7LL;
    v38 = 0LL;
    LOWORD(Src[0]) = 0;
    std::wstring::_Assign_rv(Src, v34);
    if ( v36 >= 8 )
      operator delete(v34[0]);
    if ( v42 >= 8 )
      operator delete(v40[0]);
    if ( !*((_BYTE *)v6 + 25) )
    {
      v21 = (__int64 *)v6[2];
      if ( *((_BYTE *)v21 + 25) )
      {
        for ( i = (__int64 *)v6[1]; !*((_BYTE *)i + 25) && v6 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v6 = i;
        v6 = i;
      }
      else
      {
        do
        {
          v6 = v21;
          v21 = (__int64 *)*v21;
        }
        while ( !*((_BYTE *)v21 + 25) );
      }
    }
  }
  a2[3] = (void *)7;
  a2[2] = 0LL;
  *(_WORD *)a2 = 0;
  v23 = (unsigned __int64)a2[2];
  v24 = v38;
  if ( v23 <= v38 && v38 != 7 )
  {
    if ( std::wstring::_Grow(a2, v38, 1) )
    {
      a2[2] = (void *)v23;
      if ( (unsigned __int64)a2[3] < 8 )
        v25 = (__int64 *)a2;
      else
        v25 = (__int64 *)*a2;
      *((_WORD *)v25 + v23) = 0;
    }
    v24 = v38;
  }
  v26 = Src;
  v27 = Src[0];
  v28 = v39;
  if ( v39 >= 8 )
    v26 = (void **)Src[0];
  v29 = Src;
  if ( v39 >= 8 )
    v29 = (void **)Src[0];
  v30 = (void **)((char *)v29 + 2 * v24);
  if ( v26 != v30 )
  {
    do
    {
      if ( *(_WORD *)v26 == 38 )
      {
        v31 = 5LL;
        v32 = (char *)L"&amp;";
      }
      else
      {
        v31 = 1LL;
        v32 = (char *)v26;
      }
      std::wstring::append(a2, v32, v31);
      v26 = (void **)((char *)v26 + 2);
    }
    while ( v26 != v30 );
    v28 = v39;
    v27 = Src[0];
  }
  if ( v28 >= 8 )
    operator delete(v27);
  return a2;
}
