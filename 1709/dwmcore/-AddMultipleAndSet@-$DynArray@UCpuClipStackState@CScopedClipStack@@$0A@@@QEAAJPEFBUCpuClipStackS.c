/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UCpuClipStackState@CScopedClipStack@@$0A@@@QEAAJPEFBUCpuClipStackState@CScopedClipStack@@I@Z @ 0x1800B5B50
 * Callers:
 *     ?PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N3@Z @ 0x180032030 (-PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMIL.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CScopedClipStack::CpuClipStackState,0>::AddMultipleAndSet(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  DWORD v6; // ebx
  __int64 v7; // rcx
  signed int v9; // eax

  v4 = *(unsigned int *)(a1 + 24);
  v5 = v4 + 1;
  if ( (int)v4 + 1 >= (unsigned int)v4 )
    a3 = v4 + 1;
  v6 = v5 < (unsigned int)v4 ? 0x80070216 : 0;
  if ( v5 < (unsigned int)v4 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0xB5u);
  }
  else if ( a3 > *(_DWORD *)(a1 + 20) )
  {
    v9 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0x78u, 1, a2);
    v6 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0xC0u);
  }
  else
  {
    v7 = *(_QWORD *)a1 + 120 * v4;
    *(_OWORD *)v7 = *(_OWORD *)a2;
    *(_OWORD *)(v7 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(v7 + 32) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(v7 + 48) = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(v7 + 64) = *(_OWORD *)(a2 + 64);
    *(_OWORD *)(v7 + 80) = *(_OWORD *)(a2 + 80);
    *(_OWORD *)(v7 + 96) = *(_OWORD *)(a2 + 96);
    *(_QWORD *)(v7 + 112) = *(_QWORD *)(a2 + 112);
    *(_DWORD *)(a1 + 24) = a3;
  }
  return v6;
}
