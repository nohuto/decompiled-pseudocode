/*
 * XREFs of ?SetPendingIndependentFlipAttributes@CFlipExBuffer@@IEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@@Z @ 0x1C0151D5C
 * Callers:
 *     ?NotifyPendingFlipPresent@CFlipExBuffer@@UEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEA_N2@Z @ 0x1C0006FF0 (-NotifyPendingFlipPresent@CFlipExBuffer@@UEAAXAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@_NPEA_N.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipExBuffer::SetPendingIndependentFlipAttributes(
        CFlipExBuffer *this,
        const struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN *a2)
{
  bool v2; // zf
  _DWORD *v3; // r8
  __int64 v4; // r10

  v2 = *((_BYTE *)this + 500) == 0;
  *((_OWORD *)this + 25) = a2->SourceRect;
  if ( v2 )
  {
    v3 = (_DWORD *)((char *)this + 420);
    v4 = 6LL;
    do
    {
      *v3 = *(_DWORD *)((char *)v3 + (char *)a2 - (char *)this + 344);
      ++v3;
      --v4;
    }
    while ( v4 );
  }
  else
  {
    *(RECT *)((char *)this + 452) = a2->TargetRect;
    *((_DWORD *)this + 111) = a2->DestWidth;
    *((_DWORD *)this + 112) = a2->DestHeight;
  }
  *((_DWORD *)this + 117) ^= (*((_DWORD *)this + 117) ^ (a2->Flags.Value >> 1)) & 1;
  *((_DWORD *)this + 104) = a2->Rotation;
  *((_DWORD *)this + 117) ^= (*((_DWORD *)this + 117) ^ (a2->Flags.Value >> 1)) & 4;
  *((_DWORD *)this + 97) = a2->CustomDuration;
  *((_DWORD *)this + 88) = (a2->Flags.Value >> 7) & 3;
  *((_DWORD *)this + 117) ^= (*((_DWORD *)this + 117) ^ (a2->Flags.Value >> 1)) & 8;
  *(_OWORD *)((char *)this + 372) = *(_OWORD *)a2->RevealColor;
  *((_DWORD *)this + 99) = a2->ColorSpace;
  *((_BYTE *)this + 503) = 1;
}
