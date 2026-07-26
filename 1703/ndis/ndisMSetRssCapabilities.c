/*
 * XREFs of ndisMSetRssCapabilities @ 0x1C00AAB48
 * Callers:
 *     ndisMSetGeneralAttributes @ 0x1C0014630 (ndisMSetGeneralAttributes.c)
 * Callees:
 *     memmove @ 0x1C0028840 (memmove.c)
 */

void __fastcall ndisMSetRssCapabilities(__int64 a1, _BYTE *a2)
{
  unsigned __int16 v3; // ax
  size_t v4; // rbx

  if ( *a2 == 0x88 )
  {
    if ( a2[1] )
    {
      v3 = *((_WORD *)a2 + 1);
      if ( v3 >= 0x10u )
      {
        v4 = 20LL;
        if ( v3 < 0x14u )
          v4 = v3;
        memmove((void *)(a1 + 2696), a2, v4);
        *(_WORD *)(a1 + 2698) = v4;
      }
    }
  }
}
