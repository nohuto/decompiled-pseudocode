/*
 * XREFs of SfnINLPCREATESTRUCT @ 0x1C003A530
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0035660 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C003AC14 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00C3EE0 (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C00C55EC (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     _W32ExceptionHandler @ 0x1C0225268 (_W32ExceptionHandler.c)
 */

__int64 __fastcall SfnINLPCREATESTRUCT(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v8; // r13
  __int64 *v9; // rsi
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r15
  unsigned int v12; // r9d
  int v13; // r12d
  unsigned int *v14; // rbx
  unsigned __int64 v15; // rcx
  unsigned int v16; // ecx
  unsigned __int64 v17; // rcx
  unsigned int v18; // r8d
  unsigned int v19; // ecx
  unsigned int v20; // eax
  int v21; // r13d
  __int64 v22; // rsi
  ULONG_PTR v23; // rdx
  __int64 v24; // rax
  _QWORD *v25; // r15
  __int64 v26; // r8
  __int64 v27; // r9
  CHAR *v29; // rdx
  void **v30; // r9
  struct _CAPTUREBUF *v31; // rcx
  unsigned int v32; // r8d
  unsigned int v33; // r8d
  int v34; // eax
  _DWORD *v35; // rax
  int v36; // r8d
  void **v37; // r9
  unsigned int v38; // r8d
  CHAR *v39; // rdx
  int v40; // eax
  unsigned int v41; // r8d
  ULONG_PTR v42; // r14
  __int64 v43; // rax
  __int64 v44; // rcx
  __int64 v45; // rcx
  int v46; // edi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 *v50; // rcx
  __int64 v51; // rdi
  int v52; // [rsp+34h] [rbp-384h] BYREF
  _DWORD *v53; // [rsp+38h] [rbp-380h]
  ULONG_PTR v54; // [rsp+40h] [rbp-378h] BYREF
  __int16 v55; // [rsp+48h] [rbp-370h]
  int v56; // [rsp+4Ch] [rbp-36Ch] BYREF
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-368h] BYREF
  unsigned __int64 v58; // [rsp+58h] [rbp-360h]
  __int64 v59; // [rsp+60h] [rbp-358h]
  __int64 *v60; // [rsp+68h] [rbp-350h]
  __int128 v61; // [rsp+70h] [rbp-348h]
  _QWORD v62[3]; // [rsp+80h] [rbp-338h] BYREF
  _QWORD v63[3]; // [rsp+98h] [rbp-320h] BYREF
  _QWORD v64[4]; // [rsp+B0h] [rbp-308h] BYREF
  _DWORD v65[44]; // [rsp+D0h] [rbp-2E8h] BYREF
  _BYTE v66[512]; // [rsp+180h] [rbp-238h] BYREF

  v8 = a3;
  *(_QWORD *)&v61 = a3;
  v52 = a2;
  v9 = a1;
  v60 = a1;
  LODWORD(v10) = 0;
  LODWORD(v11) = 0;
  v58 = 0LL;
  v12 = 0;
  v13 = a7 & 1;
  v14 = v65;
  v54 = gptiCurrent;
  if ( a1 )
    v59 = (__int64)a1 - *(_QWORD *)(gptiCurrent + 424LL);
  else
    v59 = 0LL;
  if ( a4 )
  {
    v15 = *(_QWORD *)(a4 + 56);
    if ( v15 && (*(_DWORD *)(a4 + 84) >> 31 != v13 || v15 >= (unsigned __int64)MmSystemRangeStart) )
    {
      v16 = *(_DWORD *)(a4 + 80);
      if ( v16 + 2 < v16 )
        goto LABEL_88;
      LODWORD(v10) = v16 + 2;
      if ( *(_DWORD *)(a4 + 84) >= 0x80000000 && (a7 & 1) == 0 )
      {
        v10 = 2LL * (v16 + 2);
        if ( v10 > 0xFFFFFFFF )
          goto LABEL_88;
      }
      v12 = 1;
    }
    v17 = *(_QWORD *)(a4 + 64);
    if ( (v17 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v18 = *(_DWORD *)(a4 + 100);
      if ( v18 >> 31 != v13 || v17 >= (unsigned __int64)MmSystemRangeStart )
      {
        v19 = *(_DWORD *)(a4 + 96);
        v20 = v19 + 2;
        v11 = 0xFFFFFFFFLL;
        if ( v19 + 2 >= v19 )
          v11 = v20;
        v58 = v11;
        if ( v20 < v19 )
          goto LABEL_88;
        if ( v18 >= 0x80000000 && (a7 & 1) == 0 )
        {
          v11 *= 2LL;
          v58 = v11;
          if ( v11 > 0xFFFFFFFF )
            goto LABEL_88;
        }
        ++v12;
      }
    }
  }
  if ( (int)v11 + (int)v10 >= (unsigned int)v10 )
  {
    if ( v12 )
    {
      v21 = 8 * v12;
      v22 = 8 * v12 + 168;
      v23 = ((unsigned int)(v11 + v10) + 7LL * v12) & 0xFFFFFFFFFFFFFFF8uLL;
      RegionSize = v23;
      if ( v23 <= 0x800 )
      {
        if ( v22 + v23 <= 0x200 )
        {
          v14 = (unsigned int *)v66;
          memset(v66, 0, sizeof(v66));
        }
        else
        {
          v14 = (unsigned int *)Win32AllocPoolWithQuotaZInit((unsigned int)(v23 + v22), 1667461973LL);
          if ( !v14 )
            return 0LL;
        }
        *((_QWORD *)v14 + 2) = (char *)v14 + v22;
        *((_QWORD *)v14 + 4) = 0LL;
        *v14 = v22 + RegionSize;
      }
      else
      {
        v24 = Win32AllocPoolWithQuotaZInit((unsigned int)v22, 1667461973LL);
        v14 = (unsigned int *)v24;
        if ( !v24 )
          return 0LL;
        v25 = (_QWORD *)(v24 + 32);
        *(_QWORD *)(v24 + 32) = 0LL;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v24 + 32), 0LL, &RegionSize, 0x1000u, 4u) < 0 )
        {
          Win32FreePool(v14);
          return 0LL;
        }
        *((_QWORD *)v14 + 2) = *v25;
        *v14 = v22;
      }
      *(_QWORD *)(v14 + 1) = (unsigned int)RegionSize;
      v14[6] = v22 - v21;
      v53 = v14;
      v9 = v60;
      LODWORD(v11) = v58;
      v8 = v61;
    }
    else
    {
      v14 = v65;
      v53 = v65;
      memset(v65, 0, 0xA8uLL);
      v65[0] = 168;
    }
    if ( v14 != v65 && v14 != (unsigned int *)v66 )
      PushW32ThreadLock((__int64)v14, v64, (__int64)Win32FreePool);
    *((_QWORD *)v14 + 5) = v59;
    v14[12] = v52;
    *((_QWORD *)v14 + 7) = v8;
    *((_QWORD *)v14 + 8) = a4 != 0;
    if ( !a4 )
      goto LABEL_71;
    *(_DWORD *)(a4 + 52) = 0;
    *(_DWORD *)(a4 + 76) = 0;
    *(_OWORD *)(v14 + 18) = *(_OWORD *)a4;
    *(_OWORD *)(v14 + 22) = *(_OWORD *)(a4 + 16);
    *(_OWORD *)(v14 + 26) = *(_OWORD *)(a4 + 32);
    *(_OWORD *)(v14 + 30) = *(_OWORD *)(a4 + 48);
    *(_OWORD *)(v14 + 34) = *(_OWORD *)(a4 + 64);
    if ( !(_DWORD)v10 )
    {
LABEL_61:
      if ( (_DWORD)v11 )
      {
        v37 = (void **)(v14 + 34);
        v38 = *(_DWORD *)(a4 + 96);
        v39 = *(CHAR **)(a4 + 104);
        if ( *(_DWORD *)(a4 + 100) >= 0x80000000 )
        {
          if ( (a7 & 1) == 0 )
          {
            v40 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v14, v39, 2 * v38 + 2, v37);
LABEL_70:
            if ( v40 < 0 )
              goto LABEL_88;
            goto LABEL_71;
          }
          v41 = v38 + 1;
        }
        else
        {
          if ( (a7 & 1) != 0 )
          {
            v40 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v14, (PCWCH)v39, (v38 >> 1) + 1, v37);
            goto LABEL_70;
          }
          v41 = v38 + 2;
        }
        v40 = CaptureCallbackData((struct _CAPTUREBUF *)v14, v39, v41, v37);
        goto LABEL_70;
      }
LABEL_71:
      *((_QWORD *)v14 + 19) = a5;
      *((_QWORD *)v14 + 20) = a6;
      v63[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v63;
      v63[1] = v9;
      if ( v9 )
        ++*((_DWORD *)v9 + 2);
      v42 = v54;
      v43 = *(_QWORD *)(v54 + 432);
      v61 = *(_OWORD *)(v43 + 64);
      v54 = *(_QWORD *)(v43 + 80);
      *(_QWORD *)(v43 + 72) = v59;
      if ( v9 )
        v44 = *v9;
      else
        v44 = 0LL;
      *(_QWORD *)(*(_QWORD *)(v42 + 432) + 64LL) = v44;
      if ( v9 )
        v45 = v9[35];
      else
        v45 = 0LL;
      *(_QWORD *)(*(_QWORD *)(v42 + 432) + 80LL) = v45;
      if ( gdwInAtomicOperation )
      {
        v45 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v45, gdwInAtomicOperation, v26, v27);
      EtwTraceBeginCallback(10LL);
      *((_QWORD *)v14 + 2) = 0LL;
      v46 = KeUserModeCallback(10LL, v14, *v14, v62, &v56);
      EtwTraceEndCallback(10LL);
      EnterCrit(0LL, 1LL);
      ThreadUnlock1(v48, v47);
      v49 = *(_QWORD *)(v42 + 432);
      *(_OWORD *)(v49 + 64) = v61;
      *(_QWORD *)(v49 + 80) = v54;
      if ( v46 >= 0 && v56 == 24 )
      {
        v50 = (__int64 *)v62[0];
        if ( (unsigned __int64)(v62[0] + 8LL) < v62[0] || (unsigned __int64)(v62[0] + 8LL) > W32UserProbeAddress )
          v50 = (__int64 *)W32UserProbeAddress;
        v51 = *v50;
        v62[1] = *v50;
        goto LABEL_89;
      }
      goto LABEL_88;
    }
    if ( *(_DWORD *)(a4 + 84) >= 0x80000000 )
    {
      v35 = *(_DWORD **)(a4 + 56);
      if ( *(_BYTE *)v35 == 0xFF )
      {
        if ( (a7 & 1) != 0 )
        {
          v32 = 3;
          v29 = *(CHAR **)(a4 + 56);
        }
        else
        {
          v52 = ((unsigned __int16)(*v35 >> 8) << 16) | 0xFFFF;
          v32 = 4;
          v29 = (CHAR *)&v52;
        }
        v30 = (void **)(v14 + 32);
        v31 = (struct _CAPTUREBUF *)v14;
      }
      else
      {
        v30 = (void **)(v14 + 32);
        v36 = *(_DWORD *)(a4 + 80);
        v29 = *(CHAR **)(a4 + 88);
        v31 = (struct _CAPTUREBUF *)v14;
        if ( (a7 & 1) == 0 )
        {
          v34 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v14, v29, 2 * v36 + 2, v30);
LABEL_58:
          if ( v34 < 0 )
            goto LABEL_88;
          goto LABEL_61;
        }
        v32 = v36 + 1;
      }
    }
    else
    {
      v29 = *(CHAR **)(a4 + 56);
      v55 = *(_WORD *)v29;
      v30 = (void **)(v14 + 32);
      v31 = (struct _CAPTUREBUF *)v14;
      if ( v55 == -1 )
      {
        if ( (a7 & 1) != 0 )
        {
          ++v29;
          v32 = 3;
        }
        else
        {
          v32 = 4;
        }
      }
      else
      {
        v33 = *(_DWORD *)(a4 + 80);
        v29 = *(CHAR **)(a4 + 88);
        if ( (a7 & 1) != 0 )
        {
          v34 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v14, (PCWCH)v29, (v33 >> 1) + 1, v30);
          goto LABEL_58;
        }
        v32 = v33 + 2;
      }
    }
    v34 = CaptureCallbackData(v31, v29, v32, v30);
    goto LABEL_58;
  }
LABEL_88:
  v51 = 0LL;
LABEL_89:
  if ( v14 != v65 && v14 != (unsigned int *)v66 )
  {
    if ( *((_QWORD *)v14 + 4) )
    {
      v54 = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v14 + 4, &v54, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v64);
  }
  return v51;
}
