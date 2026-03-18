/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UBackdropBlur@CBackdropRegion@@$0A@@@QEAAJPEFBUBackdropBlur@CBackdropRegion@@I@Z @ 0x180078F64
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009F520 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800794F0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 */

__int64 __fastcall DynArray<CBackdropRegion::BackdropBlur,0>::AddMultipleAndSet(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  int v5; // ebx
  _OWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  _OWORD *v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = *((unsigned int *)a1 + 6);
  v4 = v2 + 1;
  v5 = (int)v2 + 1 < (unsigned int)v2 ? 0x80070216 : 0;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xB5u);
  }
  else if ( v4 <= *((_DWORD *)a1 + 5) )
  {
    v9 = 3 * v2;
    v10 = *a1;
    *(_OWORD *)(v10 + 8 * v9) = *(_OWORD *)a2;
    *(_QWORD *)(v10 + 8 * v9 + 16) = *(_QWORD *)(a2 + 16);
    *((_DWORD *)a1 + 6) = v4;
  }
  else
  {
    v11 = (_OWORD *)a2;
    v5 = DynArrayImpl<0>::Grow((_DWORD)a1, 24, 1, 0, (__int64)&v11);
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xC0u);
    }
    else
    {
      v6 = v11;
      v7 = *a1 + (unsigned int)(24 * *((_DWORD *)a1 + 6));
      *(_OWORD *)v7 = *v11;
      *(_QWORD *)(v7 + 16) = *((_QWORD *)v6 + 2);
      ++*((_DWORD *)a1 + 6);
    }
  }
  return (unsigned int)v5;
}
