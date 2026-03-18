/*
 * XREFs of DCELogicalSpeedTopLevelHitTest @ 0x1C01C3520
 * Callers:
 *     <none>
 * Callees:
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C005E6A0 (IsWindowUnderActiveLockScreen.c)
 *     GetWindowCloakState @ 0x1C0063F5C (GetWindowCloakState.c)
 *     DCELayerHitTest @ 0x1C010DCA8 (DCELayerHitTest.c)
 */

__int64 __fastcall DCELogicalSpeedTopLevelHitTest(unsigned __int64 *a1, unsigned int a2)
{
  __int64 v4; // rdi
  __int64 i; // rdi
  bool v7; // zf
  unsigned __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 16LL);
  if ( !v4 )
    return 0LL;
  for ( i = *(_QWORD *)(v4 + 112); i; i = *(_QWORD *)(i + 88) )
  {
    v7 = (*(_BYTE *)(i + 71) & 0x10) == 0;
    v8 = *a1;
    v11 = *a1;
    if ( !v7 && !(unsigned int)GetWindowCloakState(i) && !(unsigned int)IsWindowUnderActiveLockScreen(i) )
    {
      if ( (((unsigned __int16)(a2 >> 8) ^ (unsigned __int16)(*(_DWORD *)(i + 368) >> 8)) & 0x1FF) != 0 )
      {
        LogicalToPhysicalDPIPoint(&v11, &v11, a2, 0LL);
        PhysicalToLogicalDPIPoint(&v11, &v11, *(unsigned int *)(i + 368), 0LL);
        v8 = v11;
      }
      v9 = *(_QWORD *)(i + 224);
      if ( v9 )
      {
        if ( !(unsigned int)GrePtInRegion(v9, (unsigned int)v8, HIDWORD(v11)) )
          continue;
        v8 = v11;
      }
      else if ( !PtInRect((_DWORD *)(i + 128), v8) )
      {
        continue;
      }
      v10 = *(_QWORD *)(i + 216);
      if ( v10 )
      {
        if ( !(unsigned int)GrePtInRegion(v10, (unsigned int)v8, HIDWORD(v11)) )
          continue;
        v8 = v11;
      }
      if ( (*(_BYTE *)(i + 66) & 8) == 0 || (*(_DWORD *)(i + 304) & 0x20) != 0 || DCELayerHitTest(i, v8) )
        return i;
    }
  }
  return i;
}
