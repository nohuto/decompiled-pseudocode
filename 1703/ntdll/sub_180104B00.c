/*
 * XREFs of sub_180104B00 @ 0x180104B00
 * Callers:
 *     sub_180051100 @ 0x180051100 (sub_180051100.c)
 *     sub_180053EE0 @ 0x180053EE0 (sub_180053EE0.c)
 *     sub_18005E3C8 @ 0x18005E3C8 (sub_18005E3C8.c)
 *     sub_18005EAF0 @ 0x18005EAF0 (sub_18005EAF0.c)
 *     sub_18005EE74 @ 0x18005EE74 (sub_18005EE74.c)
 *     sub_18007A824 @ 0x18007A824 (sub_18007A824.c)
 *     sub_1800860E0 @ 0x1800860E0 (sub_1800860E0.c)
 *     sub_180086A30 @ 0x180086A30 (sub_180086A30.c)
 * Callees:
 *     ZwTraceControl @ 0x1800A8990 (ZwTraceControl.c)
 */

__int64 __fastcall sub_180104B00(int a1, _DWORD *a2)
{
  unsigned __int16 v4; // bx
  __int64 v5; // rdi
  __int64 v6; // rsi
  int v7; // eax
  unsigned __int16 OutputBuffer; // [rsp+80h] [rbp+18h] BYREF
  ULONG ReturnLength; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  while ( 1 )
  {
    v5 = 2LL * v4;
    _InterlockedAdd((volatile signed __int32 *)(qword_1801593C0 + 16LL * v4 + 8), 1u);
    v6 = *(_QWORD *)(qword_1801593C0 + 16LL * v4);
    if ( (v6 & 1) != 0 || !*(_QWORD *)(v6 + 528) )
      goto LABEL_10;
    LOWORD(v7) = *(_WORD *)(v6 + 536);
    if ( (_WORD)v7 )
    {
      v7 = (unsigned __int16)v7;
    }
    else
    {
      if ( ZwTraceControl(EtwQuerySessionDemuxObject, (PVOID)(v6 + 528), 8u, &OutputBuffer, 2u, &ReturnLength)
        || ReturnLength != 2 )
      {
        goto LABEL_10;
      }
      v7 = OutputBuffer;
      *(_WORD *)(v6 + 536) = OutputBuffer;
    }
    if ( v7 == a1 )
      break;
LABEL_10:
    ++v4;
    _InterlockedDecrement((volatile signed __int32 *)(qword_1801593C0 + 8 * v5 + 8));
    if ( v4 >= 8u )
      return 4201LL;
  }
  *a2 = v4;
  _InterlockedDecrement((volatile signed __int32 *)(qword_1801593C0 + 16LL * v4 + 8));
  return 0LL;
}
