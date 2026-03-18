/*
 * XREFs of rimAbShouldButtonContactBeSuppressed @ 0x1C0104000
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C0104130 (rimAbSuppressLowerRankActivityForFrame.c)
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0104474 (rimAbSuppressLowerRankActivityInFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0007B88 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     RIMGetPointerInputType @ 0x1C0106658 (RIMGetPointerInputType.c)
 *     RIMCmIsButtonContactActiveAndNotSuppressed @ 0x1C0116C30 (RIMCmIsButtonContactActiveAndNotSuppressed.c)
 */

__int64 __fastcall rimAbShouldButtonContactBeSuppressed(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  int v5; // edx
  int v6; // r8d
  int v7; // r9d
  _QWORD **v8; // r14
  _QWORD *i; // rsi
  int v10; // ebx
  __int64 v11; // rax

  v4 = 0;
  if ( (unsigned int)RIMCmIsButtonContactActiveAndNotSuppressed(a2) )
  {
    if ( (unsigned int)RIMCmIsButtonContactActiveAndNotSuppressed(a2) )
      --v7;
    if ( !v7 )
    {
      if ( v6 )
      {
        LOBYTE(v5) = 3;
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          v5,
          20,
          14,
          (__int64)&WPP_a36caadad1343399e528358e6bc33db6_Traceguids);
        return 1;
      }
      else if ( (*(_DWORD *)(a2 + 260) & 0x20) == 0 || (unsigned int)RIMGetPointerInputType(a2) != 5 )
      {
        v8 = (_QWORD **)(a1 + 576);
        for ( i = *v8; i != v8; i = (_QWORD *)*i )
        {
          v10 = RIMGetPointerInputType(*(i - 1));
          if ( v10 != (unsigned int)RIMGetPointerInputType(a2) )
          {
            v11 = *(i - 1);
            if ( *(_DWORD *)(v11 + 1580) )
            {
              WPP_RECORDER_SF_dd(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                3u,
                0x14u,
                0xFu,
                (__int64)&WPP_a36caadad1343399e528358e6bc33db6_Traceguids,
                *(_DWORD *)(v11 + 24),
                *(_DWORD *)(v11 + 1580));
              return 1;
            }
          }
        }
      }
    }
  }
  return v4;
}
