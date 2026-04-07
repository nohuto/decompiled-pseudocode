/*
 * XREFs of ?UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z @ 0x18001CC20
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x18001CDB0 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800256C0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180025960 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     floor_0 @ 0x18004B342 (floor_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaButton(__int64 a1, int a2, LONG a3, int a4, _DWORD *a5)
{
  __int64 v5; // rsi
  unsigned int v6; // ebx
  __int64 v10; // rbp
  __int64 v12; // rax
  int v13; // ebx
  __int64 v14; // rcx
  int v15; // ebx
  int SystemMetricsForDpi; // eax
  double v17; // xmm0_8
  float v18; // xmm1_4
  LONG v19; // ebx
  _DWORD *v20; // rsi
  CVisual *v21; // rcx
  CVisual *v22; // rcx
  __int64 (__fastcall *v23)(CVisual *__hidden, const struct tagSIZE *); // rax
  int v24; // eax
  void (__fastcall *v25)(CVisual *__hidden, unsigned int); // rax
  struct tagSIZE v26; // [rsp+50h] [rbp+8h] BYREF

  v5 = a2;
  v6 = 0;
  v10 = a2;
  if ( !*(_QWORD *)(a1 + 8LL * a2 + 480) )
    return v6;
  v12 = *(_QWORD *)(a1 + 720);
  v13 = *(_DWORD *)(a1 + 584);
  v14 = 53LL;
  v15 = v13 & 2;
  if ( !v15 )
    v14 = 31LL;
  SystemMetricsForDpi = GetSystemMetricsForDpi(v14, *(unsigned int *)(v12 + 324));
  v17 = floor_0((float)((float)SystemMetricsForDpi * 0.95454544) + 0.5);
  if ( v15 )
  {
    v19 = (int)v17;
    a3 = (int)v17;
    goto LABEL_10;
  }
  if ( (_DWORD)v5 == 3 )
  {
    if ( (*(_DWORD *)(a1 + 584) & 0xB00) == 0 )
    {
      v18 = FLOAT_1_6363636;
      goto LABEL_9;
    }
  }
  else if ( ((_DWORD)v5 != 1 || *(_QWORD *)(a1 + 480)) && (_DWORD)v5 )
  {
    v18 = FLOAT_2_1818182;
    goto LABEL_9;
  }
  v18 = FLOAT_2_2272727;
LABEL_9:
  v19 = (int)floor_0((float)((float)(int)v17 * v18) + 0.5);
LABEL_10:
  CVisual::SetInsetFromParentTop(*(CVisual **)(a1 + 8 * v5 + 480), a4);
  v20 = a5;
  v21 = *(CVisual **)(a1 + 8 * v10 + 480);
  if ( *((_DWORD *)v21 + 33) != *a5 )
  {
    *((_DWORD *)v21 + 33) = *a5;
    v25 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(*(_QWORD *)v21 + 24LL);
    if ( v25 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(v21, 2u);
    else
      v25(v21, 2u);
  }
  v22 = *(CVisual **)(a1 + 8 * v10 + 480);
  v26.cx = v19;
  v26.cy = a3;
  v23 = *(__int64 (__fastcall **)(CVisual *__hidden, const struct tagSIZE *))(*(_QWORD *)v22 + 80LL);
  if ( v23 == CVisual::SetSize )
    v24 = CVisual::SetSize(v22, &v26);
  else
    v24 = v23(v22, &v26);
  v6 = v24;
  if ( v24 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0xC8Cu);
  else
    *v20 += *(_DWORD *)(*(_QWORD *)(a1 + 8 * v10 + 480) + 120LL);
  return v6;
}
