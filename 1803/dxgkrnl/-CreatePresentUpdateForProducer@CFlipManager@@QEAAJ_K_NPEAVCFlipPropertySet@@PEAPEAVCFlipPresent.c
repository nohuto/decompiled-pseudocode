/*
 * XREFs of ?CreatePresentUpdateForProducer@CFlipManager@@QEAAJ_K_NPEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x1C0050264
 * Callers:
 *     ?CreatePresentUpdateForProducer@FlipManagerObject@@QEAAJ_K_NPEAVCFlipPropertySet@@PEAPEAVCFlipPresentUpdate@@@Z @ 0x1C004F9B4 (-CreatePresentUpdateForProducer@FlipManagerObject@@QEAAJ_K_NPEAVCFlipPropertySet@@PEAPEAVCFlipPr.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0HFHAEDEG@@@SAPEAX_K@Z @ 0x1C004FCD8 (--2-$DXGQUOTAALLOCATOR@$00$0HFHAEDEG@@@SAPEAX_K@Z.c)
 *     ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C00514FC (-PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpd.c)
 *     ?SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C0052640 (-SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 */

__int64 __fastcall CFlipManager::CreatePresentUpdateForProducer(
        CFlipManager *this,
        __int64 a2,
        char a3,
        struct CFlipPropertySet *a4,
        struct CFlipPresentUpdate **a5)
{
  _QWORD *v5; // rbx
  signed int v9; // edi
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rax

  v5 = 0LL;
  v9 = a2 != 0 ? 0xC000000D : 0;
  if ( !a2 )
  {
    v10 = DXGQUOTAALLOCATOR<1,1970291526>::operator new();
    v5 = v10;
    if ( v10 )
    {
      v11 = *((_QWORD *)this + 21);
      v10[1] = 0LL;
      v12 = v10 + 3;
      v12[1] = v12;
      *v12 = v12;
      *((_DWORD *)v5 + 10) = 0;
      v5[6] = 0LL;
      v5[7] = 0LL;
      *v5 = &CFlipPresentUpdate::`vftable'{for `CFlipTokenOperation'};
      v5[2] = &CFlipPresentUpdate::`vftable'{for `CFlipQueuedObject'};
      v5[8] = v11;
      *((_BYTE *)v5 + 72) = a3;
    }
    else
    {
      v5 = 0LL;
    }
    if ( !v5 )
      v9 = -1073741801;
  }
  if ( v9 >= 0 )
  {
    v9 = CEndpointResourceStateManager::PrepareIncrementalUpdateForStateManager(
           (CFlipManager *)((char *)this + 56),
           (struct CFlipPresentUpdate *)v5);
    if ( v9 >= 0 )
    {
      CFlipPresentUpdate::SetFlipPropertySet((CFlipPresentUpdate *)v5, a4);
      *a5 = (struct CFlipPresentUpdate *)v5;
      v5 = 0LL;
    }
  }
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *, __int64))(*v5 + 24LL))(v5, 1LL);
  return (unsigned int)v9;
}
