/*
 * XREFs of ?ShareCount@HANDLELOCK@@QEAAKXZ @ 0x1C004DC58
 * Callers:
 *     bDeleteBrush @ 0x1C0062D60 (bDeleteBrush.c)
 *     HmgMarkLazyDelete @ 0x1C007B530 (HmgMarkLazyDelete.c)
 *     HmgSwapLockedHandleContents @ 0x1C00EFD50 (HmgSwapLockedHandleContents.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HANDLELOCK::ShareCount(HANDLELOCK *this)
{
  GdiHandleManager *v1; // rbx
  unsigned int v2; // eax
  __int64 v3; // r11
  __int64 v4; // rdx
  unsigned int v5; // r9d
  unsigned int v6; // r10d
  unsigned int v7; // ecx
  __int64 v8; // rax

  v1 = gpHandleManager;
  v2 = GdiHandleManager::DecodeIndex(gpHandleManager, **(_DWORD **)this & 0xFFFFFF);
  v3 = *((_QWORD *)v1 + 2);
  v4 = 0LL;
  v5 = v2;
  v6 = *(_DWORD *)(v3 + 2056);
  if ( v2 < v6 + ((*(unsigned __int16 *)(v3 + 2) + 0xFFFF) << 16) )
  {
    if ( v2 >= v6 )
      v7 = ((v2 - v6) >> 16) + 1;
    else
      v7 = 0;
    v8 = *(_QWORD *)(v3 + 8LL * v7 + 8);
    if ( v7 )
      v5 += ((1 - v7) << 16) - v6;
    if ( v5 < *(_DWORD *)(v8 + 20) )
      v4 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v8 + 24) + 8 * ((unsigned __int64)v5 >> 8))
                     + 16LL * (unsigned __int8)v5
                     + 8);
  }
  return *(unsigned int *)(v4 + 8);
}
