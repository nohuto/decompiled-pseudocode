/*
 * XREFs of ?ApplyIncrementalUpdate@CEndpointResourceStateManager@@QEAAJPEBVCFlipPresentUpdate@@@Z @ 0x1C0050FD4
 * Callers:
 *     ?ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z @ 0x1C004FFD8 (-ConsumerBeginProcessPresent@CFlipManager@@QEAAJPEAI0@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0HDGCEDEG@@@SAPEAX_K@Z @ 0x1C0050EC0 (--2-$DXGQUOTAALLOCATOR@$00$0HDGCEDEG@@@SAPEAX_K@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0HDHCEDEG@@@SAPEAX_K@Z @ 0x1C0050EE4 (--2-$DXGQUOTAALLOCATOR@$00$0HDHCEDEG@@@SAPEAX_K@Z.c)
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x1C0051364 (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z @ 0x1C0051D90 (-RemovePoolBufferState@CEndpointResourceStateManager@@QEAAXPEAVCPoolBufferResourceState@@@Z.c)
 *     ?SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z @ 0x1C0052360 (-SetBoundBuffer@CContentResourceState@@QEAAXPEAVCPoolBufferResource@@@Z.c)
 *     ?SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z @ 0x1C00523BC (-SetBoundPropertySet@CContentResourceState@@QEAAXPEAVCFlipPropertySet@@@Z.c)
 */

__int64 __fastcall CEndpointResourceStateManager::ApplyIncrementalUpdate(
        struct _LIST_ENTRY *this,
        const struct CFlipPresentUpdate *a2)
{
  unsigned int *v2; // rdi
  unsigned int v3; // esi
  unsigned int *v4; // r14
  CEndpointResourceStateManager *v6; // rcx
  CEndpointResourceStateManager *v7; // rcx
  int v8; // ecx
  CEndpointResourceStateManager *v9; // rcx
  CContentResourceState *v10; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  char v13; // al
  CEndpointResourceStateManager *v14; // rcx
  CEndpointResourceStateManager **Blink; // rdx
  _QWORD *v16; // rax
  _QWORD *v17; // rcx
  char v18; // al
  CEndpointResourceStateManager **v19; // rax
  struct _LIST_ENTRY **v20; // rcx
  struct CFlipResourceState *v21; // rax
  struct CPoolBufferResourceState *ResourceState; // rax

  v2 = (unsigned int *)*((_QWORD *)a2 + 6);
  v3 = 0;
  v4 = (unsigned int *)((char *)v2 + *((unsigned int *)a2 + 10));
  while ( v2 < v4 )
  {
    v6 = (CEndpointResourceStateManager *)*v2;
    if ( !(_DWORD)v6 )
    {
      ResourceState = CEndpointResourceStateManager::FindResourceState(v6, *((_QWORD *)v2 + 1), this);
      CEndpointResourceStateManager::RemovePoolBufferState((CEndpointResourceStateManager *)this, ResourceState);
      goto LABEL_23;
    }
    v7 = (CEndpointResourceStateManager *)(unsigned int)((_DWORD)v6 - 1);
    if ( !(_DWORD)v7 )
    {
      v21 = CEndpointResourceStateManager::FindResourceState(v7, *((_QWORD *)v2 + 1), this + 1);
      (*(void (__fastcall **)(struct CFlipResourceState *))(*(_QWORD *)v21 + 24LL))(v21);
      goto LABEL_23;
    }
    v8 = (_DWORD)v7 - 1;
    if ( v8 )
    {
      v9 = (CEndpointResourceStateManager *)(unsigned int)(v8 - 1);
      if ( !(_DWORD)v9 )
      {
        v11 = DXGQUOTAALLOCATOR<1,1936868166>::operator new();
        v12 = v11;
        if ( v11 )
        {
          v11[3] = *((_QWORD *)v2 + 1);
          v13 = v11[4] & 0xF1;
          *v12 = &CFlipResourceState::`vftable';
          *((_BYTE *)v12 + 32) = v13 | 1;
          v12[2] = v12 + 1;
          v12[1] = v12 + 1;
          ++*(_DWORD *)(v12[3] + 24LL);
          *((_BYTE *)v12 + 56) &= 0xFCu;
          *v12 = &CContentResourceState::`vftable';
          v12[5] = 0LL;
          v12[6] = 0LL;
        }
        else
        {
          v12 = 0LL;
        }
        if ( !v12 )
          return (unsigned int)-1073741801;
        v14 = (CEndpointResourceStateManager *)(v12 + 1);
        Blink = (CEndpointResourceStateManager **)this[1].Blink;
        if ( *Blink != (CEndpointResourceStateManager *)&this[1] )
          __fastfail(3u);
        *(_QWORD *)v14 = this + 1;
        *((_QWORD *)v14 + 1) = Blink;
        *Blink = v14;
        this[1].Blink = (struct _LIST_ENTRY *)v14;
        goto LABEL_23;
      }
      if ( (_DWORD)v9 == 1 )
      {
        v10 = CEndpointResourceStateManager::FindResourceState(v9, *((_QWORD *)v2 + 1), this + 1);
        CContentResourceState::SetBoundBuffer(v10, *((struct CPoolBufferResource **)v2 + 2));
        CContentResourceState::SetBoundPropertySet(v10, *((struct CFlipPropertySet **)v2 + 3));
        v2 += 8;
      }
    }
    else
    {
      v16 = DXGQUOTAALLOCATOR<1,1935819590>::operator new();
      v17 = v16;
      if ( v16 )
      {
        v16[3] = *((_QWORD *)v2 + 1);
        v18 = v16[4] & 0xF1;
        *v17 = &CFlipResourceState::`vftable';
        *((_BYTE *)v17 + 32) = v18 | 1;
        v17[2] = v17 + 1;
        v17[1] = v17 + 1;
        ++*(_DWORD *)(v17[3] + 24LL);
        *v17 = &CPoolBufferResourceState::`vftable';
      }
      else
      {
        v17 = 0LL;
      }
      if ( !v17 )
        return (unsigned int)-1073741801;
      v19 = (CEndpointResourceStateManager **)this->Blink;
      v20 = (struct _LIST_ENTRY **)(v17 + 1);
      if ( *v19 != (CEndpointResourceStateManager *)this )
        __fastfail(3u);
      *v20 = this;
      v20[1] = (struct _LIST_ENTRY *)v19;
      *v19 = (CEndpointResourceStateManager *)v20;
      this->Blink = (struct _LIST_ENTRY *)v20;
LABEL_23:
      v2 += 4;
    }
  }
  return v3;
}
