/*
 * XREFs of ?VidSchiIsExpectedVSyncCookie2@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C00228EC
 * Callers:
 *     ?VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0003C90 (-VidSchiIsExpectedVSyncCookie@@YAHPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_V.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiIsExpectedVSyncCookie2(
        struct _VIDSCH_GLOBAL *a1,
        struct VIDSCH_FLIP_QUEUE_ENTRY *a2,
        struct _VIDSCH_VSYNC_COOKIE *a3)
{
  __int64 v3; // r10
  unsigned int v4; // r9d
  bool v5; // zf
  int v6; // eax
  char v7; // cl
  char v8; // bl
  __int64 v9; // r11
  int v10; // eax

  v3 = *((_QWORD *)a2 + 144);
  if ( (*((_DWORD *)a2 + 278) & 0x10) != 0 )
    v4 = (unsigned __int8)*(_DWORD *)v3 | *(unsigned __int8 *)(v3 + 1);
  else
    v4 = (1 << *((_DWORD *)a1 + 32)) - 1;
  v5 = !_BitScanForward((unsigned int *)&v6, v4);
  v7 = -1;
  if ( !v5 )
    v7 = v6;
  v8 = 0;
  if ( !v4 )
    return 1LL;
  while ( 1 )
  {
    v9 = *(_QWORD *)(((8 * *(_DWORD *)(v3 + 8) + 167) & 0xFFFFFFF8) * v8 + v3 + 24);
    if ( v9 )
    {
      if ( v9 != *((_QWORD *)a3 + 2 * v7 + 14) )
        break;
    }
    v10 = 1 << v7;
    v7 = -1;
    v4 &= ~v10;
    v5 = !_BitScanForward((unsigned int *)&v10, v4);
    if ( !v5 )
      v7 = v10;
    ++v8;
    if ( !v4 )
      return 1LL;
  }
  return 0LL;
}
