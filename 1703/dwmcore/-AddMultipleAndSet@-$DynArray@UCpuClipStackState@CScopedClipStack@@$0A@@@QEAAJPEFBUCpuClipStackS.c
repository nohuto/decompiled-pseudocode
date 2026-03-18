/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UCpuClipStackState@CScopedClipStack@@$0A@@@QEAAJPEFBUCpuClipStackState@CScopedClipStack@@I@Z @ 0x1800C0970
 * Callers:
 *     ?PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N3@Z @ 0x180093610 (-PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMIL.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall DynArray<CScopedClipStack::CpuClipStackState,0>::AddMultipleAndSet(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  __int64 v3; // rax
  unsigned int v5; // r8d
  unsigned int v6; // r9d
  unsigned int v7; // ebx
  __int64 v8; // rcx
  int v10; // eax

  v3 = *(unsigned int *)(a1 + 24);
  v5 = v3 + 1;
  v6 = v3 + 1;
  if ( (int)v3 + 1 < (unsigned int)v3 )
    v6 = a3;
  v7 = v5 < (unsigned int)v3 ? 0x80070216 : 0;
  if ( v5 < (unsigned int)v3 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xB5u);
  }
  else if ( v6 > *(_DWORD *)(a1 + 20) )
  {
    v10 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0x78u, 1, a2);
    v7 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC0u);
  }
  else
  {
    v8 = *(_QWORD *)a1 + 120 * v3;
    *(_OWORD *)v8 = *(_OWORD *)a2;
    *(_OWORD *)(v8 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(v8 + 32) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(v8 + 48) = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(v8 + 64) = *(_OWORD *)(a2 + 64);
    *(_OWORD *)(v8 + 80) = *(_OWORD *)(a2 + 80);
    *(_OWORD *)(v8 + 96) = *(_OWORD *)(a2 + 96);
    *(_QWORD *)(v8 + 112) = *(_QWORD *)(a2 + 112);
    *(_DWORD *)(a1 + 24) = v6;
  }
  return v7;
}
