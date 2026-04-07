/*
 * XREFs of ?_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x18009E470
 * Callers:
 *     ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800A1010 (-_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180020D08 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020D50 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?AddMultipleAndSet@?$DynArray@UVisualInfo@CProjectionBorderManager@@$0A@@@QEAAJPEFBUVisualInfo@CProjectionBorderManager@@I@Z @ 0x18007B0C0 (-AddMultipleAndSet@-$DynArray@UVisualInfo@CProjectionBorderManager@@$0A@@@QEAAJPEFBUVisualInfo@C.c)
 *     ??0UnifiedTargetRect@CStoryboard@@QEAA@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x18009AFD0 (--0UnifiedTargetRect@CStoryboard@@QEAA@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z.c)
 *     ?_GroupingIndexByTarget@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAI@Z @ 0x18009DF9C (-_GroupingIndexByTarget@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAI@Z.c)
 */

__int64 __fastcall CGroupingStoryboard::_RecordUnionRect(_QWORD *a1, __int64 a2, RECT *a3)
{
  unsigned int v5; // eax
  __int16 v6; // bx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // edx
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  unsigned int v15; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v16[24]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v17[32]; // [rsp+50h] [rbp-48h] BYREF

  v5 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 120LL))(a1);
  v15 = 0;
  v6 = v5;
  if ( (int)CGroupingStoryboard::_GroupingIndexByTarget((__int64)a1, v5, &v15) < 0 )
  {
    CStoryboard::UnifiedTargetRect::UnifiedTargetRect((__int64)v16, v6, a3);
    v13 = DynArray<CProjectionBorderManager::VisualInfo,0>::AddMultipleAndSet((__int64)(a1 + 15), (__int64)v16);
    v11 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v13, 0x7D8u);
    DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v17);
  }
  else
  {
    v7 = 56LL * v15;
    UnionRect((LPRECT)(a1[15] + v7 + 4), a3, (const RECT *)(a1[15] + v7 + 4));
    v8 = a1[15] + v7 + 24;
    v9 = *(unsigned int *)(v8 + 24);
    v10 = v9 + 1;
    v11 = (int)v9 + 1 < (unsigned int)v9 ? 0x80070216 : 0;
    if ( (int)v9 + 1 >= (unsigned int)v9 )
    {
      if ( v10 > *(_DWORD *)(v8 + 20) )
      {
        v12 = DynArrayImpl<0>::AddMultipleAndSet(v8, 16, 1, a3);
        v11 = v12;
        if ( v12 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0xC0u);
      }
      else
      {
        *(RECT *)(*(_QWORD *)v8 + 16 * v9) = *a3;
        *(_DWORD *)(v8 + 24) = v10;
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0xB5u);
    }
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v11, 0x7D2u);
  }
  return (unsigned int)v11;
}
