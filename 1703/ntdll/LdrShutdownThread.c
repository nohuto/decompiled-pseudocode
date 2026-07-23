/*
 * XREFs of LdrShutdownThread @ 0x1800411F0
 * Callers:
 *     RtlExitUserThread @ 0x180050E20 (RtlExitUserThread.c)
 * Callees:
 *     sub_180019FC0 @ 0x180019FC0 (sub_180019FC0.c)
 *     sub_18001A028 @ 0x18001A028 (sub_18001A028.c)
 *     sub_18001A338 @ 0x18001A338 (sub_18001A338.c)
 *     sub_18001AE14 @ 0x18001AE14 (sub_18001AE14.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x1800416D0 (RtlActivateActivationContextUnsafeFast.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180043B20 (RtlDeactivateActivationContextUnsafeFast.c)
 *     sub_180043C64 @ 0x180043C64 (sub_180043C64.c)
 *     sub_18006FF7C @ 0x18006FF7C (sub_18006FF7C.c)
 *     RtlProcessFlsData @ 0x180070090 (RtlProcessFlsData.c)
 *     RtlFreeThreadActivationContextStack @ 0x180078260 (RtlFreeThreadActivationContextStack.c)
 *     sub_180079B6C @ 0x180079B6C (sub_180079B6C.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

void __noreturn LdrShutdownThread(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  struct _TEB *v4; // rbx
  struct _PEB *v5; // r13
  PVOID FlsData; // rsi
  char v7; // r14
  __int64 v8; // rcx
  __int64 *v9; // r15
  __int64 *v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  PVOID *TlsExpansionSlots; // rdi
  PVOID FiberData; // r8
  __int64 v18; // [rsp+30h] [rbp-C8h] BYREF
  int v19; // [rsp+38h] [rbp-C0h]
  _BYTE v20[56]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+80h] [rbp-78h] BYREF
  int v22; // [rsp+88h] [rbp-70h]
  _BYTE v23[56]; // [rsp+90h] [rbp-68h] BYREF

  v4 = NtCurrentTeb();
  v5 = NtCurrentPeb();
  FlsData = v4->FlsData;
  if ( FlsData )
    RtlProcessFlsData(v4->FlsData);
  if ( ((NtCurrentTeb()->SameTebFlags & 8) == 0 || (NtCurrentTeb()->SameTebFlags & 0x20) != 0)
    && (v4->SameTebFlags & 0x2000) == 0 )
  {
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      v7 = 1;
    }
    else
    {
      v7 = 0;
      sub_18001AE14(0);
    }
    sub_180019FC0();
    v9 = (__int64 *)qword_18015B378;
    while ( v9 != &qword_18015B370 )
    {
      v10 = v9 - 4;
      v9 = (__int64 *)v9[1];
      v8 = *((unsigned int *)v10 + 26);
      if ( v5->ImageBaseAddress != (PVOID)v10[6] && (v8 & 0x40000) == 0 )
      {
        v11 = v10[7];
        if ( v11 )
        {
          v8 &= 0x80004u;
          if ( (_DWORD)v8 == 524292 )
          {
            v18 = 72LL;
            v19 = 1;
            memset(v20, 0, sizeof(v20));
            RtlActivateActivationContextUnsafeFast(&v18, v10[17]);
            if ( *((_WORD *)v10 + 55) )
              sub_18006FF7C(3LL, v10);
            sub_180043C64(v11, v10[6], 3LL, 0LL);
            RtlDeactivateActivationContextUnsafeFast(&v18);
          }
        }
      }
    }
    if ( *(_WORD *)(qword_18015AE50 + 110) )
    {
      v21 = 72LL;
      v22 = 1;
      memset(v23, 0, sizeof(v23));
      RtlActivateActivationContextUnsafeFast(&v21, *(_QWORD *)(qword_18015AE50 + 136));
      sub_18006FF7C(3LL, qword_18015AE50);
      RtlDeactivateActivationContextUnsafeFast(&v21);
    }
    sub_18001A028(v8, 19, 0);
    if ( !v7 )
      sub_18001A338();
    sub_180079B6C(v13, v12, v14, v15);
  }
  if ( FlsData )
  {
    v4->FlsData = 0LL;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, FlsData);
  }
  TlsExpansionSlots = v4->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    v4->TlsExpansionSlots = 0LL;
    RtlEnterCriticalSection(&stru_18015AE60);
    RtlLeaveCriticalSection(&stru_18015AE60);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, TlsExpansionSlots);
  }
  if ( (v4->SameTebFlags & 4) != 0 )
  {
    FiberData = v4->NtTib.FiberData;
    v4->NtTib.FiberData = 0LL;
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, FiberData);
  }
  RtlFreeThreadActivationContextStack(v1, v0, v2, v3);
}
