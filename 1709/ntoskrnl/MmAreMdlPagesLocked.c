/*
 * XREFs of MmAreMdlPagesLocked @ 0x1407A5AD4
 * Callers:
 *     VERIFY_BUFFER_LOCKED @ 0x1407AA320 (VERIFY_BUFFER_LOCKED.c)
 *     VerifierMmBuildMdlForNonPagedPool @ 0x1407C4070 (VerifierMmBuildMdlForNonPagedPool.c)
 * Callees:
 *     MiIsPfn @ 0x140101790 (MiIsPfn.c)
 *     MiPfnIsNonPagedPool @ 0x1402214A8 (MiPfnIsNonPagedPool.c)
 *     MiLockPage @ 0x14022A294 (MiLockPage.c)
 *     MiUnlockPage @ 0x14022A2A8 (MiUnlockPage.c)
 *     MiIsPfnTradable @ 0x14022A520 (MiIsPfnTradable.c)
 */

__int64 __fastcall MmAreMdlPagesLocked(_DWORD *a1)
{
  unsigned __int64 *v1; // rsi
  unsigned __int64 v2; // rdi
  __int64 v3; // r9
  __int64 v4; // rbx
  unsigned __int8 v5; // r8
  unsigned __int64 v6; // rdx
  __int64 v7; // rcx

  v1 = (unsigned __int64 *)(a1 + 12);
  v2 = (((a1[8] + a1[11]) & 0xFFF) + (unsigned __int64)(unsigned int)a1[10] + 4095) >> 12;
  while ( !MiIsPfn(*v1) )
  {
LABEL_14:
    ++v1;
    if ( !--v2 )
      return 1LL;
  }
  v4 = 48 * v3 - 0x58000000000LL;
  if ( dword_140388B14 == 2 )
    v5 = 17;
  else
    v5 = MiLockPage(48 * v3 - 0x58000000000LL);
  v6 = *(unsigned __int16 *)(v4 + 32);
  if ( v6 > (*(_QWORD *)(v4 + 24) & 0x3FFFFFFFFFFFFFFFuLL)
    || (*(_QWORD *)(v4 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL
    || ((*(_QWORD *)(v4 + 40) >> 54) & 7) == 1
    || (unsigned __int16)v6 > 1u
    || !(unsigned int)MiIsPfnTradable((_BYTE *)v4)
    || MiPfnIsNonPagedPool(v7) )
  {
    if ( v5 != 17 )
      MiUnlockPage(v4, v5);
    goto LABEL_14;
  }
  if ( v5 != 17 )
    MiUnlockPage(v4, v5);
  return 0LL;
}
