/*
 * XREFs of NVMeCompletionDpcRoutine @ 0x1C00117F0
 * Callers:
 *     ProcessCompletionQueues @ 0x1C0011D00 (ProcessCompletionQueues.c)
 * Callees:
 *     NVMeRequestComplete @ 0x1C00028FC (NVMeRequestComplete.c)
 *     RecordCommandTimingHistory @ 0x1C000DEC8 (RecordCommandTimingHistory.c)
 *     NVMeMapError @ 0x1C0012230 (NVMeMapError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014020 (_guard_dispatch_icall_nop.c)
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
  unsigned __int8 v14; // cl
  __int16 v15; // ax
  __int64 v16; // r12
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r12
  int v20; // r8d
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r10
  const wchar_t *v28; // rax
  void (__fastcall *v29)(__int64, __int64, unsigned int *); // rax
  unsigned __int64 v30; // r14
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  int v33; // ecx
  unsigned __int16 v34; // cx
  __int16 v35; // dx
  bool v36; // zf
  __int128 v37; // xmm0
  _DWORD *v38; // rcx
  signed __int32 v39[8]; // [rsp+0h] [rbp-D9h] BYREF
  const wchar_t *v40; // [rsp+20h] [rbp-B9h]
  __int64 v41; // [rsp+28h] [rbp-B1h]
  int v42; // [rsp+30h] [rbp-A9h]
  int v43; // [rsp+38h] [rbp-A1h]
  __int64 v44; // [rsp+40h] [rbp-99h]
  const wchar_t *v45; // [rsp+48h] [rbp-91h]
  __int64 v46; // [rsp+50h] [rbp-89h]
  const wchar_t *v47; // [rsp+58h] [rbp-81h]
  __int64 v48; // [rsp+60h] [rbp-79h]
  const wchar_t *v49; // [rsp+68h] [rbp-71h]
  __int64 v50; // [rsp+70h] [rbp-69h]
  const wchar_t *v51; // [rsp+78h] [rbp-61h]
  unsigned __int64 v52; // [rsp+80h] [rbp-59h]
  const wchar_t *v53; // [rsp+88h] [rbp-51h]
  __int64 v54; // [rsp+90h] [rbp-49h]
  const wchar_t *v55; // [rsp+98h] [rbp-41h]
  __int64 v56; // [rsp+A0h] [rbp-39h]
  __int64 v57; // [rsp+A8h] [rbp-31h]
  __int64 v58; // [rsp+B0h] [rbp-29h]
  __int64 v59; // [rsp+B8h] [rbp-21h]
  __int64 v60; // [rsp+C0h] [rbp-19h]
  int v61; // [rsp+D0h] [rbp-9h]
  int v62; // [rsp+D4h] [rbp-5h]
  unsigned __int64 v63; // [rsp+D8h] [rbp-1h] BYREF
  unsigned __int64 v64; // [rsp+E0h] [rbp+7h] BYREF
  __int64 v65; // [rsp+E8h] [rbp+Fh]
  __int64 v66; // [rsp+F0h] [rbp+17h] BYREF
  __int64 v67; // [rsp+F8h] [rbp+1Fh]
  unsigned __int16 v68; // [rsp+148h] [rbp+6Fh]
  __int16 v69; // [rsp+150h] [rbp+77h]

  v3 = (unsigned int *)(*(_QWORD *)a3 + 16LL * *(unsigned __int16 *)(a3 + 98));
  v6 = 0;
  v69 = 0;
  v64 = 0LL;
  v63 = 0LL;
  v66 = 0LL;
  if ( *(_BYTE *)(a2 + 17) || (*(_DWORD *)(a2 + 88) & 2) != 0 )
    StorPortExtendedFunction(47LL, a2, &v63, &v66);
  if ( (*((_WORD *)v3 + 7) & 1) == *(_WORD *)(a3 + 100) )
  {
LABEL_59:
    result = *(unsigned __int16 *)(a3 + 98);
    *(_WORD *)(a3 + 132) = result;
    v37 = *(_OWORD *)v3;
    *(_WORD *)(a3 + 128) = v6;
    *(_OWORD *)(a3 + 152) = v37;
    if ( v6 )
    {
      v38 = *(_DWORD **)(a3 + 16);
      result = (unsigned __int16)result;
      v62 = result;
      *v38 = (unsigned __int16)result;
      _InterlockedOr(v39, 0);
    }
  }
  else
  {
    while ( 1 )
    {
      v7 = *((_WORD *)v3 + 5);
      v8 = *((_WORD *)v3 + 6);
      v9 = *((_WORD *)v3 + 4);
      v61 = 0;
      if ( *(_WORD *)(a3 + 96) )
      {
        result = *(unsigned int *)(a2 + 20);
        if ( (result & 1) == 0 )
          break;
      }
      if ( v7 )
      {
        v11 = *(_QWORD *)(a2 + 552) - 136LL + 136LL * v7;
        v68 = *(_WORD *)(a2 + 238);
      }
      else
      {
        v11 = a2 + 248;
        v68 = *(_WORD *)(a2 + 236);
      }
      result = *(_QWORD *)(v11 + 32) + 16LL * v8;
      v67 = v11;
      v12 = _InterlockedExchange64((volatile __int64 *)result, 0LL);
      if ( !v12 )
        break;
      if ( *(_BYTE *)(v12 + 2) == 40 )
        v13 = *(_QWORD *)(v12 + 104);
      else
        v13 = *(_QWORD *)(v12 + 56);
      if ( (v13 & 0xFFF) != 0 )
        v13 = v13 - (v13 & 0xFFF) + 4096;
      *(_WORD *)(v11 + 46) = v9;
      if ( *(_BYTE *)(v12 + 2) == 40 )
        v14 = *(_BYTE *)(*(unsigned int *)(v12 + 52) + v12 + 10);
      else
        v14 = *(_BYTE *)(v12 + 7);
      v15 = *((_WORD *)v3 + 7);
      v16 = v14;
      v61 = v14;
      *(_WORD *)(v13 + 4250) = v15;
      if ( (v15 & 0xE00) != 0 || (v15 & 0x1FE) != 0 )
      {
        NVMeMapError(v12);
        if ( *(_DWORD *)(a2 + 156) > (unsigned int)v16 )
        {
          v18 = *(_QWORD *)(a2 + 8 * v16 + 1224);
          if ( v18 )
            ++*(_DWORD *)(v18 + 32);
        }
      }
      else
      {
        *(_BYTE *)(v12 + 3) = 1;
        if ( *(_DWORD *)(a2 + 156) > (unsigned int)v14 )
        {
          v17 = *(_QWORD *)(a2 + 8LL * v14 + 1224);
          if ( v17 )
            ++*(_QWORD *)(v17 + 24);
        }
      }
      if ( *(_BYTE *)(a2 + 17) )
      {
        if ( *(_BYTE *)(v12 + 2) == 40 )
          v19 = *(_QWORD *)(v12 + 104);
        else
          v19 = *(_QWORD *)(v12 + 56);
        if ( (v19 & 0xFFF) != 0 )
          v19 = v19 - (v19 & 0xFFF) + 4096;
        v20 = *(_DWORD *)(v19 + 4100);
        if ( v20 == -1 || (v21 = *(_DWORD *)(a2 + 156), v22 = 0LL, !v21) )
        {
LABEL_38:
          v65 = 0LL;
        }
        else
        {
          while ( 1 )
          {
            v23 = *(_QWORD *)(a2 + 8 * v22 + 1224);
            v65 = v23;
            if ( v23 )
            {
              if ( *(_DWORD *)(v23 + 16) == v20 )
                break;
            }
            v22 = (unsigned int)(v22 + 1);
            if ( (unsigned int)v22 >= v21 )
              goto LABEL_38;
          }
        }
        v24 = *((unsigned __int16 *)v3 + 7);
        v25 = v3[2];
        v26 = *v3;
        v27 = *((unsigned __int16 *)v3 + 6);
        v28 = L"NVM Command Completion";
        if ( (*(_BYTE *)(v19 + 4253) & 1) != 0 )
          v28 = L"Admin Command Completion";
        v60 = 0LL;
        v59 = 0LL;
        v58 = 0LL;
        v57 = 0LL;
        v56 = v25;
        v55 = L"DW2";
        v54 = v26;
        v53 = L"DW0";
        v52 = v24;
        v51 = L"Complete Status";
        v50 = (v24 >> 9) & 7;
        v49 = L"Status.SCT";
        v48 = (unsigned __int8)(v24 >> 1);
        v47 = L"Status.SC";
        v46 = v27;
        v45 = L"CID";
        v44 = v12;
        v43 = 0;
        v42 = 4;
        v41 = 16LL;
        v40 = v28;
        StorPortExtendedFunction(60LL, a2, v65, 4LL);
      }
      v29 = *(void (__fastcall **)(__int64, __int64, unsigned int *))(v13 + 4224);
      if ( v29 )
        v29(a2, v12, v3);
      else
        *(_BYTE *)(v13 + 4253) |= 8u;
      if ( *(_QWORD *)(v13 + 4160) )
      {
        v30 = 0LL;
        StorPortExtendedFunction(47LL, a2, &v63, &v64);
        if ( *(_BYTE *)(a2 + 17) )
        {
          v31 = *(_QWORD *)(v13 + 4160);
          if ( v64 >= v31 && v63 )
            v30 = 10000 * (1000 * ((v64 - v31) % v63) % v63) / v63
                + 10000 * (1000 * ((v64 - v31) % v63) / v63 + 1000 * ((v64 - v31) / v63));
          StorPortNotification(4102LL, a2, v30, v12);
        }
        if ( (*(_DWORD *)(a2 + 88) & 2) != 0 )
        {
          *(_QWORD *)(v13 + 4184) = v66;
          *(_QWORD *)(v13 + 4192) = v64;
          RecordCommandTimingHistory(a2, v12, v63);
        }
      }
      if ( (*(_BYTE *)(v13 + 4253) & 8) != 0 )
        NVMeRequestComplete(a2, v12);
      v32 = v67;
      ++*(_DWORD *)(v67 + 132);
      _InterlockedDecrement16((volatile signed __int16 *)(v32 + 128));
      v33 = *(unsigned __int16 *)(a3 + 98);
      if ( v33 >= v68 - 1 )
      {
        v36 = *(_WORD *)(a3 + 100) == 1;
        *(_WORD *)(a3 + 98) = 0;
        v34 = 0;
        v35 = !v36;
        *(_WORD *)(a3 + 100) = v35;
      }
      else
      {
        v34 = v33 + 1;
        *(_WORD *)(a3 + 98) = v34;
        v35 = *(_WORD *)(a3 + 100);
      }
      v6 = v69 + 1;
      v3 = (unsigned int *)(*(_QWORD *)a3 + 16LL * v34);
      ++v69;
      if ( (*((_WORD *)v3 + 7) & 1) == v35 )
        goto LABEL_59;
    }
  }
  if ( *(_BYTE *)(a2 + 18) == 1 )
  {
    result = (unsigned int)(*(_DWORD *)(a2 + 12) - 1);
    if ( (unsigned int)result <= 1 )
    {
      result = *(_QWORD *)(a2 + 120);
      *(_DWORD *)(result + 16) = 1 << *(_BYTE *)(a3 + 96);
      _InterlockedOr(v39, 0);
      *(_BYTE *)(a2 + 18) = 0;
    }
  }
  return result;
}
