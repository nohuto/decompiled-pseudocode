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

__int64 __fastcall LdrShutdownThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _TEB *v4; // rbx
  struct _PEB *v5; // r13
  unsigned __int64 FlsData; // rsi
  __int64 v7; // rcx
  char v8; // r14
  __int64 v9; // rcx
  __int64 *v10; // r15
  __int64 *v11; // rdi
  __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 TlsExpansionSlots; // rdi
  unsigned __int64 FiberData; // r8
  __int64 v20; // [rsp+30h] [rbp-C8h] BYREF
  int v21; // [rsp+38h] [rbp-C0h]
  _BYTE v22[56]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+80h] [rbp-78h] BYREF
  int v24; // [rsp+88h] [rbp-70h]
  _BYTE v25[56]; // [rsp+90h] [rbp-68h] BYREF

  v4 = NtCurrentTeb();
  v5 = NtCurrentPeb();
  FlsData = (unsigned __int64)v4->FlsData;
  if ( FlsData )
    RtlProcessFlsData(v4->FlsData);
  if ( ((NtCurrentTeb()->SameTebFlags & 8) == 0 || (NtCurrentTeb()->SameTebFlags & 0x20) != 0)
    && (v4->SameTebFlags & 0x2000) == 0 )
  {
    v7 = 4096LL;
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
    {
      v8 = 1;
    }
    else
    {
      v8 = 0;
      sub_18001AE14(0);
    }
    sub_180019FC0(v7, a2, a3, a4);
    v10 = (__int64 *)qword_18015B378;
    while ( v10 != &qword_18015B370 )
    {
      v11 = v10 - 4;
      v10 = (__int64 *)v10[1];
      v9 = *((unsigned int *)v11 + 26);
      if ( v5->ImageBaseAddress != (void *)v11[6] && (v9 & 0x40000) == 0 )
      {
        v12 = v11[7];
        if ( v12 )
        {
          v9 &= 0x80004u;
          if ( (_DWORD)v9 == 524292 )
          {
            v20 = 72LL;
            v21 = 1;
            memset(v22, 0, sizeof(v22));
            RtlActivateActivationContextUnsafeFast(&v20, v11[17]);
            if ( *((_WORD *)v11 + 55) )
              sub_18006FF7C(3LL, v11);
            sub_180043C64(v12, v11[6], 3LL, 0LL);
            RtlDeactivateActivationContextUnsafeFast(&v20);
          }
        }
      }
    }
    if ( *(_WORD *)(qword_18015AE50 + 110) )
    {
      v23 = 72LL;
      v24 = 1;
      memset(v25, 0, sizeof(v25));
      RtlActivateActivationContextUnsafeFast(&v23, *(_QWORD *)(qword_18015AE50 + 136));
      sub_18006FF7C(3LL, qword_18015AE50);
      RtlDeactivateActivationContextUnsafeFast(&v23);
    }
    sub_18001A028(v9, 19, 0);
    if ( !v8 )
      sub_18001A338();
    sub_180079B6C(v14, v13, v15, v16);
  }
  if ( FlsData )
  {
    v4->FlsData = 0LL;
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, FlsData);
  }
  TlsExpansionSlots = (unsigned __int64)v4->TlsExpansionSlots;
  if ( TlsExpansionSlots )
  {
    v4->TlsExpansionSlots = 0LL;
    RtlEnterCriticalSection((__int64)&unk_18015AE60);
    RtlLeaveCriticalSection((__int64)&unk_18015AE60);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, TlsExpansionSlots);
  }
  if ( (v4->SameTebFlags & 4) != 0 )
  {
    FiberData = (unsigned __int64)v4->NtTib.FiberData;
    v4->NtTib.FiberData = 0LL;
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, FiberData);
  }
  return RtlFreeThreadActivationContextStack(a1, a2, a3, a4);
}
