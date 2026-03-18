/*
 * XREFs of rimAbShouldButtonContactBeSuppressed @ 0x1C0104090
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C01041C0 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0104504 (rimAbSuppressLowerRankActivityInFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0008C0C (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMGetPointerInputType @ 0x1C0107340 (RIMGetPointerInputType.c)
 *     RIMCmIsButtonContactActiveAndNotSuppressed @ 0x1C01157AC (RIMCmIsButtonContactActiveAndNotSuppressed.c)
 */

__int64 __fastcall rimAbShouldButtonContactBeSuppressed(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  int v5; // r8d
  int v6; // r9d
  _QWORD **v7; // r14
  _QWORD *i; // rsi
  int v9; // ebx
  __int64 v10; // rax

  v4 = 0;
  if ( (unsigned int)RIMCmIsButtonContactActiveAndNotSuppressed(a2) )
  {
    if ( (unsigned int)RIMCmIsButtonContactActiveAndNotSuppressed(a2) )
      --v6;
    if ( !v6 )
    {
      if ( v5 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x14u,
          0xEu,
          (__int64)&WPP_568b29d2bd8d39642f2674529c6eb191_Traceguids);
        return 1;
      }
      else if ( (*(_DWORD *)(a2 + 276) & 0x20) == 0 || (unsigned int)RIMGetPointerInputType(a2) != 5 )
      {
        v7 = (_QWORD **)(a1 + 576);
        for ( i = *v7; i != v7; i = (_QWORD *)*i )
        {
          v9 = RIMGetPointerInputType(*(i - 1));
          if ( v9 != (unsigned int)RIMGetPointerInputType(a2) )
          {
            v10 = *(i - 1);
            if ( *(_DWORD *)(v10 + 916) )
            {
              WPP_RECORDER_SF_dd(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                3u,
                0x14u,
                0xFu,
                (__int64)&WPP_568b29d2bd8d39642f2674529c6eb191_Traceguids,
                *(_DWORD *)(v10 + 24),
                *(_DWORD *)(v10 + 916));
              return 1;
            }
          }
        }
      }
    }
  }
  return v4;
}
