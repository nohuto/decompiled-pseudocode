/*
 * XREFs of ?RecordIndependentFlipInfo@CCompositionSurfaceInfo@@QEAAJ_KI_N1IIPEA_N@Z @ 0x18017CAEC
 * Callers:
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z @ 0x1801428A8 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N1@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     McTemplateU0xxqqqqq @ 0x18017D0E4 (McTemplateU0xxqqqqq.c)
 */

__int64 __fastcall CCompositionSurfaceInfo::RecordIndependentFlipInfo(
        CCompositionSurfaceInfo *this,
        __int64 a2,
        __int64 a3,
        unsigned __int8 a4,
        char a5,
        unsigned int a6,
        unsigned int a7,
        bool *a8)
{
  char v8; // r14
  char v9; // r12
  unsigned int v11; // ebx
  __int64 v12; // rcx
  char v13; // bp
  int v16; // eax
  int v17; // edx
  int v18; // ecx
  char v19; // al
  __int64 v21; // [rsp+88h] [rbp+10h] BYREF
  int v22; // [rsp+98h] [rbp+20h] BYREF

  v21 = a2;
  v8 = a5;
  v9 = a6;
  v11 = 0;
  v12 = *((_QWORD *)this + 4);
  v13 = a3;
  v22 = 0;
  v16 = NtSetCompositionSurfaceIndependentFlipInfo(v12, &v21, a3, a4, (unsigned __int8)a5, a6, a7, &v22);
  if ( v16 >= 0 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0xxqqqqq(v18, v17, *((_DWORD *)this + 10), v21, v13, a4, v8, v9, v22);
    if ( *((_QWORD *)this + 7) == v21 )
    {
      if ( !a4 || (v19 = 1, a5) )
        v19 = 0;
      *((_BYTE *)this + 68) = v19;
    }
    if ( a8 )
      *a8 = v22 != 0;
  }
  else
  {
    v11 = v16 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16 | 0x10000000, 0x10Fu);
  }
  return v11;
}
