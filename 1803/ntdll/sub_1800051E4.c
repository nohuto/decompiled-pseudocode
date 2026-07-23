/*
 * XREFs of sub_1800051E4 @ 0x1800051E4
 * Callers:
 *     EtwProcessPrivateLoggerRequest @ 0x180004A40 (EtwProcessPrivateLoggerRequest.c)
 * Callees:
 *     sub_180003970 @ 0x180003970 (sub_180003970.c)
 *     sub_180003DE4 @ 0x180003DE4 (sub_180003DE4.c)
 *     sub_180004B90 @ 0x180004B90 (sub_180004B90.c)
 *     sub_180004C58 @ 0x180004C58 (sub_180004C58.c)
 *     sub_180004D3C @ 0x180004D3C (sub_180004D3C.c)
 *     sub_180005554 @ 0x180005554 (sub_180005554.c)
 *     sub_180005F40 @ 0x180005F40 (sub_180005F40.c)
 *     EtwpCreateEtwThread @ 0x180006010 (EtwpCreateEtwThread.c)
 *     sub_18000625C @ 0x18000625C (sub_18000625C.c)
 *     sub_1800064C0 @ 0x1800064C0 (sub_1800064C0.c)
 *     RtlNtStatusToDosError @ 0x180008400 (RtlNtStatusToDosError.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwQuerySystemInformation @ 0x18009B180 (ZwQuerySystemInformation.c)
 *     sub_180107084 @ 0x180107084 (sub_180107084.c)
 */

ULONG __fastcall sub_1800051E4(__int64 a1, _DWORD *a2, _DWORD *a3, __int64 a4)
{
  bool v4; // cf
  __int64 v7; // r15
  unsigned int v8; // r12d
  int v9; // r8d
  unsigned __int64 v10; // rcx
  int v11; // eax
  ULONG result; // eax
  ULONG NumberOfProcessors; // r8d
  __int64 v14; // r14
  __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // r9
  NTSTATUS v18; // eax
  __int64 v19; // rdx
  int v20; // ecx
  ULONG LastErrorValue; // esi
  __int64 v22; // r14
  __int64 v23; // r15
  __int64 EtwThread; // rax
  _DWORD *v25; // rcx
  unsigned int v26; // edx
  NTSTATUS v27; // eax
  ULONG v28; // eax
  void *v29; // rcx
  char v30[8]; // [rsp+30h] [rbp-59h] BYREF
  char *v31; // [rsp+38h] [rbp-51h] BYREF
  int v32; // [rsp+40h] [rbp-49h] BYREF
  __int64 v33; // [rsp+48h] [rbp-41h] BYREF
  _DWORD *v34; // [rsp+50h] [rbp-39h]
  char SystemInformation[8]; // [rsp+60h] [rbp-29h] BYREF
  int v36; // [rsp+68h] [rbp-21h]

  v34 = a3;
  v4 = *(_DWORD *)a4 < 0xB0u;
  v31 = 0LL;
  v7 = 0LL;
  v8 = 0;
  if ( v4 )
    return 87;
  v9 = *(_DWORD *)(a4 + 64);
  *(_QWORD *)(a4 + 152) = a4 + 176;
  *(_QWORD *)(a4 + 136) = *(unsigned __int16 *)(a4 + 146) + a4 + 176;
  if ( (v9 & 0x40B) != 0 )
  {
    v10 = (v9 & 0x40B) - (((unsigned __int64)(v9 & 0x40B) >> 1) & 0x5555555555555555LL);
    if ( (0x101010101010101LL
        * (((v10 & 0x3333333333333333LL)
          + ((v10 >> 2) & 0x3333333333333333LL)
          + (((v10 & 0x3333333333333333LL) + ((v10 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56 != 1 )
      return 87;
  }
  else
  {
    v9 |= 1u;
    *(_DWORD *)(a4 + 64) = v9;
  }
  if ( (v9 & 0x2000000) != 0 )
    return 87;
  if ( (v9 & 0x400) != 0 )
  {
    if ( *(_WORD *)(a4 + 128) || *(_DWORD *)(a4 + 68) || *(_DWORD *)(a4 + 76) )
      return 87;
  }
  else
  {
    v11 = *(_DWORD *)(a4 + 76);
    if ( v11 && (*(_DWORD *)(a4 + 68) || v11 < 0) )
      return 87;
  }
  if ( (v9 & 6) == 6
    || (v9 & 0xC000) == 0xC000
    || (v9 & 0x4000000) != 0 && ((v9 & 2) != 0 || (v9 & 4) != 0 || (v9 & 0x20) != 0 || (v9 & 0x400) != 0) )
  {
    return 87;
  }
  if ( !(unsigned int)sub_180004B90((PUNICODE_STRING)(a4 + 144), &v31) )
  {
    _InterlockedDecrement((volatile signed __int32 *)(qword_18015A420 + 16LL * *((unsigned int *)v31 + 5) + 8));
    return 183;
  }
  result = sub_180004C58(a4, (unsigned int *)&v32);
  if ( !result )
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
    v14 = (unsigned int)v32;
    v31 = sub_180004D3C(a4, v32, NumberOfProcessors, v7, v8);
    v15 = (__int64)v31;
    if ( !v31 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(qword_18015A420 + 16 * v14 + 8));
      return 8;
    }
    v16 = ZwQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
    if ( v16 < 0 )
      return RtlNtStatusToDosError(v16);
    *(_DWORD *)(v15 + 208) = ~(v36 - 1) & (*(_DWORD *)(v15 + 208) + v36 - 1);
    if ( (*(_DWORD *)(v15 + 324) & 0x4000000) != 0 )
    {
      v27 = sub_180003DE4(v15);
      if ( v27 )
      {
        v28 = RtlNtStatusToDosError(v27);
        LastErrorValue = v28;
        if ( v28 )
          goto LABEL_61;
      }
    }
    if ( (*(_DWORD *)(v15 + 324) & 0x400) == 0 )
    {
      LOBYTE(v17) = (*(_DWORD *)(v15 + 324) & 4) != 0;
      v18 = sub_1800064C0(v15, v7, v8, v17);
      if ( v18 )
      {
        LastErrorValue = RtlNtStatusToDosError(v18);
        if ( LastErrorValue )
          goto LABEL_61;
      }
    }
    v19 = *(unsigned int *)(v15 + 208);
    v20 = 0xFFFF;
    if ( (unsigned __int64)(v19 - 72) < 0xFFFF )
      v20 = v19 - 72;
    *(_DWORD *)(v15 + 212) = v20 & 0xFFFFFFF8;
    LastErrorValue = sub_18000625C(v15);
    if ( LastErrorValue )
      goto LABEL_61;
    if ( (*(_DWORD *)(v15 + 324) & 0x20000) == 0 )
    {
      LastErrorValue = sub_180107084(*(unsigned __int16 *)(v15 + 20), &v33, v30);
      if ( LastErrorValue )
        goto LABEL_61;
      *(_QWORD *)(v15 + 544) = v33;
    }
    v22 = 2 * v14;
    _InterlockedIncrement((volatile signed __int32 *)(qword_18015A420 + 8 * v22 + 8));
    v23 = (__int64)v31;
    if ( (*(_DWORD *)(v15 + 324) & 0x400) == 0 )
    {
      EtwThread = EtwpCreateEtwThread(sub_1800730D0, v31);
      if ( !EtwThread )
      {
        LastErrorValue = NtCurrentTeb()->LastErrorValue;
        goto LABEL_28;
      }
      *(_QWORD *)(v23 + 32) = EtwThread;
    }
    sub_180005F40(a4, v23, v30);
    _InterlockedExchange64((volatile __int64 *)(qword_18015A420 + 8 * v22), v23);
    sub_180005554(v31, 5LL, 0LL);
LABEL_28:
    _InterlockedDecrement((volatile signed __int32 *)(qword_18015A420 + 8 * v22 + 8));
    if ( !LastErrorValue )
    {
      v25 = v34;
      *a2 = *(_DWORD *)a4;
      *v25 = *(_DWORD *)a4;
      return LastErrorValue;
    }
    v15 = (__int64)v31;
LABEL_61:
    v29 = *(void **)(a4 + 88);
    if ( v29 )
    {
      ZwClose(v29);
      *(_QWORD *)(a4 + 88) = 0LL;
      *(_QWORD *)(v15 + 144) = 0LL;
    }
    sub_180003970((unsigned int *)v15);
    return LastErrorValue;
  }
  return result;
}
