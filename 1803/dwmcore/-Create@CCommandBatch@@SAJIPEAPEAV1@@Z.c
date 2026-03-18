/*
 * XREFs of ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x180088438
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
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x18013F148 (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CCommandBatch::Create(__int64 a1, struct CCommandBatch **a2)
{
  void *v3; // rax
  void *v4; // rbx
  _QWORD *v5; // rax
  void *v6; // rdi
  unsigned int v7; // r14d
  int v8; // eax
  unsigned int v9; // r15d
  unsigned int v10; // esi
  __int64 v11; // rax
  unsigned int v13; // edx
  void **v14; // rcx
  _QWORD *v15; // rax
  void *retaddr; // [rsp+48h] [rbp+0h]

  v3 = HeapAlloc(WPF::g_processHeap, 0, 0x38uLL);
  v4 = v3;
  if ( !v3 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  memset_0(v3, 0, 0x38uLL);
  *((_QWORD *)v4 + 1) = v4;
  *(_QWORD *)v4 = v4;
  *((_QWORD *)v4 + 2) = 0LL;
  *((_DWORD *)v4 + 6) = 0;
  *((_DWORD *)v4 + 7) = 0;
  *((_QWORD *)v4 + 4) = 0LL;
  *((_DWORD *)v4 + 10) = 0;
  *((_DWORD *)v4 + 12) = 8;
  v5 = HeapAlloc(WPF::g_processHeap, 0, 0x1024uLL);
  v6 = v5;
  if ( v5 )
  {
    v5[1] = 0LL;
    v5[2] = 0LL;
    *((_DWORD *)v5 + 7) = 0;
    *v5 = &CDataStreamBlock::`vftable';
    *((_DWORD *)v5 + 6) = 4096;
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1ECu);
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x142u);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x28u);
    CCommandBatch::`scalar deleting destructor'((CCommandBatch *)v4, v13);
    return v10;
  }
  v7 = *((_DWORD *)v4 + 6);
  v8 = -1;
  v9 = v7 + 4132;
  if ( v7 + 4132 >= v7 )
    v8 = v7 + 4132;
  v10 = v9 < v7 ? 0x80070216 : 0;
  *((_DWORD *)v4 + 6) = v8;
  if ( v9 < v7 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x1EFu);
    HeapFree(WPF::g_processHeap, 0, v6);
  }
  else
  {
    v11 = *((_QWORD *)v4 + 2);
    if ( v11 )
    {
      v14 = (void **)*((_QWORD *)v4 + 1);
      v15 = (_QWORD *)(v11 + 8);
      if ( *v14 != v4 )
        __fastfail(3u);
      *v15 = v4;
      v15[1] = v14;
      *v14 = v15;
      *((_QWORD *)v4 + 1) = v15;
    }
    *((_QWORD *)v4 + 2) = v6;
  }
  if ( v9 < v7 )
    goto LABEL_15;
  *a2 = (struct CCommandBatch *)v4;
  return v10;
}
