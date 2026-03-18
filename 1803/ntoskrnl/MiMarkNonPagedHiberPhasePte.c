/*
 * XREFs of MiMarkNonPagedHiberPhasePte @ 0x140485710
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPfn @ 0x140106380 (MiIsPfn.c)
 *     PoSetHiberRange @ 0x140156AD0 (PoSetHiberRange.c)
 *     MiIsPfnTradable @ 0x140265120 (MiIsPfnTradable.c)
 */

__int64 __fastcall MiMarkNonPagedHiberPhasePte(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  char v3; // r9
  void *v4; // r10
  int v5; // r11d
  ULONG_PTR v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = MI_READ_PTE_LOCK_FREE(a2);
  if ( (v11 & 1) != 0 )
  {
    v2 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v11);
    if ( MiIsPfn((v2 >> 12) & 0xFFFFFFFFFLL) )
    {
      if ( v3 >= 0 )
      {
        if ( v5 )
          return 0LL;
        v8 = 48LL * (_QWORD)v4 - 0x58000000000LL;
        if ( *(_WORD *)(v8 + 32) <= 1u && (unsigned int)MiIsPfnTradable((_BYTE *)v8) && (*(_BYTE *)(v9 + 35) & 8) == 0 )
          return 0LL;
        v6 = 1LL;
      }
      else
      {
        v6 = 512LL;
        if ( v5 <= 1 )
        {
LABEL_14:
          PoSetHiberRange(0LL, 0x14000u, v4, v6, 0x6C64704Eu);
          return 0LL;
        }
        v7 = (unsigned int)(v5 - 1);
        do
        {
          v6 <<= 9;
          --v7;
        }
        while ( v7 );
      }
      if ( v6 )
        goto LABEL_14;
    }
  }
  return 0LL;
}
