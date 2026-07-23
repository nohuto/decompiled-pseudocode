/*
 * XREFs of sub_180020404 @ 0x180020404
 * Callers:
 *     sub_18001E750 @ 0x18001E750 (sub_18001E750.c)
 *     sub_1800206A8 @ 0x1800206A8 (sub_1800206A8.c)
 * Callees:
 *     sub_180009838 @ 0x180009838 (sub_180009838.c)
 *     sub_18001E250 @ 0x18001E250 (sub_18001E250.c)
 *     sub_18001F198 @ 0x18001F198 (sub_18001F198.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024AB0 (RtlGetCurrentServiceSessionId.c)
 *     sub_180029840 @ 0x180029840 (sub_180029840.c)
 *     sub_1800A4DFC @ 0x1800A4DFC (sub_1800A4DFC.c)
 *     sub_1800FFB4C @ 0x1800FFB4C (sub_1800FFB4C.c)
 *     sub_180100D30 @ 0x180100D30 (sub_180100D30.c)
 */

__int64 __fastcall sub_180020404(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned int v8; // ebp
  __int64 v9; // r9
  PSILO_USER_SHARED_DATA SharedData; // rcx
  __int64 v11; // rcx
  __int64 UserModeGlobalLogger; // rcx
  __int64 v14; // r8
  __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  if ( (dword_180158684 & 1) != 0 )
  {
    v6 = sub_180100D30();
  }
  else if ( a1
         && (a1 ^ qword_18015BFA8 ^ *(_QWORD *)((a2 & 0xFFFFFFFFFFF00000uLL) + 0x10) ^ ((a2 & 0xFFFFFFFFFFF00000uLL) >> 20)) != 0xA2E64EADA2E64EADuLL )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = (a2 & 0xFFFFFFFFFFF00000uLL) + 32LL * (unsigned int)((a2 - (a2 & 0xFFFFFFFFFFF00000uLL)) >> 12);
  }
  if ( v6 && ((*(_BYTE *)(v6 + 24) & 4) != 0 || !a1) )
  {
    if ( (*(_BYTE *)(v6 + 24) & 8) != 0 )
    {
      if ( (*(_BYTE *)(v6 + 24) & 0x21) == 0
        && a2 != (v6 & 0xFFFFFFFFFFF00000uLL) + (((unsigned int)(v6 >> 5) & 0x7FFF) << 12) )
      {
        goto LABEL_20;
      }
    }
    else
    {
      v6 += -32LL * *(unsigned __int8 *)(v6 + 27);
      if ( (*(_BYTE *)(v6 + 24) & 4) == 0 || (*(_BYTE *)(v6 + 24) & 8) == 0 || (*(_BYTE *)(v6 + 24) & 0x21) == 0 )
        goto LABEL_20;
    }
  }
  else
  {
    v6 = 0LL;
  }
  if ( !v6 )
  {
LABEL_20:
    sub_1800A4DFC(9, a1, a2, 0, 0LL, 0LL);
    return 0;
  }
  v7 = (v6 & 0xFFFFFFFFFFF00000uLL) + ((unsigned int)((__int64)(v6 - (v6 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12);
  if ( a2 <= v7 )
  {
    sub_18001F198(a1, v6, 0, a3);
    v8 = 1;
    if ( RtlGetCurrentServiceSessionId() )
      UserModeGlobalLogger = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    else
      UserModeGlobalLogger = 2147353472LL;
    if ( *(_BYTE *)UserModeGlobalLogger && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    {
      v14 = 3LL;
LABEL_34:
      sub_1800FFB4C(a1, a2, v14, v9);
    }
  }
  else
  {
    if ( (*(_BYTE *)(v6 + 24) & 1) != 0 )
    {
      v8 = sub_18001E250((_QWORD *)(a1 + 288), v7, a2, a3);
    }
    else
    {
      v8 = sub_180029840((PRTL_SRWLOCK)(a1 + 176), (__int64)&v15);
      if ( v8 && (unsigned int)v15 <= 0x3FF0 )
        sub_180009838(a1 + 288, v15, 0);
    }
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && SharedData->ServiceSessionId )
      v11 = (__int64)NtCurrentPeb()->SharedData->UserModeGlobalLogger;
    else
      v11 = 2147353472LL;
    if ( *(_BYTE *)v11 && (NtCurrentPeb()->TracingFlags & 1) != 0 && v8 )
    {
      v14 = ((*(_BYTE *)(v6 + 24) & 1) == 0) | 2u;
      goto LABEL_34;
    }
  }
  return v8;
}
