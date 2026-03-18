/*
 * XREFs of ?NotifyMoveOptimization@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x18019E310
 * Callers:
 *     ?NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z @ 0x18019E030 (-NotifyMetaData@CSwapChainBase@@QEAAJU_DWMCommonMetaData@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_xx @ 0x18016786C (Template_xx.c)
 *     ?CheckGUIHandleQuota@@YAJKJJ@Z @ 0x180189138 (-CheckGUIHandleQuota@@YAJKJJ@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJPEFBU_DWMIndirectMetaData@@I@Z @ 0x18019DF90 (-AddMultipleAndSet@-$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJPEFBU_DWMIndirectMetaData@@I@Z.c)
 *     Template_nn @ 0x18019E740 (Template_nn.c)
 */

__int64 __fastcall CSwapChainBase::NotifyMoveOptimization(__int64 a1, __int64 a2)
{
  int v4; // r15d
  HRGN v5; // r13
  struct tagRECT *v6; // rsi
  _DWORD *v7; // rdi
  int v8; // edx
  int v9; // r8d
  unsigned int v10; // r8d
  __m128i *v11; // rax
  struct tagRECT v12; // xmm0
  __m128i v13; // xmm0
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // edx
  int v20; // r8d
  int v21; // ecx
  int v22; // esi
  int v23; // r14d
  int v24; // edi
  int v25; // ebx
  HRGN RectRgn; // rax
  HRGN v27; // rbx
  signed int LastError; // eax
  DWORD v29; // edx
  unsigned int v30; // ecx
  DWORD v31; // r8d
  HRGN v32; // rax
  signed int v33; // eax
  DWORD v34; // edx
  unsigned int v35; // ecx
  DWORD v36; // r8d
  signed int v37; // eax
  DWORD v38; // edx
  unsigned int v39; // ecx
  DWORD v40; // r8d
  signed int v41; // eax
  DWORD v42; // edx
  unsigned int v43; // ecx
  DWORD v44; // r8d
  int y2; // [rsp+30h] [rbp-98h]
  int x2; // [rsp+34h] [rbp-94h]
  __m128i v48; // [rsp+38h] [rbp-90h]
  int y1; // [rsp+48h] [rbp-80h]
  int x1; // [rsp+4Ch] [rbp-7Ch]
  RECT rcSrc1; // [rsp+58h] [rbp-70h] BYREF
  struct tagRECT rcDst; // [rsp+70h] [rbp-58h] BYREF
  struct tagRECT rc; // [rsp+80h] [rbp-48h] BYREF

  v4 = 0;
  v5 = 0LL;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 72LL))(a1) )
    return (unsigned int)v4;
  *(_QWORD *)&rcSrc1.left = 0LL;
  v6 = (struct tagRECT *)(a2 + 16);
  rcSrc1.right = *(_DWORD *)(a1 + 128);
  rcSrc1.bottom = *(_DWORD *)(a1 + 132);
  if ( !IntersectRect(&rcDst, &rcSrc1, (const RECT *)(a2 + 16)) )
    return (unsigned int)v4;
  v7 = (_DWORD *)(a2 + 32);
  v8 = *(_DWORD *)(a2 + 32);
  v9 = *(_DWORD *)(a2 + 36);
  rc = rcDst;
  OffsetRect(&rc, v8, v9);
  if ( !IntersectRect(&rcDst, &rcSrc1, &rc) )
    return (unsigned int)v4;
  OffsetRect(&rcDst, -*v7, -*(_DWORD *)(a2 + 36));
  v11 = *(__m128i **)(a2 + 48);
  v12 = rcDst;
  *(_QWORD *)(a2 + 40) = 0LL;
  *v6 = v12;
  if ( v11 )
  {
    v13 = *v11;
    v14 = _mm_cvtsi128_si32(*v11);
    if ( v14 < 0 )
      v14 = 0;
    x1 = v14;
    v15 = v13.m128i_i32[1];
    if ( v13.m128i_i32[1] < 0 )
      v15 = 0;
    y1 = v15;
    v16 = *(_DWORD *)(a1 + 128);
    x2 = v13.m128i_i32[2];
    if ( v13.m128i_i32[2] >= v16 )
      x2 = v16 - 1;
    v17 = *(_DWORD *)(a1 + 132);
    y2 = v13.m128i_i32[3];
    if ( v13.m128i_i32[3] >= v17 )
      y2 = v17 - 1;
    v7 = (_DWORD *)(a2 + 32);
  }
  else
  {
    y2 = (unsigned __int128)0LL >> 96;
    x2 = 0;
    y1 = 0;
    x1 = 0;
  }
  v18 = DynArray<_DWMIndirectMetaData,0>::AddMultipleAndSet(a1 + 232, (_OWORD *)a2, v10);
  v4 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x227u);
    return (unsigned int)v4;
  }
  v21 = Microsoft_Windows_Dwm_CoreEnableBits;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    Template_xx(
      (unsigned int)Microsoft_Windows_Dwm_CoreEnableBits,
      &EVTDESC_REMOTEAPP_METADATA_STATS,
      a1 + 232,
      *(unsigned int *)(a1 + 256));
    v21 = Microsoft_Windows_Dwm_CoreEnableBits;
  }
  if ( (v21 & 0x20) != 0 )
    Template_nn(v21, v19, v20, (_DWORD)v7);
  v48 = *(__m128i *)v6;
  v22 = *v7 + *(_QWORD *)(a2 + 24);
  v23 = *v7 + _mm_cvtsi128_si32(v48);
  v24 = *(_DWORD *)(a2 + 36) + v48.m128i_i32[1];
  v25 = *(_DWORD *)(a2 + 36) + v48.m128i_i32[3];
  SetLastError(0);
  RectRgn = CreateRectRgn(v23, v24, v22, v25);
  v27 = RectRgn;
  if ( !RectRgn )
  {
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    if ( v4 >= 0 )
      v4 = CheckGUIHandleQuota(v30, v29, v31);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x241u);
    return (unsigned int)v4;
  }
  if ( *(_QWORD *)(a1 + 208) )
  {
    SetLastError(0);
    if ( !CombineRgn(*(HRGN *)(a1 + 208), *(HRGN *)(a1 + 208), v27, 2) )
    {
      v37 = GetLastError();
      v4 = v37;
      if ( v37 > 0 )
        v4 = (unsigned __int16)v37 | 0x80070000;
      if ( v4 >= 0 )
        v4 = CheckGUIHandleQuota(v39, v38, v40);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x24Du);
      goto LABEL_49;
    }
  }
  else
  {
    *(_QWORD *)(a1 + 208) = RectRgn;
    v27 = 0LL;
  }
  if ( *(_QWORD *)(a2 + 48) )
  {
    SetLastError(0);
    v32 = CreateRectRgn(x1, y1, x2, y2);
    v5 = v32;
    if ( v32 )
    {
      if ( *(_QWORD *)(a1 + 224) )
      {
        SetLastError(0);
        if ( !CombineRgn(*(HRGN *)(a1 + 224), *(HRGN *)(a1 + 224), v5, 2) )
        {
          v41 = GetLastError();
          v4 = v41;
          if ( v41 > 0 )
            v4 = (unsigned __int16)v41 | 0x80070000;
          if ( v4 >= 0 )
            v4 = CheckGUIHandleQuota(v43, v42, v44);
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x264u);
        }
      }
      else
      {
        *(_QWORD *)(a1 + 224) = v32;
        v5 = 0LL;
      }
    }
    else
    {
      v33 = GetLastError();
      v4 = v33;
      if ( v33 > 0 )
        v4 = (unsigned __int16)v33 | 0x80070000;
      if ( v4 >= 0 )
        v4 = CheckGUIHandleQuota(v35, v34, v36);
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x258u);
    }
  }
LABEL_49:
  if ( v27 )
    DeleteObject(v27);
  if ( v5 )
    DeleteObject(v5);
  return (unsigned int)v4;
}
