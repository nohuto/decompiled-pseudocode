/*
 * XREFs of HmgQueryAltLock @ 0x1C008C2B0
 * Callers:
 *     vDynamicConvertNewSurfaceDCs @ 0x1C0078060 (vDynamicConvertNewSurfaceDCs.c)
 *     bMigrateSurfaceForConversion @ 0x1C00F22E0 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgQueryAltLock(unsigned int a1)
{
  GdiHandleManager *v1; // rbx
  unsigned int v2; // eax
  __int64 v3; // r10
  unsigned __int64 v4; // rdx
  unsigned int v5; // r9d
  __int64 v6; // r8
  signed int v7; // ecx
  __int64 v8; // rax

  v1 = gpHandleManager;
  v2 = GdiHandleManager::DecodeIndex(
         (GdiHandleEntryDirectory **)gpHandleManager,
         (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000);
  v3 = *((_QWORD *)v1 + 2);
  v4 = v2;
  v5 = *(_DWORD *)(v3 + 2056);
  if ( v2 >= v5 + ((*(unsigned __int16 *)(v3 + 2) + 0xFFFF) << 16) )
    goto LABEL_2;
  v6 = 0LL;
  if ( v2 >= v5 )
  {
    v7 = ((v2 - v5) >> 16) + 1;
    if ( (v2 - v5) >> 16 == -2 )
    {
LABEL_2:
      v6 = 0LL;
      return *(unsigned int *)(v6 + 8);
    }
  }
  else
  {
    v7 = 0;
  }
  v8 = *(_QWORD *)(v3 + 8LL * v7 + 8);
  if ( v7 )
    v4 = (_DWORD)v4 - (v7 << 16) - v5 + 0x10000;
  if ( (unsigned int)v4 < *(_DWORD *)(v8 + 20) )
    v6 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v8 + 24) + 8 * (v4 >> 8)) + 16LL * (unsigned __int8)v4 + 8);
  return *(unsigned int *)(v6 + 8);
}
