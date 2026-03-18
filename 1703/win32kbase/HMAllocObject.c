/*
 * XREFs of HMAllocObject @ 0x1C0040370
 * Callers:
 *     ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C00636C4 (-CreateMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0079840 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C007A6C0 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     UserAddBaseWindowHandle @ 0x1C00E66C0 (UserAddBaseWindowHandle.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0010920 (Win32AllocPoolZInit.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001DF70 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     LockObjectAssignment @ 0x1C0043540 (LockObjectAssignment.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     ?HMGrowHandleTable@@YAHXZ @ 0x1C0075754 (-HMGrowHandleTable@@YAHXZ.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall HMAllocObject(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned int a4)
{
  size_t v4; // rdi
  __int64 v5; // rbp
  __int64 v7; // r13
  __int16 v8; // r12
  int v9; // r14d
  __int64 *v10; // rsi
  _QWORD *v11; // rax
  _QWORD *v12; // rbx
  __int64 v13; // r14
  __int64 *v14; // rsi
  char *v15; // rdi
  bool v16; // cc
  unsigned __int64 v17; // rdx
  unsigned int v18; // eax
  char *v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdx
  _QWORD *v26; // rax
  _BYTE *Heap; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rax
  int v30; // [rsp+24h] [rbp-44h]
  __int64 *v31; // [rsp+28h] [rbp-40h]
  unsigned __int8 v33; // [rsp+80h] [rbp+18h]

  v33 = a3;
  v4 = a4;
  v5 = 0LL;
  v30 = 0;
  v7 = 3LL * a3;
  v8 = *((_WORD *)&gahti + 12 * a3 + 6);
  if ( (v8 & 3) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 376);
    if ( *(_DWORD *)(v5 + 68) >= gUserProcessHandleQuota )
    {
      v28 = 1158LL;
      goto LABEL_73;
    }
  }
  v9 = 0;
  while ( 1 )
  {
    if ( a3 != 1 && qword_1C018AE28 )
    {
      v10 = &qword_1C018AE28;
      goto LABEL_7;
    }
    if ( qword_1C018AE20 )
      break;
    if ( !(unsigned int)HMGrowHandleTable() )
      return 0LL;
    a3 = v33;
  }
  v10 = &qword_1C018AE20;
LABEL_7:
  v31 = v10;
  if ( (v8 & 0x10) != 0 && a2 )
  {
    if ( !*((_DWORD *)&gahti + 2 * v7 + 4) )
    {
      if ( (int)IsDesktopAllocSupported() < 0 )
        v12 = 0LL;
      else
        v12 = (_QWORD *)DesktopAlloc(a2, (unsigned int)v4, (v33 << 16) | 5u);
      if ( v12 )
      {
        LockObjectAssignment(v12 + 3, a2);
        v12[4] = v12;
        v20 = (char *)v12 - *(_QWORD *)(a2 + 128);
LABEL_45:
        v12[6] = v20;
        v12[5] = 0LL;
        goto LABEL_18;
      }
      goto LABEL_72;
    }
    if ( (int)IsDesktopAllocSupported() >= 0 )
    {
      v21 = *((unsigned int *)&gahti + 2 * v7 + 2);
      if ( (v8 & 3) != 0 )
        v22 = Win32AllocPoolWithQuotaZInit(v4, v21);
      else
        v22 = Win32AllocPoolZInit(v4, v21);
      v12 = v22;
      if ( !v22 )
        goto LABEL_72;
      v23 = DesktopAlloc(a2, *((unsigned int *)&gahti + 2 * v7 + 4), (v33 << 16) | 5u);
      v12[5] = v23;
      if ( v23 )
      {
        LockObjectAssignment(v12 + 3, a2);
        v24 = v12[5];
        v12[4] = v12;
        v12[6] = v24 - *(_QWORD *)(a2 + 128);
        goto LABEL_18;
      }
LABEL_71:
      Win32FreePool((__int64)v12);
      goto LABEL_72;
    }
    v12 = 0LL;
LABEL_18:
    if ( v12 )
    {
      v13 = *v10;
      v14 = (__int64 *)((char *)gpKernelHandleTable + 16 * *v10);
      v15 = (char *)qword_1C0189E38 + 32 * v13;
      v16 = (unsigned int)v13 <= giheLast;
      *v31 = *v14;
      if ( !v16 )
        giheLast = v13;
      v15[24] = v33;
      *v14 = (__int64)v12;
      if ( (v8 & 0x40) != 0 )
      {
        *(_QWORD *)v15 = v12[6];
      }
      else if ( (v8 & 0x10) != 0 && a2 )
      {
        *(_QWORD *)v15 = v12[6];
        *((_QWORD *)v15 + 2) = ***(_QWORD ***)(a2 + 8);
      }
      else
      {
        *(_QWORD *)v15 = 0LL;
      }
      if ( v30 )
        v15[25] |= 0x40u;
      if ( (v8 & 2) != 0 )
      {
        *((_DWORD *)v12 + 4) = 0;
        v14[1] = *(_QWORD *)(a1 + 376);
        *((_QWORD *)v15 + 1) = PsGetProcessId(**(PEPROCESS **)(a1 + 376));
        if ( (v8 & 4) != 0 )
          v12[3] = *(_QWORD *)(a1 + 376);
      }
      else if ( (v8 & 1) != 0 )
      {
        v14[1] = a1;
        *((_QWORD *)v15 + 1) = PsGetThreadId(*(PETHREAD *)a1);
        v12[2] = v14[1];
      }
      v17 = (int)v13 | (unsigned __int64)(*(unsigned __int16 *)((char *)qword_1C0189E38
                                                              + v13 * (unsigned int)dword_1C0189E40
                                                              + 26) << 16);
      *v12 = v17;
      if ( *((_DWORD *)&gahti + 2 * v7 + 4) )
        *(_QWORD *)v12[5] = v17;
      if ( v5 )
      {
        v18 = ++*(_DWORD *)(v5 + 68);
        if ( v18 > *(_DWORD *)(v5 + 72) )
          *(_DWORD *)(v5 + 72) = v18;
      }
      if ( ++giheCount > (unsigned int)giheCountPeak )
        giheCountPeak = giheCount;
      return *v14;
    }
    goto LABEL_72;
  }
  if ( (v8 & 0x40) == 0 )
  {
    if ( !a2 && (v8 & 0x20) != 0 )
      v9 = 1;
    v30 = v9;
    if ( (v8 & 8) == 0 || v9 )
    {
      v11 = (_QWORD *)Win32AllocPool(v4, *((_DWORD *)&gahti + 2 * v7 + 2));
      v12 = v11;
      if ( v11 )
        memset(v11, 0, v4);
    }
    else
    {
      v12 = Win32AllocPoolWithQuotaZInit(v4, *((_DWORD *)&gahti + 2 * v7 + 2));
    }
    if ( !v12 )
      goto LABEL_72;
    if ( (v8 & 0x100) != 0 )
    {
      LockObjectAssignment(v12 + 3, a2);
      v12[4] = v12;
    }
    goto LABEL_18;
  }
  if ( *((_DWORD *)&gahti + 2 * v7 + 4) )
  {
    v25 = *((unsigned int *)&gahti + 2 * v7 + 2);
    if ( (v8 & 3) != 0 )
      v26 = Win32AllocPoolWithQuotaZInit(v4, v25);
    else
      v26 = Win32AllocPoolZInit(v4, v25);
    v12 = v26;
    if ( !v26 )
      goto LABEL_72;
    Heap = RtlAllocateHeap(gpvSharedAlloc, 0, *((unsigned int *)&gahti + 2 * v7 + 4));
    v12[5] = Heap;
    if ( !Heap )
      goto LABEL_71;
    v12[3] = 0LL;
    v12[4] = 0LL;
    v12[6] = Heap - (_BYTE *)gpvSharedBase;
    goto LABEL_18;
  }
  v29 = RtlAllocateHeap(gpvSharedAlloc, 0, v4);
  v12 = v29;
  if ( v29 )
  {
    v29[3] = 0LL;
    v29[4] = 0LL;
    v20 = (char *)((char *)v29 - (_BYTE *)gpvSharedBase);
    goto LABEL_45;
  }
LABEL_72:
  v28 = 8LL;
LABEL_73:
  UserSetLastError(v28);
  return 0LL;
}
