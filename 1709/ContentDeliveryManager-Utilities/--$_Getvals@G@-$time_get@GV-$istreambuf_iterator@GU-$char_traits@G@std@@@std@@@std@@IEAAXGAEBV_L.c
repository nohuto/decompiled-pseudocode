/*
 * XREFs of ??$_Getvals@G@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@IEAAXGAEBV_Locinfo@1@@Z @ 0x1800A1368
 * Callers:
 *     ?_Init@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@IEAAXAEBV_Locinfo@2@@Z @ 0x1800A6868 (-_Init@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@IEAAXAEBV_Locinfo@2.c)
 * Callees:
 *     ??$_Maklocstr@G@std@@YAPEAGPEBDPEAGAEBU_Cvtvec@@@Z @ 0x1800264F8 (--$_Maklocstr@G@std@@YAPEAGPEBDPEAGAEBU_Cvtvec@@@Z.c)
 *     ??4?$_Yarn@D@std@@QEAAAEAV01@PEBD@Z @ 0x18004A650 (--4-$_Yarn@D@std@@QEAAAEAV01@PEBD@Z.c)
 *     _Getcvt @ 0x180098B04 (_Getcvt.c)
 */

wchar_t *__fastcall std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getvals<unsigned short>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _Cvtvec *v5; // rax
  char *v6; // rax
  char *v7; // rdi
  char *v8; // rcx
  char *v9; // rax
  char *v10; // rdi
  char *v11; // rcx
  wchar_t *result; // rax
  _Cvtvec v13; // [rsp+20h] [rbp-38h] BYREF

  v5 = Getcvt(&v13);
  *(_OWORD *)(a1 + 44) = *(_OWORD *)&v5->_Page;
  *(_OWORD *)(a1 + 60) = *(_OWORD *)&v5->_Isleadbyte[4];
  *(_OWORD *)(a1 + 76) = *(_OWORD *)&v5->_Isleadbyte[20];
  v6 = _Getdays();
  v7 = v6;
  if ( v6 )
  {
    std::_Yarn<char>::operator=((void **)(a3 + 8), v6);
    free(v7);
  }
  if ( *(_QWORD *)(a3 + 8) )
  {
    v8 = *(char **)(a3 + 8);
    if ( !v8 )
      v8 = (char *)(a3 + 16);
  }
  else
  {
    v8 = ":Sun:Sunday:Mon:Monday:Tue:Tuesday:Wed:Wednesday:Thu:Thursday:Fri:Friday:Sat:Saturday";
  }
  *(_QWORD *)(a1 + 16) = std::_Maklocstr<unsigned short>(v8, 0LL, (const _Cvtvec *)(a1 + 44));
  v9 = _Getmonths();
  v10 = v9;
  if ( v9 )
  {
    std::_Yarn<char>::operator=((void **)(a3 + 24), v9);
    free(v10);
  }
  if ( *(_QWORD *)(a3 + 24) )
  {
    v11 = *(char **)(a3 + 24);
    if ( !v11 )
      v11 = (char *)(a3 + 32);
  }
  else
  {
    v11 = ":Jan:January:Feb:February:Mar:March:Apr:April:May:May:Jun:June:Jul:July:Aug:August:Sep:September:Oct:October:N"
          "ov:November:Dec:December";
  }
  *(_QWORD *)(a1 + 24) = std::_Maklocstr<unsigned short>(v11, 0LL, (const _Cvtvec *)(a1 + 44));
  result = std::_Maklocstr<unsigned short>(":AM:am:PM:pm", 0LL, (const _Cvtvec *)(a1 + 44));
  *(_QWORD *)(a1 + 32) = result;
  return result;
}
