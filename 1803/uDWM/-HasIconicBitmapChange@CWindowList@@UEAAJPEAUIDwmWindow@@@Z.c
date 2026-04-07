/*
 * XREFs of ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002A350
 * Callers:
 *     ?SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x18002D790 (-SyncWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x180026E58 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x18002DCEC (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x18002DD5C (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x18002F918 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z @ 0x18002F980 (-AddMultipleAndSet@-$DynArray@PEAVCWindowData@@$0A@@@QEAAJPEFBQEAVCWindowData@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z @ 0x180077744 (-SetIconicBitmap@CWindowData@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x180086BC4 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 */

__int64 __fastcall CWindowList::HasIconicBitmapChange(CWindowList *this, struct IDwmWindow *a2)
{
  int SyncedWindowData; // ebp
  char v5; // al
  struct CWindowData *v6; // rcx
  char v7; // bl
  bool v8; // dl
  struct CWindowData *v9; // rsi
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, SyncedWindowData, 0x135Eu);
    goto LABEL_11;
  }
  v5 = (*(__int64 (__fastcall **)(struct IDwmWindow *))(*(_QWORD *)a2 + 232LL))(a2);
  v6 = v17;
  v7 = v5;
  if ( !v17 || *((int *)v17 + 28) >= 8 && *((int *)v17 + 28) <= 11 )
    goto LABEL_11;
  v8 = (*((_BYTE *)v17 + 596) & 0x40) != 0;
  if ( (*((_BYTE *)v17 + 596) & 0x40) != 0 )
  {
    if ( !GetPropW(*((HWND *)v17 + 5), L"Microsoft.Windows.ShellManagedWindowAsNormalWindow") )
      goto LABEL_11;
    v6 = v17;
    v8 = 0;
  }
  if ( v8 )
    goto LABEL_11;
  if ( (*((_BYTE *)v6 + 594) & 1) == 0 && v7 )
  {
    DynArray<CWindowData *,0>::AddMultipleAndSet((char *)this + 472, &v17);
LABEL_17:
    v6 = v17;
    goto LABEL_9;
  }
  if ( (*((_BYTE *)v6 + 594) & 1) != 0 && !v7 )
  {
    DynArray<CWindowData *,0>::Remove((char *)this + 472, &v17);
    goto LABEL_17;
  }
LABEL_9:
  *((_BYTE *)v6 + 594) ^= (v7 ^ *((_BYTE *)v6 + 594)) & 1;
  v9 = v17;
  v10 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 32);
  if ( *((_QWORD *)v17 + 54) )
  {
    *((_BYTE *)v17 + 594) &= ~2u;
    *((_BYTE *)v9 + 594) &= ~8u;
    CWindowData::SetIconicBitmap(v9, 0LL);
    v13 = CIconicBitmapRegistry::RequestBitmap((CIconicBitmapRegistry *)v10, v9, 0);
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x338u);
    CIconicBitmapRegistry::ClearBitmap((CIconicBitmapRegistry *)v10, v9);
    v14 = CWindowIconic::OnRepresentationTypeUpdated(*((CWindowIconic **)v9 + 54));
    if ( v14 < 0 )
    {
      v16 = 826;
LABEL_30:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, v16);
      goto LABEL_11;
    }
  }
  v11 = *(_QWORD *)(v10 + 96);
  if ( v11 && *(struct CWindowData **)(v11 + 72) == v9 )
  {
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
    if ( v14 < 0 )
    {
      v16 = 836;
      goto LABEL_30;
    }
  }
LABEL_11:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return (unsigned int)SyncedWindowData;
}
