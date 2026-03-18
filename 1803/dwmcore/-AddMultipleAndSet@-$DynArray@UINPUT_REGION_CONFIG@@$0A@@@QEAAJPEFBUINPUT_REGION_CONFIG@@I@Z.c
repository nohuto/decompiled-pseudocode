/*
 * XREFs of ?AddMultipleAndSet@?$DynArray@UINPUT_REGION_CONFIG@@$0A@@@QEAAJPEFBUINPUT_REGION_CONFIG@@I@Z @ 0x1801570A4
 * Callers:
 *     ?ConfigureMitOuputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z @ 0x180044A74 (-ConfigureMitOuputRectangles@CDesktopRenderTarget@@AEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall DynArray<INPUT_REGION_CONFIG,0>::AddMultipleAndSet(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v4; // r8d
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // eax

  v2 = *(unsigned int *)(a1 + 24);
  v4 = v2 + 1;
  v5 = (int)v2 + 1 < (unsigned int)v2 ? 0x80070216 : 0;
  if ( (int)v2 + 1 < (unsigned int)v2 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xB5u);
  }
  else if ( v4 > *(_DWORD *)(a1 + 20) )
  {
    v8 = DynArrayImpl<0>::AddMultipleAndSet(a1, 0x48u, 1, a2);
    v5 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xC0u);
  }
  else
  {
    v6 = 9 * v2;
    v7 = *(_QWORD *)a1;
    *(_OWORD *)(v7 + 8 * v6) = *(_OWORD *)a2;
    *(_OWORD *)(v7 + 8 * v6 + 16) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(v7 + 8 * v6 + 32) = *(_OWORD *)(a2 + 32);
    *(_OWORD *)(v7 + 8 * v6 + 48) = *(_OWORD *)(a2 + 48);
    *(_QWORD *)(v7 + 8 * v6 + 64) = *(_QWORD *)(a2 + 64);
    *(_DWORD *)(a1 + 24) = v4;
  }
  return v5;
}
