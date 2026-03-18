/*
 * XREFs of MiMarkHiberNotCachedPte @ 0x140485520
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsPfn @ 0x140106380 (MiIsPfn.c)
 *     PoSetHiberRange @ 0x140156AD0 (PoSetHiberRange.c)
 */

__int64 __fastcall MiMarkHiberNotCachedPte(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rax
  char v3; // r9
  int v4; // eax
  BOOL v5; // ecx
  unsigned __int64 v6; // rax
  char v7; // r9
  int v8; // r10d
  void *v9; // r11
  ULONG_PTR v10; // r9
  __int64 v11; // rcx
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v2 = MI_READ_PTE_LOCK_FREE(a2);
  v13 = v2;
  v3 = v2;
  if ( (v2 & 1) != 0 )
  {
    v4 = v2 & 0x10;
    v5 = !v4 && (v3 & 8) != 0;
    if ( v5 || v4 )
    {
      v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v13);
      if ( MiIsPfn((v6 >> 12) & 0xFFFFFFFFFLL) )
      {
        if ( v7 >= 0 )
        {
          if ( v8 )
            return 0LL;
          v10 = 1LL;
        }
        else
        {
          v10 = 512LL;
          if ( v8 <= 1 )
          {
LABEL_17:
            PoSetHiberRange(0LL, 0x14000u, v9, v10, 0x636E6D4Du);
            return 0LL;
          }
          v11 = (unsigned int)(v8 - 1);
          do
          {
            v10 <<= 9;
            --v11;
          }
          while ( v11 );
        }
        if ( v10 )
          goto LABEL_17;
      }
    }
  }
  return 0LL;
}
