/*
 * XREFs of ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x180094C3C
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x1800204B0 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x18007DA70 (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z @ 0x180093ECC (-AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     ?AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z @ 0x18015DB20 (-AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::ProcessPresentHistoryToken(
        CGdiSpriteBitmap *this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  bool v2; // zf
  unsigned int v5; // r8d
  __int64 v6; // rdx
  int appended; // eax
  unsigned int v8; // ebx
  int v9; // eax
  signed __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  void *lpMem; // [rsp+30h] [rbp-68h] BYREF
  _DWORD v15[18]; // [rsp+38h] [rbp-60h] BYREF

  v2 = *(_DWORD *)a2 == 1;
  lpMem = v15;
  if ( v2 )
    v5 = *((_DWORD *)a2 + 14);
  else
    v5 = *((_DWORD *)a2 + 10);
  v15[0] = 0;
  v6 = 60LL;
  if ( *(_DWORD *)a2 != 1 )
    v6 = 44LL;
  appended = CRegion::AppendRects<tagRECT>((FastRegion::CRegion *)&lpMem, (__int64)a2 + v6, v5);
  v8 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, appended, 0x231u);
  }
  else
  {
    v9 = CGdiSpriteBitmap::AddDirtyRegion(this, (int **)&lpMem);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x233u);
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
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x242u);
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
  if ( v15 != lpMem )
    operator delete(lpMem);
  return v8;
}
