/*
 * XREFs of HMAllocObject @ 0x1C003E6C0
 * Callers:
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C0063DEC (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0071C80 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C0072B20 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     UserAddBaseWindowHandle @ 0x1C00EBD30 (UserAddBaseWindowHandle.c)
 * Callees:
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C0006C54 (-HMGrowHandleTable@@YAHXZ.c)
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0026FA0 (Win32AllocPoolWithQuotaZInit.c)
 *     LockObjectAssignment @ 0x1C003C770 (LockObjectAssignment.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall HMAllocObject(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned int a4)
{
  size_t v6; // rdi
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int16 v9; // r12
  int v10; // r14d
  void **v11; // rax
  void **v12; // rbx
  _QWORD *v13; // r14
  __int64 v14; // r15
  char *v15; // rdi
  bool v16; // cc
  __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  unsigned int v19; // eax
  __int64 result; // rax
  char *v21; // rax
  __int64 v22; // rdx
  void **v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  char *v27; // rcx
  __int64 v28; // rdx
  void **v29; // rax
  _BYTE *Heap; // rax
  __int64 v31; // rcx
  void **v32; // rax
  int v33; // [rsp+24h] [rbp-54h]
  __int64 *v34; // [rsp+28h] [rbp-50h]
  __int64 v35; // [rsp+30h] [rbp-48h]

  v6 = a4;
  v33 = 0;
  v7 = 0LL;
  v8 = 3LL * a3;
  v9 = *((_WORD *)&gahti + 12 * a3 + 6);
  v35 = v8;
  if ( (v9 & 3) != 0 )
  {
    v7 = *(_QWORD *)(a1 + 400);
    if ( *(_DWORD *)(v7 + 68) >= gUserProcessHandleQuota )
    {
      v31 = 1158LL;
      goto LABEL_73;
    }
  }
  v10 = 0;
  while ( 1 )
  {
    if ( a3 != 1 && qword_1C018FA78 )
    {
      v34 = &qword_1C018FA78;
      goto LABEL_7;
    }
    if ( qword_1C018FA70 )
      break;
    if ( !(unsigned int)HMGrowHandleTable() )
      return 0LL;
  }
  v34 = &qword_1C018FA70;
LABEL_7:
  if ( (v9 & 0x10) != 0 && a2 )
  {
    if ( !*((_DWORD *)&gahti + 2 * v8 + 4) )
    {
      if ( (int)IsDesktopAllocSupported() < 0 )
        v12 = 0LL;
      else
        v12 = (void **)DesktopAlloc(a2, (unsigned int)v6, (a3 << 16) | 5u);
      if ( v12 )
      {
        LockObjectAssignment(v12 + 3, (void *)a2);
        v12[4] = v12;
        v21 = (char *)v12 - *(_QWORD *)(a2 + 128);
LABEL_45:
        v12[6] = v21;
        v12[5] = 0LL;
        goto LABEL_18;
      }
      goto LABEL_72;
    }
    if ( (int)IsDesktopAllocSupported() >= 0 )
    {
      v22 = *((unsigned int *)&gahti + 2 * v8 + 2);
      if ( (v9 & 3) != 0 )
        v23 = (void **)Win32AllocPoolWithQuotaZInit(v6, v22);
      else
        v23 = (void **)Win32AllocPoolZInit(v6, v22);
      v12 = v23;
      if ( !v23 )
        goto LABEL_72;
      v24 = DesktopAlloc(a2, *((unsigned int *)&gahti + 2 * v8 + 4), (a3 << 16) | 5u);
      v12[5] = (void *)v24;
      if ( v24 )
      {
        LockObjectAssignment(v12 + 3, (void *)a2);
        v27 = (char *)v12[5];
        v12[4] = v12;
        v12[6] = &v27[-*(_QWORD *)(a2 + 128)];
        goto LABEL_18;
      }
LABEL_71:
      Win32FreePool(v12, v25, v26);
      goto LABEL_72;
    }
    v12 = 0LL;
LABEL_18:
    if ( v12 )
    {
      v13 = gpKernelHandleTable;
      v14 = *v34;
      v15 = (char *)qword_1C018E9B8 + 32 * *v34;
      v16 = (unsigned int)*v34 <= giheLast;
      v17 = 3 * *v34;
      *v34 = *((_QWORD *)gpKernelHandleTable + 3 * *v34);
      if ( !v16 )
        giheLast = v14;
      v15[24] = a3;
      v13[v17] = v12;
      if ( (v9 & 0x40) != 0 )
      {
        *(_QWORD *)v15 = v12[6];
      }
      else if ( (v9 & 0x10) != 0 && a2 )
      {
        *(_QWORD *)v15 = v12[6];
        *((_QWORD *)v15 + 2) = ***(_QWORD ***)(a2 + 8);
      }
      else
      {
        *(_QWORD *)v15 = 0LL;
      }
      if ( v33 )
        v15[25] |= 0x40u;
      if ( (v9 & 2) != 0 )
      {
        *((_DWORD *)v12 + 4) = 0;
        v13[v17 + 1] = *(_QWORD *)(a1 + 400);
        *((_QWORD *)v15 + 1) = PsGetProcessId(**(PEPROCESS **)(a1 + 400));
        if ( (v9 & 4) != 0 )
          v12[3] = *(void **)(a1 + 400);
      }
      else if ( (v9 & 1) != 0 )
      {
        v13[v17 + 1] = a1;
        *((_QWORD *)v15 + 1) = PsGetThreadId(*(PETHREAD *)a1);
        v12[2] = (void *)v13[v17 + 1];
      }
      v18 = (int)v14 | (unsigned __int64)(*(unsigned __int16 *)((char *)qword_1C018E9B8
                                                              + v14 * (unsigned int)dword_1C018E9C0
                                                              + 26) << 16);
      *v12 = (void *)v18;
      if ( *((_DWORD *)&gahti + 2 * v35 + 4) )
        *(_QWORD *)v12[5] = v18;
      if ( v7 )
      {
        v19 = ++*(_DWORD *)(v7 + 68);
        if ( v19 > *(_DWORD *)(v7 + 72) )
          *(_DWORD *)(v7 + 72) = v19;
      }
      if ( ++giheCount > (unsigned int)giheCountPeak )
        giheCountPeak = giheCount;
      result = v13[v17];
      v13[v17 + 2] = 0LL;
      return result;
    }
    goto LABEL_72;
  }
  if ( (v9 & 0x40) == 0 )
  {
    if ( !a2 && (v9 & 0x20) != 0 )
      v10 = 1;
    v33 = v10;
    if ( (v9 & 8) == 0 || v10 )
    {
      v11 = (void **)Win32AllocPool(v6, *((unsigned int *)&gahti + 2 * v8 + 2));
      v12 = v11;
      if ( v11 )
        memset(v11, 0, v6);
    }
    else
    {
      v12 = (void **)Win32AllocPoolWithQuotaZInit(v6, *((_DWORD *)&gahti + 2 * v8 + 2));
    }
    if ( !v12 )
      goto LABEL_72;
    if ( (v9 & 0x100) != 0 )
    {
      LockObjectAssignment(v12 + 3, (void *)a2);
      v12[4] = v12;
    }
    goto LABEL_18;
  }
  if ( *((_DWORD *)&gahti + 2 * v8 + 4) )
  {
    v28 = *((unsigned int *)&gahti + 2 * v8 + 2);
    if ( (v9 & 3) != 0 )
      v29 = (void **)Win32AllocPoolWithQuotaZInit(v6, v28);
    else
      v29 = (void **)Win32AllocPoolZInit(v6, v28);
    v12 = v29;
    if ( !v29 )
      goto LABEL_72;
    Heap = RtlAllocateHeap(gpvSharedAlloc, 0, *((unsigned int *)&gahti + 2 * v8 + 4));
    v12[5] = Heap;
    if ( !Heap )
      goto LABEL_71;
    v12[3] = 0LL;
    v12[4] = 0LL;
    v12[6] = (void *)(Heap - (_BYTE *)gpvSharedBase);
    goto LABEL_18;
  }
  v32 = (void **)RtlAllocateHeap(gpvSharedAlloc, 0, v6);
  v12 = v32;
  if ( v32 )
  {
    v32[3] = 0LL;
    v32[4] = 0LL;
    v21 = (char *)((char *)v32 - (_BYTE *)gpvSharedBase);
    goto LABEL_45;
  }
LABEL_72:
  v31 = 8LL;
LABEL_73:
  UserSetLastError(v31);
  return 0LL;
}
