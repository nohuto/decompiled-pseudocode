/*
 * XREFs of ?vSpRemovePresent@@YAXPEAUHDEV__@@PEAU_PRESENT@@@Z @ 0x1C0263228
 * Callers:
 *     GreDeleteSpriteOverlapPresent @ 0x1C0060550 (GreDeleteSpriteOverlapPresent.c)
 *     ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C0259C84 (-GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vSpRemovePresent(_QWORD *a1, struct _PRESENT *a2)
{
  __int64 v2; // rax
  __int64 *v3; // rcx

  v2 = a1[20];
  if ( (struct _PRESENT *)v2 == a2 )
  {
    a1[20] = *((_QWORD *)a2 + 1);
  }
  else
  {
    while ( v2 )
    {
      v3 = (__int64 *)(v2 + 8);
      if ( *(struct _PRESENT **)(v2 + 8) == a2 )
        *v3 = *((_QWORD *)a2 + 1);
      v2 = *v3;
    }
  }
}
