/*
 * XREFs of NVMeCompletionDpcRoutine @ 0x1C000FC90
 * Callers:
 *     ProcessCompletionQueues @ 0x1C0010094 (ProcessCompletionQueues.c)
 * Callees:
 *     NVMeRequestComplete @ 0x1C00026E0 (NVMeRequestComplete.c)
 *     RecordCommandTimingHistory @ 0x1C000D294 (RecordCommandTimingHistory.c)
 *     NVMeMapError @ 0x1C0010570 (NVMeMapError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0011F50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NVMeCompletionDpcRoutine(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int16 v6; // r15
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // dx
  __int16 v9; // r8
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // r15
  __int64 v14; // r12
  __int16 v15; // ax
  __int64 v16; // rcx
  __int64 v17; // rcx
  void (__fastcall *v18)(__int64, __int64, __int64); // rax
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // ecx
  bool v23; // zf
  __int128 v24; // xmm0
  int v25; // edx
  unsigned __int64 v26; // r8
  signed __int32 v27[8]; // [rsp+0h] [rbp-50h] BYREF
  int v28; // [rsp+20h] [rbp-30h]
  unsigned __int64 v29; // [rsp+28h] [rbp-28h] BYREF
  unsigned __int64 v30; // [rsp+30h] [rbp-20h] BYREF
  __int64 v31; // [rsp+38h] [rbp-18h] BYREF
  __int64 v32; // [rsp+40h] [rbp-10h]
  __int64 v33; // [rsp+48h] [rbp-8h] BYREF
  unsigned __int16 v34; // [rsp+98h] [rbp+48h]
  __int16 v35; // [rsp+A0h] [rbp+50h]

  v3 = *(_QWORD *)a3 + 16LL * *(unsigned __int16 *)(a3 + 98);
  v6 = 0;
  v35 = 0;
  v30 = 0LL;
  v29 = 0LL;
  v31 = 0LL;
  v33 = 0LL;
  if ( *(_BYTE *)(a2 + 17) || (*(_DWORD *)(a2 + 88) & 2) != 0 )
    StorPortExtendedFunction(47LL, a2, &v29, &v31);
  while ( (*(_WORD *)(v3 + 14) & 1) != *(_WORD *)(a3 + 100) )
  {
    v7 = *(_WORD *)(v3 + 10);
    v8 = *(_WORD *)(v3 + 12);
    v9 = *(_WORD *)(v3 + 8);
    v28 = 0;
    if ( *(_WORD *)(a3 + 96) )
    {
      result = *(unsigned int *)(a2 + 20);
      if ( (result & 1) == 0 )
        goto LABEL_51;
    }
    if ( v7 )
    {
      v11 = *(_QWORD *)(a2 + 544) + 136LL * (v7 - 1);
      v34 = *(_WORD *)(a2 + 230);
    }
    else
    {
      v11 = a2 + 240;
      v34 = *(_WORD *)(a2 + 228);
    }
    result = *(_QWORD *)(v11 + 32) + 16LL * v8;
    v32 = v11;
    v12 = _InterlockedExchange64((volatile __int64 *)result, 0LL);
    if ( !v12 )
      goto LABEL_51;
    if ( *(_BYTE *)(v12 + 2) == 40 )
      v13 = *(_QWORD *)(v12 + 104);
    else
      v13 = *(_QWORD *)(v12 + 56);
    if ( (v13 & 0xFFF) != 0 )
      v13 = v13 - (v13 & 0xFFF) + 4096;
    *(_WORD *)(v11 + 46) = v9;
    if ( *(_BYTE *)(v12 + 2) == 40 )
      v14 = *(unsigned __int8 *)(*(unsigned int *)(v12 + 52) + v12 + 10);
    else
      v14 = *(unsigned __int8 *)(v12 + 7);
    v15 = *(_WORD *)(v3 + 14);
    v28 = v14;
    *(_WORD *)(v13 + 4242) = v15;
    if ( (v15 & 0xE00) != 0 || (v15 & 0x1FE) != 0 )
    {
      NVMeMapError(v12);
      if ( *(_DWORD *)(a2 + 148) > (unsigned int)v14 )
      {
        v17 = *(_QWORD *)(a2 + 8 * v14 + 1184);
        if ( v17 )
          ++*(_DWORD *)(v17 + 32);
      }
    }
    else
    {
      *(_BYTE *)(v12 + 3) = 1;
      if ( *(_DWORD *)(a2 + 148) > (unsigned int)v14 )
      {
        v16 = *(_QWORD *)(a2 + 8 * v14 + 1184);
        if ( v16 )
          ++*(_QWORD *)(v16 + 24);
      }
    }
    v18 = *(void (__fastcall **)(__int64, __int64, __int64))(v13 + 4216);
    if ( v18 )
      v18(a2, v12, v3);
    else
      *(_BYTE *)(v13 + 4245) |= 8u;
    if ( *(_QWORD *)(v13 + 4160) )
    {
      v19 = 0LL;
      StorPortExtendedFunction(47LL, a2, &v29, &v30);
      if ( *(_BYTE *)(a2 + 17) )
      {
        v20 = *(_QWORD *)(v13 + 4160);
        if ( v30 >= v20 && v29 )
          v19 = 10000 * (1000 * ((v30 - v20) % v29) % v29) / v29
              + 10000 * (1000 * ((v30 - v20) % v29) / v29 + 1000 * ((v30 - v20) / v29));
        StorPortNotification(4102LL, a2, v19, v12);
      }
      if ( (*(_DWORD *)(a2 + 88) & 2) != 0 )
      {
        *(_QWORD *)(v13 + 4184) = v31;
        *(_QWORD *)(v13 + 4192) = v30;
        RecordCommandTimingHistory(a2, v12, v29);
      }
    }
    if ( (*(_BYTE *)(v13 + 4245) & 8) != 0 )
      NVMeRequestComplete(a2, v12);
    v21 = v32;
    ++*(_DWORD *)(v32 + 132);
    _InterlockedDecrement16((volatile signed __int16 *)(v21 + 128));
    v22 = *(unsigned __int16 *)(a3 + 98);
    if ( v22 >= v34 - 1 )
    {
      v23 = *(_WORD *)(a3 + 100) == 1;
      *(_WORD *)(a3 + 98) = 0;
      *(_WORD *)(a3 + 100) = !v23;
    }
    else
    {
      *(_WORD *)(a3 + 98) = v22 + 1;
    }
    v6 = v35 + 1;
    v3 = *(_QWORD *)a3 + 16LL * *(unsigned __int16 *)(a3 + 98);
    ++v35;
  }
  result = *(unsigned __int16 *)(a3 + 98);
  *(_WORD *)(a3 + 132) = result;
  v24 = *(_OWORD *)v3;
  *(_WORD *)(a3 + 128) = v6;
  *(_OWORD *)(a3 + 152) = v24;
  if ( v6 )
  {
    v25 = (unsigned __int16)result;
    result = *(_QWORD *)(a3 + 16);
    *(_DWORD *)result = v25;
    _InterlockedOr(v27, 0);
  }
  if ( *(_BYTE *)(a2 + 17) )
  {
    StorPortExtendedFunction(47LL, a2, 0LL, &v33);
    v26 = 0LL;
    if ( v29 )
      v26 = 10000 * (1000 * ((v33 - v31) % v29) % v29) / v29
          + 10000 * (1000 * ((v33 - v31) % v29) / v29 + 1000 * ((v33 - v31) / v29));
    *(_QWORD *)(a2 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 3276))++ + 3280) = v26;
    result = (unsigned int)-(*(_DWORD *)(a2 + 3276) < 0x400u);
    *(_DWORD *)(a2 + 3276) &= result;
  }
LABEL_51:
  if ( *(_BYTE *)(a2 + 18) == 1 )
  {
    result = (unsigned int)(*(_DWORD *)(a2 + 12) - 1);
    if ( (unsigned int)result <= 1 )
    {
      result = *(_QWORD *)(a2 + 112);
      *(_DWORD *)(result + 16) = 1 << *(_WORD *)(a3 + 96);
      _InterlockedOr(v27, 0);
      *(_BYTE *)(a2 + 18) = 0;
    }
  }
  return result;
}
