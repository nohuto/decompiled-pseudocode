/*
 * XREFs of ?EnsureSize@CDataStreamWriter@@IEAAJI@Z @ 0x180088320
 * Callers:
 *     ?WindowNodeSetAlphaMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z @ 0x180085870 (-WindowNodeSetAlphaMargins@CChannel@@UEAAJIAEBU_MARGINS@@@Z.c)
 *     ?WindowNodeSetSourceModifications@CChannel@@UEAAJIU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@KKH@Z @ 0x180085960 (-WindowNodeSetSourceModifications@CChannel@@UEAAJIU-$TMILFlagsEnum@W4FlagsEnum@MilSourceModifica.c)
 *     ?WindowNodeSetSpriteClip@CChannel@@UEAAJIHI@Z @ 0x180085B40 (-WindowNodeSetSpriteClip@CChannel@@UEAAJIHI@Z.c)
 *     ?VisualSetOffset@CChannel@@UEAAJINNN@Z @ 0x1800867C0 (-VisualSetOffset@CChannel@@UEAAJINNN@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x180087984 (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ?AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180087C98 (-AddBlockData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z @ 0x18008817C (-AllocateNewBlock@CDataStreamWriter@@IEAAJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDataStreamWriter::EnsureSize(CDataStreamWriter *this, __int64 a2)
{
  __int64 v2; // r8
  unsigned int v3; // eax
  unsigned int v4; // esi
  unsigned int v6; // ebx
  __int64 v7; // rcx
  __int64 (**v8)(void); // rax
  _DWORD *v9; // rbp
  int v10; // eax
  int v12; // ebx
  unsigned int v13; // eax
  unsigned int v14; // edx
  int NewBlock; // eax
  unsigned int v16; // [rsp+20h] [rbp-18h]

  v2 = 0LL;
  v3 = (a2 + 3) & 0xFFFFFFFC;
  v4 = a2;
  if ( v3 >= (unsigned int)a2 )
    v4 = (a2 + 3) & 0xFFFFFFFC;
  v6 = v3 < (unsigned int)a2 ? 0x80070216 : 0;
  if ( v3 < (unsigned int)a2 )
  {
    v16 = 367;
    goto LABEL_23;
  }
  v7 = *((_QWORD *)this + 2);
  if ( !v7
    || ((v8 = *(__int64 (***)(void))v7,
         *(unsigned int *(__fastcall **)(CDataStreamBlock *__hidden))(*(_QWORD *)v7 + 8LL) != CDataStreamBlock::GetWrittenSize)
      ? (v9 = (_DWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7),
         v8 = (__int64 (**)(void))**((_QWORD **)this + 2))
      : (__int64 (**)(void))(v9 = (_DWORD *)(v7 + 28)),
        (v10 = (*v8)(), v7 = *((_QWORD *)this + 2), v2 = (unsigned int)(v10 - *v9), !v7) || (unsigned int)v2 < v4) )
  {
    v12 = 0x10000;
    if ( *((_DWORD *)this + 6) < 0x10000u )
      v12 = *((_DWORD *)this + 6);
    if ( v7 && !*(_DWORD *)(*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v7 + 8LL))(v7, a2, v2) )
    {
      operator delete(*((void **)this + 2));
      *((_QWORD *)this + 2) = 0LL;
    }
    v13 = v12 + v4;
    v14 = -1;
    if ( v12 + v4 >= v4 )
      v14 = v12 + v4;
    v6 = v13 < v4 ? 0x80070216 : 0;
    if ( v13 >= v4 )
    {
      NewBlock = CDataStreamWriter::AllocateNewBlock(this, v14);
      v6 = NewBlock;
      if ( NewBlock < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, NewBlock, 0x1BBu);
      return v6;
    }
    v16 = 441;
    LODWORD(v2) = 0;
LABEL_23:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, v2, v6, v16);
  }
  return v6;
}
