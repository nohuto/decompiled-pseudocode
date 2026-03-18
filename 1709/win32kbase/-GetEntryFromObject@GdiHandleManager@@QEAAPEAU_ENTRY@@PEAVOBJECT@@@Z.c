/*
 * XREFs of ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C004E360
 * Callers:
 *     NtGdiCreateRectRgn @ 0x1C001E590 (NtGdiCreateRectRgn.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C001EB10 (-vCleanupRegions@@YAXK@Z.c)
 *     GreRestoreDC @ 0x1C00400D0 (GreRestoreDC.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C004AC70 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C004E0E4 (-_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C004EAB0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     HmgCheckDCForPrivateReferences @ 0x1C0051CD0 (HmgCheckDCForPrivateReferences.c)
 *     ?vReleaseRao@DC@@QEAAXXZ @ 0x1C0051EB0 (-vReleaseRao@DC@@QEAAXXZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C00524A0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C0053194 (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?SwapShareCount@OBJECT@@SAXPEAV1@0@Z @ 0x1C00930CC (-SwapShareCount@OBJECT@@SAXPEAV1@0@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00F0640 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreIntersectVisRect @ 0x1C00FCCC0 (GreIntersectVisRect.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E690 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

struct _ENTRY *__fastcall GdiHandleManager::GetEntryFromObject(GdiHandleEntryDirectory **this, struct OBJECT *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  GdiHandleEntryDirectory *v6; // r15
  struct OBJECT *v7; // rbp
  unsigned int v8; // ecx
  unsigned int v9; // edx
  __int64 v10; // r8
  unsigned int v11; // eax
  __int64 v12; // r14
  unsigned int v13; // edx
  unsigned int v14; // ecx
  __int64 v15; // rax
  unsigned int v17; // edi

  v4 = (unsigned __int16)*(_DWORD *)a2;
  v5 = v4 | (*(_DWORD *)a2 >> 8) & 0xFF0000;
  if ( v5 >= 0x10000 )
  {
    if ( *(_DWORD *)this > 0x10000u )
    {
      v17 = (unsigned __int16)v4;
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(this[2], (unsigned __int16)v4, 1) + 13) == HIWORD(v5) )
        v5 = v17;
    }
    else
    {
      v5 = (unsigned __int16)v4;
    }
  }
  v6 = this[2];
  v7 = 0LL;
  v8 = *((_DWORD *)v6 + 514);
  if ( v5 >= v8 + ((*((unsigned __int16 *)v6 + 1) + 0xFFFF) << 16) )
  {
    v12 = 0LL;
  }
  else
  {
    if ( v5 >= v8 )
      v9 = ((v5 - v8) >> 16) + 1;
    else
      v9 = 0;
    v10 = *((_QWORD *)v6 + v9 + 1);
    if ( v9 )
      v11 = v5 + ((1 - v9) << 16) - v8;
    else
      v11 = v5;
    v12 = 0LL;
    if ( v11 < *(_DWORD *)(v10 + 20)
      && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v10 + 24) + 8 * ((unsigned __int64)v11 >> 8))
                   + 16LL * (unsigned __int8)v11
                   + 8) )
    {
      v12 = *(_QWORD *)v10 + 24LL * v11;
    }
  }
  if ( v5 >= 0x10000 )
  {
    if ( *(_DWORD *)this > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(v6, (unsigned __int16)v5, 1) + 13) == HIWORD(v5) )
        v5 = (unsigned __int16)v5;
    }
    else
    {
      v5 = (unsigned __int16)v5;
    }
  }
  v13 = *((_DWORD *)v6 + 514);
  if ( v5 < v13 + ((*((unsigned __int16 *)v6 + 1) + 0xFFFF) << 16) )
  {
    if ( v5 >= v13 )
      v14 = ((v5 - v13) >> 16) + 1;
    else
      v14 = 0;
    v15 = *((_QWORD *)v6 + v14 + 1);
    if ( v14 )
      v5 += ((1 - v14) << 16) - v13;
    if ( v5 < *(_DWORD *)(v15 + 20) )
      v7 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v15 + 24) + 8 * ((unsigned __int64)v5 >> 8))
                             + 16LL * (unsigned __int8)v5
                             + 8);
  }
  if ( v7 == a2 )
    return (struct _ENTRY *)v12;
  else
    return 0LL;
}
