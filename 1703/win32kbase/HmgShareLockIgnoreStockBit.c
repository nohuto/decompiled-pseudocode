/*
 * XREFs of HmgShareLockIgnoreStockBit @ 0x1C0083CAC
 * Callers:
 *     EngModifySurface @ 0x1C00827B0 (EngModifySurface.c)
 * Callees:
 *     ?TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z @ 0x1C002E8AC (-TrackHmgrReferenceIncrement@@YAXEPEAVOBJECT@@@Z.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0030AC0 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@AEAAXIHH@Z @ 0x1C0030C40 (-vLockHandle@HANDLELOCK@@AEAAXIHH@Z.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C0030E80 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?DecodeIndex@GdiHandleManager@@QEAAII@Z @ 0x1C0033280 (-DecodeIndex@GdiHandleManager@@QEAAII@Z.c)
 */

__int64 __fastcall HmgShareLockIgnoreStockBit(unsigned int a1)
{
  __int64 v2; // rbx
  GdiHandleManager *v3; // rbx
  unsigned int v4; // eax
  __int64 v5; // r9
  unsigned __int64 v6; // rdx
  unsigned int v7; // r8d
  signed int v8; // ecx
  __int64 v9; // rax
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+28h] [rbp-20h]

  v2 = 0LL;
  v11 = 0LL;
  v12 = 0;
  HANDLELOCK::vLockHandle((HANDLELOCK *)&v11, (unsigned __int16)a1 | (a1 >> 8) & 0xFF0000, 0, 0);
  if ( HANDLELOCK::bValid((HANDLELOCK *)&v11) )
  {
    if ( *(_BYTE *)(v11 + 14) != 5 || ((*(unsigned __int16 *)(v11 + 12) ^ HIWORD(a1)) & 0xFFFFFF7F) != 0 )
      goto LABEL_12;
    v3 = gpHandleManager;
    v4 = GdiHandleManager::DecodeIndex((GdiHandleEntryDirectory **)gpHandleManager, *(_DWORD *)v11 & 0xFFFFFF);
    v5 = *((_QWORD *)v3 + 2);
    v6 = v4;
    v7 = *(_DWORD *)(v5 + 2056);
    if ( v4 >= v7 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16) )
      goto LABEL_16;
    if ( v4 >= v7 )
    {
      v8 = ((v4 - v7) >> 16) + 1;
      if ( (v4 - v7) >> 16 == -2 )
        goto LABEL_16;
    }
    else
    {
      v8 = 0;
    }
    v9 = *(_QWORD *)(v5 + 8LL * v8 + 8);
    if ( v8 )
      v6 = (_DWORD)v6 - (v8 << 16) - v7 + 0x10000;
    if ( (unsigned int)v6 < *(_DWORD *)(v9 + 20) )
    {
      v2 = *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * (v6 >> 8)) + 16LL * (unsigned __int8)v6 + 8);
LABEL_11:
      ++*(_DWORD *)(v2 + 8);
      TrackHmgrReferenceIncrement(5, (struct OBJECT *)v2);
LABEL_12:
      HANDLELOCK::vUnlock((HANDLELOCK *)&v11);
      goto LABEL_13;
    }
LABEL_16:
    v2 = 0LL;
    goto LABEL_11;
  }
LABEL_13:
  if ( v12 )
    HANDLELOCK::vUnlock((HANDLELOCK *)&v11);
  return v2;
}
