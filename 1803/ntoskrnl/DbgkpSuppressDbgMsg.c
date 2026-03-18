/*
 * XREFs of DbgkpSuppressDbgMsg @ 0x1407116B0
 * Callers:
 *     DbgkUnMapViewOfSection @ 0x1404D7C28 (DbgkUnMapViewOfSection.c)
 *     DbgkMapViewOfSection @ 0x1404E91B8 (DbgkMapViewOfSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DbgkpSuppressDbgMsg(__int64 a1)
{
  unsigned __int64 v2; // rax
  __int16 v3; // cx
  unsigned __int64 v4; // rax
  __int16 v5; // ax
  unsigned int v7; // [rsp+0h] [rbp-18h]

  v7 = 0;
  if ( *(char *)(a1 + 6126) >= 0 )
  {
    v2 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
    if ( v2 )
    {
      v3 = *(_WORD *)(v2 + 8);
      if ( v3 == 332 || v3 == 452 )
      {
        v4 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
        if ( v4 )
        {
          v5 = *(_WORD *)(v4 + 8);
          if ( v5 == 332 || v5 == 452 )
            return *(char *)(a1 + 12234) < 0;
        }
      }
    }
  }
  else
  {
    return 1;
  }
  return v7;
}
