/*
 * XREFs of ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x180068020
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x180068110 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ @ 0x1800671AC (-HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?DetachData@?$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z @ 0x180068504 (-DetachData@-$DynArrayImpl@$0A@@@IEAAJIPEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x180140E68 (-CheckMultiPlaneOverlaySupport@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEA.c)
 *     ?ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z @ 0x180141638 (-ComparePlaneAttributes@COverlayContext@@CAXAEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@0PEA_N1@Z.c)
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@AEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@PEA_N@Z @ 0x180141A60 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$0A@@@AEAV-$D.c)
 *     ?PushCandidates@COverlayContext@@AEAAJAEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@_N@Z @ 0x180143F0C (-PushCandidates@COverlayContext@@AEAAJAEAV-$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@.c)
 *     ?ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAJXZ @ 0x180144378 (-ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAJXZ.c)
 *     ?TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ @ 0x1801448F0 (-TransferCandidatesToPlaneAssignments@COverlayContext@@AEAAJXZ.c)
 */

__int64 __fastcall COverlayContext::ComputeOverlayConfigurationForAdapter(__int64 *a1, __int64 *a2)
{
  int v2; // ebx
  int v3; // esi
  char v4; // r14
  __int64 v5; // r13
  bool v8; // zf
  __int64 v9; // rax
  char v10; // cl
  __int64 v11; // rbx
  __int64 v12; // r15
  char v13; // r15
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // esi
  int v19; // eax
  __int64 v20; // r8
  char v21; // r14
  int v22; // eax
  unsigned int v23; // esi
  int v24; // eax
  unsigned int v25; // r15d
  __int64 v26; // r14
  int v27; // eax
  unsigned int v28; // r14d
  int v29; // eax
  unsigned int v30; // r14d
  int v31; // eax
  bool v32; // [rsp+30h] [rbp-50h] BYREF
  int v33; // [rsp+34h] [rbp-4Ch]
  _QWORD v34[2]; // [rsp+40h] [rbp-40h] BYREF
  int v35; // [rsp+50h] [rbp-30h]
  __int64 v36; // [rsp+54h] [rbp-2Ch]
  _BYTE v37[32]; // [rsp+60h] [rbp-20h] BYREF
  char v38; // [rsp+C0h] [rbp+40h] BYREF
  char v39; // [rsp+D0h] [rbp+50h] BYREF
  bool v40; // [rsp+D8h] [rbp+58h] BYREF

  v2 = 0;
  LOBYTE(v3) = 0;
  v39 = 0;
  v4 = 0;
  v5 = 0LL;
  if ( *((_DWORD *)a1 + 6) )
  {
    do
    {
      v8 = COverlayContext::HaveOverlayCandidatesChanged(*(COverlayContext **)(*a1 + 8 * v5)) == 0;
      v3 = (unsigned __int8)v3;
      v9 = *a1;
      if ( !v8 )
        v3 = 1;
      v10 = 0;
      v33 = v3;
      v38 = 0;
      v11 = *(_QWORD *)(v9 + 8 * v5);
      if ( *((_DWORD *)a2 + 6) != *(_DWORD *)(v11 + 576) )
        goto LABEL_15;
      v12 = 0LL;
      do
      {
        if ( (unsigned int)v12 >= *(_DWORD *)(v11 + 576) )
          break;
        v15 = 144 * v12;
        COverlayContext::ComparePlaneAttributes(
          (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(144 * v12 + *a2 + 16),
          (const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *)(144 * v12 + *(_QWORD *)(v11 + 552) + 16LL),
          &v40,
          &v32);
        if ( !v40
          && (v16 = *(_QWORD *)(v11 + 552), v17 = *a2, *(_QWORD *)(v15 + *a2 + 8) == *(_QWORD *)(v15 + v16 + 8))
          && *(_DWORD *)(v15 + v17 + 136) == *(_DWORD *)(v15 + v16 + 136)
          && *(_BYTE *)(v15 + v17 + 140) == *(_BYTE *)(v15 + v16 + 140) )
        {
          v10 = v38;
        }
        else
        {
          v10 = 1;
          v38 = 1;
        }
        v12 = (unsigned int)(v12 + 1);
      }
      while ( !v10 );
      LOBYTE(v3) = v33;
      if ( v10 )
      {
LABEL_15:
        v13 = 1;
        v39 = 1;
      }
      else
      {
        v13 = v39;
      }
      if ( *(_DWORD *)(*(_QWORD *)(*a1 + 8 * v5) + 788LL) )
        v4 = 1;
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < *((_DWORD *)a1 + 6) );
    if ( (v2 = 0, (_BYTE)v3) && v4 || v13 )
    {
      v38 = 0;
      v34[0] = v37;
      v18 = 0;
      v39 = 0;
      v34[1] = v37;
      v35 = 4;
      v36 = 4LL;
      do
      {
        v19 = COverlayContext::DeriveCheckCandidatesList(a1, a2, v34, &v39);
        v2 = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x80Au);
          goto LABEL_56;
        }
        v21 = v39;
        if ( v39 )
        {
          v22 = COverlayContext::CheckMultiPlaneOverlaySupport(a1, a2, v34, &v38);
          v2 = v22;
          if ( v22 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0x811u);
            goto LABEL_56;
          }
        }
        LOBYTE(v20) = v38;
        ++v18;
      }
      while ( v21 && !v38 && v18 <= 8 );
      v23 = 0;
      if ( *((_DWORD *)a1 + 6) )
      {
        while ( 1 )
        {
          v24 = COverlayContext::PushCandidates(*(_QWORD *)(*a1 + 8LL * v23), v34, v20);
          v2 = v24;
          if ( v24 < 0 )
            break;
          if ( ++v23 >= *((_DWORD *)a1 + 6) )
            goto LABEL_38;
          LOBYTE(v20) = v38;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x81Fu);
      }
      else
      {
LABEL_38:
        v25 = 0;
        if ( *((_DWORD *)a1 + 6) )
        {
          while ( 1 )
          {
            v26 = *(_QWORD *)(*a1 + 8LL * v25) + 552LL;
            if ( *(_QWORD *)v26 != *(_QWORD *)(v26 + 8) )
            {
              WPF::ProcessHeapImpl::Free(*(void **)v26);
              *(_QWORD *)v26 = 0LL;
            }
            *(_DWORD *)(v26 + 24) = *((_DWORD *)a2 + 6);
            *(_DWORD *)(v26 + 20) = *((_DWORD *)a2 + 5);
            v27 = DynArrayImpl<0>::DetachData(a2, 144LL, v26);
            v2 = v27;
            if ( v27 < 0 )
            {
              *(_QWORD *)(v26 + 20) = 0LL;
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x10BBu);
            }
            if ( v2 < 0 )
              break;
            if ( ++v25 >= *((_DWORD *)a1 + 6) )
              goto LABEL_45;
          }
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x827u);
        }
        else
        {
LABEL_45:
          v28 = 0;
          if ( *((_DWORD *)a1 + 6) )
          {
            while ( 1 )
            {
              v29 = COverlayContext::ReleaseObsoletePlaneAssignments(*(COverlayContext **)(*a1 + 8LL * v28));
              v2 = v29;
              if ( v29 < 0 )
                break;
              if ( ++v28 >= *((_DWORD *)a1 + 6) )
                goto LABEL_48;
            }
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x82Fu);
          }
          else
          {
LABEL_48:
            v30 = 0;
            if ( *((_DWORD *)a1 + 6) )
            {
              while ( 1 )
              {
                v31 = COverlayContext::TransferCandidatesToPlaneAssignments(*(COverlayContext **)(*a1 + 8LL * v30));
                v2 = v31;
                if ( v31 < 0 )
                  break;
                if ( ++v30 >= *((_DWORD *)a1 + 6) )
                  goto LABEL_56;
              }
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x837u);
            }
          }
        }
      }
LABEL_56:
      DynArrayImpl<1>::~DynArrayImpl<1>(v34);
    }
  }
  return (unsigned int)v2;
}
