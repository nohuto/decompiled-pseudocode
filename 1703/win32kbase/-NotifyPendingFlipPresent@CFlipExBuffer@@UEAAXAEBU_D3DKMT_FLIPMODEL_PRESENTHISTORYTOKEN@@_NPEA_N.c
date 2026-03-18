/*
 * XREFs of ?NotifyPendingFlipPresent@CFlipExBuffer@@UEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEA_N2@Z @ 0x1C0006FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?CalcTransformChange@CCompositionBuffer@@SA?AW4TransformComparison@1@PEBM0@Z @ 0x1C0151524 (-CalcTransformChange@CCompositionBuffer@@SA-AW4TransformComparison@1@PEBM0@Z.c)
 *     ?SetPendingIndependentFlipAttributes@CFlipExBuffer@@IEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C0151D5C (-SetPendingIndependentFlipAttributes@CFlipExBuffer@@IEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOK.c)
 */

void __fastcall CFlipExBuffer::NotifyPendingFlipPresent(
        CFlipExBuffer *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a2,
        char a3,
        bool *a4,
        bool *a5)
{
  const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *v6; // r10
  CFlipExBuffer *v7; // r11
  char v8; // si
  LONG left; // edi
  __int64 v10; // r8
  bool v11; // zf
  int v12; // eax
  float *v13; // rdx
  float *v14; // rcx
  int v15; // r9d
  struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F Value; // ecx
  int v17; // edx

  v6 = a2;
  v7 = this;
  if ( a2->FenceValue )
    *((_QWORD *)this + 40) = a2->FenceValue;
  if ( a3 )
    ++*((_DWORD *)this + 76);
  *a5 = 0;
  if ( *((int *)this + 87) >= 1 )
  {
    v8 = 0;
    left = a2->SourceRect.left;
    v10 = *((_BYTE *)this + 503) != 0 ? 352LL : 48LL;
    if ( *(_QWORD *)((char *)this + v10 + 48) != *(_QWORD *)&a2->SourceRect.left
      || *(_DWORD *)((char *)this + v10 + 56) != a2->SourceRect.right
      || *(_DWORD *)((char *)this + v10 + 60) != a2->SourceRect.bottom )
    {
      v8 = 1;
    }
    if ( *((_BYTE *)this + 500) )
    {
      if ( *(_DWORD *)((char *)this + v10 + 100) != a2->TargetRect.left
        || *(_DWORD *)((char *)this + v10 + 104) != a2->TargetRect.top
        || *(_DWORD *)((char *)this + v10 + 108) != a2->TargetRect.right
        || *(_DWORD *)((char *)this + v10 + 112) != a2->TargetRect.bottom
        || *(_DWORD *)((char *)this + v10 + 92) != a2->DestWidth )
      {
        goto LABEL_19;
      }
      v11 = *(_DWORD *)((char *)this + v10 + 96) == a2->DestHeight;
      goto LABEL_18;
    }
    v12 = CCompositionBuffer::CalcTransformChange((char *)this + v10 + 68, a2->Transform);
    if ( v12 == 1 )
    {
      if ( v8 )
      {
        if ( *(_DWORD *)((char *)v7 + v10 + 56) - v15 != v6->SourceRect.right - left )
          goto LABEL_19;
        v11 = *(_DWORD *)((char *)v7 + v10 + 60) - *(_DWORD *)((char *)v7 + v10 + 52) == v6->SourceRect.bottom
                                                                                       - v6->SourceRect.top;
LABEL_18:
        if ( !v11 )
          goto LABEL_19;
      }
    }
    else if ( *(_DWORD *)((char *)v7 + v10 + 64) != 1
           || v12 != 2
           || COERCE_INT((float)((float)(*(_DWORD *)((char *)v7 + v10 + 56) - v15) * *v14) + 0.5) != COERCE_INT((float)((float)(v6->SourceRect.right - left) * *v13) + 0.5)
           || COERCE_INT(
                (float)((float)(*(_DWORD *)((char *)v7 + v10 + 60) - *(_DWORD *)((char *)v7 + v10 + 52))
                      * *(float *)((char *)v7 + v10 + 80))
              + 0.5) != COERCE_INT((float)((float)(v6->SourceRect.bottom - v6->SourceRect.top) * v6->Transform[3]) + 0.5) )
    {
      goto LABEL_19;
    }
    Value = (struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F)v6->Flags.Value;
    if ( (*(_BYTE *)&Value & 0x40) == 0 )
    {
      v17 = *(_DWORD *)((char *)v7 + v10 + 116);
      if ( (((unsigned __int8)v17 ^ (unsigned __int8)(*(unsigned int *)&Value >> 1)) & 1) == 0
        && *(_DWORD *)((char *)v7 + v10 + 64) == v6->Rotation
        && (((unsigned __int8)v17 ^ (unsigned __int8)(*(unsigned int *)&Value >> 1)) & 4) == 0
        && *(_DWORD *)((char *)v7 + v10 + 36) == v6->CustomDuration
        && *(_DWORD *)((char *)v7 + v10) == ((*(unsigned int *)&Value >> 7) & 3)
        && (((unsigned __int8)v17 ^ (unsigned __int8)(*(unsigned int *)&Value >> 1)) & 8) == 0 )
      {
        if ( v8
          || *(float *)((char *)v7 + v10 + 20) != v6->RevealColor[0]
          || *(float *)((char *)v7 + v10 + 24) != v6->RevealColor[1]
          || *(float *)((char *)v7 + v10 + 28) != v6->RevealColor[2]
          || *(float *)((char *)v7 + v10 + 32) != v6->RevealColor[3]
          || *(_DWORD *)((char *)v7 + v10 + 44) != v6->ColorSpace )
        {
          *a5 = 1;
        }
        goto LABEL_20;
      }
    }
LABEL_19:
    *((_DWORD *)v7 + 87) = -1;
LABEL_20:
    CFlipExBuffer::SetPendingIndependentFlipAttributes(v7, v6);
  }
  *a4 = *((_DWORD *)v7 + 87) >= 1;
}
