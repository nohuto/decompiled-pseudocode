/*
 * XREFs of ?HasContent@CSpriteVisual@@UEAA_NXZ @ 0x180022270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CSpriteVisual::HasContent(CSpriteVisual *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((_QWORD *)this + 30) || (*(_DWORD *)(*((_QWORD *)this + 26) + 4LL) & 0x100) != 0 )
    return 1;
  return v1;
}
