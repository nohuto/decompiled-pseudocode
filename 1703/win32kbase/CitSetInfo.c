/*
 * XREFs of CitSetInfo @ 0x1C0004C60
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000FEF0 (UserIsCurrentProcessDwm.c)
 *     ?CitpLastInputUpdate@@YAXEI@Z @ 0x1C0052EAC (-CitpLastInputUpdate@@YAXEI@Z.c)
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C00533D8 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z @ 0x1C00534C8 (-CitpProcessEnsureContext@@YAJPEAUtagPROCESSINFO@@@Z.c)
 *     ?CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT_PROCESS@@@Z @ 0x1C00536A0 (-CitpInteractionSummaryEnsure@@YAPEAU_CIT_INTERACTION_SUMMARY@@PEAU_CIT_IMPACT_CONTEXT@@PEAU_CIT.c)
 *     ?CitpLogFailureWorker@@YAXJPEBDI@Z @ 0x1C0154590 (-CitpLogFailureWorker@@YAXJPEBDI@Z.c)
 */

__int64 __fastcall CitSetInfo(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  struct _CIT_IMPACT_CONTEXT *v4; // rbx
  unsigned __int16 v5; // r12
  __int64 CurrentProcessWin32Process; // r15
  unsigned int v7; // edx
  unsigned int v8; // eax
  unsigned int v9; // ecx
  unsigned __int16 v10; // di
  unsigned int j; // esi
  __int64 result; // rax
  __int64 v13; // rsi
  unsigned __int16 *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int16 i; // bx
  struct _CIT_INTERACTION_SUMMARY *v18; // rax
  __int64 v19; // rax
  __int128 v20; // [rsp+30h] [rbp-58h]
  __int64 v21; // [rsp+40h] [rbp-48h]
  unsigned __int16 v22; // [rsp+92h] [rbp+Ah]
  unsigned __int8 v23; // [rsp+98h] [rbp+10h]
  PEPROCESS Process; // [rsp+A0h] [rbp+18h] BYREF

  v23 = a2;
  v22 = WORD1(a1);
  v4 = qword_1C018E8C8;
  if ( !qword_1C018E8C8 )
    return -1073741641LL;
  if ( (unsigned __int8)a1 == 2LL )
  {
    if ( (unsigned int)UserIsCurrentProcessDwm(a1, a2, a3) )
    {
      v16 = 24LL * v22;
      if ( (unsigned __int64)(v16 - 1) > 0xFFFE )
      {
        if ( v16 )
        {
          if ( (a2 & 7) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( v16 + a2 > (unsigned __int64)W32UserProbeAddress || v16 + a2 < a2 )
            *(_BYTE *)W32UserProbeAddress = 0;
        }
      }
      else if ( (a2 & 7) != 0 )
      {
        ExRaiseDatatypeMisalignment();
      }
      for ( i = 0; i < v22; ++i )
      {
        v20 = *(_OWORD *)(a2 + 24LL * i);
        v21 = *(_QWORD *)(a2 + 24LL * i + 16);
        Process = 0LL;
        if ( PsLookupProcessByProcessId((HANDLE)(int)v21, &Process) >= 0 )
        {
          if ( PsGetProcessSequenceNumber(Process) == *((_QWORD *)&v20 + 1) )
            PsUpdateComponentPower(Process, 7LL, v20);
          ObfDereferenceObject(Process);
        }
      }
      return 0LL;
    }
    return -1073741790LL;
  }
  else if ( (unsigned __int8)a1 == 1LL )
  {
    v5 = WORD1(a1);
    if ( (unsigned __int16)a2 == 64LL )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
      if ( (a2 & 0x10000) != 0 )
        CurrentProcessWin32Process = *((_QWORD *)v4 + 55);
      if ( CurrentProcessWin32Process )
      {
        if ( v22 >= 0x40u )
          v5 = 64;
        v7 = -1;
        if ( ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
             * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
           / 0x3E8 <= 0xFFFFFFFF )
          v7 = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
               * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
             / 0x3E8;
        if ( v5 > v7 )
          v5 = v7;
        if ( v7 >= 0x40 )
        {
          v8 = *((_DWORD *)v4 + 250);
          if ( v7 - 63 > v8 )
          {
            v9 = v7 - 63 - v8;
            *((_DWORD *)v4 + 250) = v7 - 63;
            if ( v9 < 0x40 )
              *((_QWORD *)v4 + 124) >>= v9;
            else
              *((_QWORD *)v4 + 124) = 0LL;
          }
        }
        v10 = 0;
        if ( v7 > 0x40 )
          v7 = 64;
        for ( j = 64 - v5; j < v7; ++j )
        {
          v15 = *((_QWORD *)v4 + 124);
          if ( (v15 & (1LL << j)) == 0 )
          {
            *((_QWORD *)v4 + 124) = (1LL << j) | v15;
            ++v10;
          }
        }
        if ( !v10 )
          return 0LL;
        LODWORD(result) = CitpProcessEnsureContext((struct tagPROCESSINFO *)CurrentProcessWin32Process);
        if ( (int)result < 0 )
          return (int)result;
        v13 = *(_QWORD *)(CurrentProcessWin32Process + 872);
        if ( CurrentProcessWin32Process == *((_QWORD *)v4 + 55) )
        {
          v14 = (unsigned __int16 *)((char *)v4 + 472);
          goto LABEL_26;
        }
        if ( (qword_1C018E8A0 & 1) != 0 )
        {
          v18 = CitpInteractionSummaryEnsure(v4, *(struct _CIT_PROCESS **)(CurrentProcessWin32Process + 872));
          if ( !v18 )
            return -1073741670LL;
          CitpStatIncrement((unsigned __int16 *)v18 + 18, v10);
        }
        if ( !(_BYTE)qword_1C018E8BA )
          return 0LL;
        v14 = (unsigned __int16 *)(v13 + 72);
LABEL_26:
        CitpStatIncrement(v14, v10);
        return 0LL;
      }
      return -1073741275LL;
    }
    if ( (a2 & 0x10000) != 0 )
    {
      v19 = *((_QWORD *)qword_1C018E8C8 + 55);
      goto LABEL_65;
    }
    v19 = PsGetCurrentProcessWin32Process();
    if ( v19 == *((_QWORD *)v4 + 55) )
    {
LABEL_65:
      if ( v19 )
      {
        CitpLastInputUpdate(v23, (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
        return 0LL;
      }
      return -1073741275LL;
    }
    return -1073741637LL;
  }
  else
  {
    return -1073741821LL;
  }
}
