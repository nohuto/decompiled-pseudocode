/*
 * XREFs of NVMeCompletionDpcRoutine @ 0x1C0011320
 * Callers:
 *     ProcessCompletionQueues @ 0x1C0011818 (ProcessCompletionQueues.c)
 * Callees:
 *     NVMeRequestComplete @ 0x1C0002980 (NVMeRequestComplete.c)
 *     RecordCommandTimingHistory @ 0x1C000DA08 (RecordCommandTimingHistory.c)
 *     NVMeMapError @ 0x1C0011D04 (NVMeMapError.c)
 *     _guard_dispatch_icall_nop @ 0x1C00139B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NVMeCompletionDpcRoutine(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // r14
  __int16 v6; // r15
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // dx
  __int16 v9; // r8
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // r13
  __int64 v14; // r12
  __int16 v15; // ax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // r12
  int v19; // r8d
  unsigned int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r10
  const wchar_t *v27; // rax
  void (__fastcall *v28)(__int64, __int64, unsigned int *); // rax
  unsigned __int64 v29; // r14
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  int v32; // ecx
  bool v33; // zf
  __int128 v34; // xmm0
  int v35; // ecx
  signed __int32 v36[8]; // [rsp+0h] [rbp-D9h] BYREF
  const wchar_t *v37; // [rsp+20h] [rbp-B9h]
  __int64 v38; // [rsp+28h] [rbp-B1h]
  int v39; // [rsp+30h] [rbp-A9h]
  int v40; // [rsp+38h] [rbp-A1h]
  __int64 v41; // [rsp+40h] [rbp-99h]
  const wchar_t *v42; // [rsp+48h] [rbp-91h]
  __int64 v43; // [rsp+50h] [rbp-89h]
  const wchar_t *v44; // [rsp+58h] [rbp-81h]
  __int64 v45; // [rsp+60h] [rbp-79h]
  const wchar_t *v46; // [rsp+68h] [rbp-71h]
  __int64 v47; // [rsp+70h] [rbp-69h]
  const wchar_t *v48; // [rsp+78h] [rbp-61h]
  unsigned __int64 v49; // [rsp+80h] [rbp-59h]
  const wchar_t *v50; // [rsp+88h] [rbp-51h]
  __int64 v51; // [rsp+90h] [rbp-49h]
  const wchar_t *v52; // [rsp+98h] [rbp-41h]
  __int64 v53; // [rsp+A0h] [rbp-39h]
  __int64 v54; // [rsp+A8h] [rbp-31h]
  __int64 v55; // [rsp+B0h] [rbp-29h]
  __int64 v56; // [rsp+B8h] [rbp-21h]
  __int64 v57; // [rsp+C0h] [rbp-19h]
  int v58; // [rsp+D0h] [rbp-9h]
  unsigned __int64 v59; // [rsp+D8h] [rbp-1h] BYREF
  unsigned __int64 v60; // [rsp+E0h] [rbp+7h] BYREF
  __int64 v61; // [rsp+E8h] [rbp+Fh]
  __int64 v62; // [rsp+F0h] [rbp+17h] BYREF
  __int64 v63; // [rsp+F8h] [rbp+1Fh]
  unsigned __int16 v64; // [rsp+148h] [rbp+6Fh]
  __int16 v65; // [rsp+150h] [rbp+77h]

  v3 = (unsigned int *)(*(_QWORD *)a3 + 16LL * *(unsigned __int16 *)(a3 + 98));
  v6 = 0;
  v65 = 0;
  v60 = 0LL;
  v59 = 0LL;
  v62 = 0LL;
  if ( *(_BYTE *)(a2 + 17) || (*(_DWORD *)(a2 + 88) & 2) != 0 )
    StorPortExtendedFunction(47LL, a2, &v59, &v62);
  while ( (*((_WORD *)v3 + 7) & 1) != *(_WORD *)(a3 + 100) )
  {
    v7 = *((_WORD *)v3 + 5);
    v8 = *((_WORD *)v3 + 6);
    v9 = *((_WORD *)v3 + 4);
    v58 = 0;
    if ( *(_WORD *)(a3 + 96) )
    {
      result = *(unsigned int *)(a2 + 20);
      if ( (result & 1) == 0 )
        goto LABEL_62;
    }
    if ( v7 )
    {
      v11 = *(_QWORD *)(a2 + 544) - 136LL + 136LL * v7;
      v64 = *(_WORD *)(a2 + 230);
    }
    else
    {
      v11 = a2 + 240;
      v64 = *(_WORD *)(a2 + 228);
    }
    result = *(_QWORD *)(v11 + 32) + 16LL * v8;
    v63 = v11;
    v12 = _InterlockedExchange64((volatile __int64 *)result, 0LL);
    if ( !v12 )
      goto LABEL_62;
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
    v15 = *((_WORD *)v3 + 7);
    v58 = v14;
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
    if ( *(_BYTE *)(a2 + 17) )
    {
      if ( *(_BYTE *)(v12 + 2) == 40 )
        v18 = *(_QWORD *)(v12 + 104);
      else
        v18 = *(_QWORD *)(v12 + 56);
      if ( (v18 & 0xFFF) != 0 )
        v18 = v18 - (v18 & 0xFFF) + 4096;
      v19 = *(_DWORD *)(v18 + 4100);
      if ( v19 == -1 || (v20 = *(_DWORD *)(a2 + 148), v21 = 0LL, !v20) )
      {
LABEL_38:
        v61 = 0LL;
      }
      else
      {
        while ( 1 )
        {
          v22 = *(_QWORD *)(a2 + 8 * v21 + 1184);
          v61 = v22;
          if ( v22 )
          {
            if ( *(_DWORD *)(v22 + 16) == v19 )
              break;
          }
          v21 = (unsigned int)(v21 + 1);
          if ( (unsigned int)v21 >= v20 )
            goto LABEL_38;
        }
      }
      v23 = *((unsigned __int16 *)v3 + 7);
      v24 = v3[2];
      v25 = *v3;
      v26 = *((unsigned __int16 *)v3 + 6);
      v27 = L"NVM Command Completion";
      if ( (*(_BYTE *)(v18 + 4245) & 1) != 0 )
        v27 = L"Admin Command Completion";
      v57 = 0LL;
      v56 = 0LL;
      v55 = 0LL;
      v54 = 0LL;
      v53 = v24;
      v52 = L"DW2";
      v51 = v25;
      v50 = L"DW0";
      v49 = v23;
      v48 = L"Complete Status";
      v47 = (v23 >> 9) & 7;
      v46 = L"Status.SCT";
      v45 = (unsigned __int8)(v23 >> 1);
      v44 = L"Status.SC";
      v43 = v26;
      v42 = L"CID";
      v41 = v12;
      v40 = 0;
      v39 = 4;
      v38 = 16LL;
      v37 = v27;
      StorPortExtendedFunction(60LL, a2, v61, 4LL);
    }
    v28 = *(void (__fastcall **)(__int64, __int64, unsigned int *))(v13 + 4216);
    if ( v28 )
      v28(a2, v12, v3);
    else
      *(_BYTE *)(v13 + 4245) |= 8u;
    if ( *(_QWORD *)(v13 + 4160) )
    {
      v29 = 0LL;
      StorPortExtendedFunction(47LL, a2, &v59, &v60);
      if ( *(_BYTE *)(a2 + 17) )
      {
        v30 = *(_QWORD *)(v13 + 4160);
        if ( v60 >= v30 && v59 )
          v29 = 10000 * (1000 * ((v60 - v30) % v59) % v59) / v59
              + 10000 * (1000 * ((v60 - v30) % v59) / v59 + 1000 * ((v60 - v30) / v59));
        StorPortNotification(4102LL, a2, v29, v12);
      }
      if ( (*(_DWORD *)(a2 + 88) & 2) != 0 )
      {
        *(_QWORD *)(v13 + 4184) = v62;
        *(_QWORD *)(v13 + 4192) = v60;
        RecordCommandTimingHistory(a2, v12, v59);
      }
    }
    if ( (*(_BYTE *)(v13 + 4245) & 8) != 0 )
      NVMeRequestComplete(a2, v12);
    v31 = v63;
    ++*(_DWORD *)(v63 + 132);
    _InterlockedDecrement16((volatile signed __int16 *)(v31 + 128));
    v32 = *(unsigned __int16 *)(a3 + 98);
    if ( v32 >= v64 - 1 )
    {
      v33 = *(_WORD *)(a3 + 100) == 1;
      *(_WORD *)(a3 + 98) = 0;
      *(_WORD *)(a3 + 100) = !v33;
    }
    else
    {
      *(_WORD *)(a3 + 98) = v32 + 1;
    }
    v6 = v65 + 1;
    v3 = (unsigned int *)(*(_QWORD *)a3 + 16LL * *(unsigned __int16 *)(a3 + 98));
    ++v65;
  }
  result = *(unsigned __int16 *)(a3 + 98);
  *(_WORD *)(a3 + 132) = result;
  v34 = *(_OWORD *)v3;
  *(_WORD *)(a3 + 128) = v6;
  *(_OWORD *)(a3 + 152) = v34;
  if ( v6 )
  {
    v35 = (unsigned __int16)result;
    result = *(_QWORD *)(a3 + 16);
    *(_DWORD *)result = v35;
    _InterlockedOr(v36, 0);
  }
LABEL_62:
  if ( *(_BYTE *)(a2 + 18) == 1 )
  {
    result = (unsigned int)(*(_DWORD *)(a2 + 12) - 1);
    if ( (unsigned int)result <= 1 )
    {
      result = *(_QWORD *)(a2 + 112);
      *(_DWORD *)(result + 16) = 1 << *(_BYTE *)(a3 + 96);
      _InterlockedOr(v36, 0);
      *(_BYTE *)(a2 + 18) = 0;
    }
  }
  return result;
}
