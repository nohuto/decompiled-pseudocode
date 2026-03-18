/*
 * XREFs of ?BasicTargetingWindowHitTest@@YAHPEAUtagWND@@UtagPOINT@@PEBUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@3PEAIPEAU2@W4tagTARGETING_PROPERTY@@K@Z @ 0x1C01D3388
 * Callers:
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01D4D14 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 * Callees:
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0061FD0 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0064068 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     ?BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUtagRECT@@W4tagTARGETING_PROPERTY@@HKH@Z @ 0x1C01D314C (-BasicTargetingHitTest@@YAHPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@UtagPOINT@@PEAGPEAU3@HPEAUt.c)
 */

__int64 __fastcall BasicTargetingWindowHitTest(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        __int64 a8,
        int a9,
        int a10)
{
  unsigned __int64 v13; // r11
  int v14; // ebx
  int v15; // eax
  BOOL v16; // eax
  int v17; // ebp
  __int64 result; // rax
  unsigned __int16 v19; // [rsp+90h] [rbp+18h] BYREF

  v14 = 0;
  if ( !(unsigned int)IsCompositionInputWindow((struct tagWND *)a1) || (v15 = 1, (*(_DWORD *)(a3 + 36) & 8) == 0) )
    v15 = 0;
  v16 = BasicTargetingHitTest(
          a1,
          *(_QWORD *)(a3 + 40),
          v13,
          &v19,
          a8,
          *(_DWORD *)(a3 + 84),
          a5,
          a9,
          *(_DWORD *)(a3 + 88) == 1,
          a10,
          v15);
  v17 = v19;
  *a7 = v19;
  if ( !v16 )
    return 0LL;
  if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled((struct tagWND *)a1)
    && (*(_DWORD *)(a3 + 36) & 1) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 71) & 0xC0) == 0x40 )
      return 0LL;
    *a6 = 1;
  }
  result = 1LL;
  LOBYTE(v14) = v17 == 0;
  *a4 = v14;
  return result;
}
