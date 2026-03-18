/*
 * XREFs of ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x18000F6E0
 * Callers:
 *     ?GdiSpriteBitmapUpdateMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x18000CBA0 (-GdiSpriteBitmapUpdateMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z.c)
 *     ?WindowNodeSetAlphaMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x18000D1B0 (-WindowNodeSetAlphaMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z.c)
 *     ?WindowNodeSetSourceModifications@CChannel@@UEAAJIU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@KKH@Z @ 0x18000D2A0 (-WindowNodeSetSourceModifications@CChannel@@UEAAJIU-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifica.c)
 *     ?WindowNodeSetDxClip@CChannel@@UEAAJII@Z @ 0x18000D3A0 (-WindowNodeSetDxClip@CChannel@@UEAAJII@Z.c)
 *     ?WindowNodeSetSpriteClip@CChannel@@UEAAJIHI@Z @ 0x18000D470 (-WindowNodeSetSpriteClip@CChannel@@UEAAJIHI@Z.c)
 *     ?WindowNodeSetDxImage@CChannel@@UEAAJII@Z @ 0x18000D560 (-WindowNodeSetDxImage@CChannel@@UEAAJII@Z.c)
 *     ?VisualSetOffset@CChannel@@UEAAJINNN@Z @ 0x18000E0B0 (-VisualSetOffset@CChannel@@UEAAJINNN@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x18000F038 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18000F1E8 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x18000FD9C (-CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z.c)
 *     ?ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z @ 0x1800100E8 (-ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@I@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDataStreamWriter::BeginItem(CDataStreamWriter *this)
{
  __int64 v2; // rcx
  unsigned int *(__fastcall *v3)(CDataStreamBlock *__hidden); // rax
  _DWORD *v4; // rdi
  unsigned int *v5; // rcx
  __int64 (*v6)(void); // rax
  _DWORD *v7; // rax
  int v8; // ecx
  _DWORD *v9; // rcx
  __int64 (*v10)(void); // rax
  _DWORD *v11; // rdi
  unsigned int *v12; // rdx
  unsigned int *(__fastcall *v13)(CDataStreamBlock *__hidden); // rax
  unsigned int *v14; // rax
  unsigned int v15; // eax
  unsigned int v16; // eax
  int v17; // ebx
  unsigned int v18; // edi

  if ( !*((_QWORD *)this + 4) && !*((_DWORD *)this + 10) )
  {
    v2 = *((_QWORD *)this + 2);
    v3 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v2 + 8LL);
    v4 = (_DWORD *)(v3 == CDataStreamBlock::GetWrittenSize ? v2 + 28 : ((__int64 (*)(void))v3)());
    if ( (***((unsigned int (__fastcall ****)(_QWORD))this + 2))(*((_QWORD *)this + 2)) - *v4 >= 4 )
    {
      v5 = (unsigned int *)*((_QWORD *)this + 2);
      v6 = *(__int64 (**)(void))(*(_QWORD *)v5 + 24LL);
      if ( (char *)v6 == (char *)CDataStreamBlock::GetWritePointer )
        v7 = (unsigned int *)((char *)v5 + v5[7] + 32);
      else
        v7 = (_DWORD *)v6();
      v8 = *((_DWORD *)this + 10);
      *((_QWORD *)this + 4) = v7;
      *v7 = v8;
      v9 = (_DWORD *)*((_QWORD *)this + 2);
      *((_DWORD *)this + 10) = 4;
      v10 = *(__int64 (**)(void))(*(_QWORD *)v9 + 8LL);
      if ( (char *)v10 == (char *)CDataStreamBlock::GetWrittenSize )
        v11 = v9 + 7;
      else
        v11 = (_DWORD *)v10();
      v12 = (unsigned int *)*((_QWORD *)this + 2);
      v13 = *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v12 + 8LL);
      if ( v13 == CDataStreamBlock::GetWrittenSize )
        v14 = v12 + 7;
      else
        v14 = v13(*((CDataStreamBlock **)this + 2));
      v15 = *v14;
      if ( v15 + 4 < v15 )
      {
        *v11 = -1;
        v17 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x212u);
      }
      else
      {
        *v11 = v15 + 4;
        v16 = *((_DWORD *)this + 7);
        if ( v16 + 4 < v16 )
        {
          *((_DWORD *)this + 7) = -1;
          v18 = -2147024362;
          v17 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024362, 0x213u);
LABEL_22:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x87u);
          return v18;
        }
        *((_DWORD *)this + 7) = v16 + 4;
        v17 = 0;
      }
      v18 = v17;
      if ( v17 >= 0 )
        return (unsigned int)v17;
      goto LABEL_22;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147418113, 0x76u);
  return 2147549183LL;
}
