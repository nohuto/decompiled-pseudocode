/*
 * XREFs of ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x18000FB60
 * Callers:
 *     ?GdiSpriteBitmapUpdateMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x18000CBA0 (-GdiSpriteBitmapUpdateMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z.c)
 *     ?WindowNodeSetAlphaMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x18000D1B0 (-WindowNodeSetAlphaMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z.c)
 *     ?WindowNodeSetSourceModifications@CChannel@@UEAAJIU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@KKH@Z @ 0x18000D2A0 (-WindowNodeSetSourceModifications@CChannel@@UEAAJIU-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifica.c)
 *     ?WindowNodeSetDxClip@CChannel@@UEAAJII@Z @ 0x18000D3A0 (-WindowNodeSetDxClip@CChannel@@UEAAJII@Z.c)
 *     ?WindowNodeSetSpriteClip@CChannel@@UEAAJIHI@Z @ 0x18000D470 (-WindowNodeSetSpriteClip@CChannel@@UEAAJIHI@Z.c)
 *     ?WindowNodeSetDxImage@CChannel@@UEAAJII@Z @ 0x18000D560 (-WindowNodeSetDxImage@CChannel@@UEAAJII@Z.c)
 *     ?VisualSetOffset@CChannel@@UEAAJINNN@Z @ 0x18000E0B0 (-VisualSetOffset@CChannel@@UEAAJINNN@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18000F1E8 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x18000F908 (-AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 * Callees:
 *     ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x18000FA64 (-AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDataStreamWriter::EnsureSize(CDataStreamWriter *this, unsigned int a2)
{
  __int64 v4; // rdx
  unsigned int v5; // ebx
  _DWORD *v6; // rcx
  unsigned int *(__fastcall *v7)(CDataStreamBlock *__hidden); // rdx
  unsigned int *(__fastcall *v8)(CDataStreamBlock *__hidden); // rax
  _DWORD *v9; // rbp
  __int64 v10; // rcx
  __int64 result; // rax
  int v12; // ebx

  v4 = 0LL;
  v5 = -2147024362;
  if ( ((a2 + 3) & 0xFFFFFFFC) >= a2 )
  {
    a2 = (a2 + 3) & 0xFFFFFFFC;
    v5 = 0;
  }
  if ( (v5 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x16Fu);
    return v5;
  }
  v6 = (_DWORD *)*((_QWORD *)this + 2);
  if ( v6 )
  {
    v7 = CDataStreamBlock::GetWrittenSize;
    v8 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v6 + 8LL);
    if ( v8 == CDataStreamBlock::GetWrittenSize )
      v9 = v6 + 7;
    else
      v9 = (_DWORD *)((__int64 (__fastcall *)(_DWORD *, unsigned int *(__fastcall *)(CDataStreamBlock *__hidden)))v8)(
                       v6,
                       CDataStreamBlock::GetWrittenSize);
    v4 = (***((unsigned int (__fastcall ****)(_QWORD, unsigned int *(__fastcall *)(CDataStreamBlock *__hidden)))this + 2))(
           *((_QWORD *)this + 2),
           v7)
       - *v9;
  }
  v10 = *((_QWORD *)this + 2);
  if ( v10 && (unsigned int)v4 >= a2 )
    return v5;
  v12 = 0x10000;
  if ( *((_DWORD *)this + 6) < 0x10000u )
    v12 = *((_DWORD *)this + 6);
  if ( v10 )
  {
    if ( !*(_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 8LL))(v10, v4) )
    {
      WPF::ProcessHeapImpl::Free(*((void **)this + 2));
      *((_QWORD *)this + 2) = 0LL;
    }
  }
  if ( v12 + a2 < a2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x1B9u);
    return 2147942934LL;
  }
  result = CDataStreamWriter::AllocateNewBlock(this, v12 + a2);
  v5 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, result, 0x1BBu);
    return v5;
  }
  return result;
}
