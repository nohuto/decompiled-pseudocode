/*
 * XREFs of RootHub_HandleResumedPorts @ 0x1C001A938
 * Callers:
 *     RootHub_D0Exit @ 0x1C0019A30 (RootHub_D0Exit.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C000D86C (WPP_RECORDER_SF_d.c)
 *     RootHub_ForceU3 @ 0x1C001A594 (RootHub_ForceU3.c)
 *     RootHub_WaitForResumeCompletion @ 0x1C001EDC0 (RootHub_WaitForResumeCompletion.c)
 */

void __fastcall RootHub_HandleResumedPorts(__int64 a1)
{
  unsigned int i; // ebx
  unsigned __int64 v3; // rsi
  char v4; // al
  unsigned int v5; // eax
  __int64 v6; // [rsp+28h] [rbp-10h]
  unsigned int v7; // [rsp+40h] [rbp+8h] BYREF

  for ( i = 1; i <= *(_DWORD *)(a1 + 16); ++i )
  {
    v3 = *(_QWORD *)(a1 + 48) + ((unsigned __int64)(i - 1) << 6);
    v4 = *(_BYTE *)(v3 + 1);
    if ( v4 == 2 )
    {
      if ( !(unsigned __int8)ExCancelTimer(*(_QWORD *)(v3 + 32), 0LL) )
      {
        LODWORD(v6) = i;
        WPP_RECORDER_SF_d(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          4u,
          0xBu,
          0xE5u,
          (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
          v6);
LABEL_7:
        RootHub_WaitForResumeCompletion(a1, i, &v7);
        if ( v7 != -1 && (v7 & 0x200) != 0 && (v7 & 1) != 0 && (v7 & 2) != 0 && (v7 & 0x20000) == 0 )
        {
          v5 = (v7 >> 5) & 0xF;
          if ( v5 <= 2 || v5 == 8 )
            RootHub_ForceU3((_QWORD *)a1, i);
        }
        continue;
      }
      *(_BYTE *)(v3 + 6) = 0;
      LODWORD(v6) = i;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        4u,
        0xBu,
        0xE4u,
        (__int64)&WPP_62692f86e29e3be0ae2694370e9ff5b6_Traceguids,
        v6);
    }
    else if ( v4 == 3 )
    {
      goto LABEL_7;
    }
  }
}
