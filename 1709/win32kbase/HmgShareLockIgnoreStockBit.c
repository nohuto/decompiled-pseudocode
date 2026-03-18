/*
 * XREFs of HmgShareLockIgnoreStockBit @ 0x1C0070104
 * Callers:
 *     EngModifySurface @ 0x1C00897E0 (EngModifySurface.c)
 * Callees:
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004DA80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C004E540 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 *     ?TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z @ 0x1C0070220 (-TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z.c)
 *     ??0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z @ 0x1C00A9654 (--0HANDLELOCK@@QEAA@PEAUHOBJ__@@HHH@Z.c)
 */

__int64 __fastcall HmgShareLockIgnoreStockBit(struct HOBJ__ *a1)
{
  unsigned int v1; // edi
  __int64 v2; // rbx
  GdiHandleManager *v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // r9
  unsigned __int64 v6; // rdx
  unsigned int v7; // r8d
  unsigned int v8; // ecx
  __int64 v9; // r9
  __int64 v11; // [rsp+30h] [rbp-28h] BYREF
  int v12; // [rsp+38h] [rbp-20h]

  v1 = (unsigned int)a1;
  v2 = 0LL;
  HANDLELOCK::HANDLELOCK((HANDLELOCK *)&v11, a1, 0, 0, 0);
  if ( v12 )
  {
    if ( *(_BYTE *)(v11 + 14) == 5 && ((*(unsigned __int16 *)(v11 + 12) ^ HIWORD(v1)) & 0xFFFFFF7F) == 0 )
    {
      v3 = gpHandleManager;
      v4 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v11 & 0xFFFFFF);
      v5 = *((_QWORD *)v3 + 2);
      v6 = v4;
      v7 = *(_DWORD *)(v5 + 2056);
      if ( v4 >= v7 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16) )
        goto LABEL_15;
      if ( v4 >= v7 )
        v8 = ((v4 - v7) >> 16) + 1;
      else
        v8 = 0;
      v9 = *(_QWORD *)(v5 + 8LL * v8 + 8);
      if ( v8 )
        v6 = ((1 - v8) << 16) - v7 + v4;
      if ( (unsigned int)v6 >= *(_DWORD *)(v9 + 20) )
LABEL_15:
        v2 = 0LL;
      else
        v2 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * (v6 >> 8)) + 16LL * (unsigned __int8)v6 + 8);
      ++*(_DWORD *)(v2 + 8);
      TrackHmgrReferenceIncrement(5u, (struct OBJECT *)v2);
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v11);
    if ( v12 )
      HANDLELOCK::vUnlock((HANDLELOCK *)&v11);
  }
  return v2;
}
