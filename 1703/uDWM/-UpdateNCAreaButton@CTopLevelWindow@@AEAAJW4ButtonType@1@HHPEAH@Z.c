/*
 * XREFs of ?UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z @ 0x1800282B0
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180028460 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x180023260 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetInsetFromParentTop@CVisual@@QEAAXH@Z @ 0x180023874 (-SetInsetFromParentTop@CVisual@@QEAAXH@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180023B40 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?GetSystemMetrics@CWindowData@@QEBAHH@Z @ 0x180035A24 (-GetSystemMetrics@CWindowData@@QEBAHH@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     floor_0 @ 0x18004DE72 (floor_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaButton(__int64 a1, int a2, LONG a3, int a4, _DWORD *a5)
{
  __int64 v5; // rsi
  unsigned int v6; // edi
  __int64 v10; // rbp
  int v12; // edi
  __int64 v13; // rax
  unsigned int DpiForSystem; // eax
  int SystemMetrics; // eax
  double v16; // xmm0_8
  float v17; // xmm1_4
  LONG v18; // edi
  _DWORD *v19; // rsi
  CVisual *v20; // rcx
  struct tagSIZE *v21; // rcx
  __int64 (__fastcall *v22)(struct tagSIZE *, const struct tagSIZE *); // rax
  int v23; // eax
  void (__fastcall *v24)(CVisual *, int); // rax
  struct tagSIZE v25; // [rsp+50h] [rbp+8h] BYREF

  v5 = a2;
  v6 = 0;
  v10 = a2;
  if ( !*(_QWORD *)(a1 + 8LL * a2 + 480) )
    return v6;
  v12 = *(_DWORD *)(a1 + 584) & 2;
  if ( v12 )
  {
    SystemMetrics = CWindowData::GetSystemMetrics(*(CWindowData **)(a1 + 720), 53);
  }
  else
  {
    v13 = *(_QWORD *)(a1 + 720);
    if ( *(_DWORD *)(v13 + 348) )
      DpiForSystem = *(_DWORD *)(v13 + 328);
    else
      DpiForSystem = GetDpiForSystem();
    SystemMetrics = GetSystemMetricsForDpi(31LL, DpiForSystem);
  }
  v16 = floor_0((float)((float)SystemMetrics * 0.95454544) + 0.5);
  if ( v12 )
  {
    v18 = (int)v16;
    a3 = (int)v16;
    goto LABEL_12;
  }
  if ( (_DWORD)v5 == 3 )
  {
    if ( (*(_DWORD *)(a1 + 584) & 0xB00) == 0 )
    {
      v17 = FLOAT_1_6363636;
      goto LABEL_11;
    }
  }
  else if ( ((_DWORD)v5 != 1 || *(_QWORD *)(a1 + 480)) && (_DWORD)v5 )
  {
    v17 = FLOAT_2_1818182;
    goto LABEL_11;
  }
  v17 = FLOAT_2_2272727;
LABEL_11:
  v18 = (int)floor_0((float)((float)(int)v16 * v17) + 0.5);
LABEL_12:
  CVisual::SetInsetFromParentTop(*(CVisual **)(a1 + 8 * v5 + 480), a4);
  v19 = a5;
  v20 = *(CVisual **)(a1 + 8 * v10 + 480);
  if ( *((_DWORD *)v20 + 33) != *a5 )
  {
    *((_DWORD *)v20 + 33) = *a5;
    v24 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v20 + 24LL);
    if ( v24 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(v20, 2);
    else
      v24(v20, 2);
  }
  v21 = *(struct tagSIZE **)(a1 + 8 * v10 + 480);
  v25.cx = v18;
  v25.cy = a3;
  v22 = *(__int64 (__fastcall **)(struct tagSIZE *, const struct tagSIZE *))(*(_QWORD *)v21 + 80LL);
  if ( v22 == CVisual::SetSize )
    v23 = CVisual::SetSize(v21, &v25);
  else
    v23 = v22(v21, &v25);
  v6 = v23;
  if ( v23 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0xC50u);
  else
    *v19 += *(_DWORD *)(*(_QWORD *)(a1 + 8 * v10 + 480) + 120LL);
  return v6;
}
