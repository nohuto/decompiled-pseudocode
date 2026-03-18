/*
 * XREFs of ?BeginItem@CDataStreamWriter@@QEAAJXZ @ 0x180087E60
 * Callers:
 *     ?GdiSpriteBitmapUpdateMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x180085200 (-GdiSpriteBitmapUpdateMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z.c)
 *     ?WindowNodeSetAlphaMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x180085870 (-WindowNodeSetAlphaMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z.c)
 *     ?WindowNodeSetSourceModifications@CChannel@@UEAAJIU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@KKH@Z @ 0x180085960 (-WindowNodeSetSourceModifications@CChannel@@UEAAJIU-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifica.c)
 *     ?WindowNodeSetDxClip@CChannel@@UEAAJII@Z @ 0x180085A60 (-WindowNodeSetDxClip@CChannel@@UEAAJII@Z.c)
 *     ?WindowNodeSetSpriteClip@CChannel@@UEAAJIHI@Z @ 0x180085B40 (-WindowNodeSetSpriteClip@CChannel@@UEAAJIHI@Z.c)
 *     ?VisualSetOffset@CChannel@@UEAAJINNN@Z @ 0x1800867C0 (-VisualSetOffset@CChannel@@UEAAJINNN@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180087734 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180087984 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDataStreamWriter::BeginItem(CDataStreamWriter *this)
{
  __int64 v2; // rcx
  unsigned int (**v3)(void); // rax
  _DWORD *v4; // rdi
  unsigned int *v5; // rcx
  unsigned __int8 *(__fastcall *v6)(CDataStreamBlock *__hidden); // rax
  _DWORD *v7; // rax
  int v8; // ecx
  _DWORD *v9; // rcx
  __int64 v10; // rax
  _DWORD *v11; // rsi
  __int64 (*v12)(void); // rax
  unsigned int *v13; // rax
  unsigned int v14; // eax
  int v15; // ecx
  int v16; // edi
  unsigned int v17; // eax
  int v18; // ecx
  __int64 v20; // rax

  if ( !*((_QWORD *)this + 4) && !*((_DWORD *)this + 10) )
  {
    v2 = *((_QWORD *)this + 2);
    v3 = *(unsigned int (***)(void))v2;
    if ( *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v2 + 8LL) == CDataStreamBlock::GetWrittenSize )
    {
      v4 = (_DWORD *)(v2 + 28);
    }
    else
    {
      v4 = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
      v3 = (unsigned int (**)(void))**((_QWORD **)this + 2);
    }
    if ( (*v3)() - *v4 >= 4 )
    {
      v5 = (unsigned int *)*((_QWORD *)this + 2);
      v6 = *(unsigned __int8 *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v5 + 24LL);
      if ( v6 == CDataStreamBlock::GetWritePointer )
        v7 = (unsigned int *)((char *)v5 + v5[7] + 32);
      else
        v7 = (_DWORD *)((__int64 (__fastcall *)(unsigned int *, unsigned __int8 *(__fastcall *)(CDataStreamBlock *__hidden)))v6)(
                         v5,
                         CDataStreamBlock::GetWritePointer);
      v8 = *((_DWORD *)this + 10);
      *((_QWORD *)this + 4) = v7;
      *v7 = v8;
      v9 = (_DWORD *)*((_QWORD *)this + 2);
      *((_DWORD *)this + 10) = 4;
      v10 = *(_QWORD *)v9;
      if ( *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v9 + 8LL) == CDataStreamBlock::GetWrittenSize )
      {
        v11 = v9 + 7;
      }
      else
      {
        v20 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 8LL))(v9);
        v9 = (_DWORD *)*((_QWORD *)this + 2);
        v11 = (_DWORD *)v20;
        v10 = *(_QWORD *)v9;
      }
      v12 = *(__int64 (**)(void))(v10 + 8);
      if ( (char *)v12 == (char *)CDataStreamBlock::GetWrittenSize )
        v13 = v9 + 7;
      else
        v13 = (unsigned int *)v12();
      v14 = *v13;
      v15 = v14 + 4;
      if ( v14 + 4 < v14 )
      {
        v16 = -2147024362;
        v15 = -1;
      }
      else
      {
        v16 = 0;
      }
      *v11 = v15;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x212u);
      }
      else
      {
        v17 = *((_DWORD *)this + 7);
        v18 = v17 + 4;
        if ( v17 + 4 < v17 )
        {
          v16 = -2147024362;
          v18 = -1;
        }
        else
        {
          v16 = 0;
        }
        *((_DWORD *)this + 7) = v18;
        if ( v16 >= 0 )
          return (unsigned int)v16;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x213u);
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x87u);
      return (unsigned int)v16;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147418113, 0x76u);
  return 2147549183LL;
}
