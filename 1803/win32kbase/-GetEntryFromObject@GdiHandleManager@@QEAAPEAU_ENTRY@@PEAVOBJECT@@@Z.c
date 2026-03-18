/*
 * XREFs of ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C002BC10
 * Callers:
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C00257E4 (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C0028A00 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0029780 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C002B970 (-_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C002F158 (-vCleanupDCs@@YAXK@Z.c)
 *     NtGdiCreateRectRgn @ 0x1C00430D0 (NtGdiCreateRectRgn.c)
 *     HmgIsObjectOwnedByW32Pid @ 0x1C005DC94 (HmgIsObjectOwnedByW32Pid.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C0066460 (-vCleanupRegions@@YAXK@Z.c)
 *     ?SwapShareCount@OBJECT@@SAXPEAV1@0@Z @ 0x1C006B290 (-SwapShareCount@OBJECT@@SAXPEAV1@0@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00C48B0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreIntersectVisRect @ 0x1C00D9BA0 (GreIntersectVisRect.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002BFC0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

struct _ENTRY *__fastcall GdiHandleManager::GetEntryFromObject(GdiHandleEntryDirectory **this, struct OBJECT *a2)
{
  unsigned int v4; // ebx
  GdiHandleEntryDirectory *v5; // r13
  struct OBJECT *v6; // rbp
  int v7; // r12d
  unsigned int v8; // r15d
  __int64 v9; // rcx
  __int64 v10; // r9
  unsigned int v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rax

  v4 = (unsigned __int16)*(_DWORD *)a2 | (*(_DWORD *)a2 >> 8) & 0xFF0000;
  if ( v4 >= 0x10000 )
  {
    if ( *(_DWORD *)this > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(this[2], (unsigned __int16)*(_DWORD *)a2, 1) + 13) == HIWORD(v4) )
        v4 = (unsigned __int16)v4;
    }
    else
    {
      v4 = (unsigned __int16)*(_DWORD *)a2;
    }
  }
  v5 = this[2];
  v6 = 0LL;
  v7 = *((unsigned __int16 *)v5 + 1);
  v8 = *((_DWORD *)v5 + 514);
  if ( v4 >= v8 + ((v7 + 0xFFFF) << 16) )
  {
    v12 = 0LL;
  }
  else
  {
    v9 = ((v4 - v8) >> 16) + 1;
    if ( v4 < v8 )
      v9 = 0LL;
    v10 = *((_QWORD *)v5 + v9 + 1);
    if ( (_DWORD)v9 )
      v11 = v4 + ((1 - (_DWORD)v9) << 16) - v8;
    else
      v11 = v4;
    v12 = 0LL;
    if ( v11 < *(_DWORD *)(v10 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v10 + 24) + 8 * ((unsigned __int64)v11 >> 8))
                   + 16LL * (unsigned __int8)v11
                   + 8) )
    {
      v12 = *(_QWORD *)v10 + 24LL * v11;
    }
    LOWORD(v7) = *((_WORD *)v5 + 1);
  }
  if ( v4 >= 0x10000 )
  {
    if ( *(_DWORD *)this > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(v5, (unsigned __int16)v4, 1) + 13) == HIWORD(v4) )
        v4 = (unsigned __int16)v4;
    }
    else
    {
      v4 = (unsigned __int16)v4;
    }
  }
  if ( v4 < v8 + (((unsigned __int16)v7 + 0xFFFF) << 16) )
  {
    v13 = ((v4 - v8) >> 16) + 1;
    if ( v4 < v8 )
      v13 = 0LL;
    v14 = *((_QWORD *)v5 + v13 + 1);
    if ( (_DWORD)v13 )
      v4 += ((1 - (_DWORD)v13) << 16) - v8;
    if ( v4 < *(_DWORD *)(v14 + 20) )
      v6 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * ((unsigned __int64)v4 >> 8))
                             + 16LL * (unsigned __int8)v4
                             + 8);
  }
  if ( v6 == a2 )
    return (struct _ENTRY *)v12;
  else
    return 0LL;
}
