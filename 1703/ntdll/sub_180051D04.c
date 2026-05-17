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
  bool v5; // cf
  __int64 v7; // r15
  unsigned int v8; // r12d
  int v9; // eax
  unsigned __int64 v10; // rcx
  int v11; // ecx
  int v12; // eax
  __int64 result; // rax
  unsigned int NumberOfProcessors; // r8d
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rdi
  NTSTATUS v19; // eax
  __int64 v20; // rdx
  int v21; // ecx
  ULONG LastErrorValue; // esi
  __int64 v23; // r14
  __int64 v24; // r15
  __int64 EtwThread; // rax
  unsigned int v26; // edx
  NTSTATUS v27; // eax
  ULONG v28; // eax
  __int64 v29; // rcx
  __int64 v30; // [rsp+30h] [rbp-10h] BYREF
  __int64 v31; // [rsp+38h] [rbp-8h] BYREF
  int v32; // [rsp+80h] [rbp+40h] BYREF
  _DWORD *v33; // [rsp+88h] [rbp+48h]
  unsigned int v34; // [rsp+98h] [rbp+58h] BYREF

  v33 = a2;
  v32 = a1;
  v5 = *(_DWORD *)a4 < 0xB0u;
  v30 = 0LL;
  v7 = 0LL;
  v8 = 0;
  if ( v5 )
    return 87LL;
  *(_QWORD *)(a4 + 152) = a4 + 176;
  v9 = *(_DWORD *)(a4 + 64);
  *(_QWORD *)(a4 + 136) = *(unsigned __int16 *)(a4 + 146) + a4 + 176;
  if ( (v9 & 0x40B) != 0 )
  {
    v10 = (v9 & 0x40B) - (((unsigned __int64)(v9 & 0x40B) >> 1) & 0x5555555555555555LL);
    if ( (0x101010101010101LL
        * (((v10 & 0x3333333333333333LL)
          + ((v10 >> 2) & 0x3333333333333333LL)
          + (((v10 & 0x3333333333333333LL) + ((v10 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56 == 1 )
      goto LABEL_4;
    return 87LL;
  }
  *(_DWORD *)(a4 + 64) = v9 | 1;
LABEL_4:
  v11 = *(_DWORD *)(a4 + 64);
  if ( (v11 & 0x2000000) != 0
    || (v11 & 0x400) != 0 && (*(_WORD *)(a4 + 128) || *(_DWORD *)(a4 + 68) || *(_DWORD *)(a4 + 76)) )
  {
    return 87LL;
  }
  v12 = *(_DWORD *)(a4 + 76);
  if ( v12 )
  {
    if ( *(_DWORD *)(a4 + 68) || v12 < 0 )
      return 87LL;
  }
  if ( (v11 & 6) == 6
    || (*(_DWORD *)(a4 + 64) & 0xC000) == 0xC000
    || (v11 & 0x4000000) != 0 && ((v11 & 2) != 0 || (v11 & 4) != 0 || (v11 & 0x20) != 0 || (v11 & 0x400) != 0) )
  {
    return 87LL;
  }
  if ( !(unsigned int)sub_180053EE0(a4 + 144, &v30) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(qword_1801593C0 + 16LL * *(unsigned int *)(v30 + 20) + 8));
    return 183LL;
  }
  result = sub_180053DF8(a4, &v34);
  if ( !(_DWORD)result )
  {
    if ( (*(_DWORD *)(a4 + 64) & 0x10000) != 0 )
    {
      v26 = (*(unsigned __int16 *)(a4 + 130) + *(unsigned __int16 *)(a4 + 146) + 183) & 0xFFFFFFF8;
      v8 = *(_DWORD *)a4 - v26;
      v7 = a4 + v26;
      NumberOfProcessors = -1;
    }
    else if ( (*(_DWORD *)(a4 + 64) & 0x10000000) != 0 )
    {
      NumberOfProcessors = 1;
    }
    else
    {
      NumberOfProcessors = NtCurrentPeb()->NumberOfProcessors;
    }
    v15 = v34;
    v16 = sub_18005395C(a4, v34, NumberOfProcessors, v7, v8);
    v30 = v16;
    v18 = v16;
    if ( !v16 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(qword_1801593C0 + 16 * v15 + 8));
      return 8LL;
    }
    if ( (*(_DWORD *)(v16 + 324) & 0x4000000) != 0 )
    {
      v27 = sub_180004B3C(v16);
      if ( v27 )
      {
        v28 = RtlNtStatusToDosError(v27);
        LastErrorValue = v28;
        if ( v28 )
          goto LABEL_59;
      }
    }
    if ( (*(_DWORD *)(v18 + 324) & 0x400) == 0 )
    {
      LOBYTE(v17) = (*(_DWORD *)(v18 + 324) & 4) != 0;
      v19 = sub_1800531B0(v18, v7, v8, v17);
      if ( v19 )
      {
        LastErrorValue = RtlNtStatusToDosError(v19);
        if ( LastErrorValue )
          goto LABEL_59;
      }
    }
    v20 = *(unsigned int *)(v18 + 208);
    v21 = 0xFFFF;
    if ( (unsigned __int64)(v20 - 72) < 0xFFFF )
      v21 = v20 - 72;
    *(_DWORD *)(v18 + 212) = v21 & 0xFFFFFFF8;
    LastErrorValue = sub_180052EDC(v18);
    if ( LastErrorValue )
      goto LABEL_59;
    if ( (*(_DWORD *)(v18 + 324) & 0x20000) == 0 )
    {
      LastErrorValue = sub_180104D24(*(unsigned __int16 *)(v18 + 20), &v31, &v32);
      if ( LastErrorValue )
        goto LABEL_59;
      *(_QWORD *)(v18 + 528) = v31;
    }
    v23 = 2 * v15;
    _InterlockedIncrement((volatile signed __int32 *)(qword_1801593C0 + 8 * v23 + 8));
    v24 = v30;
    if ( (*(_DWORD *)(v18 + 324) & 0x400) == 0 )
    {
      EtwThread = EtwpCreateEtwThread(sub_180051300, v30);
      if ( !EtwThread )
      {
        LastErrorValue = NtCurrentTeb()->LastErrorValue;
        goto LABEL_27;
      }
      *(_QWORD *)(v24 + 32) = EtwThread;
    }
    sub_180052BC4(a4, v24, &v32);
    _InterlockedExchange64((volatile __int64 *)(qword_1801593C0 + 8 * v23), v24);
    sub_18005203C(v30, 5LL, 0LL);
LABEL_27:
    _InterlockedDecrement((volatile signed __int32 *)(qword_1801593C0 + 8 * v23 + 8));
    if ( !LastErrorValue )
    {
      *v33 = *(_DWORD *)a4;
      *a3 = *(_DWORD *)a4;
      return LastErrorValue;
    }
    v18 = v30;
LABEL_59:
    v29 = *(_QWORD *)(a4 + 88);
    if ( v29 )
    {
      ZwClose(v29);
      *(_QWORD *)(a4 + 88) = 0LL;
      *(_QWORD *)(v18 + 144) = 0LL;
    }
    sub_1800076D8(v18);
    return LastErrorValue;
  }
  return result;
}
