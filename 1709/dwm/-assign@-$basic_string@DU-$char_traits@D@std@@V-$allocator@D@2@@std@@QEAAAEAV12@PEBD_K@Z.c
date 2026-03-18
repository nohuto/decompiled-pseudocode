/*
 * XREFs of ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x1400031B4
 * Callers:
 *     ?message@_Generic_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x1400033F0 (-message@_Generic_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 *     ?message@_Iostream_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x140003450 (-message@_Iostream_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator.c)
 *     ?message@_System_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x1400034D0 (-message@_System_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 * Callees:
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x140002EC0 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     ?_Xlen@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBAXXZ @ 0x140003034 (-_Xlen@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBAXXZ.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1400030A4 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     memcpy_0 @ 0x140003F22 (memcpy_0.c)
 */

void **__fastcall std::string::assign(_QWORD *a1, char *Src, size_t Size)
{
  _QWORD *v5; // rbx
  char *v6; // rax
  _BYTE *v7; // rax
  _BYTE *v9; // rax
  void *v10; // rcx
  bool v11; // cf
  _BYTE *v12; // rax

  v5 = a1;
  if ( !Src )
    goto LABEL_13;
  v6 = a1[3] < 0x10uLL ? (char *)a1 : (char *)*a1;
  if ( Src < v6 )
    goto LABEL_13;
  if ( a1[3] >= 0x10uLL )
    a1 = (_QWORD *)*a1;
  if ( (char *)a1 + v5[2] <= Src )
  {
LABEL_13:
    if ( Size == -1LL )
      std::string::_Xlen();
    if ( v5[3] >= Size )
    {
      if ( Size )
        goto LABEL_22;
      v5[2] = 0LL;
      if ( v5[3] < 0x10uLL )
        v9 = v5;
      else
        v9 = (_BYTE *)*v5;
      *v9 = 0;
    }
    else
    {
      std::string::_Copy((const void **)v5, Size, v5[2]);
    }
    if ( !Size )
      return (void **)v5;
LABEL_22:
    if ( v5[3] < 0x10uLL )
      v10 = v5;
    else
      v10 = (void *)*v5;
    if ( Size )
      memcpy_0(v10, Src, Size);
    v11 = v5[3] < 0x10uLL;
    v5[2] = Size;
    if ( v11 )
      v12 = v5;
    else
      v12 = (_BYTE *)*v5;
    v12[Size] = 0;
    return (void **)v5;
  }
  if ( v5[3] < 0x10uLL )
    v7 = v5;
  else
    v7 = (_BYTE *)*v5;
  return std::string::assign((void **)v5, (void **)v5, Src - v7, Size);
}
