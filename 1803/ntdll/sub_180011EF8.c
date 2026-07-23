/*
 * XREFs of sub_180011EF8 @ 0x180011EF8
 * Callers:
 *     sub_180011AE0 @ 0x180011AE0 (sub_180011AE0.c)
 *     sub_1800606E0 @ 0x1800606E0 (sub_1800606E0.c)
 * Callees:
 *     sub_180012820 @ 0x180012820 (sub_180012820.c)
 *     RtlGetCurrentServiceSessionId @ 0x180017410 (RtlGetCurrentServiceSessionId.c)
 *     sub_180018770 @ 0x180018770 (sub_180018770.c)
 *     sub_1800205E0 @ 0x1800205E0 (sub_1800205E0.c)
 *     sub_180023AAC @ 0x180023AAC (sub_180023AAC.c)
 *     sub_18005F34C @ 0x18005F34C (sub_18005F34C.c)
 *     sub_18009A5F0 @ 0x18009A5F0 (sub_18009A5F0.c)
 *     sub_1800FE3BC @ 0x1800FE3BC (sub_1800FE3BC.c)
 */

__int64 __fastcall sub_180011EF8(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  __int64 v6; // rax
  int v7; // ebx
  __int64 v8; // r14
  unsigned __int64 v9; // rdx
  unsigned int v10; // esi
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 v12; // rcx
  __int64 UserModeGlobalLogger; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF

  v6 = sub_180012820(a1, a2);
  v7 = 0;
  v8 = v6;
  if ( v6 )
  {
    v9 = (v6 & *(_QWORD *)a1) + ((v6 - (v6 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8));
    if ( a2 <= v9 )
    {
      sub_180023AAC(a1, v6, 0LL, a3);
      v10 = 1;
      if ( RtlGetCurrentServiceSessionId() )
        UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
      else
        UserModeGlobalLogger = 2147353472LL;
      if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        v16 = 3LL;
        goto LABEL_25;
      }
    }
    else
    {
      if ( (*(_BYTE *)(v6 + 24) & 0xC) == 8 )
      {
        v10 = sub_180018770(*(_QWORD *)(a1 + 80), v9, a2, a3);
      }
      else
      {
        v10 = sub_1800205E0(*(PRTL_SRWLOCK *)(a1 + 88), (__int64)&v17);
        if ( v10 )
        {
          v15 = *(_QWORD *)(a1 + 80);
          if ( (unsigned int)v17 <= *(_DWORD *)(v15 + 80) - 16 )
            sub_18005F34C(v15, (unsigned int)v17, 0LL);
        }
      }
      SharedData = NtCurrentPeb()->SharedData;
      if ( SharedData && SharedData->ServiceSessionId )
        v12 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
      else
        v12 = 2147353472LL;
      if ( *(_BYTE *)v12 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v10 )
      {
        LOBYTE(v7) = (*(_BYTE *)(v8 + 24) & 0xC) != 8;
        v16 = (unsigned int)(v7 + 2);
LABEL_25:
        sub_1800FE3BC(*(_QWORD *)(a1 + 112), a2, v16);
      }
    }
  }
  else
  {
    sub_18009A5F0(9, *(_QWORD *)(a1 + 112), a2, 0, 0LL, 0LL);
    return 0;
  }
  return v10;
}
