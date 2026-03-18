/*
 * XREFs of ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x1800509B0
 * Callers:
 *     ?ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z @ 0x1800514F0 (-ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z.c)
 *     ?ProcessInsertChildAt@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_INSERTCHILDAT@@@Z @ 0x180051578 (-ProcessInsertChildAt@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_INSERTCHILDAT@@@Z.c)
 *     ?AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z @ 0x180129360 (-AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x180009FA0 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x180027AA0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z @ 0x1800505A4 (-NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z.c)
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x180050854 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetProcessAttributionNoRef@CWindowNode@@UEBAPEAVCProcessAttribution@@XZ @ 0x18009C490 (-GetProcessAttributionNoRef@CWindowNode@@UEBAPEAVCProcessAttribution@@XZ.c)
 *     ?GetProcessAttributionNoRef@CResource@@UEBAPEAVCProcessAttribution@@XZ @ 0x1800A9B30 (-GetProcessAttributionNoRef@CResource@@UEBAPEAVCProcessAttribution@@XZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x1800AACB0 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800B2164 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800B219C (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ @ 0x180135D38 (-ClearVisibleRegion@CMoveRenderPassInfo@@QEAAXXZ.c)
 *     ?ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ @ 0x18014E320 (-ResetVisibleRegion@CMoveRenderPassInfo@@UEAAJXZ.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1801977AC (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 */

__int64 __fastcall CVisual::InsertChildAt(CVisual *this, CVisual **a2, unsigned int a3, char a4)
{
  char v4; // r15
  CVisual **v5; // rbx
  struct CManipulationManager *v6; // r13
  int v7; // eax
  __int64 (__fastcall *v8)(CMILCOMBase *); // rax
  __int64 v9; // rdx
  CComposition **v10; // rcx
  CVisual *v11; // rcx
  CVisual *v12; // rcx
  CVisual *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  struct CProcessAttribution *(__fastcall *v17)(CResource *__hidden); // rax
  struct CProcessAttribution *ProcessAttributionNoRef; // rax
  struct CProcessAttribution *v19; // rsi
  __int64 mm; // rdi
  unsigned __int64 v21; // rax
  CVisual *v22; // rcx
  struct CProcessAttribution *(__fastcall *v23)(CWindowNode *__hidden); // rax
  struct CProcessAttribution *v24; // rax
  struct CProcessAttribution *v25; // rsi
  CVisual *v26; // rdi
  char v27; // al
  int v28; // r8d
  int v29; // edx
  __int64 v31; // rax
  struct CProcessAttribution *(__fastcall *v32)(CResource *__hidden); // rax
  struct CProcessAttribution *v33; // rax
  struct CProcessAttribution *v34; // r14
  __int64 v35; // rax
  __int64 v36; // rax
  struct CProcessAttribution *(__fastcall *v37)(CResource *__hidden); // rax
  struct CProcessAttribution *v38; // rax
  int v39; // eax
  unsigned int *i; // rcx
  _QWORD *j; // rax
  unsigned int *k; // rcx
  _QWORD *m; // rax
  unsigned int *n; // rcx
  _QWORD *ii; // rax
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rsi
  __int64 v50; // r15
  __int64 v51; // rax
  struct CManipulationManager *v52; // rcx
  struct CManipulationManager *v53; // rax
  __int64 v54; // rdi
  __int64 v55; // rsi
  __int64 v56; // rax
  unsigned int *jj; // rcx
  _QWORD *kk; // rdi
  int v59; // eax
  char *nn; // rcx
  _QWORD *i1; // rdi
  int v62; // eax
  _QWORD *v63; // [rsp+30h] [rbp-10h]
  _QWORD *v64; // [rsp+30h] [rbp-10h]
  _QWORD *v65; // [rsp+30h] [rbp-10h]
  _QWORD *v66; // [rsp+30h] [rbp-10h]
  _QWORD *v67; // [rsp+30h] [rbp-10h]
  struct CManipulationManager *v68; // [rsp+80h] [rbp+40h] BYREF
  int v69; // [rsp+88h] [rbp+48h]
  char v70; // [rsp+98h] [rbp+58h]

  v70 = a4;
  v68 = this;
  v4 = a4;
  v5 = a2;
  v6 = this;
  if ( a2[10] == this )
  {
    LODWORD(v5) = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x29Au);
  }
  else
  {
    v7 = CPtrArrayBase::InsertAt((CVisual *)((char *)this + 72), (unsigned __int64)a2, a3);
    v69 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x29Du);
    }
    else
    {
      v8 = (__int64 (__fastcall *)(CMILCOMBase *))*((_QWORD *)*v5 + 1);
      if ( v8 == CMILCOMBase::InternalAddRef )
        CMILCOMBase::InternalAddRef((CMILCOMBase *)v5);
      else
        v8((CMILCOMBase *)v5);
      v10 = (CComposition **)v5[10];
      if ( v10 && (v39 = CVisual::RemoveChild(v10, (struct CVisual *)v5, 0), v69 = v39, v39 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v39, 0x2A5u);
      }
      else
      {
        v11 = v5[26];
        v5[10] = v6;
        v5[50] = 0LL;
        if ( (*((_DWORD *)v11 + 1) & 0x80000) != 0 )
        {
          for ( i = (unsigned int *)((char *)v11 + 12); ; i = (unsigned int *)((char *)i + (v9 & 0xFFFFFF) + 4) )
          {
            v9 = *i;
            if ( (*i & 0x7F000000) == 0xD000000 )
              break;
          }
          v63 = *(_QWORD **)(i + 1);
          if ( v63 )
          {
            for ( j = (_QWORD *)*v63; j != v63; j = (_QWORD *)*j )
              *(j - 13) = 0LL;
          }
        }
        v12 = v5[26];
        v5[57] = 0LL;
        if ( (*((_DWORD *)v12 + 1) & 0x80000) != 0 )
        {
          for ( k = (unsigned int *)((char *)v12 + 12); ; k = (unsigned int *)((char *)k + (v9 & 0xFFFFFF) + 4) )
          {
            v9 = *k;
            if ( (*k & 0x7F000000) == 0xD000000 )
              break;
          }
          v64 = *(_QWORD **)(k + 1);
          if ( v64 )
          {
            for ( m = (_QWORD *)*v64; m != v64; m = (_QWORD *)*m )
              *(m - 6) = 0LL;
          }
        }
        v13 = v5[26];
        v5[58] = 0LL;
        if ( (*((_DWORD *)v13 + 1) & 0x80000) != 0 )
        {
          for ( n = (unsigned int *)((char *)v13 + 12); ; n = (unsigned int *)((char *)n + (v9 & 0xFFFFFF) + 4) )
          {
            v9 = *n;
            if ( (*n & 0x7F000000) == 0xD000000 )
              break;
          }
          v65 = *(_QWORD **)(n + 1);
          if ( v65 )
          {
            for ( ii = (_QWORD *)*v65; ii != v65; ii = (_QWORD *)*ii )
              *(ii - 5) = 0LL;
          }
        }
        v14 = *((_QWORD *)v6 + 3);
        if ( (v14 & 2) != 0 )
          v14 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          LODWORD(v14) = v14 & 1;
        if ( (_DWORD)v14 )
        {
          v46 = 0LL;
          v47 = (unsigned int)v14;
          do
          {
            v48 = CPtrArrayBase::operator[]((char *)v6 + 24, v46);
            if ( v48 != *((_QWORD *)v6 + 10) )
              (*(void (__fastcall **)(__int64, _QWORD, struct CManipulationManager *))(*(_QWORD *)v48 + 64LL))(
                v48,
                0LL,
                v6);
            ++v46;
            --v47;
          }
          while ( v47 );
        }
        v15 = *((_QWORD *)v6 + 26);
        v16 = 234881024LL;
        if ( (*(_DWORD *)(v15 + 4) & 0x40000) != 0 )
        {
          for ( jj = (unsigned int *)(v15 + 12); ; jj = (unsigned int *)((char *)jj + (v9 & 0xFFFFFF) + 4) )
          {
            v9 = *jj;
            if ( (*jj & 0x7F000000) == 0xE000000 )
              break;
          }
          v66 = *(_QWORD **)(jj + 1);
          if ( v66 )
          {
            for ( kk = (_QWORD *)*v66; kk != v66; kk = (_QWORD *)*kk )
            {
              v59 = CMoveRenderPassInfo::ResetVisibleRegion((CMoveRenderPassInfo *)(kk - 11));
              if ( v59 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v59, 0xFDEu);
                break;
              }
              CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)(kk - 11));
            }
          }
        }
        v17 = *(struct CProcessAttribution *(__fastcall **)(CResource *__hidden))(*(_QWORD *)v6 + 120LL);
        if ( v17 == CResource::GetProcessAttributionNoRef )
          ProcessAttributionNoRef = CResource::GetProcessAttributionNoRef(v6);
        else
          ProcessAttributionNoRef = (struct CProcessAttribution *)((__int64 (__fastcall *)(struct CManipulationManager *, __int64, __int64))v17)(
                                                                    v6,
                                                                    v9,
                                                                    v16);
        *((_DWORD *)v6 + 22) |= 0x11u;
        v19 = ProcessAttributionNoRef;
        for ( mm = *((_QWORD *)v6 + 10); mm && (*(_BYTE *)(mm + 88) & 0x11) != 0x11; mm = *(_QWORD *)(mm + 80) )
        {
          v36 = *(_QWORD *)mm;
          *(_DWORD *)(mm + 88) |= 0x11u;
          v37 = *(struct CProcessAttribution *(__fastcall **)(CResource *__hidden))(v36 + 120);
          if ( v37 == CResource::GetProcessAttributionNoRef )
            v38 = CResource::GetProcessAttributionNoRef((CResource *)mm);
          else
            v38 = v37((CResource *)mm);
          if ( !v38 )
            v38 = v19;
          v19 = v38;
          CVisual::NotifyVisualTreeListeners(mm, 0);
        }
        v21 = (unsigned __int64)v5[3];
        if ( (v21 & 2) != 0 )
          v21 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          LODWORD(v21) = v21 & 1;
        if ( (_DWORD)v21 )
        {
          v54 = 0LL;
          v55 = (unsigned int)v21;
          do
          {
            v56 = CPtrArrayBase::operator[](v5 + 3, v54);
            if ( (CVisual *)v56 != v5[10] )
              (*(void (__fastcall **)(__int64, __int64, CVisual **))(*(_QWORD *)v56 + 64LL))(v56, 1LL, v5);
            ++v54;
            --v55;
          }
          while ( v55 );
        }
        v22 = v5[26];
        if ( (*((_DWORD *)v22 + 1) & 0x40000) != 0 )
        {
          for ( nn = (char *)v22 + 12; (*(_DWORD *)nn & 0x7F000000) != 0xE000000; nn += (*(_DWORD *)nn & 0xFFFFFF) + 4 )
            ;
          v67 = *(_QWORD **)(nn + 4);
          if ( v67 )
          {
            for ( i1 = (_QWORD *)*v67; i1 != v67; i1 = (_QWORD *)*i1 )
            {
              v62 = CMoveRenderPassInfo::ResetVisibleRegion((CMoveRenderPassInfo *)(i1 - 11));
              if ( v62 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v62, 0xFDEu);
                break;
              }
              CMoveRenderPassInfo::ClearVisibleRegion((CMoveRenderPassInfo *)(i1 - 11));
            }
          }
        }
        v23 = (struct CProcessAttribution *(__fastcall *)(CWindowNode *__hidden))*((_QWORD *)*v5 + 15);
        if ( v23 == CResource::GetProcessAttributionNoRef )
        {
          v24 = CResource::GetProcessAttributionNoRef((CResource *)v5);
        }
        else if ( v23 == CWindowNode::GetProcessAttributionNoRef )
        {
          v24 = CWindowNode::GetProcessAttributionNoRef((CWindowNode *)v5);
        }
        else
        {
          v24 = v23((CWindowNode *)v5);
        }
        *((_DWORD *)v5 + 22) |= 4u;
        v25 = v24;
        if ( v24 )
          ++*((_DWORD *)v24 + 7);
        v26 = v5[10];
        if ( v26 )
        {
          do
          {
            if ( (*((_DWORD *)v26 + 22) & 0x40) != 0 )
              break;
            v31 = *(_QWORD *)v26;
            *((_DWORD *)v26 + 22) |= 0x40u;
            v32 = *(struct CProcessAttribution *(__fastcall **)(CResource *__hidden))(v31 + 120);
            v33 = v32 == CResource::GetProcessAttributionNoRef ? CResource::GetProcessAttributionNoRef(v26) : v32(v26);
            v34 = v33;
            if ( v33 )
            {
              if ( v33 != v25 )
                ++*((_DWORD *)v33 + 6);
            }
            else
            {
              v34 = v25;
            }
            v35 = *((_QWORD *)v26 + 3);
            if ( (v35 & 2) != 0 )
              v35 = *(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFFCuLL);
            else
              LODWORD(v35) = v35 & 1;
            if ( (_DWORD)v35 )
            {
              v49 = 0LL;
              v50 = (unsigned int)v35;
              do
              {
                v51 = CPtrArrayBase::operator[]((char *)v26 + 24, v49);
                if ( v51 != *((_QWORD *)v26 + 10) )
                  (*(void (__fastcall **)(__int64, __int64, CVisual *))(*(_QWORD *)v51 + 64LL))(v51, 1LL, v26);
                ++v49;
                --v50;
              }
              while ( v50 );
            }
            v26 = (CVisual *)*((_QWORD *)v26 + 10);
            v25 = v34;
          }
          while ( v26 );
          v6 = v68;
          v4 = v70;
        }
        v27 = *((_BYTE *)v5 + 256);
        v28 = *((_DWORD *)v5 + 62);
        v29 = *((_DWORD *)v5 + 63);
        if ( (v27 & 1) != 0 )
          ++v28;
        if ( (v27 & 2) != 0 )
          ++v29;
        if ( v28 || v29 )
        {
          v52 = v6;
          v53 = v6;
          do
          {
            *((_DWORD *)v52 + 62) += v28;
            *((_DWORD *)v52 + 63) += v29;
            v52 = (struct CManipulationManager *)*((_QWORD *)v52 + 10);
            if ( v53 )
            {
              v53 = (struct CManipulationManager *)*((_QWORD *)v53 + 10);
              if ( v53 )
                v53 = (struct CManipulationManager *)*((_QWORD *)v53 + 10);
            }
          }
          while ( v52 != v53 );
        }
        if ( !v4 && (*((_BYTE *)v5 + 93) & 4) != 0 )
        {
          v68 = 0LL;
          Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v68);
          if ( (int)CComposition::GetManipulationManager(*((CComposition **)v6 + 2), &v68) >= 0 )
            CManipulationManager::QueueMidManipulationUpdate(v68, 2LL, v5);
          Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v68);
        }
      }
    }
  }
  return (unsigned int)v5;
}
