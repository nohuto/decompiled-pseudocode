/*
 * XREFs of ?_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x180098E28
 * Callers:
 *     ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x18009B830 (-_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002C4C0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?AddMultipleAndSet@?$DynArray@UVisualInfo@CProjectionBorderManager@@$0A@@@QEAAJPEFBUVisualInfo@CProjectionBorderManager@@I@Z @ 0x180091DF8 (-AddMultipleAndSet@-$DynArray@UVisualInfo@CProjectionBorderManager@@$0A@@@QEAAJPEFBUVisualInfo@C.c)
 *     ??0UnifiedTargetRect@CStoryboard@@QEAA@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x180095C70 (--0UnifiedTargetRect@CStoryboard@@QEAA@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z.c)
 *     ?_GroupingIndexByTarget@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAI@Z @ 0x1800988C4 (-_GroupingIndexByTarget@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAI@Z.c)
 */

__int64 __fastcall CGroupingStoryboard::_RecordUnionRect(_QWORD *a1, __int64 a2, RECT *a3)
{
  unsigned int v5; // eax
  __int16 v6; // bx
  __int64 v7; // rbx
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // eax
  int v12; // ebx
  int v13; // eax
  unsigned int v14; // r8d
  int v15; // eax
  unsigned int v17; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v18[24]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v19[32]; // [rsp+50h] [rbp-48h] BYREF

  v5 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 120LL))(a1);
  v17 = 0;
  v6 = v5;
  if ( (int)CGroupingStoryboard::_GroupingIndexByTarget((__int64)a1, v5, &v17) < 0 )
  {
    CStoryboard::UnifiedTargetRect::UnifiedTargetRect((__int64)v18, v6, a3);
    v15 = DynArray<CProjectionBorderManager::VisualInfo,0>::AddMultipleAndSet((__int64)(a1 + 15), (__int64)v18, v14);
    v12 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v15, 0x7D8u);
    DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v19);
  }
  else
  {
    v7 = 56LL * v17;
    UnionRect((LPRECT)(v7 + a1[15] + 4LL), a3, (const RECT *)(v7 + a1[15] + 4LL));
    v8 = v17;
    v9 = v7 + a1[15] + 24LL;
    v10 = *(unsigned int *)(v9 + 24);
    v11 = v10 + 1;
    if ( (int)v10 + 1 >= (unsigned int)v10 )
      v8 = v10 + 1;
    v12 = v11 < (unsigned int)v10 ? 0x80070216 : 0;
    if ( v11 >= (unsigned int)v10 )
    {
      if ( v8 > *(_DWORD *)(v9 + 20) )
      {
        v13 = DynArrayImpl<0>::AddMultipleAndSet(v9, 0x10u, 1, a3);
        v12 = v13;
        if ( v13 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v13, 0xC0u);
      }
      else
      {
        *(RECT *)(*(_QWORD *)v9 + 16 * v10) = *a3;
        *(_DWORD *)(v9 + 24) = v8;
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0xB5u);
    }
    if ( v12 < 0 )
      MilInstrumentationCheckHR(0x14u, &CStoryboard::MILINSTRUMENTATIONHRESULTLIST, 1LL, v12, 0x7D2u);
  }
  return (unsigned int)v12;
}
