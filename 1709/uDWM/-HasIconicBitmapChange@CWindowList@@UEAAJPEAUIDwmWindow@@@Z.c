/*
 * XREFs of ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002A690
 * Callers:
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x1800272C0 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180027D20 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18002C114 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x18002C184 (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18002C1F4 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x18002C250 (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z @ 0x180070E14 (-SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x18007D4D8 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 */

__int64 __fastcall CWindowList::HasIconicBitmapChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // ebp
  char v5; // al
  struct CWindowData *v6; // rcx
  char v7; // bl
  CDesktopManager *v8; // rax
  CWindowIconic **v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  unsigned int v16; // [rsp+20h] [rbp-18h]
  struct CWindowData *v17; // [rsp+50h] [rbp+18h] BYREF

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v17 = 0LL;
  SyncedWindowData = CWindowList::GetSyncedWindowData(this, a2, 0, &v17);
  if ( SyncedWindowData < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x125Du);
    goto LABEL_10;
  }
  v5 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 232LL))(a2);
  v6 = v17;
  v7 = v5;
  if ( v17 && (*((int *)v17 + 28) < 8 || *((int *)v17 + 28) > 11) )
  {
    if ( *((char *)v17 + 596) < 0 )
    {
      if ( !GetPropW(*((HWND *)v17 + 5), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow") )
        goto LABEL_10;
      v6 = v17;
    }
    if ( (*((_BYTE *)v6 + 594) & 1) == 0 && v7 )
    {
      DynArray<CWindowData *,0>::AddMultipleAndSet((char *)this + 472, &v17);
    }
    else
    {
      if ( (*((_BYTE *)v6 + 594) & 1) == 0 || v7 )
        goto LABEL_8;
      DynArray<CWindowData *,0>::Remove((char *)this + 472, &v17);
    }
    v6 = v17;
LABEL_8:
    v8 = CDesktopManager::s_pDesktopManagerInstance;
    *((_BYTE *)v6 + 594) ^= (*((_BYTE *)v6 + 594) ^ v7) & 1;
    v9 = (CWindowIconic **)v17;
    v10 = *((_QWORD *)v8 + 32);
    if ( !*((_QWORD *)v17 + 54) )
      goto LABEL_9;
    *((_BYTE *)v17 + 594) &= 0xF5u;
    CWindowData::SetIconicBitmap((CWindowData *)v9, 0LL);
    v13 = CIconicBitmapRegistry::RequestBitmap((CIconicBitmapRegistry *)v10, (struct CWindowData *)v9, 0);
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x338u);
    CIconicBitmapRegistry::ClearBitmap((CIconicBitmapRegistry *)v10, (struct CWindowData *)v9);
    v14 = CWindowIconic::OnRepresentationTypeUpdated(v9[54]);
    if ( v14 < 0 )
    {
      v16 = 826;
    }
    else
    {
LABEL_9:
      v11 = *(_QWORD *)(v10 + 96);
      if ( !v11 || *(CWindowIconic ***)(v11 + 72) != v9 )
        goto LABEL_10;
      *(_WORD *)(v10 + 89) = 0;
      *(_BYTE *)(v10 + 88) = 0;
      v15 = CIconicBitmapRegistry::RequestBitmap(
              (CIconicBitmapRegistry *)v10,
              (struct CWindowData *)0xFFFFFFFFFFFFFFFFLL,
              0);
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x342u);
      CIconicBitmapRegistry::ClearBitmap((CIconicBitmapRegistry *)v10, (struct CWindowData *)0xFFFFFFFFFFFFFFFFLL);
      v14 = CWindowIconic::OnRepresentationTypeUpdated(*(CWindowIconic **)(v10 + 96));
      if ( v14 >= 0 )
        goto LABEL_10;
      v16 = 836;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, v16);
  }
LABEL_10:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)SyncedWindowData;
}
