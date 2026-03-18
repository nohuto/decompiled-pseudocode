/*
 * XREFs of ?NlsHomeOrClearProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C012B790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NlsHomeOrClearProc(struct tagKE *a1)
{
  __int16 v1; // dx
  __int16 v2; // dx
  bool v3; // zf
  __int16 v4; // dx

  v1 = *((_WORD *)a1 + 1);
  if ( (v1 & 0x800) == 0 )
  {
    v2 = v1 & 0x8F00;
    v3 = (fNlsKbdConfiguration & 4) == 0;
    *((_WORD *)a1 + 1) = v2;
    if ( v3 )
      v4 = v2 | 0xC;
    else
      v4 = v2 | 0x24;
    *((_WORD *)a1 + 1) = v4;
  }
  return 1LL;
}
