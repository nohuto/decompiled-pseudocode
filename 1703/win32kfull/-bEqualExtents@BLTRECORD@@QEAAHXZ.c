/*
 * XREFs of ?bEqualExtents@BLTRECORD@@QEAAHXZ @ 0x1C0095CE8
 * Callers:
 *     GreStretchBltInternal @ 0x1C0094BA0 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C00F1F6C (GreMaskBlt.c)
 *     GrePlgBlt @ 0x1C026DEAC (GrePlgBlt.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall BLTRECORD::bEqualExtents(BLTRECORD *this)
{
  return *((_DWORD *)this + 46) - *((_DWORD *)this + 44) == *((_DWORD *)this + 40) - *((_DWORD *)this + 38)
      && *((_DWORD *)this + 47) - *((_DWORD *)this + 45) == *((_DWORD *)this + 41) - *((_DWORD *)this + 39);
}
