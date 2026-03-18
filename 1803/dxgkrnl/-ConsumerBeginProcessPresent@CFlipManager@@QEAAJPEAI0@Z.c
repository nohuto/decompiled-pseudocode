/*
 * XREFs of ?ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z @ 0x1C004FFD8
 * Callers:
 *     ?ConsumerBeginProcessPresent@FlipManagerObject@@QEAAJPEAI0@Z @ 0x1C004DE24 (-ConsumerBeginProcessPresent@FlipManagerObject@@QEAAJPEAI0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0HFHAEDEG@@@SAPEAX_K@Z @ 0x1C004FCD8 (--2-$DXGQUOTAALLOCATOR@$00$0HFHAEDEG@@@SAPEAX_K@Z.c)
 *     ?Dequeue@?$CFlipObjectQueue@VCFlipPresentUpdate@@@@QEAAPEAVCFlipPresentUpdate@@XZ @ 0x1C0050434 (-Dequeue@-$CFlipObjectQueue@VCFlipPresentUpdate@@@@QEAAPEAVCFlipPresentUpdate@@XZ.c)
 *     ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x1C0050FD4 (-ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z.c)
 *     ?PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C00517C8 (-PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z.c)
 *     ?SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C0052640 (-SetFlipPropertySet@CFlipPresentUpdate@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 */

__int64 __fastcall CFlipManager::ConsumerBeginProcessPresent(CFlipManager *this, unsigned int *a2, unsigned int *a3)
{
  _QWORD *v3; // rbx
  _QWORD *v7; // r9
  int v8; // edi
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // r15
  __int64 v13; // rcx

  v3 = 0LL;
  if ( *(_OWORD *)((char *)this + 184) != 0LL || *((CFlipManager **)this + 15) == (CFlipManager *)((char *)this + 120) )
    return (unsigned int)-1073741823;
  *((_QWORD *)this + 23) = CFlipObjectQueue<CFlipPresentUpdate>::Dequeue((char *)this + 120);
  if ( (_QWORD *)*v7 == v7 )
    KeResetEvent(*((PRKEVENT *)this + 25));
  v8 = CEndpointResourceStateManager::ApplyIncrementalUpdate(
         (CFlipManager *)((char *)this + 88),
         *((const struct CFlipPresentUpdate **)this + 23));
  if ( v8 >= 0 )
  {
    v9 = DXGQUOTAALLOCATOR<1,1970291526>::operator new();
    v3 = v9;
    if ( v9 )
    {
      v10 = *((_QWORD *)this + 21);
      v9[1] = 0LL;
      v11 = v9 + 3;
      v11[1] = v11;
      *v11 = v11;
      *((_DWORD *)v3 + 10) = 0;
      v3[6] = 0LL;
      v3[7] = 0LL;
      *v3 = &CFlipPresentUpdate::`vftable'{for `CFlipTokenOperation'};
      v3[2] = &CFlipPresentUpdate::`vftable'{for `CFlipQueuedObject'};
      v3[8] = v10;
      *((_BYTE *)v3 + 72) = 1;
    }
    else
    {
      v3 = 0LL;
    }
    if ( !v3 )
      v8 = -1073741801;
  }
  v12 = v3;
  if ( v8 >= 0 )
  {
    v8 = CEndpointResourceStateManager::PrepareIncrementalUpdateForUser(
           (CFlipManager *)((char *)this + 88),
           (struct CFlipPresentUpdate *)v3);
    if ( v8 >= 0 )
    {
      CFlipPresentUpdate::SetFlipPropertySet(
        (CFlipPresentUpdate *)v3,
        *(struct CFlipPropertySet **)(*((_QWORD *)this + 23) + 56LL));
      *((_QWORD *)this + 24) = v3;
      v3 = 0LL;
      *a2 = *((_DWORD *)v12 + 10);
      v13 = *(_QWORD *)(*((_QWORD *)this + 24) + 56LL);
      if ( v13 )
      {
        *a3 = *(_DWORD *)(v13 + 32);
        return (unsigned int)v8;
      }
      *a3 = 0;
    }
  }
  if ( v3 )
    (*(void (__fastcall **)(_QWORD *, __int64))(*v3 + 24LL))(v3, 1LL);
  return (unsigned int)v8;
}
