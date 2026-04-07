/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@PEAVCRenderDataInstruction@@$0A@@@QEAAJPEFBQEAVCRenderDataInstruction@@I@Z @ 0x180014D80
 * Callers:
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001F2C0 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ @ 0x180026F30 (-UpdateOcclusionHints@CTopLevelWindow@@QEAAJXZ.c)
 * Callees:
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002C510 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall DynArray<CRenderDataInstruction *,0>::AddMultipleAndSet(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  int v5; // edi
  __int64 result; // rax
  _QWORD *v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(unsigned int *)(a1 + 24);
  v4 = v2 + 1;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    return 2147942934LL;
  }
  else if ( v4 <= *(_DWORD *)(a1 + 20) )
  {
    *(_QWORD *)(*(_QWORD *)a1 + 8 * v2) = *a2;
    result = 0LL;
    *(_DWORD *)(a1 + 24) = v4;
  }
  else
  {
    v7 = a2;
    v5 = DynArrayImpl<0>::Grow(a1, 8, 1, 0, (__int64)&v7);
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xC0u);
    else
      *(_QWORD *)(*(_QWORD *)a1 + (unsigned int)(8 * (*(_DWORD *)(a1 + 24))++)) = *v7;
    return (unsigned int)v5;
  }
  return result;
}
