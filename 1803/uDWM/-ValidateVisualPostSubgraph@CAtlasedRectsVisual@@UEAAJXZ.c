/*
 * XREFs of ?ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ @ 0x180024220
 * Callers:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180025BF0 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 * Callees:
 *     ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x180023C30 (-UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::ValidateVisualPostSubgraph(CAtlasedRectsVisual *this)
{
  int v2; // ebp
  int v3; // eax
  unsigned int v4; // edi
  __int64 v5; // rbx
  int v6; // ecx
  int v7; // edx
  int v8; // r8d
  int v9; // r10d
  unsigned int v10; // eax
  unsigned __int64 v11; // r11
  int v12; // eax
  int v13; // ecx
  __int64 result; // rax
  CVisual *v15; // rcx
  void (__fastcall *v16)(CVisual *__hidden, unsigned int); // rax
  int v17; // eax
  CVisual *v18; // rbx
  int v19; // ecx
  void (__fastcall *v20)(CVisual *__hidden); // rax
  CVisual *v21; // rcx
  void (__fastcall *v22)(CVisual *__hidden, unsigned int); // rax
  int v23; // eax
  CVisual *v24; // r14
  int v25; // ecx
  void (__fastcall *v26)(CVisual *__hidden); // rax
  __int64 (__fastcall *v27)(__int32 **); // rax
  unsigned int v28; // ebx
  int v29; // eax
  __int64 v30; // [rsp+70h] [rbp+8h]
  unsigned __int64 v31; // [rsp+78h] [rbp+10h]

  v2 = 0;
  if ( (*((_DWORD *)this + 20) & 0x100) != 0 )
  {
    v29 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, bool))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 504LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
            *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
            *((_DWORD *)this + 22) != 0);
    v2 = v29;
    if ( v29 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x3E5u);
    if ( v2 >= 0 )
      *((_DWORD *)this + 20) &= ~0x100u;
    else
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xAFu);
  }
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x70u);
    return (unsigned int)v2;
  }
  v3 = *((_DWORD *)this + 20);
  if ( (v3 & 0x1000) == 0 )
    goto LABEL_23;
  v4 = 0;
  if ( !*((_DWORD *)this + 66) )
    goto LABEL_22;
  do
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 30) + 8LL * v4);
    v6 = *(_DWORD *)(v5 + 32);
    v7 = *(_DWORD *)(v5 + 36);
    v8 = *(_DWORD *)(v5 + 44);
    v9 = *(_DWORD *)(v5 + 40);
    if ( v6 == 0x7FFFFFFF && v7 == 0x7FFFFFFF && v9 == 0x7FFFFFFF && v8 == 0x7FFFFFFF )
      goto LABEL_20;
    v10 = 0;
    v31 = *(_QWORD *)(v5 + 24);
    v11 = HIDWORD(v31);
    v30 = 0LL;
    if ( v7 == 0x7FFFFFFF )
    {
      if ( v6 != 0x7FFFFFFF )
        goto LABEL_9;
    }
    else
    {
      v12 = *((_DWORD *)this + 30);
      if ( v6 != 0x7FFFFFFF )
      {
        LODWORD(v31) = v12 - v7 - v6;
LABEL_9:
        LODWORD(v30) = *(_DWORD *)(v5 + 32);
        v10 = v30;
        goto LABEL_10;
      }
      v10 = v12 - v31 - v7;
      LODWORD(v30) = v10;
    }
LABEL_10:
    if ( v8 == 0x7FFFFFFF )
    {
      if ( v9 == 0x7FFFFFFF )
        goto LABEL_14;
    }
    else
    {
      v13 = *((_DWORD *)this + 31);
      if ( v9 == 0x7FFFFFFF )
      {
        HIDWORD(v30) = v13 - v11 - v8;
        goto LABEL_14;
      }
      HIDWORD(v31) = v13 - v9 - v8;
    }
    HIDWORD(v30) = *(_DWORD *)(v5 + 40);
LABEL_14:
    if ( (int)v31 <= 0 )
      LODWORD(v31) = 0;
    if ( SHIDWORD(v31) <= 0 )
      HIDWORD(v31) = 0;
    if ( __PAIR64__(HIDWORD(v30), v10) != *(_QWORD *)(v5 + 16) )
    {
      *(_DWORD *)(v5 + 96) |= 1u;
      v21 = *(CVisual **)(v5 + 80);
      *(_QWORD *)(v5 + 16) = v30;
      if ( v21 )
      {
        v22 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v21 + 24LL);
        if ( v22 == CVisual::SetDirtyFlags )
        {
          v23 = *((_DWORD *)v21 + 20);
          if ( (v23 & 0x2000) == 0 )
          {
            v24 = (CVisual *)*((_QWORD *)v21 + 3);
            for ( *((_DWORD *)v21 + 20) = v23 | 0x2000; v24; v24 = (CVisual *)*((_QWORD *)v24 + 3) )
            {
              v25 = *((_DWORD *)v24 + 20);
              if ( (v25 & 1) != 0 )
                break;
              v26 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v24 + 32LL);
              if ( v26 == CVisual::SetDirtyChildren )
                *((_DWORD *)v24 + 20) = v25 | 1;
              else
                v26(v24);
            }
          }
        }
        else
        {
          v22(v21, 0x2000u);
        }
      }
    }
    if ( *(_QWORD *)(v5 + 24) != v31 )
    {
      *(_DWORD *)(v5 + 96) |= 1u;
      v15 = *(CVisual **)(v5 + 80);
      *(_QWORD *)(v5 + 24) = v31;
      if ( v15 )
      {
        v16 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v15 + 24LL);
        if ( v16 == CVisual::SetDirtyFlags )
        {
          v17 = *((_DWORD *)v15 + 20);
          if ( (v17 & 0x2000) == 0 )
          {
            v18 = (CVisual *)*((_QWORD *)v15 + 3);
            for ( *((_DWORD *)v15 + 20) = v17 | 0x2000; v18; v18 = (CVisual *)*((_QWORD *)v18 + 3) )
            {
              v19 = *((_DWORD *)v18 + 20);
              if ( (v19 & 1) != 0 )
                break;
              v20 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v18 + 32LL);
              if ( v20 == CVisual::SetDirtyChildren )
                *((_DWORD *)v18 + 20) = v19 | 1;
              else
                v20(v18);
            }
          }
        }
        else
        {
          v16(v15, 0x2000u);
        }
      }
    }
LABEL_20:
    ++v4;
  }
  while ( v4 < *((_DWORD *)this + 66) );
  v3 = *((_DWORD *)this + 20);
LABEL_22:
  v3 &= ~0x1000u;
  *((_DWORD *)this + 20) = v3;
LABEL_23:
  if ( (v3 & 0x2000) == 0 )
    return (unsigned int)v2;
  v27 = *(__int64 (__fastcall **)(__int32 **))(*(_QWORD *)this + 176LL);
  if ( v27 == CAtlasedRectsVisual::UpdateAtlas )
    result = CAtlasedRectsVisual::UpdateAtlas((__int32 **)this);
  else
    result = v27((__int32 **)this);
  v28 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, result, 0x7Bu);
    return v28;
  }
  else
  {
    *((_DWORD *)this + 20) &= ~0x2000u;
  }
  return result;
}
