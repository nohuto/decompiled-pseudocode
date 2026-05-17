/*
 * XREFs of sub_1800860E0 @ 0x1800860E0
 * Callers:
 *     RtlExitUserProcess @ 0x18006F940 (RtlExitUserProcess.c)
 * Callees:
 *     sub_180051190 @ 0x180051190 (sub_180051190.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     sub_180104B00 @ 0x180104B00 (sub_180104B00.c)
 */

void sub_1800860E0()
{
  __int64 v0; // r8
  unsigned int v1; // ebx
  __int64 v2; // rdi
  unsigned int v3; // eax
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD v8[22]; // [rsp+30h] [rbp-C8h] BYREF

  if ( qword_1801593C0 )
  {
    memset(v8, 0, sizeof(v8));
    LODWORD(v8[0]) = 176;
    v1 = 0;
    v2 = 0LL;
    HIDWORD(v8[5]) = 0x20000;
    while ( 1 )
    {
      v3 = v1 & 0xFFFF7FFF;
      LODWORD(v7) = v1 & 0xFFFF7FFF;
      if ( qword_1801593C0 )
      {
        if ( v3 < 0x40 )
          goto LABEL_5;
        if ( !(unsigned int)sub_180104B00(v1, &v7) )
          break;
      }
LABEL_7:
      ++v1;
      ++v2;
      if ( v1 >= 0x40 )
        return;
    }
    v3 = v7;
LABEL_5:
    _InterlockedIncrement((volatile signed __int32 *)(qword_1801593C0 + 16LL * v3 + 8));
    if ( (*(_BYTE *)(qword_1801593C0 + 16LL * v3) & 1) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(qword_1801593C0 + 16LL * v3 + 8));
    }
    else
    {
      v4 = *(_QWORD *)(qword_1801593C0 + 16LL * v3);
      v5 = *(unsigned int *)(v4 + 324);
      v6 = 2LL * *(unsigned int *)(v4 + 20);
      _InterlockedDecrement((volatile signed __int32 *)(qword_1801593C0 + 16LL * *(unsigned int *)(v4 + 20) + 8));
      if ( (v5 & 0x400) == 0 )
      {
        v8[1] = v2;
        sub_180051190(v6, v5, v0, (__int64)v8);
      }
    }
    goto LABEL_7;
  }
}
