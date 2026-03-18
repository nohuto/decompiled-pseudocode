/*
 * XREFs of ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x18007F5DC
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180029EC0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x18007F004 (-ReleaseResponseRef@CResponseItem@@QEAAXXZ.c)
 *     ?FindBitmapNoRef@CLogicalSurfaceHandleMap@@QEAAJPEAXPEAPEAVCGdiSpriteBitmap@@@Z @ 0x18007F8A4 (-FindBitmapNoRef@CLogicalSurfaceHandleMap@@QEAAJPEAXPEAPEAVCGdiSpriteBitmap@@@Z.c)
 *     ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18009E1B8 (-ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z @ 0x18009E26C (-NotifyDirty@CGdiSpriteBitmap@@QEAAJ_K@Z.c)
 *     ?AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z @ 0x18013B2C0 (-AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z.c)
 *     ?ProcessVistaBltToken@CLegacySurfaceManager@@IEAA_NT_ULARGE_INTEGER@@PEA_N@Z @ 0x18013B5B8 (-ProcessVistaBltToken@CLegacySurfaceManager@@IEAA_NT_ULARGE_INTEGER@@PEA_N@Z.c)
 *     McTemplateU0xxq @ 0x18013B6E0 (McTemplateU0xxq.c)
 *     McTemplateU0xxqNR2 @ 0x18013B754 (McTemplateU0xxqNR2.c)
 *     McTemplateU0xxxqNR3 @ 0x18013B7F0 (McTemplateU0xxxqNR3.c)
 */

__int64 __fastcall CLegacySurfaceManager::ProcessToken(
        CResponseItem **this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2,
        unsigned int *a3,
        bool *a4)
{
  bool v4; // di
  int v6; // edx
  unsigned int v10; // esi
  int v11; // edx
  signed int v12; // eax
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  CResponseItem *v18; // rcx
  union _ULARGE_INTEGER v19; // rdx
  CResponseItem **v20; // rax
  unsigned __int64 v21; // rdx
  signed int v22; // eax
  CGdiSpriteBitmap *v23; // rcx
  signed int v24; // eax
  struct CGdiSpriteBitmap *v25; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0;
  v6 = *(_DWORD *)a2;
  *a4 = 0;
  v10 = 0;
  v11 = v6 - 1;
  if ( !v11 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0xxqNR2((_DWORD)this, 0, *((_QWORD *)a2 + 2), *((_QWORD *)a2 + 3), *((_DWORD *)a2 + 14));
    CLogicalSurfaceHandleMap::FindBitmapNoRef((CLogicalSurfaceHandleMap *)this, *((void **)a2 + 2), &v25);
    if ( v25 )
    {
      v12 = CGdiSpriteBitmap::ProcessPresentHistoryToken(v25, a2);
      v10 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0x128u);
        return v10;
      }
    }
    goto LABEL_6;
  }
  v14 = v11 - 1;
  if ( !v14 )
  {
LABEL_34:
    *a4 = 1;
    return v10;
  }
  v15 = v14 - 1;
  if ( v15 )
  {
    v16 = v15 - 1;
    if ( v16 )
    {
      v17 = v16 - 1;
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
          CLogicalSurfaceHandleMap::FindBitmapNoRef((CLogicalSurfaceHandleMap *)this, *((void **)a2 + 2), &v25);
          if ( v25 )
            CGdiSpriteBitmap::NotifyDirty(v25, *((_QWORD *)a2 + 4));
LABEL_6:
          *a4 = 1;
          return v10;
        }
        goto LABEL_34;
      }
      v18 = this[35];
      if ( v18 && *((_QWORD *)v18 + 7) == *((_QWORD *)a2 + 2) && *((_BYTE *)this + 292) )
      {
        CResponseItem::ReleaseResponseRef(v18);
        *((_BYTE *)this + 292) = 0;
        v4 = 1;
      }
      *a4 = v4;
    }
    else
    {
      v19 = *(union _ULARGE_INTEGER *)((char *)a2 + 16);
      LOBYTE(v25) = 0;
      *a4 = CLegacySurfaceManager::ProcessVistaBltToken((CLegacySurfaceManager *)this, v19, (bool *)&v25);
      if ( (_BYTE)v25 )
        ++*a3;
    }
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
    v20 = (CResponseItem **)this[11];
    do
    {
      if ( v20 == this + 10 )
      {
        v21 = *((_QWORD *)a2 + 4);
        if ( v21 )
        {
          v22 = CLegacySurfaceManager::AddIntervalOneDxBltEventId((CLegacySurfaceManager *)this, v21);
          v10 = v22;
          if ( v22 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v22, 0x149u);
            return v10;
          }
        }
        goto LABEL_6;
      }
      v23 = (CGdiSpriteBitmap *)(v20 - 19);
      v20 = (CResponseItem **)v20[1];
    }
    while ( *((_QWORD *)v23 + 43) != *((_QWORD *)a2 + 3) );
    v24 = CGdiSpriteBitmap::ProcessPresentHistoryToken(v23, a2);
    v10 = v24;
    if ( v24 >= 0 )
      goto LABEL_6;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v24, 0x13Eu);
  }
  return v10;
}
