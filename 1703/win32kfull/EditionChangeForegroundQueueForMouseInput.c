/*
 * XREFs of EditionChangeForegroundQueueForMouseInput @ 0x1C0007260
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00027B0 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     GetNonChildAncestor @ 0x1C001E9D4 (GetNonChildAncestor.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0062468 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxSetForegroundWindow2 @ 0x1C00B489C (xxxSetForegroundWindow2.c)
 *     IsMessageOnlyWindow @ 0x1C00F6850 (IsMessageOnlyWindow.c)
 */

__int64 __fastcall EditionChangeForegroundQueueForMouseInput(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // r8
  unsigned __int64 v7; // r9
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r9
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  _QWORD v18[5]; // [rsp+30h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 80);
  if ( !a2
    || (v4 = *(_QWORD *)(v2 + 16), v5 = *a2, v6 = *(_QWORD *)(v4 + 384), v7 = *(_QWORD *)(v6 + 380), !gbEnforceUIPI)
    || (unsigned int)v5 > (unsigned int)v7
    || (_DWORD)v5 == (_DWORD)v7
    && ((v14 = HIDWORD(v5), v15 = HIDWORD(v7), (_DWORD)v14 == (_DWORD)v15) || (_DWORD)v14 == -1 || (_DWORD)v15 == -1) )
  {
    CompositionInputWindowUIOwner = *(struct tagWND **)(a1 + 80);
    if ( (unsigned int)IsCompositionInputWindow((struct tagWND *)v2) && (unsigned int)IsMessageOnlyWindow(v2) )
      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner((struct tagWND *)v2);
    if ( (*(_BYTE *)(GetNonChildAncestor(CompositionInputWindowUIOwner) + 67) & 8) != 0
      || (*((_BYTE *)CompositionInputWindowUIOwner + 305) & 0x10) != 0 )
    {
      return 1LL;
    }
    if ( CompositionInputWindowUIOwner != (struct tagWND *)v2 )
    {
      v18[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v18;
      ++*((_DWORD *)CompositionInputWindowUIOwner + 2);
      v18[1] = CompositionInputWindowUIOwner;
    }
    xxxSetForegroundWindow2(CompositionInputWindowUIOwner);
    if ( CompositionInputWindowUIOwner != (struct tagWND *)v2 )
      ThreadUnlock1(v10, v9);
    if ( !a2 )
      return 1LL;
    v6 = gpqForeground;
    if ( !gpqForeground )
      return 1LL;
    v11 = *(_QWORD *)(gpqForeground + 380LL);
    v12 = *a2;
    if ( !gbEnforceUIPI )
      return 1LL;
    if ( (unsigned int)v12 > (unsigned int)v11 )
      return 1LL;
    if ( (_DWORD)v12 == (_DWORD)v11 )
    {
      v16 = HIDWORD(v12);
      v17 = HIDWORD(v11);
      if ( (_DWORD)v16 == (_DWORD)v17 || (_DWORD)v16 == -1 || (_DWORD)v17 == -1 )
        return 1LL;
    }
    v4 = 0LL;
  }
  EtwTraceUIPIInputError(gptiCurrent, v4, v6, *(_QWORD *)(v6 + 380), 1);
  return 0LL;
}
