/*
 * XREFs of ?InsertChildAt@CVisual@@IEAAJPEAV1@I_N@Z @ 0x180084BFC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ?ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z @ 0x180085DA0 (-ProcessMoveChild@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_MOVECHILD@@@Z.c)
 *     ?AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z @ 0x18013FEF0 (-AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18004D8E4 (-InternalRelease@-$ComPtr@VCManipulationManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18005B588 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z @ 0x180083880 (-PropagateFlags@CVisual@@KAXPEAV1@_N111111@Z.c)
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x180084EB8 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ?OnTransformChanged@CVisual@@AEAAXXZ @ 0x180086A80 (-OnTransformChanged@CVisual@@AEAAXXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800BBE10 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?InsertAt@CPtrArrayBase@@IEAAJ_K0@Z @ 0x1800BBE48 (-InsertAt@CPtrArrayBase@@IEAAJ_K0@Z.c)
 *     ?Create@CProcessAttribution@@SAJAEAVCEnergyReporter@@K_KPEAPEAV1@@Z @ 0x1800CA448 (-Create@CProcessAttribution@@SAJAEAVCEnergyReporter@@K_KPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x18018AF70 (-QueueMidManipulationUpdate@CManipulationManager@@AEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 */

__int64 __fastcall CVisual::InsertChildAt(CVisual *this, struct CProcessAttribution **a2, unsigned int a3, char a4)
{
  int v7; // eax
  unsigned int v8; // esi
  __int64 (__fastcall *v9)(CBitmapOfDeviceBitmaps *); // rax
  __int64 v10; // rdx
  CVisual *v11; // rcx
  char v12; // al
  struct CProcessAttribution *v13; // rcx
  struct CProcessAttribution *v14; // rcx
  struct CProcessAttribution *v15; // rcx
  unsigned int *i; // rcx
  struct CManipulationManager *v18; // rcx
  struct CManipulationManager *j; // rax
  unsigned int *k; // rcx
  struct CManipulationManager *v21; // rcx
  struct CManipulationManager *m; // rax
  unsigned int *n; // rcx
  struct CManipulationManager *v24; // rcx
  struct CManipulationManager *ii; // rax
  unsigned int v26; // r10d
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  CVisual *v29; // rax
  int v30; // r10d
  unsigned int v31; // ebp
  __int64 v32; // rbx
  __int64 v33; // rbx
  unsigned __int64 v34; // rax
  unsigned int v35; // [rsp+20h] [rbp-48h]
  struct CManipulationManager *v36; // [rsp+70h] [rbp+8h] BYREF

  if ( a2[10] == this )
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x2BAu);
  }
  else
  {
    v7 = CPtrArrayBase::InsertAt((CVisual *)((char *)this + 72), (unsigned __int64)a2, a3);
    v8 = v7;
    if ( v7 < 0 )
    {
      v35 = 701;
      goto LABEL_58;
    }
    v9 = (__int64 (__fastcall *)(CBitmapOfDeviceBitmaps *))*((_QWORD *)*a2 + 1);
    if ( v9 == CBitmapOfDeviceBitmaps::AddRef )
      CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)a2);
    else
      v9((CBitmapOfDeviceBitmaps *)a2);
    v11 = a2[10];
    if ( v11 )
    {
      v7 = CVisual::RemoveChild(v11, (struct CVisual *)a2, 0);
      v8 = v7;
      if ( v7 < 0 )
      {
        v35 = 709;
LABEL_58:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, v35);
        return v8;
      }
    }
    v12 = *((_BYTE *)a2 + 488);
    a2[10] = this;
    if ( (v12 & 2) != 0 )
    {
      v26 = 0;
      *((_BYTE *)a2 + 488) = v12 | 1;
      while ( 1 )
      {
        v27 = (unsigned __int64)a2[9];
        v28 = (v27 & 2) != 0 ? *(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFFCuLL) : (unsigned __int64)a2[9] & 1;
        v10 = v26;
        if ( v26 >= v28 )
          break;
        v29 = (CVisual *)CPtrArrayBase::operator[](a2 + 9, v26);
        if ( v29 )
          CVisual::OnTransformChanged(v29);
        v26 = v30 + 1;
      }
    }
    v13 = a2[26];
    a2[48] = 0LL;
    if ( (*((_DWORD *)v13 + 1) & 0x80000) != 0 )
    {
      for ( i = (unsigned int *)((char *)v13 + 12); ; i = (unsigned int *)((char *)i + (v10 & 0xFFFFFF) + 4) )
      {
        v10 = *i;
        if ( (*i & 0x7F000000) == 0xD000000 )
          break;
      }
      v36 = *(struct CManipulationManager **)(i + 1);
      v18 = v36;
      if ( v36 )
      {
        for ( j = *(struct CManipulationManager **)v36; j != v18; j = *(struct CManipulationManager **)j )
          *((_QWORD *)j - 13) = 0LL;
      }
    }
    v14 = a2[26];
    a2[55] = 0LL;
    if ( (*((_DWORD *)v14 + 1) & 0x80000) != 0 )
    {
      for ( k = (unsigned int *)((char *)v14 + 12); ; k = (unsigned int *)((char *)k + (v10 & 0xFFFFFF) + 4) )
      {
        v10 = *k;
        if ( (*k & 0x7F000000) == 0xD000000 )
          break;
      }
      v36 = *(struct CManipulationManager **)(k + 1);
      v21 = v36;
      if ( v36 )
      {
        for ( m = *(struct CManipulationManager **)v36; m != v21; m = *(struct CManipulationManager **)m )
          *((_QWORD *)m - 6) = 0LL;
      }
    }
    v15 = a2[26];
    a2[56] = 0LL;
    if ( (*((_DWORD *)v15 + 1) & 0x80000) != 0 )
    {
      for ( n = (unsigned int *)((char *)v15 + 12); ; n = (unsigned int *)((char *)n + (v10 & 0xFFFFFF) + 4) )
      {
        v10 = *n;
        if ( (*n & 0x7F000000) == 0xD000000 )
          break;
      }
      v36 = *(struct CManipulationManager **)(n + 1);
      v24 = v36;
      if ( v36 )
      {
        for ( ii = *(struct CManipulationManager **)v36; ii != v24; ii = *(struct CManipulationManager **)ii )
          *((_QWORD *)ii - 5) = 0LL;
      }
    }
    if ( CEnergyReporter::s_reportingEnabled )
    {
      v31 = (*((__int64 (__fastcall **)(struct CProcessAttribution **, __int64, __int64, __int64))*a2 + 12))(
              a2,
              v10,
              2130706432LL,
              218103808LL);
      if ( v31 )
      {
        if ( v31 != GetCurrentProcessId() )
        {
          if ( (*(unsigned int (__fastcall **)(CVisual *))(*(_QWORD *)this + 96LL))(this) != v31
            || (v32 = (*((__int64 (__fastcall **)(struct CProcessAttribution **))*a2 + 13))(a2),
                (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 104LL))(this) != v32) )
          {
            if ( !a2[31] )
            {
              v33 = *((_QWORD *)this + 2);
              v34 = (*((__int64 (__fastcall **)(struct CProcessAttribution **))*a2 + 13))(a2);
              v7 = CProcessAttribution::Create((struct CEnergyReporter *)(v33 + 80), v31, v34, a2 + 31);
              v8 = v7;
              if ( v7 < 0 )
              {
                v35 = 745;
                goto LABEL_58;
              }
            }
          }
        }
      }
    }
    CVisual::PropagateFlags(this, 1, 0, 0, 0, 0, 0, 0);
    CVisual::PropagateFlags((struct CVisual *)a2, 0, 1, 0, 0, ((_BYTE)a2[61] & 2) != 0, 0, 0);
    if ( !a4 && (*((_BYTE *)a2 + 90) & 4) != 0 )
    {
      v36 = 0LL;
      Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v36);
      if ( (int)CComposition::GetManipulationManager(*((CComposition **)this + 2), &v36) >= 0 )
        CManipulationManager::QueueMidManipulationUpdate(v36, 2LL, a2);
      Microsoft::WRL::ComPtr<CManipulationManager>::InternalRelease(&v36);
    }
  }
  return v8;
}
