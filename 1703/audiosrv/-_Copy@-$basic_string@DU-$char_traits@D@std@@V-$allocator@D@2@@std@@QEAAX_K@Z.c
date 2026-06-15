/*
 * XREFs of ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K@Z @ 0x18007FD1C
 * Callers:
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x180018220 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 *     ?str@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@XZ @ 0x18001A510 (-str@-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEBA-AV-$basic_string@DU-$c.c)
 *     ?_Grow@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA_N_K@Z @ 0x18007AFF8 (-_Grow@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA_N_K@Z.c)
 * Callees:
 *     ?_Allocate@std@@YAPEAX_K0_N@Z @ 0x180025A1C (-_Allocate@std@@YAPEAX_K0_N@Z.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 */

void __fastcall std::string::_Copy(const void **Src, unsigned __int64 a2)
{
  const void **v2; // rdi
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  _QWORD *v6; // r14
  size_t v7; // r8

  v2 = Src;
  if ( a2 == -1LL )
    std::_Xlength_error("string too long");
  v3 = (unsigned __int64)Src[3];
  v4 = a2 | 0xF;
  if ( (a2 | 0xF) == 0xFFFFFFFFFFFFFFFFuLL )
  {
    v4 = a2;
  }
  else
  {
    v5 = v3 >> 1;
    if ( v3 >> 1 > v4 / 3 )
    {
      v4 = v5 + v3;
      if ( v3 > -2LL - v5 )
        v4 = -2LL;
    }
  }
  try
  {
    v6 = std::_Allocate(v4 + 1, 1uLL);
  }
  catch ( ... )
  {
    v2 = Src;
    v4 = a2;
    v6 = std::_Allocate(a2 + 1, 1uLL);
  }
  v7 = (size_t)v2[2] + 1;
  if ( (unsigned __int64)v2[3] < 0x10 )
  {
    memcpy_0(v6, v2, v7);
  }
  else
  {
    memcpy_0(v6, *v2, v7);
    std::_Deallocate(*v2, v3 + 1, 1uLL);
  }
  *v2 = v6;
  v2[3] = (const void *)v4;
}
