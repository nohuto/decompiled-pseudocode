/*
 * XREFs of sub_180051D04 @ 0x180051D04
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x180051B90 (EtwProcessPrivateLoggerRequest.c)
 * Callees:
 *     sub_180004B3C @ 0x180004B3C (sub_180004B3C.c)
 *     sub_1800076D8 @ 0x1800076D8 (sub_1800076D8.c)
 *     sub_18005203C @ 0x18005203C (sub_18005203C.c)
 *     sub_180052BC4 @ 0x180052BC4 (sub_180052BC4.c)
 *     EtwpCreateEtwThread @ 0x180052C90 (EtwpCreateEtwThread.c)
 *     sub_180052EDC @ 0x180052EDC (sub_180052EDC.c)
 *     sub_1800531B0 @ 0x1800531B0 (sub_1800531B0.c)
 *     sub_18005395C @ 0x18005395C (sub_18005395C.c)
 *     sub_180053DF8 @ 0x180053DF8 (sub_180053DF8.c)
 *     sub_180053EE0 @ 0x180053EE0 (sub_180053EE0.c)
 *     RtlNtStatusToDosError @ 0x18005D5F0 (RtlNtStatusToDosError.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     sub_180104D24 @ 0x180104D24 (sub_180104D24.c)
 */

__int64 __fastcall sub_180051D04(int a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  __int64 v6; // r15
  unsigned int v7; // r12d
  int v8; // eax
  unsigned __int64 v9; // rcx
  int v10; // ecx
  int v11; // eax
  __int64 result; // rax
  __int64 NumberOfProcessors; // r8
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rdi
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  int v20; // ecx
  ULONG LastErrorValue; // esi
  __int64 v22; // r14
  __int64 EtwThread; // rax
  unsigned int v24; // edx
  NTSTATUS v25; // eax
  ULONG v26; // eax
  void *v27; // rcx
  __int64 v28; // [rsp+30h] [rbp-10h]
  __int64 v29; // [rsp+38h] [rbp-8h] BYREF
  int v30; // [rsp+80h] [rbp+40h] BYREF
  _DWORD *v31; // [rsp+88h] [rbp+48h]
  unsigned int v32; // [rsp+98h] [rbp+58h] BYREF

  v31 = a2;
  v30 = a1;
  v6 = 0LL;
  v7 = 0;
  if ( *(_DWORD *)a4 < 0xB0u )
    return 87LL;
  *(_QWORD *)(a4 + 152) = a4 + 176;
  v8 = *(_DWORD *)(a4 + 64);
  *(_QWORD *)(a4 + 136) = *(unsigned __int16 *)(a4 + 146) + a4 + 176;
  if ( (v8 & 0x40B) != 0 )
  {
    v9 = (v8 & 0x40B) - (((unsigned __int64)(v8 & 0x40B) >> 1) & 0x5555555555555555LL);
    if ( (0x101010101010101LL
        * (((v9 & 0x3333333333333333LL)
          + ((v9 >> 2) & 0x3333333333333333LL)
          + (((v9 & 0x3333333333333333LL) + ((v9 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56 == 1 )
      goto LABEL_4;
    return 87LL;
  }
  *(_DWORD *)(a4 + 64) = v8 | 1;
LABEL_4:
  v10 = *(_DWORD *)(a4 + 64);
  if ( (v10 & 0x2000000) != 0
    || (v10 & 0x400) != 0 && (*(_WORD *)(a4 + 128) || *(_DWORD *)(a4 + 68) || *(_DWORD *)(a4 + 76)) )
  {
    return 87LL;
  }
  v11 = *(_DWORD *)(a4 + 76);
  if ( v11 )
  {
    if ( *(_DWORD *)(a4 + 68) || v11 < 0 )
      return 87LL;
  }
  if ( (v10 & 6) == 6
    || (*(_DWORD *)(a4 + 64) & 0xC000) == 0xC000
    || (v10 & 0x4000000) != 0 && ((v10 & 2) != 0 || (v10 & 4) != 0 || (v10 & 0x20) != 0 || (v10 & 0x400) != 0) )
  {
    return 87LL;
  }
  if ( !(unsigned int)sub_180053EE0((PUNICODE_STRING)(a4 + 144)) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(qword_1801593C0 + 16LL * MEMORY[0x14] + 8));
    return 183LL;
  }
  result = sub_180053DF8(a4, &v32);
  if ( !(_DWORD)result )
  {
    if ( (*(_DWORD *)(a4 + 64) & 0x10000) != 0 )
    {
      v24 = (*(unsigned __int16 *)(a4 + 130) + *(unsigned __int16 *)(a4 + 146) + 183) & 0xFFFFFFF8;
      v7 = *(_DWORD *)a4 - v24;
      v6 = a4 + v24;
      NumberOfProcessors = 0xFFFFFFFFLL;
    }
    else if ( (*(_DWORD *)(a4 + 64) & 0x10000000) != 0 )
    {
      NumberOfProcessors = 1LL;
    }
    else
    {
      NumberOfProcessors = NtCurrentPeb()->NumberOfProcessors;
    }
    v14 = v32;
    v15 = sub_18005395C(a4, v32, NumberOfProcessors, v6, v7);
    v28 = v15;
    v17 = v15;
    if ( !v15 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(qword_1801593C0 + 16 * v14 + 8));
      return 8LL;
    }
    if ( (*(_DWORD *)(v15 + 324) & 0x4000000) != 0 )
    {
      v25 = sub_180004B3C(v15);
      if ( v25 )
      {
        v26 = RtlNtStatusToDosError(v25);
        LastErrorValue = v26;
        if ( v26 )
          goto LABEL_59;
      }
    }
    if ( (*(_DWORD *)(v17 + 324) & 0x400) == 0 )
    {
      LOBYTE(v16) = (*(_DWORD *)(v17 + 324) & 4) != 0;
      v18 = sub_1800531B0(v17, v6, v7, v16);
      if ( v18 )
      {
        LastErrorValue = RtlNtStatusToDosError(v18);
        if ( LastErrorValue )
          goto LABEL_59;
      }
    }
    v19 = *(unsigned int *)(v17 + 208);
    v20 = 0xFFFF;
    if ( (unsigned __int64)(v19 - 72) < 0xFFFF )
      v20 = v19 - 72;
    *(_DWORD *)(v17 + 212) = v20 & 0xFFFFFFF8;
    LastErrorValue = sub_180052EDC(v17);
    if ( LastErrorValue )
      goto LABEL_59;
    if ( (*(_DWORD *)(v17 + 324) & 0x20000) == 0 )
    {
      LastErrorValue = sub_180104D24(*(unsigned __int16 *)(v17 + 20), &v29, &v30);
      if ( LastErrorValue )
        goto LABEL_59;
      *(_QWORD *)(v17 + 528) = v29;
    }
    v22 = 2 * v14;
    _InterlockedIncrement((volatile signed __int32 *)(qword_1801593C0 + 8 * v22 + 8));
    if ( (*(_DWORD *)(v17 + 324) & 0x400) == 0 )
    {
      EtwThread = EtwpCreateEtwThread(sub_180051300, v28);
      if ( !EtwThread )
      {
        LastErrorValue = NtCurrentTeb()->LastErrorValue;
        goto LABEL_27;
      }
      *(_QWORD *)(v28 + 32) = EtwThread;
    }
    sub_180052BC4(a4, v28, &v30);
    _InterlockedExchange64((volatile __int64 *)(qword_1801593C0 + 8 * v22), v28);
    sub_18005203C(v28, 5LL, 0LL);
LABEL_27:
    _InterlockedDecrement((volatile signed __int32 *)(qword_1801593C0 + 8 * v22 + 8));
    if ( !LastErrorValue )
    {
      *v31 = *(_DWORD *)a4;
      *a3 = *(_DWORD *)a4;
      return LastErrorValue;
    }
    v17 = v28;
LABEL_59:
    v27 = *(void **)(a4 + 88);
    if ( v27 )
    {
      ZwClose(v27);
      *(_QWORD *)(a4 + 88) = 0LL;
      *(_QWORD *)(v17 + 144) = 0LL;
    }
    sub_1800076D8((unsigned int *)v17);
    return LastErrorValue;
  }
  return result;
}
