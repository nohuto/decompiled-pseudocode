/*
 * XREFs of ?GetAppViewTitle@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@MEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@Z @ 0x180019990
 * Callers:
 *     ?TryUpdateAndReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAX_K@Z @ 0x180019AD0 (-TryUpdateAndReportTitleChange@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Win.c)
 *     ?SetInFocusAppView@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ_K@Z @ 0x180019F00 (-SetInFocusAppView@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ_.c)
 *     ?GetAppViewTitle@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ_KPEAPEAUHSTRING__@@@Z @ 0x18001A030 (-GetAppViewTitle@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ_KP.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x18008CB1C (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1800A2789 (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::GetAppViewTitle(
        __int64 a1,
        char *a2,
        HWND a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rbp
  __int64 v6; // rdi
  unsigned __int64 v7; // rdx
  char *v8; // r14
  size_t v9; // rbx
  char *v11; // rdi
  size_t v12; // rbx
  WCHAR pString[264]; // [rsp+40h] [rbp-248h] BYREF

  *((_QWORD *)a2 + 2) = 0LL;
  *((_QWORD *)a2 + 3) = 7LL;
  *(_WORD *)a2 = 0;
  if ( InternalGetWindowText(a3, pString, 261) )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( pString[v4] );
    v5 = *((_QWORD *)a2 + 3);
    if ( v4 <= v5 )
    {
      v11 = a2;
      if ( v5 >= 8 )
        v11 = *(char **)a2;
      *((_QWORD *)a2 + 2) = v4;
      v12 = 2 * v4;
      memmove(v11, pString, v12);
      *(_WORD *)&v11[v12] = 0;
    }
    else
    {
      v6 = 0x7FFFFFFFFFFFFFFELL;
      if ( v4 > 0x7FFFFFFFFFFFFFFELL )
        std::_Xlength_error("string too long");
      if ( (v4 | 7) <= 0x7FFFFFFFFFFFFFFELL )
      {
        v7 = v5 >> 1;
        if ( v5 <= 0x7FFFFFFFFFFFFFFELL - (v5 >> 1) )
        {
          v6 = v4 | 7;
          if ( (v4 | 7) < v7 + v5 )
            v6 = v7 + v5;
        }
      }
      v8 = (char *)std::_Allocate<std::_Default_allocate_traits<1>>(v6 + 1, 2LL);
      *((_QWORD *)a2 + 2) = v4;
      *((_QWORD *)a2 + 3) = v6;
      v9 = 2 * v4;
      memcpy_0(v8, pString, v9);
      *(_WORD *)&v8[v9] = 0;
      if ( v5 >= 8 )
        std::_Deallocate(*(void **)a2, v5 + 1, 2uLL);
      *(_QWORD *)a2 = v8;
    }
  }
  return a2;
}
