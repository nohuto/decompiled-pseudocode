/*
 * XREFs of MiMarkHiberNotCachedPages @ 0x14042F1F0
 * Callers:
 *     <none>
 * Callees:
 *     MiIsPfn @ 0x140101790 (MiIsPfn.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     PoSetHiberRange @ 0x140241970 (PoSetHiberRange.c)
 */

void __fastcall MiMarkHiberNotCachedPages(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 *i; // rbx
  unsigned __int64 v7; // rax
  void *v8; // r10
  ULONG_PTR v9; // r9
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax

  if ( (unsigned __int64)a2 <= a3 )
  {
    for ( i = a2; (unsigned __int64)i <= a3; ++i )
    {
      if ( a4 )
      {
        v7 = MI_GET_PAGE_FRAME_FROM_PTE(i);
        if ( !MiIsPfn(v7) || (*(_BYTE *)(48LL * (_QWORD)v8 - 0x57FFFFFFFDELL) & 0x40) != 0 )
          continue;
        v9 = 512LL;
        if ( a4 > 1 )
        {
          v10 = a4 - 1;
          do
          {
            v9 <<= 9;
            --v10;
          }
          while ( v10 );
        }
      }
      else
      {
        v11 = *i;
        if ( (*i & 1) == 0 || (v11 & 0x18) != 8 && (v11 & 0x10) == 0 )
          continue;
        v12 = MI_GET_PAGE_FRAME_FROM_PTE(i);
        if ( !MiIsPfn(v12) )
          continue;
        v9 = 1LL;
      }
      PoSetHiberRange(0LL, 0x14000u, v8, v9, 0x636E6D4Du);
    }
  }
}
