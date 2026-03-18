/*
 * XREFs of ?PushProcessAttribution@CDrawingContext@@AEAAXPEBVCVisual@@PEAVCProcessAttribution@@@Z @ 0x18012CEA8
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A2960 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Push@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@CDrawingContext@@@Z @ 0x1800BF438 (-Push@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackStateEntry@.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CDrawingContext::PushProcessAttribution(
        CDrawingContext *this,
        const struct CVisual *a2,
        struct CProcessAttribution *a3)
{
  int v5; // eax
  char *v6; // r10
  __int64 v7; // rcx
  unsigned int v8; // edx
  unsigned int v9; // eax
  int v10; // ebx
  int v11; // eax
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]
  struct CProcessAttribution *v14; // [rsp+50h] [rbp+8h] BYREF

  *((_QWORD *)&v12 + 1) = a2;
  LODWORD(v12) = 10;
  v5 = CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Push((unsigned int *)this + 110, &v12);
  if ( v5 < 0 )
  {
    ModuleFailFastForHRESULT(v5, retaddr);
    __debugbreak();
  }
  v6 = (char *)this + 816;
  v14 = a3;
  v7 = *((unsigned int *)this + 210);
  v8 = (unsigned int)a3;
  v9 = v7 + 1;
  if ( (int)v7 + 1 >= (unsigned int)v7 )
    v8 = v7 + 1;
  v10 = v9 < (unsigned int)v7 ? 0x80070216 : 0;
  if ( v9 < (unsigned int)v7 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xB5u);
  }
  else if ( v8 > *((_DWORD *)v6 + 5) )
  {
    v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v6, 8u, 1, &v14);
    v10 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)v6 + 8 * v7) = v14;
    *((_DWORD *)v6 + 6) = v8;
  }
  if ( v10 < 0 )
  {
    ModuleFailFastForHRESULT(v10, retaddr);
    __debugbreak();
  }
}
