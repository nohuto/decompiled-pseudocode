/*
 * XREFs of ?UpdateNCAreaButton@CTopLevelWindow@@AEAAJW4ButtonType@1@HHPEAH@Z @ 0x18001CD84
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x18001CF68 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z @ 0x1800180A0 (-SetSize@CVisual@@UEAAJPEBUtagSIZE@@@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     floor_0 @ 0x180046742 (floor_0.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateNCAreaButton(__int64 a1, int a2, LONG a3, int a4, _DWORD *a5)
{
  __int64 v5; // rsi
  unsigned int v6; // edi
  __int64 v10; // rbp
  __int64 v12; // rax
  int v13; // edi
  __int64 v14; // rcx
  int v15; // edi
  int SystemMetricsForDpi; // eax
  double v17; // xmm0_8
  float v18; // xmm1_4
  LONG v19; // edi
  CVisual *v20; // rcx
  _DWORD *v21; // rsi
  CVisual *v22; // rcx
  struct tagSIZE *v23; // rcx
  __int64 (__fastcall *v24)(struct tagSIZE *, const struct tagSIZE *); // rax
  int v25; // eax
  __int64 v26; // rax
  void (__fastcall *v27)(CVisual *, int); // rax
  void (__fastcall *v28)(CVisual *, int); // rax
  struct tagSIZE v29; // [rsp+60h] [rbp+8h] BYREF

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
  SystemMetricsForDpi = GetSystemMetricsForDpi(v14, *(unsigned int *)(v12 + 332));
  v17 = floor_0((float)((float)SystemMetricsForDpi * 0.95454544) + 0.5);
  if ( v15 )
  {
    v19 = (int)v17;
    a3 = (int)v17;
    goto LABEL_11;
  }
  if ( (_DWORD)v5 == 3 )
  {
    if ( (*(_DWORD *)(a1 + 584) & 0xB00) == 0 )
    {
      v18 = FLOAT_1_6363636;
      goto LABEL_10;
    }
  }
  else if ( ((_DWORD)v5 != 1 || *(_QWORD *)(a1 + 480)) && (_DWORD)v5 )
  {
    v18 = FLOAT_2_1818182;
    goto LABEL_10;
  }
  v18 = FLOAT_2_2272727;
LABEL_10:
  v19 = (int)floor_0((float)((float)(int)v17 * v18) + 0.5);
LABEL_11:
  v20 = *(CVisual **)(a1 + 8 * v5 + 480);
  if ( *((_DWORD *)v20 + 34) != a4 )
  {
    v26 = *(_QWORD *)v20;
    *((_DWORD *)v20 + 34) = a4;
    v27 = *(void (__fastcall **)(CVisual *, int))(v26 + 24);
    if ( v27 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(v20, 2);
    else
      v27(v20, 2);
  }
  v21 = a5;
  v22 = *(CVisual **)(a1 + 8 * v10 + 480);
  if ( *((_DWORD *)v22 + 33) != *a5 )
  {
    *((_DWORD *)v22 + 33) = *a5;
    v28 = *(void (__fastcall **)(CVisual *, int))(*(_QWORD *)v22 + 24LL);
    if ( v28 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(v22, 2);
    else
      v28(v22, 2);
  }
  v23 = *(struct tagSIZE **)(a1 + 8 * v10 + 480);
  v29.cx = v19;
  v29.cy = a3;
  v24 = *(__int64 (__fastcall **)(struct tagSIZE *, const struct tagSIZE *))(*(_QWORD *)v23 + 80LL);
  if ( v24 == CVisual::SetSize )
    v25 = CVisual::SetSize(v23, &v29);
  else
    v25 = v24(v23, &v29);
  v6 = v25;
  if ( v25 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v25, 0xC48u);
  else
    *v21 += *(_DWORD *)(*(_QWORD *)(a1 + 8 * v10 + 480) + 120LL);
  return v6;
}
