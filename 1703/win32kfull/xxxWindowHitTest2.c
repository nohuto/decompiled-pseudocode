/*
 * XREFs of xxxWindowHitTest2 @ 0x1C00FD4B0
 * Callers:
 *     xxxWindowFromPoint @ 0x1C00E3160 (xxxWindowFromPoint.c)
 *     xxxWindowHitTest @ 0x1C00FD404 (xxxWindowHitTest.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C01D0E14 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 * Callees:
 *     LayerHitTest @ 0x1C0003B34 (LayerHitTest.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0062468 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0062750 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 *     xxxWindowHitTest @ 0x1C00FD404 (xxxWindowHitTest.c)
 *     SizeBoxHwnd @ 0x1C0239024 (SizeBoxHwnd.c)
 */

__int64 __fastcall xxxWindowHitTest2(struct tagWND *a1, unsigned __int64 a2, int *a3, char a4)
{
  ULONG_PTR v7; // rdi
  __int64 v8; // rcx
  unsigned int IsCompositeAppOrSelfDisabled; // eax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // ecx
  __int64 v16; // rax
  _QWORD v17[4]; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v18; // [rsp+8Ch] [rbp+14h]

  v18 = HIDWORD(a2);
  v7 = (ULONG_PTR)a1;
  if ( !a1 || !IsCompositionInputWindow(a1) && (*(_BYTE *)(v7 + 71) & 0x10) == 0 )
    return 0LL;
  if ( !IsCompositionInputWindow((struct tagWND *)v7) && !PtInRect((_DWORD *)(v7 + 128), a2) )
    return 0LL;
  v8 = *(_QWORD *)(v7 + 216);
  if ( v8 )
  {
    if ( !(unsigned int)GrePtInRegion(v8, (unsigned int)a2, v18) )
      return 0LL;
  }
  if ( (*(_BYTE *)(v7 + 66) & 8) != 0 && !LayerHitTest(v7, a2) )
    return 0LL;
  IsCompositeAppOrSelfDisabled = CoreWindowProp::IsCompositeAppOrSelfDisabled((struct tagWND *)v7);
  if ( IsCompositeAppOrSelfDisabled && (a4 & 1) != 0 )
  {
    if ( (*(_BYTE *)(v7 + 71) & 0xC0) != 0x40 )
    {
      v14 = -2;
      goto LABEL_18;
    }
    return 0LL;
  }
  if ( !IsCompositionInputWindow((struct tagWND *)v7)
    && (*(_BYTE *)(v7 + 71) & 0x20) == 0
    && PtInRect((_DWORD *)(v7 + 144), a2) )
  {
    v10 = *(_QWORD *)(v7 + 112);
    v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v17;
    v17[1] = v10;
    if ( v10 )
      ++*(_DWORD *)(v10 + 8);
    v11 = xxxWindowHitTest(*(_QWORD *)(v7 + 112));
    ThreadUnlock1(v13, v12);
    if ( v11 )
      return v11;
  }
  IsCompositeAppOrSelfDisabled = IsCompositionInputWindow((struct tagWND *)v7);
  if ( IsCompositeAppOrSelfDisabled || (IsCompositeAppOrSelfDisabled = gptiCurrent, *(_QWORD *)(v7 + 16) != gptiCurrent) )
  {
    v14 = 1;
    goto LABEL_18;
  }
  _InterlockedIncrement(&glSendMessage);
  IsCompositeAppOrSelfDisabled = xxxSendTransformableMessageTimeout(
                                   v7,
                                   0x84u,
                                   0LL,
                                   (struct _LARGE_STRING *)((unsigned __int16)a2 | ((unsigned __int16)v18 << 16)),
                                   0,
                                   0,
                                   0LL,
                                   1,
                                   0);
  v14 = IsCompositeAppOrSelfDisabled;
  if ( IsCompositeAppOrSelfDisabled == -1 )
    return 0LL;
LABEL_18:
  if ( a3 )
    *a3 = v14;
  LOBYTE(IsCompositeAppOrSelfDisabled) = ~*(_BYTE *)(v7 + 66);
  if ( v14 == ((IsCompositeAppOrSelfDisabled >> 6) & 1 | 0x10) && (*(_BYTE *)(v7 + 70) & 4) == 0 )
  {
    v16 = SizeBoxHwnd(v7);
    if ( v16 )
      v7 = v16;
  }
  return *(_QWORD *)v7;
}
