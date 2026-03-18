/*
 * XREFs of ?GetCachedEffectNoRef@CD2DContext@@UEAAJW4D2DEffect@@PEAPEAUID2D1Effect@@@Z @ 0x180199010
 * Callers:
 *     ?CleanupReferences@CHwBitmapBrush@@UEAAXXZ @ 0x18004D3D0 (-CleanupReferences@CHwBitmapBrush@@UEAAXXZ.c)
 *     ?GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z @ 0x18004D470 (-GetD2DBrush@CHwBitmapBrush@@UEAAJMW4ColorSpace@@PEAPEAUID2D1Brush@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::GetCachedEffectNoRef(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  unsigned int v7; // edi
  __int64 v8; // rax
  int v9; // eax
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = a2;
  v11 = 0LL;
  v7 = 0;
  v8 = *(_QWORD *)(a1 + 8LL * a2 + 200);
  if ( !v8 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, char *, __int64 *))(**(_QWORD **)(a1 + 176) + 504LL))(
           *(_QWORD *)(a1 + 176),
           (char *)&unk_18023D8D4 + 24 * a2,
           &v11);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x96Eu);
      v3 = v11;
      goto LABEL_5;
    }
    v8 = v11;
    *(_QWORD *)(a1 + 8 * v4 + 200) = v11;
    v11 = 0LL;
  }
  *a3 = v8;
LABEL_5:
  ReleaseInterfaceNoNULL<CD2DPencil>(v3);
  return v7;
}
