/*
 * XREFs of GreGetRegionData @ 0x1C0091230
 * Callers:
 *     NtGdiGetRegionData @ 0x1C003F080 (NtGdiGetRegionData.c)
 *     EngGetRgnData @ 0x1C00FC1D0 (EngGetRgnData.c)
 * Callees:
 *     ?vDownload@RGNOBJ@@QEAAXPEAX@Z @ 0x1C003C790 (-vDownload@RGNOBJ@@QEAAXPEAX@Z.c)
 *     ?sizeSave@RGNOBJ@@QEAAKXZ @ 0x1C003C810 (-sizeSave@RGNOBJ@@QEAAKXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C003E350 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z @ 0x1C003E9E0 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@H@Z.c)
 *     EngSetLastError @ 0x1C0083400 (EngSetLastError.c)
 */

__int64 __fastcall GreGetRegionData(HRGN a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rsi
  ULONG v6; // ecx
  unsigned int v7; // edi
  int v9; // ecx
  unsigned __int64 v10; // rax
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v11, a1, 1);
  v5 = v11[0];
  if ( !v11[0] )
  {
    v6 = 6;
LABEL_3:
    EngSetLastError(v6);
    v7 = 0;
    goto LABEL_4;
  }
  v9 = RGNOBJ::sizeSave((RGNOBJ *)v11);
  v7 = v9 + 32;
  if ( !a3 )
    goto LABEL_4;
  if ( v7 > a2 )
  {
    v6 = 87;
    goto LABEL_3;
  }
  *(_DWORD *)a3 = 32;
  v10 = ((unsigned __int64)v7 - 32) >> 4;
  *(_DWORD *)(a3 + 4) = 1;
  *(_DWORD *)(a3 + 8) = v10;
  *(_DWORD *)(a3 + 12) = v9;
  if ( (_DWORD)v10 )
  {
    *(_OWORD *)(a3 + 16) = *(_OWORD *)(v5 + 88);
  }
  else
  {
    *(_DWORD *)(a3 + 16) = 0;
    *(_DWORD *)(a3 + 20) = 0;
    *(_DWORD *)(a3 + 24) = 0;
    *(_DWORD *)(a3 + 28) = 0;
  }
  RGNOBJ::vDownload((RGNOBJ *)v11, (_OWORD *)(a3 + 32));
LABEL_4:
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v11);
  return v7;
}
