/*
 * XREFs of ?CreateCompositionFrame@CTokenManager@@UEAAJAEBUCOMPOSITION_FRAME_INFO@@PEAPEAUICompositionFrame@@@Z @ 0x1C0010D60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTokenManager::CreateCompositionFrame(
        CTokenManager *this,
        const struct COMPOSITION_FRAME_INFO *a2,
        struct ICompositionFrame **a3)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rbx
  bool v8; // zf
  unsigned __int64 v9; // rax
  __int64 result; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xB8uLL, 0x66634D54u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225495LL;
  PoolWithTag[2] = 1;
  *(_QWORD *)PoolWithTag = &CCompositionFrame::`vftable';
  v8 = CCompositionFrame::s_frameIdCounter == -1LL;
  v9 = CCompositionFrame::s_frameIdCounter + 1;
  *((_OWORD *)v7 + 2) = *(_OWORD *)a2;
  CCompositionFrame::s_frameIdCounter = v9;
  *((_OWORD *)v7 + 3) = *((_OWORD *)a2 + 1);
  *((_OWORD *)v7 + 4) = *((_OWORD *)a2 + 2);
  if ( v8 )
  {
    v9 = 1LL;
    CCompositionFrame::s_frameIdCounter = 1LL;
  }
  *((_QWORD *)v7 + 10) = v9;
  v7[22] = 0;
  *((_QWORD *)v7 + 12) = 0LL;
  *((_QWORD *)v7 + 13) = 0LL;
  *((_BYTE *)v7 + 112) = 0;
  *((_QWORD *)v7 + 15) = 0LL;
  *((_QWORD *)v7 + 16) = 0LL;
  *((_WORD *)v7 + 68) = 0;
  *((_BYTE *)v7 + 138) = 0;
  *((_QWORD *)v7 + 22) = this;
  *((_QWORD *)v7 + 19) = v7 + 36;
  *((_QWORD *)v7 + 18) = v7 + 36;
  *((_QWORD *)v7 + 21) = v7 + 40;
  *((_QWORD *)v7 + 20) = v7 + 40;
  (**(void (__fastcall ***)(CTokenManager *))this)(this);
  result = 0LL;
  *a3 = (struct ICompositionFrame *)v7;
  return result;
}
