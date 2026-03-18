/*
 * XREFs of ?PushCandidates@COverlayContext@@AEAAJAEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@_N@Z @ 0x18007A548
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x1800798B4 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ResetPreviousOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x18007A6B4 (-ResetPreviousOverlayCandidatesList@COverlayContext@@AEAAXXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800CD620 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?AddMultipleAndSet@?$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEFBVOverlayPlaneInfo@COverlayContext@@I@Z @ 0x180163954 (-AddMultipleAndSet@-$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEFBVOverlayPlaneInf.c)
 *     ?Init@OverlayPlaneInfo@COverlayContext@@AEAAXXZ @ 0x180166254 (-Init@OverlayPlaneInfo@COverlayContext@@AEAAXXZ.c)
 *     ?ReplaceWith@?$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEAV1@@Z @ 0x1801677B8 (-ReplaceWith@-$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEAV1@@Z.c)
 */

__int64 __fastcall COverlayContext::PushCandidates(__int64 a1, __int64 a2, char a3)
{
  unsigned int v6; // esi
  char v7; // r14
  __int64 v8; // rdx
  int v9; // eax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v14; // rbx
  _OWORD *v15; // rax
  __int128 v16; // xmm1
  _OWORD *v17; // rax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // ecx
  _BYTE v25[16]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v26[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+50h] [rbp-B0h]
  int v28; // [rsp+54h] [rbp-ACh]
  int v29; // [rsp+58h] [rbp-A8h]
  _BYTE v30[992]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v31[15]; // [rsp+440h] [rbp+340h] BYREF
  __int64 v32; // [rsp+530h] [rbp+430h]

  v6 = 0;
  v7 = 0;
  COverlayContext::ResetPreviousOverlayCandidatesList((COverlayContext *)a1);
  if ( a3 )
  {
    v29 = 0;
    v26[0] = v30;
    v27 = 4;
    v26[1] = v30;
    v28 = 4;
    `vector constructor iterator'(
      (CInputSinkStruct::InputQueueInfo *)v30,
      0xF8uLL,
      4uLL,
      (void *(*)(void *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
    v14 = 0LL;
    if ( *(_DWORD *)(a2 + 24) )
    {
      while ( 1 )
      {
        v15 = *(_OWORD **)(*(_QWORD *)a2 + 8 * v14);
        if ( *(_QWORD *)v15 == a1 )
        {
          v31[0] = *v15;
          v31[1] = v15[1];
          v31[2] = v15[2];
          v31[3] = v15[3];
          v31[4] = v15[4];
          v31[5] = v15[5];
          v31[6] = v15[6];
          v16 = v15[7];
          v17 = v15 + 8;
          v31[7] = v16;
          v31[8] = *v17;
          v31[9] = v17[1];
          v31[10] = v17[2];
          v31[11] = v17[3];
          v31[12] = v17[4];
          v31[13] = v17[5];
          v31[14] = v17[6];
          v32 = *((_QWORD *)v17 + 14);
          COverlayContext::OverlayPlaneInfo::Init((COverlayContext::OverlayPlaneInfo *)v31);
          v18 = DynArray<COverlayContext::OverlayPlaneInfo,0>::AddMultipleAndSet(v26, v31);
          v6 = v18;
          if ( v18 < 0 )
            break;
        }
        v14 = (unsigned int)(v14 + 1);
        if ( (unsigned int)v14 >= *(_DWORD *)(a2 + 24) )
          goto LABEL_15;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x10C4u);
    }
    else
    {
LABEL_15:
      if ( *(_DWORD *)(a1 + 216)
        && (v19 = DynArray<COverlayContext::OverlayPlaneInfo,0>::ReplaceWith(a1 + 224), v6 = v19, v19 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x10CAu);
      }
      else
      {
        if ( !v29 || (v20 = DynArray<COverlayContext::OverlayPlaneInfo,0>::ReplaceWith(a1 + 192), v6 = v20, v20 >= 0) )
        {
          DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v26);
          goto LABEL_3;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x10CFu);
      }
    }
    DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v26);
    return v6;
  }
  if ( *(_DWORD *)(a1 + 216) )
  {
    v21 = DynArray<COverlayContext::OverlayPlaneInfo,0>::ReplaceWith(a1 + 224);
    v6 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x10DBu);
      return v6;
    }
  }
LABEL_3:
  if ( *(_DWORD *)(a1 + 312) )
    v7 = *(_BYTE *)(*(_QWORD *)(a1 + 288) + 112LL) != 0;
  if ( *(_BYTE *)(a1 + 1195) != v7 )
  {
    v22 = *(_QWORD *)(a1 + 16);
    LOBYTE(v8) = v7;
    *(_BYTE *)(a1 + 1195) = v7;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 320LL))(v22, v8);
    *(_BYTE *)(a1 + 1189) = 1;
    *(_BYTE *)(a1 + 1203) = 1;
  }
  v9 = *(_DWORD *)(a1 + 656);
  v10 = *(_OWORD *)(a1 + 608);
  *(_OWORD *)(a1 + 728) = *(_OWORD *)(a1 + 592);
  v11 = *(_OWORD *)(a1 + 624);
  *(_OWORD *)(a1 + 744) = v10;
  v12 = *(_OWORD *)(a1 + 640);
  *(_OWORD *)(a1 + 760) = v11;
  *(_OWORD *)(a1 + 776) = v12;
  *(_DWORD *)(a1 + 792) = v9;
  *(_BYTE *)(a1 + 1198) = *(_BYTE *)(a1 + 1197);
  if ( *(_DWORD *)(a1 + 216) )
  {
    if ( !*(_DWORD *)(a1 + 280) && *(_DWORD *)(a1 + 104) != 1 )
    {
      *(_DWORD *)(a1 + 108) = 1;
LABEL_31:
      *(_BYTE *)(a1 + 1202) = 1;
    }
  }
  else if ( *(_DWORD *)(a1 + 280) )
  {
    v23 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16), v25);
    v24 = *(_DWORD *)(a1 + 104);
    if ( *(_DWORD *)(v23 + 4) != v24 )
    {
      *(_DWORD *)(a1 + 108) = v24;
      goto LABEL_31;
    }
  }
  return v6;
}
