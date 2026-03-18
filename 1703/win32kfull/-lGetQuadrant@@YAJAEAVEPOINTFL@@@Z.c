/*
 * XREFs of ?lGetQuadrant@@YAJAEAVEPOINTFL@@@Z @ 0x1C027E22C
 * Callers:
 *     GreAngleArc @ 0x1C027E284 (GreAngleArc.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C007DA54 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 */

__int64 __fastcall lGetQuadrant(struct EPOINTFL *a1)
{
  int v1; // r8d
  unsigned int v2; // r8d

  v1 = 0;
  if ( *((float *)a1 + 1) >= 0.0 )
  {
    if ( (*(float *)a1 < 0.0 || EFLOAT::bIsZero(a1)) && EFLOAT::bIsZero((struct EPOINTFL *)((char *)a1 + 4)) )
      ++v2;
  }
  else
  {
    LOBYTE(v1) = *(float *)a1 < 0.0;
    return 3 - (unsigned int)(v1 != 0);
  }
  return v2;
}
