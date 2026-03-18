/*
 * XREFs of ?NotifyPendingFlipPresent@CFlipExBuffer@@UEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N1@Z @ 0x1C0039B90
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateFromPendingFlipPresentNotify@CFlipExBuffer@@IEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C0039C04 (-UpdateFromPendingFlipPresentNotify@CFlipExBuffer@@IEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKE.c)
 *     ?CalcTransformChange@CCompositionBuffer@@SA?AW4TransformComparison@1@PEBM0@Z @ 0x1C0152940 (-CalcTransformChange@CCompositionBuffer@@SA-AW4TransformComparison@1@PEBM0@Z.c)
 *     ?SetPendingIndependentFlipAttributes@CFlipExBuffer@@IEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C01531FC (-SetPendingIndependentFlipAttributes@CFlipExBuffer@@IEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOK.c)
 */

void __fastcall CFlipExBuffer::NotifyPendingFlipPresent(
        CFlipExBuffer *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a2,
        bool *a3,
        bool *a4)
{
  const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *v6; // r10
  CFlipExBuffer *v7; // r11
  char v8; // di
  LONG left; // ebx
  __int64 v10; // r8
  bool v11; // zf
  float *v12; // rsi
  int v13; // eax
  float *v14; // rdx
  int v15; // r9d
  struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS::$999A3466B180106FECC6453D6FF00F87::$CDA7573B07EF0A4513B0E43B6C419F7F Value; // ecx
  int v17; // edx

  v6 = a2;
  v7 = this;
  if ( (a2->Flags.Value & 0x2000000) == 0 )
    CFlipExBuffer::UpdateFromPendingFlipPresentNotify(this, a2);
  *a4 = 0;
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
        goto LABEL_17;
      }
      v11 = *(_DWORD *)((char *)this + v10 + 96) == a2->DestHeight;
      goto LABEL_16;
    }
    v12 = (float *)((char *)this + v10);
    v13 = CCompositionBuffer::CalcTransformChange((char *)this + v10 + 68, a2->Transform);
    if ( v13 == 1 )
    {
      if ( v8 )
      {
        if ( *(_DWORD *)((char *)v7 + v10 + 56) - v15 != v6->SourceRect.right - left )
          goto LABEL_17;
        v11 = *(_DWORD *)((char *)v7 + v10 + 60) - *(_DWORD *)((char *)v7 + v10 + 52) == v6->SourceRect.bottom
                                                                                       - v6->SourceRect.top;
LABEL_16:
        if ( !v11 )
          goto LABEL_17;
      }
    }
    else if ( *(_DWORD *)((char *)v7 + v10 + 64) != 1
           || v13 != 2
           || COERCE_INT((float)((float)(*(_DWORD *)((char *)v7 + v10 + 56) - v15) * v12[17]) + 0.5) != COERCE_INT((float)((float)(v6->SourceRect.right - left) * *v14) + 0.5)
           || COERCE_INT(
                (float)((float)(*(_DWORD *)((char *)v7 + v10 + 60) - *(_DWORD *)((char *)v7 + v10 + 52))
                      * *(float *)((char *)v7 + v10 + 80))
              + 0.5) != COERCE_INT((float)((float)(v6->SourceRect.bottom - v6->SourceRect.top) * v6->Transform[3]) + 0.5) )
    {
      goto LABEL_17;
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
          *a4 = 1;
        }
        goto LABEL_18;
      }
    }
LABEL_17:
    *((_DWORD *)v7 + 87) = -1;
LABEL_18:
    CFlipExBuffer::SetPendingIndependentFlipAttributes(v7, v6);
  }
  *a3 = *((_DWORD *)v7 + 87) >= 1;
}
