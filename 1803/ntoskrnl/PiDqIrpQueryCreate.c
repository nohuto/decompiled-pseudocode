/*
 * XREFs of PiDqIrpQueryCreate @ 0x140523298
 * Callers:
 *     PiDqDispatch @ 0x14050B510 (PiDqDispatch.c)
 * Callees:
 *     IoClearActivityIdThread @ 0x140075960 (IoClearActivityIdThread.c)
 *     IoSetActivityIdThread @ 0x140075980 (IoSetActivityIdThread.c)
 *     PsGetCurrentThreadProcessId @ 0x1400A1C70 (PsGetCurrentThreadProcessId.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     McTemplateK0pqzzzzzzz @ 0x14023B800 (McTemplateK0pqzzzzzzz.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PiDqQuerySerializeActionQueue @ 0x14050D2A0 (PiDqQuerySerializeActionQueue.c)
 *     PiDqIrpComplete @ 0x1405235D8 (PiDqIrpComplete.c)
 *     PiDqQueryValidateQueryData @ 0x140523644 (PiDqQueryValidateQueryData.c)
 *     PiDqQueryGetNextIoctlInfo @ 0x1405237A4 (PiDqQueryGetNextIoctlInfo.c)
 *     PnpIsNullGuid @ 0x140523858 (PnpIsNullGuid.c)
 *     PiDqQueryFreeActiveData @ 0x140573470 (PiDqQueryFreeActiveData.c)
 *     PnpConvertDevpropcompkeyArrayToString @ 0x14072742C (PnpConvertDevpropcompkeyArrayToString.c)
 *     PiDqConvertObjectTypeToString @ 0x14072A540 (PiDqConvertObjectTypeToString.c)
 *     PiDqConvertQueryFlagsToString @ 0x14072A608 (PiDqConvertQueryFlagsToString.c)
 *     FilterConvertToString @ 0x1407F5368 (FilterConvertToString.c)
 */

__int64 __fastcall PiDqIrpQueryCreate(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // r15
  __int64 v3; // rsi
  char v4; // r14
  PVOID v5; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  int v10; // eax
  int ValidateQueryData; // edi
  void **v12; // r14
  unsigned int v13; // r8d
  struct _KTHREAD *v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  PVOID v18; // r13
  void *v19; // r12
  unsigned int *v20; // r14
  int v21; // edx
  const wchar_t *v22; // rax
  PVOID v23; // rax
  int v24; // eax
  PVOID v25; // rax
  unsigned int v26; // eax
  PVOID v27; // rax
  unsigned int v28; // ecx
  _WORD *v29; // rdx
  PVOID v30; // rax
  int v31; // eax
  PVOID v32; // rax
  PVOID v33; // rax
  int v34; // eax
  int CurrentThreadProcessId; // eax
  __int64 v36; // rdx
  unsigned int v37; // eax
  PVOID PoolWithTag; // rax
  unsigned int v39; // ecx
  PVOID v40; // r8
  _WORD *v41; // rdx
  __int64 v42; // [rsp+20h] [rbp-118h]
  char v43; // [rsp+61h] [rbp-D7h]
  PVOID P; // [rsp+68h] [rbp-D0h]
  unsigned int NumberOfBytes; // [rsp+70h] [rbp-C8h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+74h] [rbp-C4h] BYREF
  SIZE_T v47; // [rsp+78h] [rbp-C0h] BYREF
  PVOID v48; // [rsp+80h] [rbp-B8h]
  unsigned int v49; // [rsp+88h] [rbp-B0h] BYREF
  const wchar_t *v50; // [rsp+90h] [rbp-A8h]
  PVOID v51; // [rsp+98h] [rbp-A0h]
  PVOID v52; // [rsp+A0h] [rbp-98h]
  unsigned int v53; // [rsp+A8h] [rbp-90h] BYREF
  PVOID v54; // [rsp+B0h] [rbp-88h]
  PVOID v55; // [rsp+B8h] [rbp-80h]
  PVOID v56; // [rsp+C0h] [rbp-78h]
  __int64 v57; // [rsp+C8h] [rbp-70h]
  __int64 v58; // [rsp+D0h] [rbp-68h]
  __int64 v59; // [rsp+D8h] [rbp-60h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+E0h] [rbp-58h]
  _QWORD v61[2]; // [rsp+E8h] [rbp-50h] BYREF
  __int128 v62; // [rsp+F8h] [rbp-40h] BYREF

  v1 = a1;
  v57 = a1;
  v50 = (const wchar_t *)a1;
  v2 = *(_QWORD *)(a1 + 184);
  v58 = v2;
  v52 = (PVOID)v2;
  v55 = *(PVOID *)(*(_QWORD *)(v2 + 48) + 32LL);
  v3 = (__int64)v55;
  v4 = 0;
  v5 = 0LL;
  v56 = 0LL;
  v43 = 0;
  v49 = 0;
  v53 = 0;
  v61[0] = 0LL;
  v61[1] = 0LL;
  if ( !v55 )
  {
    ValidateQueryData = -1073741637;
    goto LABEL_17;
  }
  if ( !*(_QWORD *)(a1 + 24) )
  {
    ValidateQueryData = -1073741811;
    goto LABEL_17;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  BugCheckParameter2 = v3 + 64;
  ExAcquirePushLockExclusiveEx(v3 + 64, 0LL);
  v9 = *(_DWORD *)(v3 + 216);
  if ( (v9 & 8) != 0 )
  {
    ValidateQueryData = -1073741536;
  }
  else if ( (v9 & 0x10) != 0 || (v10 = v9 | 0x10, *(_DWORD *)(v3 + 216) = v10, v4 = 1, (v10 & 4) != 0) )
  {
    ValidateQueryData = -1073741637;
  }
  else
  {
    if ( *(_DWORD *)(v2 + 8) >= 0x10u )
    {
      ValidateQueryData = MesDecodeBufferHandleCreate(*(_QWORD *)(v1 + 24), *(unsigned int *)(v2 + 16), v3 + 16);
      if ( ValidateQueryData < 0 )
        goto LABEL_13;
      v12 = (void **)(v3 + 24);
      NdrMesTypeDecode3(*(_QWORD *)(v3 + 16), "TP 3\a", &off_1402EDA90, &off_140396FA0, 0, v3 + 24);
      ValidateQueryData = PiDqQueryValidateQueryData(*(_QWORD *)(v3 + 24));
      if ( ValidateQueryData < 0 )
        goto LABEL_13;
      if ( !(unsigned __int8)PnpIsNullGuid(*v12) )
      {
        v62 = *(_OWORD *)*v12;
        v5 = IoSetActivityIdThread(&v62);
        v56 = v5;
        v43 = 1;
      }
      if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x400000) == 0 )
      {
LABEL_12:
        *(_DWORD *)(v3 + 216) |= 4u;
LABEL_13:
        v4 = 1;
        goto LABEL_14;
      }
      v18 = 0LL;
      v48 = 0LL;
      v55 = 0LL;
      v59 = 0LL;
      v52 = 0LL;
      v19 = 0LL;
      v54 = 0LL;
      v51 = 0LL;
      v20 = (unsigned int *)*v12;
      if ( (int)PiDqConvertObjectTypeToString(v20[4], &v59) < 0 )
      {
LABEL_86:
        if ( v51 )
          ExFreePoolWithTag(v51, 0x58706E50u);
        if ( v19 )
          ExFreePoolWithTag(v19, 0x58706E50u);
        if ( v52 )
          ExFreePoolWithTag(v52, 0x58706E50u);
        if ( v54 )
          ExFreePoolWithTag(v54, 0x58706E50u);
        if ( v18 )
          ExFreePoolWithTag(v18, 0x58706E50u);
        v5 = v56;
        goto LABEL_12;
      }
      v21 = 0;
      v50 = 0LL;
      v7 = v20[5];
      if ( (_DWORD)v7 )
      {
        if ( (_DWORD)v7 == 1 )
        {
          v22 = L"Instance";
        }
        else
        {
          if ( (_DWORD)v7 != 2 )
          {
            v21 = -1073741811;
            goto LABEL_40;
          }
          v22 = L"Instances";
        }
      }
      else
      {
        v22 = L"Type";
      }
      v50 = v22;
LABEL_40:
      if ( v21 < 0 )
        goto LABEL_86;
      if ( (_DWORD)v7 == 1 )
      {
        v55 = (PVOID)*((_QWORD *)v20 + 3);
      }
      else if ( (_DWORD)v7 == 2 )
      {
        v37 = v20[6];
        if ( v37 <= 2 )
          goto LABEL_86;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v37, 0x58706E50u);
        v51 = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_86;
        memmove(PoolWithTag, *((const void **)v20 + 4), 2LL * v20[6]);
        v39 = v20[6] - 2;
        v40 = v51;
        if ( v20[6] != 2 )
        {
          v41 = (char *)v51 + 2 * v39;
          do
          {
            if ( !*v41 )
              *v41 = 32;
            --v41;
            --v39;
          }
          while ( v39 );
        }
        v55 = v40;
      }
      NumberOfBytes = 512;
      v23 = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x58706E50u);
      P = v23;
      if ( !v23 )
      {
        v19 = 0LL;
        goto LABEL_86;
      }
      v24 = PiDqConvertQueryFlagsToString(v20[10], v23, 512LL, &NumberOfBytes);
      if ( v24 == -1073741789 )
      {
        ExFreePoolWithTag(P, 0x58706E50u);
        v25 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x58706E50u);
        P = v25;
        if ( !v25 )
        {
          v19 = 0LL;
          v18 = 0LL;
          goto LABEL_86;
        }
        v24 = PiDqConvertQueryFlagsToString(v20[10], v25, NumberOfBytes, &NumberOfBytes);
      }
      if ( v24 < 0 )
        goto LABEL_84;
      if ( (v20[10] & 4) != 0 )
      {
        v26 = v20[12];
        if ( v26 <= 2 )
          goto LABEL_84;
        v27 = ExAllocatePoolWithTag(PagedPool, 2LL * v26, 0x58706E50u);
        v52 = v27;
        if ( !v27 )
          goto LABEL_84;
        memmove(v27, *((const void **)v20 + 7), 2LL * v20[12]);
        v28 = v20[12] - 2;
        if ( v20[12] != 2 )
        {
          v29 = (char *)v52 + 2 * v28;
          do
          {
            if ( !*v29 )
              *v29 = 32;
            --v29;
            --v28;
          }
          while ( v28 );
        }
      }
      if ( !v20[16] )
        goto LABEL_62;
      NumberOfBytes_4 = 512;
      v30 = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x58706E50u);
      v54 = v30;
      if ( v30 )
      {
        v31 = PnpConvertDevpropcompkeyArrayToString(
                *((_QWORD *)v20 + 9),
                v20[16],
                (_DWORD)v30,
                512,
                (__int64)&NumberOfBytes_4);
        if ( v31 == -1073741789 )
        {
          ExFreePoolWithTag(v54, 0x58706E50u);
          v32 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes_4, 0x58706E50u);
          v54 = v32;
          if ( !v32 )
            goto LABEL_84;
          v31 = PnpConvertDevpropcompkeyArrayToString(
                  *((_QWORD *)v20 + 9),
                  v20[16],
                  (_DWORD)v32,
                  NumberOfBytes_4,
                  (__int64)&NumberOfBytes_4);
        }
        if ( v31 >= 0 )
        {
LABEL_62:
          if ( !v20[20] )
            goto LABEL_68;
          LODWORD(v47) = 512;
          v33 = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x58706E50u);
          v8 = (__int64)v33;
          v48 = v33;
          if ( v33 )
          {
            v34 = FilterConvertToString(v20[20], *((_QWORD *)v20 + 11), 512, (_DWORD)v33, (__int64)&v47);
            if ( v34 != -1073741789 )
              goto LABEL_67;
            ExFreePoolWithTag(v48, 0x58706E50u);
            v33 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v47, 0x58706E50u);
            v8 = (__int64)v33;
            v48 = v33;
            if ( v33 )
            {
              v34 = FilterConvertToString(v20[20], *((_QWORD *)v20 + 11), v47, (_DWORD)v33, (__int64)&v47);
LABEL_67:
              if ( v34 < 0 )
              {
LABEL_83:
                v18 = v48;
                goto LABEL_85;
              }
LABEL_68:
              if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x400000) != 0 )
              {
                CurrentThreadProcessId = PsGetCurrentThreadProcessId();
                v18 = v48;
                v19 = P;
                LODWORD(v42) = CurrentThreadProcessId;
                McTemplateK0pqzzzzzzz(v59, v36, (const GUID *)v20, v3, v42, v59, v50, v55, P, v52, v54, v48);
                goto LABEL_86;
              }
              goto LABEL_83;
            }
          }
          v18 = v33;
LABEL_85:
          v19 = P;
          goto LABEL_86;
        }
      }
LABEL_84:
      v18 = 0LL;
      goto LABEL_85;
    }
    ValidateQueryData = -1073741789;
  }
LABEL_14:
  ExReleasePushLockEx(BugCheckParameter2, 0LL, v7, v8);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v2 = v58;
  v1 = v57;
  if ( ValidateQueryData >= 0 )
  {
    v13 = *(_DWORD *)(v58 + 8);
    if ( v13 <= 0x10 )
      v49 = 16;
    else
      ValidateQueryData = PiDqQuerySerializeActionQueue(v3, *(_QWORD *)(v57 + 24), v13, (int *)&v49, &v53);
  }
LABEL_17:
  if ( v4 )
  {
    v14 = KeGetCurrentThread();
    --v14->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v3 + 64, 0LL);
    if ( ValidateQueryData < 0 )
    {
      *(_DWORD *)(v3 + 216) |= 1u;
      PiDqQueryFreeActiveData(v3);
    }
    else
    {
      PiDqQueryGetNextIoctlInfo(v3, *(unsigned int *)(v2 + 8), v53, v61);
    }
    *(_DWORD *)(v3 + 216) &= ~0x10u;
    ExReleasePushLockEx(v3 + 64, 0LL, v15, v16);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  PiDqIrpComplete(v1, (unsigned int)ValidateQueryData, v49, v61);
  if ( v43 )
    IoClearActivityIdThread(v5);
  return (unsigned int)ValidateQueryData;
}
