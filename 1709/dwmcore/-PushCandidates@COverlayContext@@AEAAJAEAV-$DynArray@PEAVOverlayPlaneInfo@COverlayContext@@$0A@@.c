/*
 * XREFs of ?PushCandidates@COverlayContext@@AEAAJAEAV?$DynArray@PEAVOverlayPlaneInfo@COverlayContext@@$0A@@@_N@Z @ 0x180143F0C
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@AEAV?$DynArray@UReservedPlaneInfo@COverlayContext@@$0A@@@@Z @ 0x180068020 (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?ResetPreviousOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x180066F4C (-ResetPreviousOverlayCandidatesList@COverlayContext@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?AddMultipleAndSet@?$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEFBVOverlayPlaneInfo@COverlayContext@@I@Z @ 0x18013FD30 (-AddMultipleAndSet@-$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEFBVOverlayPlaneInf.c)
 *     ?Init@OverlayPlaneInfo@COverlayContext@@AEAAXXZ @ 0x180142E20 (-Init@OverlayPlaneInfo@COverlayContext@@AEAAXXZ.c)
 *     ?ReplaceWith@?$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEAV1@@Z @ 0x1801446F8 (-ReplaceWith@-$DynArray@VOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEAV1@@Z.c)
 */

__int64 __fastcall COverlayContext::PushCandidates(__int64 a1, __int64 a2, char a3)
{
  unsigned int v6; // esi
  char v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rbx
  _OWORD *v10; // rax
  __int128 v11; // xmm1
  _OWORD *v12; // rax
  unsigned int v13; // r8d
  signed int v14; // eax
  signed int v15; // eax
  signed int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  signed int v22; // eax
  __int64 v23; // rax
  int v24; // ecx
  _BYTE v26[16]; // [rsp+30h] [rbp-D0h] BYREF
  void *v27[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v28; // [rsp+50h] [rbp-B0h]
  int v29; // [rsp+54h] [rbp-ACh]
  int v30; // [rsp+58h] [rbp-A8h]
  _BYTE v31[992]; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v32[15]; // [rsp+440h] [rbp+340h] BYREF
  __int64 v33; // [rsp+530h] [rbp+430h]

  v6 = 0;
  v7 = 0;
  COverlayContext::ResetPreviousOverlayCandidatesList((COverlayContext *)a1);
  if ( a3 )
  {
    v30 = 0;
    v28 = 4;
    v27[0] = v31;
    v29 = 4;
    v27[1] = v31;
    `vector constructor iterator'(
      (CInputSinkStruct::InputQueueInfo *)v31,
      248LL,
      4LL,
      (__int64 (__fastcall *)(CInputSinkStruct::InputQueueInfo *__hidden))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
    v9 = 0LL;
    if ( *(_DWORD *)(a2 + 24) )
    {
      while ( 1 )
      {
        v10 = *(_OWORD **)(*(_QWORD *)a2 + 8 * v9);
        if ( *(_QWORD *)v10 == a1 )
        {
          v32[0] = *v10;
          v32[1] = v10[1];
          v32[2] = v10[2];
          v32[3] = v10[3];
          v32[4] = v10[4];
          v32[5] = v10[5];
          v32[6] = v10[6];
          v11 = v10[7];
          v12 = v10 + 8;
          v32[7] = v11;
          v32[8] = *v12;
          v32[9] = v12[1];
          v32[10] = v12[2];
          v32[11] = v12[3];
          v32[12] = v12[4];
          v32[13] = v12[5];
          v32[14] = v12[6];
          v33 = *((_QWORD *)v12 + 14);
          COverlayContext::OverlayPlaneInfo::Init((COverlayContext::OverlayPlaneInfo *)v32);
          v14 = DynArray<COverlayContext::OverlayPlaneInfo,0>::AddMultipleAndSet((__int64)v27, v32, v13);
          v6 = v14;
          if ( v14 < 0 )
            break;
        }
        v9 = (unsigned int)(v9 + 1);
        if ( (unsigned int)v9 >= *(_DWORD *)(a2 + 24) )
          goto LABEL_6;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x1067u);
      goto LABEL_10;
    }
LABEL_6:
    if ( *(_DWORD *)(a1 + 208) )
    {
      v15 = DynArray<COverlayContext::OverlayPlaneInfo,0>::ReplaceWith(a1 + 216, a1 + 184);
      v6 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x106Du);
LABEL_10:
        DynArrayImpl<1>::~DynArrayImpl<1>(v27);
        return v6;
      }
    }
    if ( v30 )
    {
      v16 = DynArray<COverlayContext::OverlayPlaneInfo,0>::ReplaceWith(a1 + 184, v27);
      v6 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0x1072u);
        goto LABEL_10;
      }
    }
    DynArrayImpl<1>::~DynArrayImpl<1>(v27);
  }
  else if ( *(_DWORD *)(a1 + 208) )
  {
    v22 = DynArray<COverlayContext::OverlayPlaneInfo,0>::ReplaceWith(a1 + 216, a1 + 184);
    v6 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v22, 0x107Eu);
      return v6;
    }
  }
  if ( *(_DWORD *)(a1 + 304) )
    v7 = *(_BYTE *)(*(_QWORD *)(a1 + 280) + 112LL) != 0;
  if ( *(_BYTE *)(a1 + 1183) != v7 )
  {
    v17 = *(_QWORD *)(a1 + 16);
    LOBYTE(v8) = v7;
    *(_BYTE *)(a1 + 1183) = v7;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 272LL))(v17, v8);
    *(_BYTE *)(a1 + 1177) = 1;
    *(_BYTE *)(a1 + 1191) = 1;
  }
  v18 = *(_DWORD *)(a1 + 648);
  v19 = *(_OWORD *)(a1 + 600);
  *(_OWORD *)(a1 + 720) = *(_OWORD *)(a1 + 584);
  v20 = *(_OWORD *)(a1 + 616);
  *(_OWORD *)(a1 + 736) = v19;
  v21 = *(_OWORD *)(a1 + 632);
  *(_OWORD *)(a1 + 752) = v20;
  *(_OWORD *)(a1 + 768) = v21;
  *(_DWORD *)(a1 + 784) = v18;
  *(_BYTE *)(a1 + 1186) = *(_BYTE *)(a1 + 1185);
  if ( *(_DWORD *)(a1 + 208) )
  {
    if ( !*(_DWORD *)(a1 + 272) && *(_DWORD *)(a1 + 100) != 1 )
    {
      *(_DWORD *)(a1 + 104) = 1;
LABEL_30:
      *(_BYTE *)(a1 + 1190) = 1;
    }
  }
  else if ( *(_DWORD *)(a1 + 272) )
  {
    v23 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16), v26);
    v24 = *(_DWORD *)(a1 + 100);
    if ( *(_DWORD *)(v23 + 4) != v24 )
    {
      *(_DWORD *)(a1 + 104) = v24;
      goto LABEL_30;
    }
  }
  return v6;
}
