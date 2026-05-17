/*
 * XREFs of LdrShutdownThread @ 0x180038A30
 * Callers:
 *     RtlExitUserThread @ 0x1800736C0 (RtlExitUserThread.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     RtlDeactivateActivationContextUnsafeFast @ 0x18003B310 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlActivateActivationContextUnsafeFast @ 0x18003B460 (RtlActivateActivationContextUnsafeFast.c)
 *     sub_18003B518 @ 0x18003B518 (sub_18003B518.c)
 *     sub_18003B5F8 @ 0x18003B5F8 (sub_18003B5F8.c)
 *     sub_1800435B4 @ 0x1800435B4 (sub_1800435B4.c)
 *     sub_180046F60 @ 0x180046F60 (sub_180046F60.c)
 *     sub_180046FBC @ 0x180046FBC (sub_180046FBC.c)
 *     sub_180047B2C @ 0x180047B2C (sub_180047B2C.c)
 *     RtlProcessFlsData @ 0x180048090 (RtlProcessFlsData.c)
 *     sub_180072114 @ 0x180072114 (sub_180072114.c)
 *     RtlFreeThreadActivationContextStack @ 0x180072AA0 (RtlFreeThreadActivationContextStack.c)
 *     TpTrimPools @ 0x18007F020 (TpTrimPools.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

__int64 __fastcall LdrShutdownThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _TEB *v4; // rbx
  struct _PEB *v5; // r13
  unsigned __int64 FlsData; // rsi
  char v7; // r14
  __int64 v8; // rcx
  __int64 *v9; // r15
  __int64 *v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 TlsExpansionSlots; // rdi
  unsigned __int64 FiberData; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 result; // rax
  __int64 v23; // [rsp+30h] [rbp-C8h] BYREF
  int v24; // [rsp+38h] [rbp-C0h]
  _BYTE v25[56]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+80h] [rbp-78h] BYREF
  int v27; // [rsp+88h] [rbp-70h]
  _BYTE v28[56]; // [rsp+90h] [rbp-68h] BYREF

  v4 = NtCurrentTeb();
  v5 = NtCurrentPeb();
  FlsData = (unsigned __int64)v4->FlsData;
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
      sub_1800435B4(0LL);
    }
    sub_180046FBC();
    v9 = (__int64 *)qword_18015C398;
    while ( v9 != &qword_18015C390 )
    {
      v10 = v9 - 4;
      v9 = (__int64 *)v9[1];
      v8 = *((unsigned int *)v10 + 26);
      if ( v5->ImageBaseAddress != (void *)v10[6] && (v8 & 0x40000) == 0 )
      {
        v11 = v10[7];
        if ( v11 )
        {
          v8 &= 0x80004u;
          if ( (_DWORD)v8 == 524292 )
          {
            v23 = 72LL;
            v24 = 1;
            memset(v25, 0, sizeof(v25));
            RtlActivateActivationContextUnsafeFast(&v23, v10[17]);
            if ( *((_WORD *)v10 + 55) )
              sub_18003B5F8(3LL, v10);
            sub_18003B518(v11, v10[6], 3LL);
            RtlDeactivateActivationContextUnsafeFast(&v23);
          }
        }
      }
    }
    if ( *(_WORD *)(qword_18015BF88 + 110) )
    {
      v26 = 72LL;
      v27 = 1;
      memset(v28, 0, sizeof(v28));
      RtlActivateActivationContextUnsafeFast(&v26, *(_QWORD *)(qword_18015BF88 + 136));
      sub_18003B5F8(3LL, qword_18015BF88);
      RtlDeactivateActivationContextUnsafeFast(&v26);
    }
    sub_180046F60(v8, 19LL, 0LL);
    if ( !v7 )
      sub_180047B2C(v13, v12, v14, v15);
    sub_180072114(v13, v12, v14, v15);
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
    RtlEnterCriticalSection((__int64)&unk_18015BE80);
    RtlLeaveCriticalSection((__int64)&unk_18015BE80);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, TlsExpansionSlots);
  }
  if ( (v4->SameTebFlags & 4) != 0 )
  {
    FiberData = (unsigned __int64)v4->NtTib.FiberData;
    v4->NtTib.FiberData = 0LL;
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, FiberData);
  }
  RtlFreeThreadActivationContextStack(a1, a2, a3, a4);
  result = 1024LL;
  if ( (v4->SameTebFlags & 0x400) != 0 && dword_18015CFB8 == 3 )
    return TpTrimPools(v19, v18, v20, v21);
  return result;
}
