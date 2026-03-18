/*
 * XREFs of ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0020A90
 * Callers:
 *     bDeleteRegion @ 0x1C001E150 (bDeleteRegion.c)
 *     GreSetRectRgn @ 0x1C001E320 (GreSetRectRgn.c)
 *     GreGetRegionData @ 0x1C001E520 (GreGetRegionData.c)
 *     NtGdiDeleteObjectApp @ 0x1C001EE60 (NtGdiDeleteObjectApp.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C001F180 (SetOrCreateRectRgnIndirectPublic.c)
 *     SetRectRgnIndirect @ 0x1C001F6D0 (SetRectRgnIndirect.c)
 *     GreCombineRgn @ 0x1C0023180 (GreCombineRgn.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0023E80 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002D8E0 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002BFC0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

void __fastcall RGNOBJ::UpdateUserRgn(RGNOBJ *this)
{
  _DWORD *v2; // r14
  unsigned int v3; // ebx
  __int64 v4; // rdi
  int v5; // r15d
  unsigned int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // r9d
  unsigned int v10; // edx
  __int64 v11; // r13
  unsigned __int16 v12; // dx
  unsigned int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // rdx
  _DWORD *v16; // rdx
  __int64 v17; // rcx
  struct _ENTRY *Entry; // rax

  v2 = *(_DWORD **)this;
  if ( !*(_QWORD *)this )
    return;
  v3 = (unsigned __int16)*v2 | (*v2 >> 8) & 0xFF0000;
  if ( v3 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                  (unsigned __int16)*v2,
                                  1)
           + 13) == HIWORD(v3) )
        v3 = (unsigned __int16)v3;
    }
    else
    {
      v3 = (unsigned __int16)*v2;
    }
  }
  v4 = *((_QWORD *)gpHandleManager + 2);
  v5 = *(unsigned __int16 *)(v4 + 2);
  v6 = *(_DWORD *)(v4 + 2056);
  if ( v3 >= v6 + ((v5 + 0xFFFF) << 16) )
  {
    v11 = 0LL;
    v9 = 1;
  }
  else
  {
    if ( v3 >= v6 )
      v7 = ((v3 - v6) >> 16) + 1;
    else
      v7 = 0LL;
    v8 = *(_QWORD *)(v4 + 8 * v7 + 8);
    v9 = 1;
    if ( (_DWORD)v7 )
      v10 = v3 + ((1 - (_DWORD)v7) << 16) - v6;
    else
      v10 = v3;
    v11 = 0LL;
    if ( v10 < *(_DWORD *)(v8 + 20) )
    {
      if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v8 + 24) + 8LL * (v10 >> 8)) + 16LL * (unsigned __int8)v10 + 8) )
        v11 = *(_QWORD *)v8 + 24LL * v10;
      v9 = 1;
    }
    LOWORD(v5) = *(_WORD *)(v4 + 2);
  }
  v12 = v5;
  v13 = *(_DWORD *)(v4 + 2056);
  if ( v3 >= 0x10000 )
  {
    if ( *(_DWORD *)gpHandleManager > 0x10000u )
    {
      Entry = GdiHandleEntryDirectory::GetEntry((GdiHandleEntryDirectory *)v4, (unsigned __int16)v3, 1);
      v12 = v5;
      v13 = v6;
      v9 = 1;
      if ( *((unsigned __int8 *)Entry + 13) != HIWORD(v3) )
        goto LABEL_14;
      v3 = (unsigned __int16)v3;
    }
    else
    {
      v3 = (unsigned __int16)v3;
    }
    v12 = v5;
  }
LABEL_14:
  if ( v3 >= v13 + ((v12 + 0xFFFF) << 16) )
    goto LABEL_44;
  if ( v3 >= v13 )
    v14 = ((v3 - v13) >> 16) + 1;
  else
    v14 = 0LL;
  v15 = *(_QWORD *)(v4 + 8 * v14 + 8);
  if ( (_DWORD)v14 )
    v3 += ((1 - (_DWORD)v14) << 16) - v13;
  if ( v3 >= *(_DWORD *)(v15 + 20) )
LABEL_44:
    v16 = 0LL;
  else
    v16 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v15 + 24) + 8LL * (v3 >> 8)) + 16LL * (unsigned __int8)v3 + 8);
  if ( v16 != v2 )
    v11 = 0LL;
  v17 = *(_QWORD *)(v11 + 16);
  if ( v17 && (*(_DWORD *)v17 & 0x10) != 0 )
  {
    if ( v2[21] != 1 )
      v9 = (v2[20] > 0xA0u) + 2;
    *(_DWORD *)(v17 + 4) = v9;
    *(_OWORD *)(v17 + 8) = *(_OWORD *)(*(_QWORD *)this + 88LL);
  }
}
