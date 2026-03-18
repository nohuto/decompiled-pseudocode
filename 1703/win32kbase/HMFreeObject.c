/*
 * XREFs of HMFreeObject @ 0x1C0040150
 * Callers:
 *     DestroyKL @ 0x1C00786CC (DestroyKL.c)
 *     DestroyKF @ 0x1C0078758 (DestroyKF.c)
 *     DestroyMonitor @ 0x1C0078C20 (DestroyMonitor.c)
 *     HMDestroyObject @ 0x1C007A340 (HMDestroyObject.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C007A6C0 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     UnlockObjectAssignment @ 0x1C0043590 (UnlockObjectAssignment.c)
 *     HMUnlockObjectInternal @ 0x1C0049030 (HMUnlockObjectInternal.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     HMCleanupGrantedHandle @ 0x1C00DE768 (HMCleanupGrantedHandle.c)
 */

__int64 __fastcall HMFreeObject(_QWORD *BaseAddress)
{
  __int64 v1; // rbp
  char *v3; // rsi
  char *v4; // rdi
  __int16 v5; // r14
  __int64 v6; // rax
  char v7; // al
  __int16 v8; // bx
  __int16 v9; // ax
  __int64 v10; // rdi
  __int64 v12; // rcx
  bool v13; // zf
  void *v14; // r8
  void *v15; // rcx
  void *v16; // r8
  void *v17; // rcx
  __int64 v18; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  v3 = (char *)gpKernelHandleTable + 16 * (unsigned __int16)*(_DWORD *)BaseAddress;
  v4 = (char *)qword_1C0189E38 + dword_1C0189E40 * (unsigned int)(unsigned __int16)*(_DWORD *)BaseAddress;
  v5 = *((_WORD *)&unk_1C015ED5C + 12 * (unsigned __int8)v4[24]);
  if ( (v5 & 2) != 0 )
  {
    v6 = *((_QWORD *)v3 + 1);
  }
  else if ( (v5 & 1) != 0 )
  {
    v6 = *(_QWORD *)(*((_QWORD *)v3 + 1) + 376LL);
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
    --*(_DWORD *)(v6 + 68);
  --giheCount;
  if ( (v4[25] & 0x20) != 0 )
  {
    HMCleanupGrantedHandle(**(_QWORD **)v3);
    v4[25] &= ~0x20u;
  }
  if ( (v5 & 0x10) != 0 )
  {
    v12 = BaseAddress[3];
    BaseAddress[3] = 0LL;
    v13 = (v4[25] & 0x40) == 0;
    v18 = v12;
    if ( v13 )
    {
      v14 = (void *)BaseAddress[5];
      v15 = *(void **)(v12 + 128);
      if ( !v14 )
      {
        RtlFreeHeap(v15, 0, BaseAddress);
LABEL_27:
        UnlockObjectAssignment(&v18);
        goto LABEL_15;
      }
      RtlFreeHeap(v15, 0, v14);
    }
    Win32FreePool((__int64)BaseAddress);
    goto LABEL_27;
  }
  if ( (v5 & 0x40) != 0 )
  {
    v16 = (void *)BaseAddress[5];
    if ( v16 )
    {
      RtlFreeHeap(gpvSharedAlloc, 0, v16);
      Win32FreePool((__int64)BaseAddress);
    }
    else
    {
      RtlFreeHeap(gpvSharedAlloc, 0, BaseAddress);
    }
    goto LABEL_15;
  }
  v7 = v4[24];
  if ( v7 == 19 )
  {
    v17 = *(void **)(*(_QWORD *)v3 + 32LL);
    goto LABEL_37;
  }
  if ( v7 == 22 )
  {
    v1 = *(_QWORD *)(*(_QWORD *)v3 + 16LL);
    v17 = *(void **)(v1 + 32);
LABEL_37:
    ObfDereferenceObject(v17);
    goto LABEL_15;
  }
  if ( (v5 & 0x100) != 0 )
  {
    v18 = BaseAddress[3];
    UnlockObjectAssignment(&v18);
  }
  if ( (int)IsWin32FreePoolImplSupported() >= 0 )
    Win32FreePoolImpl(BaseAddress);
LABEL_15:
  v8 = *((_WORD *)v4 + 13) + 1;
  memset(v4, 0, 0x20uLL);
  *(_QWORD *)v3 = 0LL;
  *((_QWORD *)v3 + 1) = 0LL;
  v9 = 1;
  if ( v8 != -1 )
    v9 = v8;
  *((_WORD *)v4 + 13) = v9;
  v10 = (v4 - (_BYTE *)qword_1C0189E38) >> 5;
  if ( (v10 & 1) != 0 )
  {
    *(_QWORD *)v3 = qword_1C018AE28;
    qword_1C018AE28 = v10;
  }
  else
  {
    *(_QWORD *)v3 = qword_1C018AE20;
    qword_1C018AE20 = v10;
  }
  if ( !gbInDestroyHandleTableObjects )
  {
    if ( v1 )
    {
      v13 = (*(_DWORD *)(v1 + 8))-- == 1;
      if ( v13 )
        HMUnlockObjectInternal(v1);
    }
  }
  return 1LL;
}
