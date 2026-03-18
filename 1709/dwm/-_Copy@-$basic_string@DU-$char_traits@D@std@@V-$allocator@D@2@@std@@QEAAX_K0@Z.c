/*
 * XREFs of ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x140002EC0
 * Callers:
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1400030A4 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x1400031B4 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x140002D1C (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x140003014 (-_Xbad_alloc@std@@YAXXZ.c)
 *     ??3@YAXPEAX@Z_0 @ 0x140003EE7 (--3@YAXPEAX@Z_0.c)
 *     memcpy_0 @ 0x140003F22 (memcpy_0.c)
 */

void __fastcall std::string::_Copy(const void **Src, unsigned __int64 a2, size_t a3)
{
  size_t v3; // rsi
  const void **v4; // rbx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rcx
  void *v8; // r14
  const void *v9; // rdx
  void *v10; // rax
  _QWORD *v11; // rdx
  _QWORD v12[11]; // [rsp+0h] [rbp-58h] BYREF
  void *v16; // [rsp+78h] [rbp+20h]

  v12[4] = -2LL;
  v3 = a3;
  v4 = Src;
  v5 = a2 | 0xF;
  if ( (a2 | 0xF) == 0xFFFFFFFFFFFFFFFFuLL )
  {
    v5 = a2;
  }
  else
  {
    v6 = (unsigned __int64)Src[3];
    v7 = v6 >> 1;
    if ( v6 >> 1 > v5 / 3 )
    {
      v5 = v7 + v6;
      if ( v6 > -2LL - v7 )
        v5 = -2LL;
    }
  }
  try
  {
    v8 = 0LL;
    if ( v5 != -1LL )
    {
      v8 = operator new(v5 + 1);
      if ( !v8 )
        std::_Xbad_alloc();
    }
  }
  catch ( ... )
  {
    try
    {
      v10 = 0LL;
      if ( a2 != -1LL )
      {
        v10 = operator new(a2 + 1);
        if ( !v10 )
          std::_Xbad_alloc();
      }
      v16 = v10;
    }
    catch ( ... )
    {
      v11 = v12;
      LOBYTE(v11) = 1;
      std::string::_Tidy(Src, v11, 0LL);
      throw;
    }
    v4 = Src;
    v3 = a3;
    v5 = a2;
    v8 = v16;
  }
  if ( v3 )
  {
    if ( (unsigned __int64)v4[3] < 0x10 )
      v9 = v4;
    else
      v9 = *v4;
    memcpy_0(v8, v9, v3);
  }
  if ( (unsigned __int64)v4[3] >= 0x10 )
    operator delete((void *)*v4);
  *(_BYTE *)v4 = 0;
  *v4 = v8;
  v4[3] = (const void *)v5;
  v4[2] = (const void *)v3;
  if ( v5 >= 0x10 )
    v4 = (const void **)v8;
  *((_BYTE *)v4 + v3) = 0;
}
