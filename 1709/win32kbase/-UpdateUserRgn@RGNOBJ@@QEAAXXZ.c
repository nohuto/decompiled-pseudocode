/*
 * XREFs of ?UpdateUserRgn@RGNOBJ@@QEAAXXZ @ 0x1C0045460
 * Callers:
 *     GreGetRegionData @ 0x1C0040F80 (GreGetRegionData.c)
 *     NtGdiDeleteObjectApp @ 0x1C0042D20 (NtGdiDeleteObjectApp.c)
 *     SetOrCreateRectRgnIndirectPublic @ 0x1C00430C0 (SetOrCreateRectRgnIndirectPublic.c)
 *     SetRectRgnIndirect @ 0x1C0043220 (SetRectRgnIndirect.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C004333C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     GreCombineRgn @ 0x1C0043CC0 (GreCombineRgn.c)
 *     ?ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z @ 0x1C0050E30 (-ResetOrg@@YAXPEAUHRGN__@@PEAUtagDCE@@H@Z.c)
 *     GreOffsetRgn @ 0x1C00569D0 (GreOffsetRgn.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEAAJXZ @ 0x1C00453F4 (-iComplexity@RGNOBJ@@QEAAJXZ.c)
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C004E690 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

void __fastcall RGNOBJ::UpdateUserRgn(RGNOBJ *this)
{
  _DWORD *v2; // r15
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // r14
  unsigned int v6; // edx
  __int64 v7; // rsi
  unsigned int v8; // ecx
  __int64 v9; // r8
  unsigned int v10; // r9d
  __int64 v11; // r12
  unsigned int v12; // r8d
  unsigned int v13; // ecx
  __int64 v14; // rdx
  _DWORD *v15; // rdx
  _DWORD *v16; // r8
  int v17; // eax
  __int64 v18; // r8
  unsigned int v19; // edi

  v2 = *(_DWORD **)this;
  if ( *(_QWORD *)this )
  {
    v3 = (unsigned __int16)*v2;
    v4 = v3 | (*v2 >> 8) & 0xFF0000;
    if ( v4 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        v19 = (unsigned __int16)v3;
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v3,
                                    1)
             + 13) == HIWORD(v4) )
          v4 = v19;
      }
      else
      {
        v4 = (unsigned __int16)v3;
      }
    }
    v5 = *((_QWORD *)gpHandleManager + 2);
    v6 = *(_DWORD *)(v5 + 2056);
    v7 = 0LL;
    if ( v4 >= v6 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16) )
    {
      v11 = 0LL;
    }
    else
    {
      if ( v4 >= v6 )
        v8 = ((v4 - v6) >> 16) + 1;
      else
        v8 = 0;
      v9 = *(_QWORD *)(v5 + 8LL * v8 + 8);
      if ( v8 )
        v10 = v4 + ((1 - v8) << 16) - v6;
      else
        v10 = v4;
      v11 = 0LL;
      if ( v10 < *(_DWORD *)(v9 + 20)
        && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8LL * (v10 >> 8)) + 16LL * (unsigned __int8)v10 + 8) )
      {
        v11 = *(_QWORD *)v9 + 24LL * v10;
      }
    }
    if ( v4 >= 0x10000 )
    {
      if ( *(_DWORD *)gpHandleManager > 0x10000u )
      {
        if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(
                                    *((GdiHandleEntryDirectory **)gpHandleManager + 2),
                                    (unsigned __int16)v4,
                                    1)
             + 13) == HIWORD(v4) )
          v4 = (unsigned __int16)v4;
      }
      else
      {
        v4 = (unsigned __int16)v4;
      }
    }
    v12 = *(_DWORD *)(v5 + 2056);
    if ( v4 >= v12 + ((*(unsigned __int16 *)(v5 + 2) + 0xFFFF) << 16) )
      goto LABEL_40;
    if ( v4 >= v12 )
      v13 = ((v4 - v12) >> 16) + 1;
    else
      v13 = 0;
    v14 = *(_QWORD *)(v5 + 8LL * v13 + 8);
    if ( v13 )
      v4 += ((1 - v13) << 16) - v12;
    if ( v4 >= *(_DWORD *)(v14 + 20) )
LABEL_40:
      v15 = 0LL;
    else
      v15 = *(_DWORD **)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8LL * (v4 >> 8)) + 16LL * (unsigned __int8)v4 + 8);
    if ( v15 == v2 )
      v7 = v11;
    v16 = *(_DWORD **)(v7 + 16);
    if ( v16 )
    {
      if ( (*v16 & 0x10) != 0 )
      {
        v17 = RGNOBJ::iComplexity(this);
        *(_DWORD *)(v18 + 4) = v17;
        *(_OWORD *)(v18 + 8) = *(_OWORD *)(*(_QWORD *)this + 88LL);
      }
    }
  }
}
