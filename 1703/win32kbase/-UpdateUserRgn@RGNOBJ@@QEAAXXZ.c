/*
 * XREFs of ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C003C4E0
 * Callers:
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C002CDEC (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C0038F70 (SetOrCreateRectRgnIndirectPublic.c)
 *     SetRectRgnIndirect @ 0x1C00390D0 (SetRectRgnIndirect.c)
 *     GreCombineRgn @ 0x1C003DDE0 (GreCombineRgn.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C003E350 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     NtGdiDeleteObjectApp @ 0x1C003ED30 (NtGdiDeleteObjectApp.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C0033500 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

void __fastcall RGNOBJ::UpdateUserRgn(RGNOBJ *this)
{
  _DWORD *v2; // r14
  unsigned int v3; // ebx
  GdiHandleManager *v4; // rsi
  __int64 v5; // rsi
  unsigned int v6; // edx
  signed int v7; // ecx
  __int64 v8; // r10
  unsigned int v9; // r9d
  __int64 v10; // r13
  int v11; // r15d
  unsigned int v13; // r8d
  signed int v14; // ecx
  __int64 v15; // rdx
  _DWORD *v16; // rdx
  __int64 v17; // rcx
  GdiHandleManager *v18; // [rsp+50h] [rbp+8h]

  v2 = *(_DWORD **)this;
  if ( !*(_QWORD *)this )
    return;
  v3 = (unsigned __int16)*v2 | (*v2 >> 8) & 0xFF0000;
  v4 = gpHandleManager;
  v18 = gpHandleManager;
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
  v5 = *((_QWORD *)v4 + 2);
  v6 = *(_DWORD *)(v5 + 2056);
  if ( v3 >= v6 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16) )
    goto LABEL_38;
  if ( v3 >= v6 )
  {
    v7 = ((v3 - v6) >> 16) + 1;
    if ( (v3 - v6) >> 16 != -2 )
      goto LABEL_8;
LABEL_38:
    v10 = 0LL;
    v11 = 1;
    goto LABEL_15;
  }
  v7 = 0;
LABEL_8:
  v8 = *(_QWORD *)(v5 + 8LL * v7 + 8);
  v9 = v3;
  if ( v7 )
    v9 = v3 - (v7 << 16) - v6 + 0x10000;
  v10 = 0LL;
  v11 = 1;
  if ( v9 < *(_DWORD *)(v8 + 20)
    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v8 + 24) + 8LL * (v9 >> 8)) + 16LL * (unsigned __int8)v9 + 8) )
  {
    v10 = *(_QWORD *)v8 + 24LL * v9;
  }
LABEL_15:
  if ( v3 >= 0x10000 )
  {
    if ( *(_DWORD *)v18 > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                  (GdiHandleEntryDirectory *)v5,
                                  (unsigned __int16)v3,
                                  1)
           + 13) == HIWORD(v3) )
        v3 = (unsigned __int16)v3;
    }
    else
    {
      v3 = (unsigned __int16)v3;
    }
  }
  v13 = *(_DWORD *)(v5 + 2056);
  if ( v3 >= v13 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16) )
    goto LABEL_45;
  if ( v3 >= v13 )
  {
    v14 = ((v3 - v13) >> 16) + 1;
    if ( (v3 - v13) >> 16 == -2 )
    {
LABEL_45:
      v16 = 0LL;
      goto LABEL_23;
    }
  }
  else
  {
    v14 = 0;
  }
  v15 = *(_QWORD *)(v5 + 8LL * v14 + 8);
  if ( v14 )
    v3 = v3 - (v14 << 16) - v13 + 0x10000;
  if ( v3 >= *(_DWORD *)(v15 + 20) )
    goto LABEL_45;
  v16 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v15 + 24) + 8LL * (v3 >> 8)) + 16LL * (unsigned __int8)v3 + 8);
LABEL_23:
  if ( v16 != v2 )
    v10 = 0LL;
  v17 = *(_QWORD *)(v10 + 16);
  if ( v17 && (*(_DWORD *)v17 & 0x10) != 0 )
  {
    if ( v2[21] != 1 )
      v11 = (v2[20] > 0xA0u) + 2;
    *(_DWORD *)(v17 + 4) = v11;
    *(_OWORD *)(v17 + 8) = *(_OWORD *)(*(_QWORD *)this + 88LL);
  }
}
