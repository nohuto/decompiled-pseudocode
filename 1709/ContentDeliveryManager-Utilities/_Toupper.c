/*
 * XREFs of _Toupper @ 0x1800A0EF8
 * Callers:
 *     ?do_toupper@?$ctype@D@std@@MEBADD@Z @ 0x18009E2C0 (-do_toupper@-$ctype@D@std@@MEBADD@Z.c)
 *     ?do_toupper@?$ctype@D@std@@MEBAPEBDPEADPEBD@Z @ 0x18009E2D0 (-do_toupper@-$ctype@D@std@@MEBAPEBDPEADPEBD@Z.c)
 * Callees:
 *     _GetLocaleHandleByColl @ 0x1800A03FC (_GetLocaleHandleByColl.c)
 *     _GetLocaleHandleById @ 0x1800A0400 (_GetLocaleHandleById.c)
 *     __crtLCMapStringA_Stub @ 0x1800A04C8 (__crtLCMapStringA_Stub.c)
 */

int __cdecl Toupper(int a1, const _Ctypevec *a2)
{
  __int64 v2; // rbx
  int v4; // esi
  __int64 LocaleHandleById; // rbp
  unsigned int v6; // r14d
  __int64 LocaleHandleByColl; // rax
  int result; // eax
  unsigned int v9; // edx
  int v10; // eax
  bool v11; // zf
  char v12; // [rsp+78h] [rbp+10h] BYREF
  char v13; // [rsp+79h] [rbp+11h]
  char v14; // [rsp+7Ah] [rbp+12h]
  unsigned __int8 v15; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int8 v16; // [rsp+81h] [rbp+19h]

  v2 = a1;
  v4 = 2;
  if ( a2 )
  {
    LocaleHandleByColl = GetLocaleHandleByColl(&a2->_Page);
    v6 = *(&a2->_Page + 1);
    LocaleHandleById = LocaleHandleByColl;
  }
  else
  {
    LocaleHandleById = GetLocaleHandleById(2u);
    v6 = ___lc_codepage_func();
  }
  if ( !LocaleHandleById )
  {
    if ( (unsigned int)(v2 - 97) <= 0x19 )
      LODWORD(v2) = v2 - 32;
    return v2;
  }
  if ( (unsigned int)v2 < 0x100 )
  {
    if ( !a2 )
    {
      if ( !islower(v2) )
        return v2;
      goto LABEL_14;
    }
    if ( (a2->_Table[v2] & 2) == 0 )
      return v2;
  }
  if ( !a2 )
  {
LABEL_14:
    v9 = __pctype_func()[BYTE1(v2)] & 0x8000;
    goto LABEL_16;
  }
  v9 = ((unsigned int)a2->_Table[BYTE1(v2)] >> 15) & 1;
LABEL_16:
  if ( v9 )
  {
    v12 = BYTE1(v2);
    v13 = v2;
    v14 = 0;
  }
  else
  {
    v12 = v2;
    v4 = 1;
    v13 = 0;
  }
  v10 = _crtLCMapStringA_Stub(0LL, LocaleHandleById, 512LL, (__int64)&v12, v4, (__int64)&v15, 3, v6, 1);
  if ( !v10 )
    return v2;
  v11 = v10 == 1;
  result = v15;
  if ( !v11 )
    return v16 | (v15 << 8);
  return result;
}
