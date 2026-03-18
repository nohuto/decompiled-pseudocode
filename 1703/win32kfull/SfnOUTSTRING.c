/*
 * XREFs of SfnOUTSTRING @ 0x1C00C4980
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C00C4FC8 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x1C00C511C (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall SfnOUTSTRING(
        __int64 *a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v9; // r13
  unsigned int v10; // ecx
  unsigned int v11; // eax
  unsigned __int64 v12; // rsi
  ULONG_PTR v13; // r14
  __int64 v14; // rax
  unsigned int *v15; // rdi
  unsigned int **v16; // r12
  __int64 v17; // r9
  unsigned int *v18; // rax
  unsigned __int64 *ThreadWin32Thread; // rax
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // edi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 *v30; // rdi
  __int64 v31; // rdi
  __int64 v32; // rdi
  __int64 *v33; // rax
  _BYTE *v35; // rax
  unsigned __int64 v36; // rcx
  __int64 v37; // xmm1_8
  struct _LARGE_STRING *v38; // rsi
  int v39; // [rsp+30h] [rbp-3A8h]
  int v40; // [rsp+34h] [rbp-3A4h]
  int v41; // [rsp+38h] [rbp-3A0h]
  __int64 v43; // [rsp+48h] [rbp-390h]
  int v45[5]; // [rsp+54h] [rbp-384h] BYREF
  struct _LARGE_STRING *v46; // [rsp+68h] [rbp-370h]
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-368h] BYREF
  unsigned __int64 v48; // [rsp+78h] [rbp-360h] BYREF
  PVOID *v49; // [rsp+80h] [rbp-358h]
  _QWORD v50[4]; // [rsp+88h] [rbp-350h] BYREF
  __int64 v51; // [rsp+A8h] [rbp-330h]
  ULONG_PTR v52; // [rsp+B0h] [rbp-328h] BYREF
  __int128 v53; // [rsp+B8h] [rbp-320h]
  __int64 v54; // [rsp+C8h] [rbp-310h]
  __int128 v55; // [rsp+D0h] [rbp-308h] BYREF
  __int64 v56; // [rsp+E0h] [rbp-2F8h]
  _QWORD v57[4]; // [rsp+110h] [rbp-2C8h] BYREF
  _BYTE v58[96]; // [rsp+130h] [rbp-2A8h] BYREF
  _BYTE v59[512]; // [rsp+190h] [rbp-248h] BYREF

  v46 = (struct _LARGE_STRING *)a4;
  v40 = a7 & 1;
  v41 = 0;
  v49 = (PVOID *)v58;
  v51 = gptiCurrent;
  if ( a1 )
    v9 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v9 = 0LL;
  v10 = *(_DWORD *)(a4 + 4) & 0x7FFFFFFF;
  v11 = v10 + 2;
  v12 = 0xFFFFFFFFLL;
  if ( v10 + 2 >= v10 )
    v12 = v11;
  v39 = v12;
  if ( v11 < v10 )
    goto LABEL_76;
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x8000000) == 0 && *(_DWORD *)(a4 + 4) >= 0x80000000 && (a7 & 1) == 0 )
  {
    v12 *= 2LL;
    if ( v12 > 0xFFFFFFFF )
      goto LABEL_76;
    v39 = v12;
  }
  v13 = ((unsigned int)v12 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  RegionSize = v13;
  if ( v13 > 0x800 )
  {
    v14 = Win32AllocPoolWithQuotaZInit(104LL, 1667461973LL);
    v15 = (unsigned int *)v14;
    if ( v14 )
    {
      v16 = (unsigned int **)(v14 + 32);
      *(_QWORD *)(v14 + 32) = 0LL;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v14 + 32), 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
      {
        v18 = *v16;
        goto LABEL_12;
      }
      Win32FreePool(v15);
    }
    return 0LL;
  }
  if ( v13 + 104 > 0x200 )
  {
    v15 = (unsigned int *)Win32AllocPoolWithQuotaZInit((unsigned int)(v13 + 104), 1667461973LL);
    if ( !v15 )
      return 0LL;
  }
  else
  {
    v15 = (unsigned int *)v59;
    memset(v59, 0, sizeof(v59));
  }
  v18 = v15 + 26;
  v16 = (unsigned int **)(v15 + 8);
  *((_QWORD *)v15 + 4) = 0LL;
LABEL_12:
  *v15 = 104;
  *((_QWORD *)v15 + 2) = v18;
  v15[1] = RegionSize;
  v15[2] = 0;
  v15[6] = 96;
  v49 = (PVOID *)v15;
  if ( v15 != (unsigned int *)v58 && v15 != (unsigned int *)v59 )
  {
    v12 = 0LL;
    ThreadWin32Thread = (unsigned __int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v12 = *ThreadWin32Thread;
    v50[0] = *(_QWORD *)(v12 + 16);
    *(_QWORD *)(v12 + 16) = v50;
    v50[1] = v15;
    v50[2] = Win32FreePool;
    LODWORD(v12) = v39;
  }
  *((_QWORD *)v15 + 5) = v9;
  v15[12] = a2;
  if ( (a7 & 1) == 0 )
    goto LABEL_18;
  if ( *((_DWORD *)v46 + 1) < 0x80000000 )
  {
    *((_QWORD *)v15 + 7) = 2 * a3;
    *(_DWORD *)(gptiCurrent + 440LL) |= 0x8000000u;
    v41 = 1;
    goto LABEL_20;
  }
  if ( (a7 & 1) == 0 )
  {
LABEL_18:
    if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x8000000) != 0 )
    {
      *((_QWORD *)v15 + 7) = a3 >> 1;
      *(_DWORD *)(gptiCurrent + 440LL) &= ~0x8000000u;
      goto LABEL_20;
    }
  }
  *((_QWORD *)v15 + 7) = a3;
LABEL_20:
  *((_QWORD *)v15 + 8) = a5;
  *((_QWORD *)v15 + 9) = a6;
  v20 = (__int64)(v15 + 20);
  if ( (unsigned int)v12 <= v15[1] )
  {
    v21 = *((_QWORD *)v15 + 2);
    *((_QWORD *)v15 + 2) = v13 + v21;
    if ( *v16 )
    {
      *(_QWORD *)v20 = v21;
    }
    else
    {
      *(_QWORD *)v20 = v21 - (_QWORD)v15;
      v20 = 80LL;
      *(unsigned int *)((char *)&v15[v15[2]++] + v15[6]) = 80;
    }
    v15[22] = v12;
    v57[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v57;
    v57[1] = a1;
    if ( a1 )
      ++*((_DWORD *)a1 + 2);
    v22 = v51;
    v23 = *(_QWORD *)(v51 + 432);
    v53 = *(_OWORD *)(v23 + 64);
    v54 = *(_QWORD *)(v23 + 80);
    *(_QWORD *)(v23 + 72) = v9;
    v24 = 0LL;
    if ( a1 )
      v24 = *a1;
    *(_QWORD *)(*(_QWORD *)(v22 + 432) + 64LL) = v24;
    v25 = 0LL;
    if ( a1 )
      v25 = a1[35];
    *(_QWORD *)(*(_QWORD *)(v22 + 432) + 80LL) = v25;
    if ( gdwInAtomicOperation )
    {
      v25 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v25, gdwInAtomicOperation, v20, v17);
    EtwTraceBeginCallback(35LL);
    *((_QWORD *)v15 + 2) = 0LL;
    v26 = KeUserModeCallback(35LL, v15, *v15, &v48, v45);
    EtwTraceEndCallback(35LL);
    EnterCrit(0LL, 1LL);
    ThreadUnlock1(v28, v27);
    v29 = *(_QWORD *)(v22 + 432);
    *(_OWORD *)(v29 + 64) = v53;
    *(_QWORD *)(v29 + 80) = v54;
    if ( v26 >= 0 && v45[0] == 24 )
    {
      v30 = (__int64 *)v48;
      if ( v48 + 8 < v48 || v48 + 8 > W32UserProbeAddress )
        v30 = (__int64 *)W32UserProbeAddress;
      v31 = *v30;
      v43 = v31;
      if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
      {
        if ( v31 )
        {
          v36 = v48;
          if ( v48 + 24 < v48 || v48 + 24 > W32UserProbeAddress )
            v36 = W32UserProbeAddress;
          v37 = *(_QWORD *)(v36 + 16);
          v55 = *(_OWORD *)v36;
          v56 = v37;
          v38 = v46;
          v31 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v55, v31, *((_DWORD *)v46 + 1) >> 31, v40);
          v43 = v31;
          CopyOutputString((struct _CALLBACKSTATUS *)&v55, v38, a3, v40);
        }
        else if ( a3 )
        {
          v35 = (_BYTE *)*((_QWORD *)v46 + 1);
          if ( *((_DWORD *)v46 + 1) >= 0x80000000 )
            *v35 = 0;
          else
            *(_WORD *)v35 = 0;
        }
      }
      goto LABEL_38;
    }
  }
LABEL_76:
  v31 = 0LL;
  v43 = 0LL;
LABEL_38:
  if ( v49 != (PVOID *)v58 && v49 != (PVOID *)v59 )
  {
    if ( v49[4] )
    {
      v52 = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v49 + 4, &v52, 0x8000u);
    }
    v32 = 0LL;
    v33 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v33 )
      v32 = *v33;
    *(_QWORD *)(v32 + 16) = v50[0];
    _guard_dispatch_icall_fptr();
    v31 = v43;
  }
  if ( v41 )
    *(_DWORD *)(gptiCurrent + 440LL) &= ~0x8000000u;
  return v31;
}
