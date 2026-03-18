/*
 * XREFs of MiMarkHiberNotCachedPages @ 0x14040D7C0
 * Callers:
 *     <none>
 * Callees:
 *     MiIsPfn @ 0x1400DC8A0 (MiIsPfn.c)
 *     PoSetHiberRange @ 0x14013EF30 (PoSetHiberRange.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiMarkHiberNotCachedPages(__int64 a1, __int64 *a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 *i; // rbx
  unsigned __int64 v7; // rax
  void *v8; // r10
  unsigned __int8 v9; // al
  ULONG_PTR v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rax

  if ( (unsigned __int64)a2 <= a3 )
  {
    for ( i = a2; (unsigned __int64)i <= a3; ++i )
    {
      if ( a4 )
      {
        v7 = MI_READ_PTE_LOCK_FREE((unsigned __int64)i);
        if ( !MiIsPfn((v7 >> 12) & 0xFFFFFFFFFLL) )
          continue;
        v9 = *(_BYTE *)(48LL * (_QWORD)v8 - 0x58000000000LL + 34);
        if ( v9 >= 0x40u && (v9 & 0xC0) != 0x80 )
          continue;
        v10 = 512LL;
        if ( a4 > 1 )
        {
          v11 = a4 - 1;
          do
          {
            v10 <<= 9;
            --v11;
          }
          while ( v11 );
        }
      }
      else
      {
        v12 = *i;
        if ( (*i & 1) == 0 || ((v12 & 0x10) != 0 || (v12 & 8) == 0) && (v12 & 0x10) == 0 )
          continue;
        v13 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)i);
        if ( !MiIsPfn(v13) )
          continue;
        v10 = 1LL;
      }
      PoSetHiberRange(0LL, 0x14000u, v8, v10, 0x636E6D4Du);
    }
  }
}
