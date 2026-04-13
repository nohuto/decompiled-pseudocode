/*
 * XREFs of ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x18004EA00
 * Callers:
 *     ?to_bytes@?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@PEBG0@Z @ 0x18004E310 (-to_bytes@-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator@D.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x1800181AC (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x1800189C8 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18004EB38 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     memcpy_0 @ 0x1800C10B9 (memcpy_0.c)
 */

_QWORD *__fastcall std::string::append(_QWORD *Src, char *a2, size_t Size)
{
  _QWORD *v5; // rbx
  char *v6; // rax
  _BYTE *v7; // rax
  size_t v9; // r8
  size_t v10; // rdi
  _BYTE *v11; // rax
  char *v12; // rcx
  unsigned __int64 v13; // rax
  _BYTE *v14; // rax

  v5 = Src;
  if ( !a2 )
    goto LABEL_13;
  v6 = Src[3] < 0x10uLL ? (char *)Src : (char *)*Src;
  if ( a2 < v6 )
    goto LABEL_13;
  if ( Src[3] >= 0x10uLL )
    Src = (_QWORD *)*Src;
  if ( (char *)Src + v5[2] <= a2 )
  {
LABEL_13:
    v9 = v5[2];
    if ( ~v9 <= Size )
      std::wstring::_Xlen();
    if ( !Size )
      return v5;
    v10 = v9 + Size;
    if ( v9 + Size == -1LL )
      std::wstring::_Xlen();
    if ( v5[3] >= v10 )
    {
      if ( v10 )
        goto LABEL_24;
      v5[2] = 0LL;
      if ( v5[3] < 0x10uLL )
        v11 = v5;
      else
        v11 = (_BYTE *)*v5;
      *v11 = 0;
    }
    else
    {
      std::string::_Copy((const void **)v5, v9 + Size, v9);
    }
    if ( !v10 )
      return v5;
LABEL_24:
    if ( v5[3] < 0x10uLL )
      v12 = (char *)v5;
    else
      v12 = (char *)*v5;
    memcpy_0(&v12[v5[2]], a2, Size);
    v13 = v5[3];
    v5[2] = v10;
    if ( v13 < 0x10 )
      v14 = v5;
    else
      v14 = (_BYTE *)*v5;
    v14[v10] = 0;
    return v5;
  }
  if ( v5[3] < 0x10uLL )
    v7 = v5;
  else
    v7 = (_BYTE *)*v5;
  return (_QWORD *)std::string::append(v5, v5, a2 - v7, Size);
}
