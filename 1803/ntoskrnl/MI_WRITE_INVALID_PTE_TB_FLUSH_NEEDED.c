/*
 * XREFs of MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED @ 0x140052A30
 * Callers:
 *     MiConvertPrivateToProto @ 0x140054AF0 (MiConvertPrivateToProto.c)
 *     MiTerminateWsle @ 0x14012B31C (MiTerminateWsle.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1400BB318 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 */

__int64 __fastcall MI_WRITE_INVALID_PTE_TB_FLUSH_NEEDED(unsigned __int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // r9
  BOOL v5; // r10d
  char v6; // r11
  unsigned __int8 v7; // al
  unsigned __int8 v8; // r11

  v5 = MiPteInShadowRange(a1);
  v6 = 32;
  if ( v5 && (unsigned int)MiPteHasShadow(v2, v1, v3, v4) )
    LOBYTE(v3) = v6 | v3;
  if ( (MiFlags & 0x800) != 0 )
  {
    LOBYTE(v3) = v6;
  }
  else if ( (MiFlags & 0x4000000) != 0 )
  {
    _mm_lfence();
  }
  if ( ((unsigned __int8)v3 & (unsigned __int8)v6) != 0 )
  {
    *v4 = v1;
    if ( v5 )
      MiWritePteShadow(v4, v1);
  }
  else
  {
    v7 = MI_INTERLOCKED_EXCHANGE_PTE(v4, v1);
    if ( (v7 & v8) == 0 )
      return 0LL;
  }
  return 1LL;
}
