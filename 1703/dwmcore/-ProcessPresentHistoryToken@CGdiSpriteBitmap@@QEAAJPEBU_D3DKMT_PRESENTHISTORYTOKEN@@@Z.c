/*
 * XREFs of ?ProcessPresentHistoryToken@CGdiSpriteBitmap@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x180055C64
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x1800B0364 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 * Callees:
 *     ?AddDirtyRects@CGdiSpriteBitmap@@IEAAJPEBUtagRECT@@IPEAX@Z @ 0x180054A30 (-AddDirtyRects@CGdiSpriteBitmap@@IEAAJPEBUtagRECT@@IPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z @ 0x1800B06E8 (-AddIntervalOneDxBltEventId@CLegacySurfaceManager@@QEAAJ_K@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::ProcessPresentHistoryToken(
        CGdiSpriteBitmap *this,
        const struct _D3DKMT_PRESENTHISTORYTOKEN *a2)
{
  unsigned int v4; // r8d
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // esi
  signed __int64 v9; // rdx
  __int64 v10; // rax
  int v11; // eax

  if ( *(_DWORD *)a2 == 1 )
  {
    v4 = *((_DWORD *)a2 + 14);
    v5 = 60LL;
  }
  else
  {
    v4 = *((_DWORD *)a2 + 10);
    v5 = 44LL;
  }
  v6 = CGdiSpriteBitmap::AddDirtyRects(this, (const struct tagRECT *)((char *)a2 + v5), v4, *((void **)a2 + 3));
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x291u);
  }
  else if ( *(_DWORD *)a2 == 3 )
  {
    v9 = *((_QWORD *)a2 + 4);
    if ( v9 >= 0 )
    {
      if ( v9 )
      {
        v11 = CLegacySurfaceManager::AddIntervalOneDxBltEventId(
                (CLegacySurfaceManager *)(*(_QWORD *)(*((_QWORD *)this + 4) + 40LL) + 96LL),
                v9);
        v7 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x2A2u);
      }
    }
    else
    {
      v10 = *((_QWORD *)this + 13);
      *((_BYTE *)this + 148) |= 8u;
      *((_QWORD *)this + 19) = v10;
      *((_QWORD *)this + 20) = *((_QWORD *)a2 + 4);
    }
  }
  return v7;
}
