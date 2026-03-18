/*
 * XREFs of ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x18004E20C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?PropagateBackdropUpdates@CVisual@@AEAAXHH@Z @ 0x18004D170 (-PropagateBackdropUpdates@CVisual@@AEAAXHH@Z.c)
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x18004D638 (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x180050F80 (-Release@CVisual@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Clear@CPtrArrayBase@@IEAAXXZ @ 0x1800B951C (-Clear@CPtrArrayBase@@IEAAXXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800B963C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::RemoveAllChildren(CVisual *this)
{
  CPtrArrayBase *v1; // rbx
  __int64 v3; // rax
  int v4; // esi
  int v5; // ebp
  unsigned __int64 v6; // r13
  __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // r9
  CVisual *v11; // rdi
  char v12; // cl
  int v13; // edx
  int v14; // r8d
  unsigned int (__fastcall *v15)(CVisual *__hidden); // rax
  unsigned __int64 *v16; // rcx
  unsigned __int64 v17; // rax
  __int64 v18; // [rsp+60h] [rbp+8h]

  v1 = (CVisual *)((char *)this + 72);
  v3 = *((_QWORD *)this + 9);
  if ( (v3 & 2) != 0 )
    v3 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v3) = v3 & 1;
  v4 = 0;
  v5 = 0;
  if ( (_DWORD)v3 )
  {
    v6 = 0LL;
    v7 = 0LL;
    v18 = (unsigned int)v3;
    v8 = 2LL;
    do
    {
      v9 = CPtrArrayBase::operator[](v1, v7);
      v11 = (CVisual *)v9;
      if ( v9 )
      {
        CVisual::NotifyMidManipulationUpdate((__int64)this, 3u, v9);
        *((_QWORD *)v11 + 10) = 0LL;
        v12 = *((_BYTE *)v11 + 264);
        v13 = v4 + *((_DWORD *)v11 + 64);
        v14 = v5 + *((_DWORD *)v11 + 65);
        v4 = v13 + 1;
        v15 = *(unsigned int (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v11 + 16LL);
        v5 = v14 + 1;
        if ( (v12 & 1) == 0 )
          v4 = v13;
        if ( (v12 & 2) == 0 )
          v5 = v14;
        if ( v15 == CVisual::Release )
          CVisual::Release(v11);
        else
          v15(v11);
        v16 = (unsigned __int64 *)(*(_QWORD *)v1 & 0xFFFFFFFFFFFFFFFCuLL);
        if ( (*(_QWORD *)v1 & 2) != 0 )
          v17 = *v16;
        else
          v17 = *(_QWORD *)v1 & 1LL;
        if ( v6 >= v17 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x13Bu);
        }
        else if ( v17 == 1 )
        {
          *(_QWORD *)v1 = 1LL;
        }
        else
        {
          v16[v8] = 0LL;
        }
        v10 = v18;
      }
      ++v7;
      ++v6;
      ++v8;
      v18 = v10 - 1;
    }
    while ( v10 != 1 );
  }
  CPtrArrayBase::Clear(v1);
  CVisual::PropagateBackdropUpdates(this, -v4, -v5);
  CVisual::PropagateFlags(this, 5LL);
}
