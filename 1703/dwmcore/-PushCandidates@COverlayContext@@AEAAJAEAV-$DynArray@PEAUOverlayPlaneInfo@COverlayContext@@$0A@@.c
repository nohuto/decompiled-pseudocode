/*
 * XREFs of ?PushCandidates@COverlayContext@@AEAAJAEAV?$DynArray@PEAUOverlayPlaneInfo@COverlayContext@@$0A@@@_N@Z @ 0x1800714A0
 * Callers:
 *     ?ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x1800712CC (-ComputeOverlayConfigurationForAdapter@COverlayContext@@CAJAEAV-$DynArray@PEAVCOverlayContext@@$.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ResetPreviousOverlayCandidatesList@COverlayContext@@AEAAXXZ @ 0x180071630 (-ResetPreviousOverlayCandidatesList@COverlayContext@@AEAAXXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800B3474 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?AddMultipleAndSet@?$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEFBUOverlayPlaneInfo@COverlayContext@@I@Z @ 0x18014E884 (-AddMultipleAndSet@-$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEFBUOverlayPlaneInf.c)
 *     ?Init@OverlayPlaneInfo@COverlayContext@@AEAAXXZ @ 0x180150F3C (-Init@OverlayPlaneInfo@COverlayContext@@AEAAXXZ.c)
 *     ?ReplaceWith@?$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEAV1@@Z @ 0x180151F50 (-ReplaceWith@-$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEAAJPEAV1@@Z.c)
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
  _OWORD *v15; // rdx
  __int128 v16; // xmm1
  _OWORD *v17; // rdx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  __int64 v22; // rcx
  int v23; // ebx
  void *v24[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+40h] [rbp-C0h]
  int v26; // [rsp+44h] [rbp-BCh]
  int v27; // [rsp+48h] [rbp-B8h]
  _BYTE v28[960]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v29[15]; // [rsp+410h] [rbp+310h] BYREF

  v6 = 0;
  v7 = 0;
  COverlayContext::ResetPreviousOverlayCandidatesList((COverlayContext *)a1);
  if ( a3 )
  {
    v27 = 0;
    v24[0] = v28;
    v25 = 4;
    v24[1] = v28;
    v26 = 4;
    `vector constructor iterator'(
      (CInputSinkStruct::InputQueueInfo *)v28,
      0xF0uLL,
      4uLL,
      (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
    v14 = 0LL;
    if ( *(_DWORD *)(a2 + 24) )
    {
      while ( 1 )
      {
        v15 = *(_OWORD **)(*(_QWORD *)a2 + 8 * v14);
        if ( *(_QWORD *)v15 == a1 )
        {
          v29[0] = *v15;
          v29[1] = v15[1];
          v29[2] = v15[2];
          v29[3] = v15[3];
          v29[4] = v15[4];
          v29[5] = v15[5];
          v29[6] = v15[6];
          v16 = v15[7];
          v17 = v15 + 8;
          v29[7] = v16;
          v29[8] = *v17;
          v29[9] = v17[1];
          v29[10] = v17[2];
          v29[11] = v17[3];
          v29[12] = v17[4];
          v29[13] = v17[5];
          v29[14] = v17[6];
          COverlayContext::OverlayPlaneInfo::Init((COverlayContext::OverlayPlaneInfo *)v29);
          v18 = DynArray<COverlayContext::OverlayPlaneInfo,0>::AddMultipleAndSet(v24, v29);
          v6 = v18;
          if ( v18 < 0 )
            break;
        }
        v14 = (unsigned int)(v14 + 1);
        if ( (unsigned int)v14 >= *(_DWORD *)(a2 + 24) )
          goto LABEL_15;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xF11u);
    }
    else
    {
LABEL_15:
      if ( *(_DWORD *)(a1 + 200)
        && (v19 = DynArray<COverlayContext::OverlayPlaneInfo,0>::ReplaceWith(a1 + 208, a1 + 176), v6 = v19, v19 < 0) )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xF17u);
      }
      else
      {
        if ( !v27
          || (v20 = DynArray<COverlayContext::OverlayPlaneInfo,0>::ReplaceWith(a1 + 176, v24), v6 = v20, v20 >= 0) )
        {
          DynArrayImpl<1>::~DynArrayImpl<1>(v24);
          goto LABEL_3;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xF1Cu);
      }
    }
    DynArrayImpl<1>::~DynArrayImpl<1>(v24);
    return v6;
  }
  if ( *(_DWORD *)(a1 + 200) )
  {
    v21 = DynArray<COverlayContext::OverlayPlaneInfo,0>::ReplaceWith(a1 + 208, a1 + 176);
    v6 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xF28u);
      return v6;
    }
  }
LABEL_3:
  if ( *(_DWORD *)(a1 + 296) )
    v7 = *(_BYTE *)(*(_QWORD *)(a1 + 272) + 104LL) != 0;
  if ( *(_BYTE *)(a1 + 1097) != v7 )
  {
    v22 = *(_QWORD *)(a1 + 16);
    LOBYTE(v8) = v7;
    *(_BYTE *)(a1 + 1097) = v7;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 264LL))(v22, v8);
    *(_BYTE *)(a1 + 1089) = 1;
    *(_BYTE *)(a1 + 1105) = 1;
  }
  v9 = *(_DWORD *)(a1 + 592);
  v10 = *(_OWORD *)(a1 + 544);
  *(_OWORD *)(a1 + 664) = *(_OWORD *)(a1 + 528);
  v11 = *(_OWORD *)(a1 + 560);
  *(_OWORD *)(a1 + 680) = v10;
  v12 = *(_OWORD *)(a1 + 576);
  *(_OWORD *)(a1 + 696) = v11;
  *(_OWORD *)(a1 + 712) = v12;
  *(_DWORD *)(a1 + 728) = v9;
  *(_BYTE *)(a1 + 1100) = *(_BYTE *)(a1 + 1099);
  if ( *(_DWORD *)(a1 + 200) )
  {
    if ( !*(_DWORD *)(a1 + 264) && *(_DWORD *)(a1 + 88) != 1 )
    {
      *(_DWORD *)(a1 + 92) = 1;
LABEL_31:
      *(_BYTE *)(a1 + 1104) = 1;
    }
  }
  else if ( *(_DWORD *)(a1 + 264) )
  {
    v23 = *(_DWORD *)(a1 + 88);
    if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 32LL))(*(_QWORD *)(a1 + 16)) != v23 )
    {
      *(_DWORD *)(a1 + 92) = v23;
      goto LABEL_31;
    }
  }
  return v6;
}
