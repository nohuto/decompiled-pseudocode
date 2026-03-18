/*
 * XREFs of SetProcessTimerDelay @ 0x1C01C7180
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SetProcessTimerDelay(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // edx
  int v5; // eax
  _QWORD *v6; // r9
  _QWORD *v7; // rcx
  _QWORD *v8; // r9
  __int64 v9; // rcx
  _QWORD *v10; // rax

  if ( a2 > 0x1B7740 )
    return 3221225712LL;
  if ( a3 > 0x927C0 )
    return 3221225713LL;
  if ( *(_QWORD *)a1 == gpepCSRSS )
    return 3221225659LL;
  v4 = a2 - *(_DWORD *)(a1 + 988);
  v5 = *(_DWORD *)(a1 + 996);
  *(_DWORD *)(a1 + 996) = v4;
  *(_DWORD *)(a1 + 992) = a3;
  if ( v5 )
  {
    if ( !v4 )
    {
      v8 = (_QWORD *)(a1 + 1008);
      v9 = *(_QWORD *)(a1 + 1008);
      if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v10 = (_QWORD *)v8[1], (_QWORD *)*v10 != v8) )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
    }
  }
  else if ( v4 )
  {
    v6 = (_QWORD *)(a1 + 1008);
    v7 = (_QWORD *)gtmrAdjustmentListHead[1];
    if ( *v7 != gtmrAdjustmentListHead[0] )
      __fastfail(3u);
    *v6 = gtmrAdjustmentListHead[0];
    v6[1] = v7;
    *v7 = v6;
    gtmrAdjustmentListHead[1] = v6;
  }
  if ( !gbTimersProcActive )
  {
    BYTE4(WPP_MAIN_CB.DeviceObjectExtension) = 1;
    KeAlertThread(WPP_MAIN_CB.Reserved, 0LL);
  }
  return 0LL;
}
