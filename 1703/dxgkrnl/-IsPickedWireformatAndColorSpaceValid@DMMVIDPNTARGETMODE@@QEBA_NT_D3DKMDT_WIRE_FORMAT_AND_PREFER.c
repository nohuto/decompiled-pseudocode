/*
 * XREFs of ?IsPickedWireformatAndColorSpaceValid@DMMVIDPNTARGETMODE@@QEBA_NT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@W4D3DDDI_COLOR_SPACE_TYPE@@@Z @ 0x1C0044BF0
 * Callers:
 *     DmmInitializeAdapter @ 0x1C01223D4 (DmmInitializeAdapter.c)
 * Callees:
 *     <none>
 */

char __fastcall DMMVIDPNTARGETMODE::IsPickedWireformatAndColorSpaceValid(
        DMMVIDPNTARGETMODE *this,
        union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE a2,
        enum D3DDDI_COLOR_SPACE_TYPE a3)
{
  UINT v3; // edx
  unsigned __int64 v4; // rax
  __int64 v6; // rdx

  v3 = a2.Value & 0xFFFFFFFC;
  if ( ((v3 - 1) & v3) != 0 || (*((_DWORD *)this + 32) & v3) == 0 )
    return 0;
  v4 = ((v3 | ((v3 | ((v3 | ((v3 | (v3 >> 6)) >> 6)) >> 6)) >> 6)) >> 2) & 0x3F;
  if ( a3 )
  {
    if ( a3 != D3DDDI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020 )
      return 0;
    if ( (unsigned int)v4 > 0x20 )
      return 0;
    v6 = 0x100010110LL;
    if ( !_bittest64(&v6, v4) )
      return 0;
  }
  else if ( (unsigned int)(v4 - 1) > 1 )
  {
    return 0;
  }
  return 1;
}
