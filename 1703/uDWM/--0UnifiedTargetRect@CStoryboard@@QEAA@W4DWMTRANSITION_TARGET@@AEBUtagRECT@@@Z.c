/*
 * XREFs of ??0UnifiedTargetRect@CStoryboard@@QEAA@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x180095C70
 * Callers:
 *     ?_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x180098E28 (-_RecordUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002C780 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CStoryboard::UnifiedTargetRect::UnifiedTargetRect(__int64 a1, __int16 a2, _OWORD *a3)
{
  __int64 v4; // rcx
  unsigned int v5; // edx
  __int64 v6; // r10
  unsigned int v7; // eax
  int v8; // eax
  unsigned int v10; // [rsp+48h] [rbp+10h]

  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  v4 = a1 + 24;
  *(_QWORD *)v4 = 0LL;
  *(_DWORD *)(v4 + 24) = 0;
  *(_DWORD *)a1 = a2 & 0xFFF;
  v5 = v10;
  *(_OWORD *)(a1 + 4) = *a3;
  v6 = *(unsigned int *)(v4 + 24);
  v7 = v6 + 1;
  if ( (int)v6 + 1 >= (unsigned int)v6 )
    v5 = v6 + 1;
  if ( v7 >= (unsigned int)v6 )
  {
    if ( v5 > *(_DWORD *)(v4 + 20) )
    {
      v8 = DynArrayImpl<0>::AddMultipleAndSet(v4, 0x10u, 1, a3);
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0xC0u);
    }
    else
    {
      *(_OWORD *)(*(_QWORD *)v4 + 16 * v6) = *a3;
      *(_DWORD *)(v4 + 24) = v5;
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7 < (unsigned int)v6 ? 0x80070216 : 0, 0xB5u);
  }
  return a1;
}
