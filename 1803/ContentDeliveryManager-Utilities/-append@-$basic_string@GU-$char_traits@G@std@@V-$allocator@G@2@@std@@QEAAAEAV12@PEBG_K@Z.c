/*
 * XREFs of ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x18004E8A4
 * Callers:
 *     ?from_bytes@?$wstring_convert@V?$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV?$allocator@G@2@V?$allocator@D@2@@std@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@PEBD0@Z @ 0x18004E55C (-from_bytes@-$wstring_convert@V-$codecvt_utf8@G$0BAPPPP@$0A@@std@@GV-$allocator@G@2@V-$allocator.c)
 *     ?TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri@DataStoreCache@@YAJPEAUHSTRING__@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180095BFC (-TryRemoveImplicitResourcesPrefixFromShortenedMsResourceUri@DataStoreCache@@YAJPEAUHSTRING__@@AE.c)
 * Callees:
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x1800181AC (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K0@Z @ 0x180038A50 (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K0@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180039C8C (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     memcpy_0 @ 0x1800C10B9 (memcpy_0.c)
 */

_WORD **__fastcall std::wstring::append(_QWORD *Src, char *a2, unsigned __int64 a3)
{
  _QWORD *v5; // rbx
  char *v6; // rax
  _BYTE *v7; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdi
  bool v11; // cf
  _WORD *v12; // rax
  char *v13; // rcx
  unsigned __int64 v14; // rax
  _WORD *v15; // rax

  v5 = Src;
  if ( !a2 )
    goto LABEL_13;
  v6 = Src[3] < 8uLL ? (char *)Src : (char *)*Src;
  if ( a2 < v6 )
    goto LABEL_13;
  if ( Src[3] >= 8uLL )
    Src = (_QWORD *)*Src;
  if ( (char *)Src + 2 * v5[2] <= a2 )
  {
LABEL_13:
    v9 = v5[2];
    if ( ~v9 <= a3 )
      std::wstring::_Xlen();
    if ( !a3 )
      return (_WORD **)v5;
    v10 = v9 + a3;
    if ( v9 + a3 > 0x7FFFFFFFFFFFFFFELL )
      std::wstring::_Xlen();
    if ( v5[3] >= v10 )
    {
      if ( v10 )
        goto LABEL_24;
      v11 = v5[3] < 8uLL;
      v5[2] = 0LL;
      if ( v11 )
        v12 = v5;
      else
        v12 = (_WORD *)*v5;
      *v12 = 0;
    }
    else
    {
      std::wstring::_Copy((const void **)v5, v9 + a3, (const void *)v9);
    }
    if ( !v10 )
      return (_WORD **)v5;
LABEL_24:
    if ( v5[3] < 8uLL )
      v13 = (char *)v5;
    else
      v13 = (char *)*v5;
    memcpy_0(&v13[2 * v5[2]], a2, 2 * a3);
    v14 = v5[3];
    v5[2] = v10;
    if ( v14 < 8 )
      v15 = v5;
    else
      v15 = (_WORD *)*v5;
    v15[v10] = 0;
    return (_WORD **)v5;
  }
  if ( v5[3] < 8uLL )
    v7 = v5;
  else
    v7 = (_BYTE *)*v5;
  return std::wstring::append((_WORD **)v5, v5, (a2 - v7) >> 1, a3);
}
