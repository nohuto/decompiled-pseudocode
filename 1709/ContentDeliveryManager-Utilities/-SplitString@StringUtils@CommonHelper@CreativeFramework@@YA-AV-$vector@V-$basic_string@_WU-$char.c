/*
 * XREFs of ?SplitString@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@5@PEB_W@Z @ 0x180093D90
 * Callers:
 *     ?GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUHSTRING__@@0@Z @ 0x1800628A4 (-GetTriggerSettingsContainerFromName@Internal@TargetedContent@Services@Windows@@YA-AV-$shared_pt.c)
 * Callees:
 *     ?_Assign_rv@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z @ 0x180033540 (-_Assign_rv@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX$$QEAV12@@Z.c)
 *     ?_Xlen@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEBAXXZ @ 0x180033AFC (-_Xlen@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$all.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18005B1D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?_Reallocate@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@IEAAX_K@Z @ 0x180094478 (-_Reallocate@-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$alloca.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall CreativeFramework::CommonHelper::StringUtils::SplitString(_QWORD *a1, char *a2, _WORD *a3)
{
  char *v4; // rdi
  int v6; // r12d
  __int64 v7; // rcx
  __int64 v8; // rax
  char *v9; // r9
  char *v10; // r8
  __int64 v11; // rdx
  _WORD *v12; // rcx
  char *v13; // rax
  unsigned __int64 v14; // r8
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  char *v17; // rax
  unsigned __int64 v18; // r10
  _QWORD *v19; // rax
  char *i; // rsi
  __int64 v21; // rdx
  _WORD *v22; // rax
  char *v23; // rax
  __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r14
  __int64 v27; // r9
  __int64 v28; // rdx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // r9
  unsigned __int64 v31; // r8
  _QWORD *v32; // r14
  _QWORD *v33; // rcx
  __int64 v34; // r9
  __int64 v35; // rdx
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // r9
  unsigned __int64 v38; // r8
  _QWORD *v39; // rcx
  void *v41[3]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v42; // [rsp+50h] [rbp-10h]

  v4 = a2;
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v6 = 1;
  v7 = *((_QWORD *)a2 + 2);
  if ( v7 )
  {
    if ( *a3 )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( a3[v8] );
    }
    else
    {
      v8 = 0LL;
    }
    if ( *((_QWORD *)a2 + 3) >= 8uLL )
      a2 = *(char **)a2;
    v9 = &a2[2 * v7];
    if ( *((_QWORD *)v4 + 3) < 8uLL )
      v10 = v4;
    else
      v10 = *(char **)v4;
    while ( 1 )
    {
      if ( v10 >= v9 )
      {
        v14 = -1LL;
        goto LABEL_24;
      }
      if ( !v8 )
        break;
      v11 = v8;
      v12 = a3;
      while ( *v12 != *(_WORD *)v10 )
      {
        ++v12;
        if ( !--v11 )
        {
          v12 = 0LL;
          break;
        }
      }
      if ( !v12 )
        break;
      v10 += 2;
    }
    if ( *((_QWORD *)v4 + 3) < 8uLL )
      v13 = v4;
    else
      v13 = *(char **)v4;
    v14 = (v10 - v13) >> 1;
    do
    {
LABEL_24:
      if ( *a3 )
      {
        v15 = -1LL;
        do
          ++v15;
        while ( a3[v15] );
        if ( v15 )
        {
          v16 = *((_QWORD *)v4 + 2);
          if ( v14 < v16 )
          {
            if ( *((_QWORD *)v4 + 3) < 8uLL )
              v17 = v4;
            else
              v17 = *(char **)v4;
            v18 = (unsigned __int64)&v17[2 * v16];
            if ( *((_QWORD *)v4 + 3) < 8uLL )
              v19 = v4;
            else
              v19 = *(_QWORD **)v4;
            for ( i = (char *)v19 + 2 * v14; (unsigned __int64)i < v18; i += 2 )
            {
              v21 = v15;
              v22 = a3;
              while ( *v22 != *(_WORD *)i )
              {
                ++v22;
                if ( !--v21 )
                {
                  v22 = 0LL;
                  break;
                }
              }
              if ( v22 )
              {
                if ( *((_QWORD *)v4 + 3) < 8uLL )
                  v23 = v4;
                else
                  v23 = *(char **)v4;
                v24 = (i - v23) >> 1;
                goto LABEL_48;
              }
            }
          }
        }
      }
      v24 = -1LL;
LABEL_48:
      v42 = 7LL;
      v41[2] = 0LL;
      LOWORD(v41[0]) = 0;
      std::wstring::assign(v41, (void **)v4, v14, v24 - v14);
      v6 |= 2u;
      v25 = a1[1];
      if ( (unsigned __int64)v41 >= v25 || *a1 > (unsigned __int64)v41 )
      {
        v34 = a1[2];
        if ( v25 == v34 && !((__int64)(v34 - v25) >> 5) )
        {
          v35 = (__int64)(v25 - *a1) >> 5;
          if ( v35 == 0x7FFFFFFFFFFFFFFLL )
            std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Xlen();
          v36 = v35 + 1;
          v37 = (v34 - *a1) >> 5;
          v38 = 0LL;
          if ( 0x7FFFFFFFFFFFFFFLL - (v37 >> 1) >= v37 )
            v38 = v37 + (v37 >> 1);
          if ( v38 >= v36 )
            v36 = v38;
          std::vector<std::wstring>::_Reallocate(a1, v36);
        }
        v39 = (_QWORD *)a1[1];
        if ( v39 )
        {
          v39[3] = 7LL;
          v39[2] = 0LL;
          *(_WORD *)v39 = 0;
          std::wstring::_Assign_rv(v39, v41);
        }
        a1[1] += 32LL;
      }
      else
      {
        v26 = (unsigned __int64)v41 - *a1;
        v27 = a1[2];
        if ( v25 == v27 && !((__int64)(v27 - v25) >> 5) )
        {
          v28 = (__int64)(v25 - *a1) >> 5;
          if ( v28 == 0x7FFFFFFFFFFFFFFLL )
            std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Xlen();
          v29 = v28 + 1;
          v30 = (v27 - *a1) >> 5;
          v31 = 0LL;
          if ( 0x7FFFFFFFFFFFFFFLL - (v30 >> 1) >= v30 )
            v31 = v30 + (v30 >> 1);
          if ( v31 >= v29 )
            v29 = v31;
          std::vector<std::wstring>::_Reallocate(a1, v29);
        }
        v32 = (_QWORD *)(*a1 + (v26 & 0xFFFFFFFFFFFFFFE0uLL));
        v33 = (_QWORD *)a1[1];
        if ( v33 )
        {
          v33[3] = 7LL;
          v33[2] = 0LL;
          *(_WORD *)v33 = 0;
          std::wstring::_Assign_rv(v33, v32);
        }
        a1[1] += 32LL;
      }
      if ( v42 >= 8 )
        operator delete(v41[0]);
      v14 = v24 + 1;
    }
    while ( v24 != -1 );
  }
  return a1;
}
