/*
 * XREFs of ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x18009E1B8
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x18007F5DC (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x180088DEC (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180089680 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z @ 0x18009D64C (-AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z @ 0x18013B2C0 (-AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::ProcessPresentHistoryToken(
        CGdiSpriteBitmap *this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  bool v2; // zf
  unsigned int v5; // r8d
  __int64 v6; // rax
  signed int appended; // eax
  unsigned int v8; // ebx
  signed int v9; // eax
  signed __int64 v11; // rdx
  __int64 v12; // rax
  signed int v13; // eax
  int *v14; // [rsp+30h] [rbp-68h] BYREF
  int v15; // [rsp+38h] [rbp-60h] BYREF

  v2 = *(_DWORD *)a2 == 1;
  v14 = &v15;
  if ( v2 )
  {
    v5 = *((_DWORD *)a2 + 14);
    v6 = 60LL;
  }
  else
  {
    v5 = *((_DWORD *)a2 + 10);
    v6 = 44LL;
  }
  v15 = 0;
  appended = CRegion::AppendRects<tagRECT>((FastRegion::CRegion *)&v14, (__int64)a2 + v6, v5);
  v8 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, appended, 0x231u);
  }
  else
  {
    v9 = CGdiSpriteBitmap::AddDirtyRegion(this, (const struct FastRegion::Internal::CRgnData **)&v14);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x233u);
    }
    else if ( *(_DWORD *)a2 == 3 )
    {
      v11 = *((_QWORD *)a2 + 4);
      if ( v11 >= 0 )
      {
        if ( v11 )
        {
          v13 = CLegacySurfaceManager::AddIntervalOneDxBltEventId(
                  (CLegacySurfaceManager *)(*(_QWORD *)(*((_QWORD *)this + 2) + 80LL) + 96LL),
                  v11);
          v8 = v13;
          if ( v13 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x242u);
        }
      }
      else
      {
        v12 = *((_QWORD *)this + 9);
        *((_BYTE *)this + 116) |= 4u;
        *((_QWORD *)this + 15) = v12;
        *((_QWORD *)this + 16) = *((_QWORD *)a2 + 4);
      }
    }
  }
  FastRegion::CRegion::FreeMemory((void **)&v14);
  return v8;
}
