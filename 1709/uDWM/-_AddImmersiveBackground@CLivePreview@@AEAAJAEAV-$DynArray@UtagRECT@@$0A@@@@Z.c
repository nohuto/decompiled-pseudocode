/*
 * XREFs of ?_AddImmersiveBackground@CLivePreview@@AEAAJAEAV?$DynArray@UtagRECT@@$0A@@@@Z @ 0x180069EE4
 * Callers:
 *     ?_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z @ 0x18006ACC8 (-_FadeOutToGlass@CLivePreview@@AEAAJPEBVCWindowData@@@Z.c)
 * Callees:
 *     ?Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000D70C (-Create@CVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z @ 0x180012054 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCResource@@@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x180012E90 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x180013150 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x1800182E4 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180036358 (-Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     ?_ShouldAddImmersiveChrome@CLivePreview@@AEAA_NXZ @ 0x18006BBF4 (-_ShouldAddImmersiveChrome@CLivePreview@@AEAA_NXZ.c)
 *     ?s_GetCoverageStateOfTwoRects@CLivePreview@@CA?AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z @ 0x18006CD54 (-s_GetCoverageStateOfTwoRects@CLivePreview@@CA-AW4COVERAGESTATE@@PEBUtagRECT@@0PEAU3@@Z.c)
 */

__int64 __fastcall CLivePreview::_AddImmersiveBackground(__int64 a1, __int64 a2)
{
  struct CVisual **v2; // rsi
  struct CVisual **v3; // rdi
  unsigned int v5; // ebx
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // r12
  struct tagRECT *v9; // rdx
  struct tagRECT v10; // xmm0
  char v11; // r13
  unsigned int v12; // r14d
  int v13; // eax
  int updated; // eax
  int v15; // eax
  int inserted; // eax
  int v17; // eax
  _QWORD *v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // eax
  unsigned int v21; // edx
  int v22; // eax
  unsigned int v24; // [rsp+34h] [rbp-55h]
  struct tagPOINT v25; // [rsp+38h] [rbp-51h] BYREF
  CVisual *v26; // [rsp+40h] [rbp-49h] BYREF
  CAccent *v27; // [rsp+48h] [rbp-41h] BYREF
  __int64 v28; // [rsp+50h] [rbp-39h]
  __m128i v29; // [rsp+58h] [rbp-31h] BYREF
  __m256i v30; // [rsp+68h] [rbp-21h] BYREF
  struct tagRECT v31; // [rsp+88h] [rbp-1h] BYREF
  _QWORD v32[2]; // [rsp+98h] [rbp+Fh] BYREF

  v28 = a2;
  v2 = 0LL;
  *(_QWORD *)&v31.left = 0LL;
  v3 = 0LL;
  *(_QWORD *)&v31.right = 0LL;
  v27 = 0LL;
  v29 = 0uLL;
  v5 = 0;
  v25 = 0LL;
  v26 = 0LL;
  if ( !CLivePreview::_ShouldAddImmersiveChrome((CLivePreview *)a1) )
    return v5;
  v7 = *(_QWORD *)(a1 + 552);
  v8 = 0LL;
  if ( !*(_DWORD *)(v7 + 40) )
    return v5;
  while ( 1 )
  {
    if ( (unsigned int)v8 >= *(_DWORD *)(v7 + 40) )
      v9 = 0LL;
    else
      v9 = (struct tagRECT *)(*(_QWORD *)(v7 + 16) + 24 * v8);
    v10 = *v9;
    v11 = 0;
    v12 = 0;
    v32[0] = 0LL;
    v31 = v10;
    v32[1] = 0LL;
    if ( *(_DWORD *)(v6 + 24) )
    {
      while ( (unsigned int)CLivePreview::s_GetCoverageStateOfTwoRects(*(_QWORD *)v6 + 16LL * v12, &v31, v32) != 2 )
      {
        v6 = v28;
        if ( ++v12 >= *(_DWORD *)(v28 + 24) )
          goto LABEL_11;
      }
      v11 = 1;
    }
LABEL_11:
    if ( v11 )
      goto LABEL_25;
    v13 = CAccent::Create(*((struct IDwmChannel **)CDesktopManager::s_pDesktopManagerInstance + 4), &v27);
    v5 = v13;
    if ( v13 < 0 )
      break;
    v2 = (struct CVisual **)v27;
    v29.m128i_i32[2] = CAccent::s_clrCurrentAccentBackground;
    v29.m128i_i32[0] = 1;
    updated = CAccent::UpdateAccentPolicy(v27, &v31, &v29, 0LL);
    v5 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, updated, 0x440u);
      goto LABEL_33;
    }
    v15 = CVisual::Create(*(struct IDwmChannel **)(*(_QWORD *)(a1 + 16) + 16LL), &v26);
    v5 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x442u);
      v3 = (struct CVisual **)v26;
      goto LABEL_33;
    }
    v3 = (struct CVisual **)v26;
    v25.x = v31.left;
    v25.y = v31.top;
    CVisual::SetOffset((struct tagPOINT *)v26, &v25);
    inserted = VisualCollection::InsertRelative((VisualCollection *)(v3 + 4), v2, 0LL, 0, 1);
    v5 = inserted;
    if ( inserted < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, inserted, 0x448u);
      goto LABEL_33;
    }
    v17 = VisualCollection::InsertRelative((VisualCollection *)(*(_QWORD *)(a1 + 504) + 32LL), v3, 0LL, 0, 1);
    v5 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x44Au);
      goto LABEL_33;
    }
    v30.m256i_i64[0] = (__int64)v3;
    v18 = (_QWORD *)(a1 + 432);
    v30.m256i_i64[3] = 0LL;
    v19 = *(unsigned int *)(a1 + 456);
    *(struct tagRECT *)&v30.m256i_u64[1] = v31;
    v20 = v19 + 1;
    v21 = v19 + 1;
    if ( (int)v19 + 1 < (unsigned int)v19 )
      v21 = v24;
    v24 = v21;
    if ( v20 >= (unsigned int)v19 )
    {
      if ( v21 > *(_DWORD *)(a1 + 452) )
      {
        v22 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v18, 0x20u, 1, &v30);
        if ( v22 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v22, 0xC0u);
      }
      else
      {
        *(__m256i *)(*v18 + 32 * v19) = v30;
        *(_DWORD *)(a1 + 456) = v21;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20 < (unsigned int)v19 ? 0x80070216 : 0, 0xB5u);
    }
LABEL_25:
    v7 = *(_QWORD *)(a1 + 552);
    v8 = (unsigned int)(v8 + 1);
    if ( (unsigned int)v8 >= *(_DWORD *)(v7 + 40) )
      goto LABEL_33;
    v6 = v28;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x43Cu);
  v2 = (struct CVisual **)v27;
LABEL_33:
  if ( (v5 & 0x80000000) == 0 )
  {
LABEL_36:
    if ( v3 )
      CBaseObject::Release((CBaseObject *)v3);
  }
  else if ( v3 )
  {
    VisualCollection::RemoveAll((VisualCollection *)(v3 + 4));
    goto LABEL_36;
  }
  if ( v2 )
    CBaseObject::Release((CBaseObject *)v2);
  return v5;
}
