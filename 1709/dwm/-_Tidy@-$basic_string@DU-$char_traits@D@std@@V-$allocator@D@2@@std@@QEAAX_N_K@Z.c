/*
 * XREFs of ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_N_K@Z @ 0x140002FBC
 * Callers:
 *     sub_140006A01 @ 0x140006A01 (sub_140006A01.c)
 * Callees:
 *     ??3@YAXPEAX@Z_0 @ 0x140003EE7 (--3@YAXPEAX@Z_0.c)
 *     memcpy_0 @ 0x140003F22 (memcpy_0.c)
 */

void __fastcall std::string::_Tidy(void **a1, char a2, size_t a3)
{
  void *v5; // rsi

  if ( a2 && (unsigned __int64)a1[3] >= 0x10 )
  {
    v5 = *a1;
    if ( a3 )
      memcpy_0(a1, *a1, a3);
    operator delete(v5);
  }
  a1[3] = (void *)15;
  a1[2] = (void *)a3;
  *((_BYTE *)a1 + a3) = 0;
}
