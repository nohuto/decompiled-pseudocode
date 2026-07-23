/*
 * XREFs of sub_180106D70 @ 0x180106D70
 * Callers:
 *     sub_180001A1C @ 0x180001A1C (sub_180001A1C.c)
 *     sub_1800049F4 @ 0x1800049F4 (sub_1800049F4.c)
 *     sub_180004B90 @ 0x180004B90 (sub_180004B90.c)
 *     sub_180007740 @ 0x180007740 (sub_180007740.c)
 *     RtlExitUserProcess @ 0x180047D70 (RtlExitUserProcess.c)
 *     sub_180083054 @ 0x180083054 (sub_180083054.c)
 *     sub_180085C54 @ 0x180085C54 (sub_180085C54.c)
 *     sub_1801070E0 @ 0x1801070E0 (sub_1801070E0.c)
 * Callees:
 *     ZwTraceControl @ 0x18009E210 (ZwTraceControl.c)
 */

__int64 __fastcall sub_180106D70(int a1, _DWORD *a2)
{
  unsigned __int16 v4; // di
  __int64 v5; // rbx
  __int64 v6; // rsi
  int v7; // eax
  unsigned __int16 OutputBuffer; // [rsp+80h] [rbp+18h] BYREF
  ULONG ReturnLength; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  while ( 1 )
  {
    v5 = 2LL * v4;
    _InterlockedAdd((volatile signed __int32 *)(qword_18015A420 + 16LL * v4 + 8), 1u);
    v6 = *(_QWORD *)(qword_18015A420 + 16LL * v4);
    if ( (v6 & 1) != 0 || !*(_QWORD *)(v6 + 544) )
      goto LABEL_10;
    LOWORD(v7) = *(_WORD *)(v6 + 552);
    if ( (_WORD)v7 )
    {
      v7 = (unsigned __int16)v7;
    }
    else
    {
      if ( ZwTraceControl(EtwQuerySessionDemuxObject, (PVOID)(v6 + 544), 8u, &OutputBuffer, 2u, &ReturnLength)
        || ReturnLength != 2 )
      {
        goto LABEL_10;
      }
      v7 = OutputBuffer;
      *(_WORD *)(v6 + 552) = OutputBuffer;
    }
    if ( v7 == a1 )
      break;
LABEL_10:
    ++v4;
    _InterlockedDecrement((volatile signed __int32 *)(qword_18015A420 + 8 * v5 + 8));
    if ( v4 >= 8u )
      return 4201LL;
  }
  *a2 = v4;
  _InterlockedDecrement((volatile signed __int32 *)(qword_18015A420 + 16LL * v4 + 8));
  return 0LL;
}
