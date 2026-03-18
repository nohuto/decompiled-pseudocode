/*
 * XREFs of ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x1801200C4
 * Callers:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@PEBD@Z @ 0x18011E110 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@PEBD@Z.c)
 * Callees:
 *     ?_Grow@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA_N_K_N@Z @ 0x180007438 (-_Grow@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA_N_K_N@Z.c)
 *     memcpy_0 @ 0x1800C5D86 (memcpy_0.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18011FFE4 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 */

void **__fastcall std::string::assign(void **a1, char *Src, size_t Size)
{
  void **v5; // rbx
  char *v6; // rax
  _BYTE *v7; // rax
  void *v9; // rcx
  bool v10; // cf
  _BYTE *v11; // rax

  v5 = a1;
  if ( !Src )
    goto LABEL_26;
  v6 = (unsigned __int64)a1[3] < 0x10 ? (char *)a1 : (char *)*a1;
  if ( Src < v6 )
    goto LABEL_26;
  if ( (unsigned __int64)a1[3] >= 0x10 )
    a1 = (void **)*a1;
  if ( (char *)a1 + (unsigned __int64)v5[2] > Src )
  {
    if ( (unsigned __int64)v5[3] < 0x10 )
      v7 = v5;
    else
      v7 = *v5;
    return std::string::assign(v5, v5, Src - v7, Size);
  }
  else
  {
LABEL_26:
    if ( std::string::_Grow(v5, Size) )
    {
      if ( (unsigned __int64)v5[3] < 0x10 )
        v9 = v5;
      else
        v9 = *v5;
      if ( Size )
        memcpy_0(v9, Src, Size);
      v10 = (unsigned __int64)v5[3] < 0x10;
      v5[2] = (void *)Size;
      if ( v10 )
        v11 = v5;
      else
        v11 = *v5;
      v11[Size] = 0;
    }
    return v5;
  }
}
