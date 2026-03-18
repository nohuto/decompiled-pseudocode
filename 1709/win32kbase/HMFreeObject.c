/*
 * XREFs of HMFreeObject @ 0x1C003E4A0
 * Callers:
 *     DestroyKL @ 0x1C0070FC4 (DestroyKL.c)
 *     DestroyKF @ 0x1C0071050 (DestroyKF.c)
 *     DestroyMonitor @ 0x1C0071210 (DestroyMonitor.c)
 *     HMDestroyObject @ 0x1C00727A0 (HMDestroyObject.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C0072B20 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 * Callees:
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     UnlockObjectAssignment @ 0x1C003C740 (UnlockObjectAssignment.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     HMCleanupGrantedHandle @ 0x1C00E4D28 (HMCleanupGrantedHandle.c)
 */

__int64 __fastcall HMFreeObject(_QWORD *BaseAddress, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rbp
  _QWORD **v5; // r14
  char *v7; // rdi
  __int64 v8; // rsi
  __int16 v9; // r15
  __int64 v10; // rax
  char v11; // al
  __int16 v12; // bx
  __int16 v13; // ax
  __int64 v14; // rdi
  _QWORD *v16; // rcx
  bool v17; // zf
  void *v18; // r8
  void *v19; // rcx
  void *v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  void *v23; // rcx
  void *v24; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(unsigned int *)BaseAddress;
  v4 = 0LL;
  v5 = (_QWORD **)gpKernelHandleTable;
  v7 = (char *)qword_1C018E9B8 + dword_1C018E9C0 * (unsigned int)(unsigned __int16)v3;
  v8 = 3LL * (unsigned __int16)v3;
  v9 = *((_WORD *)&unk_1C015EA5C + 12 * (unsigned __int8)v7[24]);
  if ( (v9 & 2) != 0 )
  {
    v10 = *((_QWORD *)gpKernelHandleTable + 3 * (unsigned __int16)v3 + 1);
  }
  else if ( (v9 & 1) != 0 )
  {
    v10 = *(_QWORD *)(*((_QWORD *)gpKernelHandleTable + 3 * (unsigned __int16)v3 + 1) + 400LL);
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
    --*(_DWORD *)(v10 + 68);
  --giheCount;
  if ( (v7[25] & 0x20) != 0 )
  {
    HMCleanupGrantedHandle(*v5[3 * (unsigned __int16)v3]);
    v7[25] &= ~0x20u;
  }
  if ( (v9 & 0x10) != 0 )
  {
    v16 = (_QWORD *)BaseAddress[3];
    BaseAddress[3] = 0LL;
    v17 = (v7[25] & 0x40) == 0;
    v24 = v16;
    if ( v17 )
    {
      v18 = (void *)BaseAddress[5];
      v19 = (void *)v16[16];
      if ( !v18 )
      {
        RtlFreeHeap(v19, 0, BaseAddress);
LABEL_28:
        UnlockObjectAssignment(&v24);
        goto LABEL_15;
      }
      RtlFreeHeap(v19, 0, v18);
    }
    Win32FreePool(BaseAddress, v3, a3);
    goto LABEL_28;
  }
  if ( (v9 & 0x40) != 0 )
  {
    v20 = (void *)BaseAddress[5];
    if ( v20 )
    {
      RtlFreeHeap(gpvSharedAlloc, 0, v20);
      Win32FreePool(BaseAddress, v21, v22);
    }
    else
    {
      RtlFreeHeap(gpvSharedAlloc, 0, BaseAddress);
    }
    goto LABEL_15;
  }
  v11 = v7[24];
  if ( v11 == 19 )
  {
    v23 = (void *)v5[v8][4];
    goto LABEL_38;
  }
  if ( v11 == 22 )
  {
    v4 = v5[v8][2];
    v23 = *(void **)(v4 + 32);
LABEL_38:
    ObfDereferenceObject(v23);
    goto LABEL_15;
  }
  if ( (v9 & 0x100) != 0 )
  {
    v24 = (void *)BaseAddress[3];
    UnlockObjectAssignment(&v24);
  }
  if ( (int)IsWin32FreePoolImplSupported() >= 0 )
    Win32FreePoolImpl(BaseAddress);
LABEL_15:
  v12 = *((_WORD *)v7 + 13) + 1;
  memset(v7, 0, 0x20uLL);
  v5[v8] = 0LL;
  v5[v8 + 1] = 0LL;
  v5[v8 + 2] = 0LL;
  v13 = 1;
  if ( v12 != -1 )
    v13 = v12;
  *((_WORD *)v7 + 13) = v13;
  v14 = (v7 - (_BYTE *)qword_1C018E9B8) >> 5;
  if ( (v14 & 1) != 0 )
  {
    v5[v8] = (_QWORD *)qword_1C018FA78;
    qword_1C018FA78 = v14;
  }
  else
  {
    v5[v8] = (_QWORD *)qword_1C018FA70;
    qword_1C018FA70 = v14;
  }
  if ( !gbInDestroyHandleTableObjects && v4 )
    HMUnlockObject(v4);
  return 1LL;
}
