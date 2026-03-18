/*
 * XREFs of ?RemoveAllChildren@CVisual@@IEAAXXZ @ 0x180050310
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x180051F3C (--1CVisual@@MEAA@XZ.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180009FA0 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z @ 0x1800505A4 (-NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z.c)
 *     ?Release@CVisual@@UEAAKXZ @ 0x180054D00 (-Release@CVisual@@UEAAKXZ.c)
 *     ?GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180054DEC (-GetRenderPassInfoList@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetProcessAttributionNoRef@CResource@@UEBAPEAVCProcessAttribution@@XZ @ 0x1800A9B30 (-GetProcessAttributionNoRef@CResource@@UEBAPEAVCProcessAttribution@@XZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800AACB0 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800B2164 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x180135D38 (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x18014E320 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1801977AC (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 */

void __fastcall CVisual::RemoveAllChildren(CVisual *this)
{
  __int64 *v1; // rsi
  __int64 v3; // rax
  int v4; // r14d
  int v5; // ebp
  int v6; // ebp
  int v7; // r14d
  __int64 v8; // rax
  struct _LIST_ENTRY *RenderPassInfoList; // rax
  struct _LIST_ENTRY *v10; // rsi
  struct CProcessAttribution *(__fastcall *v11)(CResource *__hidden); // rax
  struct CProcessAttribution *ProcessAttributionNoRef; // rax
  struct CProcessAttribution *v13; // rsi
  __int64 *j; // rbx
  unsigned __int64 v15; // r12
  __int64 v16; // r13
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // r9
  CVisual *v20; // rdi
  char v21; // al
  int v22; // ecx
  int v23; // edx
  unsigned int (__fastcall *v24)(CVisual *__hidden); // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  struct CProcessAttribution *(__fastcall *v28)(CResource *__hidden); // rax
  struct CProcessAttribution *v29; // rax
  struct CProcessAttribution *v30; // rdi
  CVisual *v31; // rcx
  CVisual *v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rax
  struct _LIST_ENTRY *i; // rdi
  int v37; // eax
  struct CManipulationManager *v38; // [rsp+70h] [rbp+8h] BYREF
  __int64 v39; // [rsp+78h] [rbp+10h]

  v1 = (__int64 *)((char *)this + 72);
  v3 = *((_QWORD *)this + 9);
  if ( (v3 & 2) != 0 )
    v3 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v3) = v3 & 1;
  v4 = 0;
  v5 = 0;
  if ( (_DWORD)v3 )
  {
    v15 = 0LL;
    v16 = 0LL;
    v39 = (unsigned int)v3;
    v17 = 16LL;
    do
    {
      v18 = CPtrArrayBase::operator[](v1, v16);
      v20 = (CVisual *)v18;
      if ( v18 )
      {
        if ( (*(_BYTE *)(v18 + 93) & 4) != 0 )
        {
          v38 = 0LL;
          Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v38);
          if ( (int)CComposition::GetManipulationManager(*((CComposition **)this + 2), &v38) >= 0 )
            CManipulationManager::QueueMidManipulationUpdate(v38, 3LL, v20);
          Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v38);
        }
        *((_QWORD *)v20 + 10) = 0LL;
        v21 = *((_BYTE *)v20 + 256);
        v22 = v4 + *((_DWORD *)v20 + 62);
        v23 = v5 + *((_DWORD *)v20 + 63);
        v4 = v22 + 1;
        if ( (v21 & 1) == 0 )
          v4 = v22;
        v5 = v23 + 1;
        if ( (v21 & 2) == 0 )
          v5 = v23;
        v24 = *(unsigned int (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v20 + 16LL);
        if ( v24 == CVisual::Release )
          CVisual::Release(v20);
        else
          v24(v20);
        v25 = *v1;
        if ( (*v1 & 2) != 0 )
          v26 = *(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          v26 = *v1 & 1;
        if ( v15 >= v26 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x13Bu);
        }
        else if ( v26 == 1 )
        {
          *v1 = 1LL;
        }
        else
        {
          *(_QWORD *)((v25 & 0xFFFFFFFFFFFFFFFCuLL) + v17) = 0LL;
        }
        v19 = v39;
      }
      ++v16;
      ++v15;
      v17 += 8LL;
      v39 = v19 - 1;
    }
    while ( v19 != 1 );
  }
  if ( (*v1 & 2) != 0 )
    WPF::ProcessHeapImpl::Free((void *)(*v1 & 0xFFFFFFFFFFFFFFFCuLL));
  *v1 = 0LL;
  v6 = -v5;
  v7 = -v4;
  if ( v7 || v6 )
  {
    v31 = this;
    v32 = this;
    do
    {
      *((_DWORD *)v31 + 62) += v7;
      *((_DWORD *)v31 + 63) += v6;
      v31 = (CVisual *)*((_QWORD *)v31 + 10);
      if ( v32 )
      {
        v32 = (CVisual *)*((_QWORD *)v32 + 10);
        if ( v32 )
          v32 = (CVisual *)*((_QWORD *)v32 + 10);
      }
    }
    while ( v31 != v32 );
  }
  v8 = *((_QWORD *)this + 3);
  if ( (v8 & 2) != 0 )
    v8 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v8) = v8 & 1;
  if ( (_DWORD)v8 )
  {
    v33 = 0LL;
    v34 = (unsigned int)v8;
    do
    {
      v35 = CPtrArrayBase::operator[]((char *)this + 24, v33);
      if ( v35 != *((_QWORD *)this + 10) )
        (*(void (__fastcall **)(__int64, _QWORD, CVisual *))(*(_QWORD *)v35 + 64LL))(v35, 0LL, this);
      ++v33;
      --v34;
    }
    while ( v34 );
  }
  RenderPassInfoList = CVisual::GetRenderPassInfoList(this);
  v10 = RenderPassInfoList;
  if ( RenderPassInfoList )
  {
    for ( i = RenderPassInfoList->Flink; i != v10; i = i->Flink )
    {
      v37 = CMoveRenderPassInfo::ResetVisibleRegion((CMoveRenderPassInfo *)&i[-6].Blink);
      if ( v37 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0xFDEu);
        break;
      }
      CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)&i[-6].Blink);
    }
  }
  v11 = *(struct CProcessAttribution *(__fastcall **)(CResource *__hidden))(*(_QWORD *)this + 120LL);
  if ( v11 == CResource::GetProcessAttributionNoRef )
    ProcessAttributionNoRef = CResource::GetProcessAttributionNoRef(this);
  else
    ProcessAttributionNoRef = v11(this);
  *((_DWORD *)this + 22) |= 0x15u;
  v13 = ProcessAttributionNoRef;
  if ( ProcessAttributionNoRef )
    ++*((_DWORD *)ProcessAttributionNoRef + 7);
  for ( j = (__int64 *)*((_QWORD *)this + 10); j; v13 = v30 )
  {
    if ( ((*((_DWORD *)j + 22) << 25) & 0xA2000000) == 0xA2000000 )
      break;
    v27 = *j;
    *((_DWORD *)j + 22) |= 0x51u;
    v28 = *(struct CProcessAttribution *(__fastcall **)(CResource *__hidden))(v27 + 120);
    v29 = v28 == CResource::GetProcessAttributionNoRef
        ? CResource::GetProcessAttributionNoRef((CResource *)j)
        : v28((CResource *)j);
    v30 = v29;
    if ( v29 )
    {
      if ( v29 != v13 )
        ++*((_DWORD *)v29 + 6);
    }
    else
    {
      v30 = v13;
    }
    CVisual::NotifyVisualTreeListeners(j, 0LL);
    j = (__int64 *)j[10];
  }
}
