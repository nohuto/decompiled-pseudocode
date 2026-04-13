/*
 * XREFs of ??_E?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAAPEAXI@Z @ 0x180042C64
 * Callers:
 *     ??_E?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$4PPPPPPPM@A@EAAPEAXI@Z @ 0x180044F80 (--_E-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$4PPPPPPPM@A@EAAPEAXI@Z.c)
 * Callees:
 *     ??1?$basic_stringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x180042A18 (--1-$basic_stringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x18009831C (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 */

__int64 __fastcall std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::`vector deleting destructor'(
        __int64 a1,
        char a2)
{
  __int64 v3; // rdi

  v3 = a1 - 152;
  std::basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>::~basic_stringstream<unsigned short,std::char_traits<unsigned short>,std::allocator<unsigned short>>(a1);
  *(_QWORD *)(v3 + 152) = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor((struct std::ios_base *)(v3 + 152));
  if ( (a2 & 1) != 0 )
    operator delete((void *)v3);
  return v3;
}
