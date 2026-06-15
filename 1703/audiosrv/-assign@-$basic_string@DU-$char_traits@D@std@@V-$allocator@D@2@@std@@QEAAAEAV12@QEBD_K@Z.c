/*
 * XREFs of ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18007AD94
 * Callers:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD_K@Z @ 0x18007AEAC (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD_K@Z.c)
 * Callees:
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z @ 0x18007AF1C (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K_K@Z.c)
 *     ?_Grow@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA_N_K@Z @ 0x18007AFF8 (-_Grow@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA_N_K@Z.c)
 */

void **__fastcall std::string::assign(void **a1, void **Src, size_t Size)
{
  void **v5; // rbx
  void *v7; // rcx
  bool v8; // cf
  _BYTE *v9; // rax

  v5 = a1;
  if ( (unsigned __int64)a1[3] >= 0x10 )
    a1 = (void **)*a1;
  if ( a1 <= Src && Src < (void **)((char *)a1 + (_QWORD)v5[2]) )
    return (void **)std::string::assign(v5);
  if ( (unsigned __int8)std::string::_Grow(v5, Size) )
  {
    if ( (unsigned __int64)v5[3] < 0x10 )
      v7 = v5;
    else
      v7 = *v5;
    memcpy_0(v7, Src, Size);
    v8 = (unsigned __int64)v5[3] < 0x10;
    v5[2] = (void *)Size;
    if ( v8 )
      v9 = v5;
    else
      v9 = *v5;
    v9[Size] = 0;
  }
  return v5;
}
