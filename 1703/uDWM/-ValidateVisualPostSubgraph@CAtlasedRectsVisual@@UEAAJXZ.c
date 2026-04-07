/*
 * XREFs of ?ValidateVisualPostSubgraph@CAtlasedRectsVisual@@UEAAJXZ @ 0x180021890
 * Callers:
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x180023490 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 * Callees:
 *     ?UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ @ 0x180021270 (-UpdateAtlas@CAtlasedRectsVisual@@UEAAJXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsVisual::ValidateVisualPostSubgraph(CAtlasedRectsVisual *this)
{
  int v2; // ebp
  unsigned int v3; // edi
  __int64 v4; // rbx
  unsigned int v5; // r8d
  unsigned int v6; // edx
  int v7; // r9d
  int v8; // r10d
  __int64 v9; // rax
  unsigned int v10; // ecx
  int v11; // eax
  __int64 result; // rax
  CVisual *v13; // rcx
  void (__fastcall *v14)(CVisual *__hidden, unsigned int); // rax
  int v15; // eax
  CVisual *v16; // rbx
  int v17; // ecx
  void (__fastcall *v18)(CVisual *__hidden); // rax
  CVisual *v19; // rcx
  void (__fastcall *v20)(CVisual *__hidden, unsigned int); // rax
  int v21; // eax
  CVisual *v22; // r14
  int v23; // ecx
  void (__fastcall *v24)(CVisual *__hidden); // rax
  __int64 (__fastcall *v25)(__int32 **); // rax
  unsigned int v26; // ebx
  int v27; // eax
  __int64 v28; // [rsp+70h] [rbp+8h]
  __int64 v29; // [rsp+78h] [rbp+10h]

  v2 = 0;
  if ( (*((_DWORD *)this + 20) & 0x100) != 0 )
  {
    v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, bool))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 488LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
            *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
            *((_DWORD *)this + 22) != 0);
    v2 = v27;
    if ( v27 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v27, 0x553u);
    if ( v2 >= 0 )
      *((_DWORD *)this + 20) &= ~0x100u;
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0xE4u);
  }
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0xA6u);
    return (unsigned int)v2;
  }
  else
  {
    if ( (*((_DWORD *)this + 20) & 0x1000) != 0 )
    {
      v3 = 0;
      if ( *((_DWORD *)this + 66) )
      {
        while ( 1 )
        {
          v4 = *(_QWORD *)(*((_QWORD *)this + 30) + 8LL * v3);
          v5 = *(_DWORD *)(v4 + 32);
          v6 = *(_DWORD *)(v4 + 36);
          v7 = *(_DWORD *)(v4 + 44);
          v8 = *(_DWORD *)(v4 + 40);
          if ( __PAIR64__(v6, v5) != 0x7FFFFFFF7FFFFFFFLL || v8 != 0x7FFFFFFF || v7 != 0x7FFFFFFF )
            break;
LABEL_21:
          if ( ++v3 >= *((_DWORD *)this + 66) )
            goto LABEL_22;
        }
        v9 = *(_QWORD *)(v4 + 24);
        v10 = 0;
        v29 = v9;
        v28 = 0LL;
        if ( v6 == 0x7FFFFFFF )
        {
          if ( v5 == 0x7FFFFFFF )
          {
LABEL_11:
            if ( v7 == 0x7FFFFFFF )
            {
              if ( v8 == 0x7FFFFFFF )
                goto LABEL_15;
            }
            else
            {
              v11 = *((_DWORD *)this + 31);
              if ( v8 == 0x7FFFFFFF )
              {
                HIDWORD(v28) = v11 - *(_DWORD *)(v4 + 28) - v7;
                goto LABEL_15;
              }
              HIDWORD(v29) = v11 - v8 - v7;
            }
            HIDWORD(v28) = *(_DWORD *)(v4 + 40);
LABEL_15:
            if ( (int)v29 <= 0 )
              LODWORD(v29) = 0;
            if ( SHIDWORD(v29) <= 0 )
              HIDWORD(v29) = 0;
            if ( __PAIR64__(HIDWORD(v28), v10) != *(_QWORD *)(v4 + 16) )
            {
              *(_DWORD *)(v4 + 96) |= 1u;
              v19 = *(CVisual **)(v4 + 80);
              *(_QWORD *)(v4 + 16) = v28;
              if ( v19 )
              {
                v20 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v19 + 24LL);
                if ( v20 == CVisual::SetDirtyFlags )
                {
                  v21 = *((_DWORD *)v19 + 20);
                  if ( (v21 & 0x2000) == 0 )
                  {
                    v22 = (CVisual *)*((_QWORD *)v19 + 3);
                    for ( *((_DWORD *)v19 + 20) = v21 | 0x2000; v22; v22 = (CVisual *)*((_QWORD *)v22 + 3) )
                    {
                      v23 = *((_DWORD *)v22 + 20);
                      if ( (v23 & 1) != 0 )
                        break;
                      v24 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v22 + 32LL);
                      if ( v24 == CVisual::SetDirtyChildren )
                        *((_DWORD *)v22 + 20) = v23 | 1;
                      else
                        v24(v22);
                    }
                  }
                }
                else
                {
                  v20(v19, 0x2000u);
                }
              }
            }
            if ( *(_QWORD *)(v4 + 24) != v29 )
            {
              *(_DWORD *)(v4 + 96) |= 1u;
              v13 = *(CVisual **)(v4 + 80);
              *(_QWORD *)(v4 + 24) = v29;
              if ( v13 )
              {
                v14 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v13 + 24LL);
                if ( v14 == CVisual::SetDirtyFlags )
                {
                  v15 = *((_DWORD *)v13 + 20);
                  if ( (v15 & 0x2000) == 0 )
                  {
                    v16 = (CVisual *)*((_QWORD *)v13 + 3);
                    for ( *((_DWORD *)v13 + 20) = v15 | 0x2000; v16; v16 = (CVisual *)*((_QWORD *)v16 + 3) )
                    {
                      v17 = *((_DWORD *)v16 + 20);
                      if ( (v17 & 1) != 0 )
                        break;
                      v18 = *(void (__fastcall **)(CVisual *__hidden))(*(_QWORD *)v16 + 32LL);
                      if ( v18 == CVisual::SetDirtyChildren )
                        *((_DWORD *)v16 + 20) = v17 | 1;
                      else
                        v18(v16);
                    }
                  }
                }
                else
                {
                  v14(v13, 0x2000u);
                }
              }
            }
            goto LABEL_21;
          }
        }
        else
        {
          if ( v5 == 0x7FFFFFFF )
          {
            v10 = *((_DWORD *)this + 30) - v9 - v6;
            goto LABEL_10;
          }
          LODWORD(v29) = *((_DWORD *)this + 30) - v6 - v5;
        }
        v10 = *(_DWORD *)(v4 + 32);
LABEL_10:
        LODWORD(v28) = v10;
        goto LABEL_11;
      }
LABEL_22:
      *((_DWORD *)this + 20) &= ~0x1000u;
    }
    if ( (*((_DWORD *)this + 20) & 0x2000) != 0 )
    {
      v25 = *(__int64 (__fastcall **)(__int32 **))(*(_QWORD *)this + 176LL);
      if ( v25 == CAtlasedRectsVisual::UpdateAtlas )
        result = CAtlasedRectsVisual::UpdateAtlas((__int32 **)this);
      else
        result = v25((__int32 **)this);
      v26 = result;
      if ( (int)result < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, result, 0xB1u);
        return v26;
      }
      else
      {
        *((_DWORD *)this + 20) &= ~0x2000u;
      }
    }
    else
    {
      return (unsigned int)v2;
    }
  }
  return result;
}
