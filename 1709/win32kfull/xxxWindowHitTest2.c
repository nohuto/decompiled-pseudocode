/*
 * XREFs of xxxWindowHitTest2 @ 0x1C0109384
 * Callers:
 *     xxxWindowFromPoint @ 0x1C0061E0C (xxxWindowFromPoint.c)
 *     xxxWindowHitTest @ 0x1C01092D8 (xxxWindowHitTest.c)
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C01D54AC (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 * Callees:
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0061FD0 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0064068 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxWindowHitTest @ 0x1C01092D8 (xxxWindowHitTest.c)
 *     LayerHitTest @ 0x1C011678C (LayerHitTest.c)
 *     SizeBoxHwnd @ 0x1C023A580 (SizeBoxHwnd.c)
 */

__int64 __fastcall xxxWindowHitTest2(struct tagWND *BugCheckParameter2, unsigned __int64 a2, int *a3, char a4)
{
  struct tagWND *v7; // rdi
  __int64 v8; // rcx
  unsigned int IsCompositeAppOrSelfDisabled; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // ecx
  __int64 v20; // rax
  _QWORD v21[4]; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v22; // [rsp+9Ch] [rbp+14h]

  v22 = HIDWORD(a2);
  v7 = BugCheckParameter2;
  if ( !BugCheckParameter2
    || !(unsigned int)IsCompositionInputWindow(BugCheckParameter2) && (*((_BYTE *)v7 + 71) & 0x10) == 0 )
  {
    return 0LL;
  }
  if ( !(unsigned int)IsCompositionInputWindow(v7) && !PtInRect((_DWORD *)v7 + 32, a2) )
    return 0LL;
  v8 = *((_QWORD *)v7 + 27);
  if ( v8 )
  {
    if ( !(unsigned int)GrePtInRegion(v8, (unsigned int)a2, v22) )
      return 0LL;
  }
  if ( (*((_BYTE *)v7 + 66) & 8) != 0 && !(unsigned int)LayerHitTest(v7, a2) )
    return 0LL;
  IsCompositeAppOrSelfDisabled = CoreWindowProp::IsCompositeAppOrSelfDisabled(v7);
  if ( IsCompositeAppOrSelfDisabled && (a4 & 1) != 0 )
  {
    if ( (*((_BYTE *)v7 + 71) & 0xC0) != 0x40 )
    {
      v18 = -2;
      goto LABEL_18;
    }
    return 0LL;
  }
  if ( !(unsigned int)IsCompositionInputWindow(v7)
    && (*((_BYTE *)v7 + 71) & 0x20) == 0
    && PtInRect((_DWORD *)v7 + 36, a2) )
  {
    v13 = *((_QWORD *)v7 + 14);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11, v12);
    v21[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v21;
    v21[1] = v13;
    if ( v13 )
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
    v15 = xxxWindowHitTest(*((_QWORD *)v7 + 14));
    ThreadUnlock1(v17, v16);
    if ( v15 )
      return v15;
  }
  IsCompositeAppOrSelfDisabled = IsCompositionInputWindow(v7);
  if ( IsCompositeAppOrSelfDisabled || (IsCompositeAppOrSelfDisabled = gptiCurrent, *((_QWORD *)v7 + 2) != gptiCurrent) )
  {
    v18 = 1;
    goto LABEL_18;
  }
  _InterlockedIncrement(&glSendMessage);
  IsCompositeAppOrSelfDisabled = xxxSendTransformableMessageTimeout(
                                   (__int64 *)v7,
                                   132LL,
                                   0LL,
                                   (struct _LARGE_STRING *)((unsigned __int16)a2 | ((unsigned __int16)v22 << 16)),
                                   0,
                                   0,
                                   0LL,
                                   1u,
                                   0);
  v18 = IsCompositeAppOrSelfDisabled;
  if ( IsCompositeAppOrSelfDisabled == -1 )
    return 0LL;
LABEL_18:
  if ( a3 )
    *a3 = v18;
  LOBYTE(IsCompositeAppOrSelfDisabled) = ~*((_BYTE *)v7 + 66);
  if ( v18 == ((IsCompositeAppOrSelfDisabled >> 6) & 1 | 0x10) && (*((_BYTE *)v7 + 70) & 4) == 0 )
  {
    v20 = SizeBoxHwnd(v7);
    if ( v20 )
      v7 = (struct tagWND *)v20;
  }
  return *(_QWORD *)v7;
}
