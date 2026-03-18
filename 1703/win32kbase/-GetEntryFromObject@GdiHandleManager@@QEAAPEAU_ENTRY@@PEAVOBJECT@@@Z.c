/*
 * XREFs of ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C0033040
 * Callers:
 *     HmgIsObjectOwnedByW32Pid @ 0x1C002BAA4 (HmgIsObjectOwnedByW32Pid.c)
 *     bFreeDCAttributesWorker @ 0x1C002BBD0 (bFreeDCAttributesWorker.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C002F598 (-vCleanupDCs@@YAXK@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0030780 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C003338C (-_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C00391F0 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C003A694 (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C003A6E0 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     NtGdiCreateRectRgn @ 0x1C00593E0 (NtGdiCreateRectRgn.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C0080354 (-vCleanupRegions@@YAXK@Z.c)
 *     ?SwapShareCount@OBJECT@@SAXPEAV1@0@Z @ 0x1C008C57C (-SwapShareCount@OBJECT@@SAXPEAV1@0@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00EC6E0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreIntersectVisRect @ 0x1C00FC860 (GreIntersectVisRect.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0033500 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

struct _ENTRY *__fastcall GdiHandleManager::GetEntryFromObject(GdiHandleEntryDirectory **this, struct OBJECT *a2)
{
  unsigned int v3; // ebx
  GdiHandleEntryDirectory *v5; // r13
  unsigned int v6; // ecx
  struct OBJECT *v7; // rbp
  signed int v8; // edx
  __int64 v9; // r8
  unsigned int v10; // eax
  __int64 v11; // r14
  unsigned int v12; // edx
  signed int v13; // ecx
  __int64 v14; // rax

  v3 = (unsigned __int16)*(_DWORD *)a2 | (*(_DWORD *)a2 >> 8) & 0xFF0000;
  if ( v3 >= 0x10000 )
  {
    if ( *(_DWORD *)this > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(this[2], (unsigned __int16)*(_DWORD *)a2, 1) + 13) == HIWORD(v3) )
        v3 = (unsigned __int16)v3;
    }
    else
    {
      v3 = (unsigned __int16)*(_DWORD *)a2;
    }
  }
  v5 = this[2];
  v6 = *((_DWORD *)v5 + 514);
  if ( v3 >= v6 + ((*((unsigned __int16 *)v5 + 1) + 0xFFFF) << 16) )
    goto LABEL_28;
  v7 = 0LL;
  if ( v3 >= v6 )
  {
    v8 = ((v3 - v6) >> 16) + 1;
    if ( (v3 - v6) >> 16 != -2 )
      goto LABEL_7;
LABEL_28:
    v7 = 0LL;
    v11 = 0LL;
    goto LABEL_12;
  }
  v8 = 0;
LABEL_7:
  v9 = *((_QWORD *)v5 + v8 + 1);
  v10 = v3;
  if ( v8 )
    v10 = v3 - (v8 << 16) - v6 + 0x10000;
  v11 = 0LL;
  if ( v10 < *(_DWORD *)(v9 + 20)
    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * ((unsigned __int64)v10 >> 8))
                 + 16LL * (unsigned __int8)v10
                 + 8) )
  {
    v11 = *(_QWORD *)v9 + 24LL * v10;
  }
LABEL_12:
  if ( v3 >= 0x10000 )
  {
    if ( *(_DWORD *)this > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(v5, (unsigned __int16)v3, 1) + 13) == HIWORD(v3) )
        v3 = (unsigned __int16)v3;
    }
    else
    {
      v3 = (unsigned __int16)v3;
    }
  }
  v12 = *((_DWORD *)v5 + 514);
  if ( v3 < v12 + ((*((unsigned __int16 *)v5 + 1) + 0xFFFF) << 16) )
  {
    if ( v3 >= v12 )
    {
      v13 = ((v3 - v12) >> 16) + 1;
      if ( (v3 - v12) >> 16 == -2 )
        goto LABEL_20;
    }
    else
    {
      v13 = 0;
    }
    v14 = *((_QWORD *)v5 + v13 + 1);
    if ( v13 )
      v3 = v3 - (v13 << 16) - v12 + 0x10000;
    if ( v3 < *(_DWORD *)(v14 + 20) )
      v7 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * ((unsigned __int64)v3 >> 8))
                             + 16LL * (unsigned __int8)v3
                             + 8);
  }
LABEL_20:
  if ( v7 == a2 )
    return (struct _ENTRY *)v11;
  else
    return 0LL;
}
