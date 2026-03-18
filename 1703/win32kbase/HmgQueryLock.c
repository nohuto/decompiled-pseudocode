/*
 * XREFs of HmgQueryLock @ 0x1C00422D8
 * Callers:
 *     bDeleteDCInternal @ 0x1C0042230 (bDeleteDCInternal.c)
 * Callees:
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgQueryLock(unsigned int a1)
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
    goto LABEL_9;
  v6 = 0LL;
  if ( v2 >= v5 )
  {
    v7 = ((v2 - v5) >> 16) + 1;
    if ( (v2 - v5) >> 16 != -2 )
      goto LABEL_4;
LABEL_9:
    v6 = 0LL;
    return *(unsigned __int16 *)(v6 + 12);
  }
  v7 = 0;
LABEL_4:
  v8 = *(_QWORD *)(v3 + 8LL * v7 + 8);
  if ( v7 )
    v4 = (_DWORD)v4 - (v7 << 16) - v5 + 0x10000;
  if ( (unsigned int)v4 < *(_DWORD *)(v8 + 20) )
    v6 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v8 + 24) + 8 * (v4 >> 8)) + 16LL * (unsigned __int8)v4 + 8);
  return *(unsigned __int16 *)(v6 + 12);
}
