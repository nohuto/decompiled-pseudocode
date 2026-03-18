/*
 * XREFs of ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x1800204B0
 * Callers:
 *     ?ProcessLegacyTokens@CSurfaceManager@@QEAAJ_K@Z @ 0x1800200D8 (-ProcessLegacyTokens@CSurfaceManager@@QEAAJ_K@Z.c)
 * Callees:
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x18001F764 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?FindBitmapNoRef@CLogicalSurfaceHandleMap@@QEAAJPEAXPEAPEAVCGdiSpriteBitmap@@@Z @ 0x1800206FC (-FindBitmapNoRef@CLogicalSurfaceHandleMap@@QEAAJPEAXPEAPEAVCGdiSpriteBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x180094C3C (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z @ 0x180094D04 (-NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z.c)
 *     ?AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z @ 0x18015DB20 (-AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z.c)
 *     McTemplateU0xxq @ 0x18015DBF4 (McTemplateU0xxq.c)
 *     McTemplateU0xxqNR2 @ 0x18015DC68 (McTemplateU0xxqNR2.c)
 *     McTemplateU0xxxqNR3 @ 0x18015DD04 (McTemplateU0xxxqNR3.c)
 */

__int64 __fastcall CLegacySurfaceManager::ProcessToken(
        CLegacySurfaceManager *this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2,
        struct CGdiSpriteBitmap *a3,
        bool *a4)
{
  bool v4; // di
  int v6; // edx
  unsigned int v9; // esi
  int v10; // edx
  PVOID v11; // rax
  CGdiSpriteBitmap *v12; // rcx
  int v13; // eax
  int v15; // edx
  int v16; // edx
  int v17; // edx
  CResponseItem *v18; // rcx
  _QWORD *v19; // rax
  unsigned __int64 v20; // rdx
  int v21; // eax
  CGdiSpriteBitmap *v22; // rcx
  int v23; // eax
  _QWORD Buffer[4]; // [rsp+40h] [rbp-38h] BYREF
  struct CGdiSpriteBitmap *v25; // [rsp+90h] [rbp+18h] BYREF

  v25 = a3;
  v4 = 0;
  v6 = *(_DWORD *)a2;
  *a4 = 0;
  v9 = 0;
  v10 = v6 - 1;
  if ( !v10 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0xxqNR2((_DWORD)this, 0, *((_QWORD *)a2 + 2), *((_QWORD *)a2 + 3), *((_DWORD *)a2 + 14));
    Buffer[0] = *((_QWORD *)a2 + 2);
    v11 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 8), Buffer);
    if ( v11 )
    {
      v12 = (CGdiSpriteBitmap *)*((_QWORD *)v11 + 2);
      if ( v12 )
      {
        v13 = CGdiSpriteBitmap::ProcessPresentHistoryToken(v12, a2);
        v9 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x86u);
          return v9;
        }
      }
    }
    goto LABEL_7;
  }
  v15 = v10 - 1;
  if ( !v15 )
  {
LABEL_32:
    *a4 = 1;
    return v9;
  }
  v16 = v15 - 1;
  if ( v16 )
  {
    v17 = v16 - 2;
    if ( v17 )
    {
      if ( v17 == 1 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McTemplateU0xxq(
            (_DWORD)this,
            (unsigned int)&EVTDESC_SCHEDULE_PRESENTHISTORYTOKEN_GDISYSMEM,
            *((_QWORD *)a2 + 2),
            *((_QWORD *)a2 + 4),
            *((_DWORD *)a2 + 6));
        CLogicalSurfaceHandleMap::FindBitmapNoRef(this, *((void **)a2 + 2), &v25);
        if ( v25 )
          CGdiSpriteBitmap::NotifyDirty(v25, *((_QWORD *)a2 + 4));
LABEL_7:
        *a4 = 1;
        return v9;
      }
      goto LABEL_32;
    }
    v18 = (CResponseItem *)*((_QWORD *)this + 26);
    if ( v18 && *((_QWORD *)v18 + 7) == *((_QWORD *)a2 + 2) && *((_BYTE *)this + 220) )
    {
      CResponseItem::ReleaseResponseRef(v18);
      *((_BYTE *)this + 220) = 0;
      v4 = 1;
    }
    *a4 = v4;
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0xxxqNR3(
        (_DWORD)this,
        0,
        *((_QWORD *)a2 + 2),
        *((_QWORD *)a2 + 3),
        *((_QWORD *)a2 + 4),
        *((_DWORD *)a2 + 10));
    v19 = (_QWORD *)*((_QWORD *)this + 11);
    do
    {
      if ( v19 == (_QWORD *)((char *)this + 80) )
      {
        v20 = *((_QWORD *)a2 + 4);
        if ( v20 )
        {
          v21 = CLegacySurfaceManager::AddIntervalOneDxBltEventId(this, v20);
          v9 = v21;
          if ( v21 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0xA7u);
            return v9;
          }
        }
        goto LABEL_7;
      }
      v22 = (CGdiSpriteBitmap *)(v19 - 19);
      v19 = (_QWORD *)v19[1];
    }
    while ( *((_QWORD *)v22 + 44) != *((_QWORD *)a2 + 3) );
    v23 = CGdiSpriteBitmap::ProcessPresentHistoryToken(v22, a2);
    v9 = v23;
    if ( v23 >= 0 )
      goto LABEL_7;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x9Cu);
  }
  return v9;
}
