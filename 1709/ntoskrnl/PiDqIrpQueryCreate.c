/*
 * XREFs of PiDqIrpQueryCreate @ 0x14054C90C
 * Callers:
 *     PiDqDispatch @ 0x14054C640 (PiDqDispatch.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     PsGetCurrentThreadProcessId @ 0x1400851E0 (PsGetCurrentThreadProcessId.c)
 *     IoClearActivityIdThread @ 0x1400FB270 (IoClearActivityIdThread.c)
 *     IoSetActivityIdThread @ 0x1400FB290 (IoSetActivityIdThread.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     McTemplateK0pqzzzzzzz @ 0x1401FEE90 (McTemplateK0pqzzzzzzz.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PiDqQuerySerializeActionQueue @ 0x14052DBC8 (PiDqQuerySerializeActionQueue.c)
 *     PiDqIrpComplete @ 0x14054CC4C (PiDqIrpComplete.c)
 *     PiDqQueryValidateQueryData @ 0x14054CCBC (PiDqQueryValidateQueryData.c)
 *     PiDqQueryGetNextIoctlInfo @ 0x14054CE1C (PiDqQueryGetNextIoctlInfo.c)
 *     PnpIsNullGuid @ 0x14054CECC (PnpIsNullGuid.c)
 *     PiDqQueryFreeActiveData @ 0x14054CF70 (PiDqQueryFreeActiveData.c)
 *     PnpConvertDevpropcompkeyArrayToString @ 0x1406C1744 (PnpConvertDevpropcompkeyArrayToString.c)
 *     PiDqConvertObjectTypeToString @ 0x1406C3E4C (PiDqConvertObjectTypeToString.c)
 *     PiDqConvertQueryFlagsToString @ 0x1406C3EF4 (PiDqConvertQueryFlagsToString.c)
 *     FilterConvertToString @ 0x140788BA8 (FilterConvertToString.c)
 */

__int64 __fastcall PiDqIrpQueryCreate(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // r15
  __int64 v3; // rsi
  char v4; // r14
  PVOID v5; // r12
  struct _KTHREAD *CurrentThread; // rax
  int v7; // eax
  int v8; // eax
  int ValidateQueryData; // edi
  void **v10; // r14
  unsigned int v11; // r8d
  struct _KTHREAD *v12; // rax
  PVOID v14; // r13
  void *v15; // r12
  unsigned int *v16; // r14
  int v17; // edx
  unsigned int v18; // r8d
  const wchar_t *v19; // rax
  unsigned int v20; // eax
  PVOID PoolWithTag; // rax
  unsigned int v22; // ecx
  PVOID v23; // r8
  _WORD *v24; // rdx
  PVOID v25; // rax
  int v26; // eax
  PVOID v27; // rax
  unsigned int v28; // eax
  PVOID v29; // rax
  unsigned int v30; // ecx
  _WORD *v31; // rdx
  PVOID v32; // rax
  int v33; // eax
  PVOID v34; // rax
  PVOID v35; // rax
  int v36; // eax
  int CurrentThreadProcessId; // eax
  __int64 v38; // rdx
  __int64 v39; // [rsp+20h] [rbp-118h]
  char v40; // [rsp+61h] [rbp-D7h]
  PVOID P; // [rsp+68h] [rbp-D0h]
  unsigned int NumberOfBytes; // [rsp+70h] [rbp-C8h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+74h] [rbp-C4h] BYREF
  SIZE_T v44; // [rsp+78h] [rbp-C0h] BYREF
  PVOID v45; // [rsp+80h] [rbp-B8h]
  unsigned int v46; // [rsp+88h] [rbp-B0h] BYREF
  const wchar_t *v47; // [rsp+90h] [rbp-A8h]
  PVOID v48; // [rsp+98h] [rbp-A0h]
  PVOID v49; // [rsp+A0h] [rbp-98h]
  unsigned int v50; // [rsp+A8h] [rbp-90h] BYREF
  PVOID v51; // [rsp+B0h] [rbp-88h]
  PVOID v52; // [rsp+B8h] [rbp-80h]
  PVOID v53; // [rsp+C0h] [rbp-78h]
  __int64 v54; // [rsp+C8h] [rbp-70h]
  __int64 v55; // [rsp+D0h] [rbp-68h]
  __int64 v56; // [rsp+D8h] [rbp-60h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+E0h] [rbp-58h]
  _QWORD v58[2]; // [rsp+E8h] [rbp-50h] BYREF
  __int128 v59; // [rsp+F8h] [rbp-40h] BYREF

  v1 = a1;
  v54 = a1;
  v47 = (const wchar_t *)a1;
  v2 = *(_QWORD *)(a1 + 184);
  v55 = v2;
  v49 = (PVOID)v2;
  v52 = *(PVOID *)(*(_QWORD *)(v2 + 48) + 32LL);
  v3 = (__int64)v52;
  v4 = 0;
  v5 = 0LL;
  v53 = 0LL;
  v40 = 0;
  v46 = 0;
  v50 = 0;
  v58[0] = 0LL;
  v58[1] = 0LL;
  if ( !v52 )
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
  v7 = *(_DWORD *)(v3 + 216);
  if ( (v7 & 8) != 0 )
  {
    ValidateQueryData = -1073741536;
  }
  else if ( (v7 & 0x10) != 0 || (v8 = v7 | 0x10, *(_DWORD *)(v3 + 216) = v8, v4 = 1, (v8 & 4) != 0) )
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
      v10 = (void **)(v3 + 24);
      NdrMesTypeDecode3(*(_QWORD *)(v3 + 16), "TP 3\a", &off_1402B6168, &off_1403543E0, 0, v3 + 24);
      ValidateQueryData = PiDqQueryValidateQueryData(*(_QWORD *)(v3 + 24));
      if ( ValidateQueryData < 0 )
        goto LABEL_13;
      if ( !(unsigned __int8)PnpIsNullGuid(*v10) )
      {
        v59 = *(_OWORD *)*v10;
        v5 = IoSetActivityIdThread(&v59);
        v53 = v5;
        v40 = 1;
      }
      if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x400000) == 0 )
      {
LABEL_12:
        *(_DWORD *)(v3 + 216) |= 4u;
LABEL_13:
        v4 = 1;
        goto LABEL_14;
      }
      v14 = 0LL;
      v45 = 0LL;
      v52 = 0LL;
      v56 = 0LL;
      v49 = 0LL;
      v15 = 0LL;
      v51 = 0LL;
      v48 = 0LL;
      v16 = (unsigned int *)*v10;
      if ( (int)PiDqConvertObjectTypeToString(v16[4], &v56) < 0 )
      {
LABEL_86:
        if ( v48 )
          ExFreePoolWithTag(v48, 0x58706E50u);
        if ( v15 )
          ExFreePoolWithTag(v15, 0x58706E50u);
        if ( v49 )
          ExFreePoolWithTag(v49, 0x58706E50u);
        if ( v51 )
          ExFreePoolWithTag(v51, 0x58706E50u);
        if ( v14 )
          ExFreePoolWithTag(v14, 0x58706E50u);
        v5 = v53;
        goto LABEL_12;
      }
      v17 = 0;
      v47 = 0LL;
      v18 = v16[5];
      if ( v18 )
      {
        if ( v18 == 1 )
        {
          v19 = L"Instance";
        }
        else
        {
          if ( v18 != 2 )
          {
            v17 = -1073741811;
            goto LABEL_40;
          }
          v19 = L"Instances";
        }
      }
      else
      {
        v19 = L"Type";
      }
      v47 = v19;
LABEL_40:
      if ( v17 < 0 )
        goto LABEL_86;
      if ( v18 == 1 )
      {
        v52 = (PVOID)*((_QWORD *)v16 + 3);
      }
      else if ( v18 == 2 )
      {
        v20 = v16[6];
        if ( v20 <= 2 )
          goto LABEL_86;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2LL * v20, 0x58706E50u);
        v48 = PoolWithTag;
        if ( !PoolWithTag )
          goto LABEL_86;
        memmove(PoolWithTag, *((const void **)v16 + 4), 2LL * v16[6]);
        v22 = v16[6] - 2;
        v23 = v48;
        if ( v16[6] != 2 )
        {
          v24 = (char *)v48 + 2 * v22;
          do
          {
            if ( !*v24 )
              *v24 = 32;
            --v24;
            --v22;
          }
          while ( v22 );
        }
        v52 = v23;
      }
      NumberOfBytes = 512;
      v25 = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x58706E50u);
      P = v25;
      if ( !v25 )
      {
        v15 = 0LL;
        goto LABEL_86;
      }
      v26 = PiDqConvertQueryFlagsToString(v16[10], v25, 512LL, &NumberOfBytes);
      if ( v26 == -1073741789 )
      {
        ExFreePoolWithTag(P, 0x58706E50u);
        v27 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x58706E50u);
        P = v27;
        if ( !v27 )
        {
          v15 = 0LL;
          v14 = 0LL;
          goto LABEL_86;
        }
        v26 = PiDqConvertQueryFlagsToString(v16[10], v27, NumberOfBytes, &NumberOfBytes);
      }
      if ( v26 < 0 )
        goto LABEL_84;
      if ( (v16[10] & 4) != 0 )
      {
        v28 = v16[12];
        if ( v28 <= 2 )
          goto LABEL_84;
        v29 = ExAllocatePoolWithTag(PagedPool, 2LL * v28, 0x58706E50u);
        v49 = v29;
        if ( !v29 )
          goto LABEL_84;
        memmove(v29, *((const void **)v16 + 7), 2LL * v16[12]);
        v30 = v16[12] - 2;
        if ( v16[12] != 2 )
        {
          v31 = (char *)v49 + 2 * v30;
          do
          {
            if ( !*v31 )
              *v31 = 32;
            --v31;
            --v30;
          }
          while ( v30 );
        }
      }
      if ( !v16[16] )
        goto LABEL_71;
      NumberOfBytes_4 = 512;
      v32 = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x58706E50u);
      v51 = v32;
      if ( v32 )
      {
        v33 = PnpConvertDevpropcompkeyArrayToString(
                *((_QWORD *)v16 + 9),
                v16[16],
                (_DWORD)v32,
                512,
                (__int64)&NumberOfBytes_4);
        if ( v33 == -1073741789 )
        {
          ExFreePoolWithTag(v51, 0x58706E50u);
          v34 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes_4, 0x58706E50u);
          v51 = v34;
          if ( !v34 )
            goto LABEL_84;
          v33 = PnpConvertDevpropcompkeyArrayToString(
                  *((_QWORD *)v16 + 9),
                  v16[16],
                  (_DWORD)v34,
                  NumberOfBytes_4,
                  (__int64)&NumberOfBytes_4);
        }
        if ( v33 >= 0 )
        {
LABEL_71:
          if ( !v16[20] )
            goto LABEL_77;
          LODWORD(v44) = 512;
          v35 = ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x58706E50u);
          v45 = v35;
          if ( v35 )
          {
            v36 = FilterConvertToString(v16[20], *((_QWORD *)v16 + 11), 512, (_DWORD)v35, (__int64)&v44);
            if ( v36 != -1073741789 )
              goto LABEL_76;
            ExFreePoolWithTag(v45, 0x58706E50u);
            v35 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v44, 0x58706E50u);
            v45 = v35;
            if ( v35 )
            {
              v36 = FilterConvertToString(v16[20], *((_QWORD *)v16 + 11), v44, (_DWORD)v35, (__int64)&v44);
LABEL_76:
              if ( v36 < 0 )
              {
LABEL_83:
                v14 = v45;
                goto LABEL_85;
              }
LABEL_77:
              if ( (Microsoft_Windows_Kernel_PnPEnableBits & 0x400000) != 0 )
              {
                CurrentThreadProcessId = PsGetCurrentThreadProcessId();
                v14 = v45;
                v15 = P;
                LODWORD(v39) = CurrentThreadProcessId;
                McTemplateK0pqzzzzzzz(v56, v38, (const GUID *)v16, v3, v39, v56, v47, v52, P, v49, v51, v45);
                goto LABEL_86;
              }
              goto LABEL_83;
            }
          }
          v14 = v35;
LABEL_85:
          v15 = P;
          goto LABEL_86;
        }
      }
LABEL_84:
      v14 = 0LL;
      goto LABEL_85;
    }
    ValidateQueryData = -1073741789;
  }
LABEL_14:
  ExReleasePushLockEx(BugCheckParameter2, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v2 = v55;
  v1 = v54;
  if ( ValidateQueryData >= 0 )
  {
    v11 = *(_DWORD *)(v55 + 8);
    if ( v11 <= 0x10 )
      v46 = 16;
    else
      ValidateQueryData = PiDqQuerySerializeActionQueue(v3, *(_QWORD *)(v54 + 24), v11, (int *)&v46, &v50);
  }
LABEL_17:
  if ( v4 )
  {
    v12 = KeGetCurrentThread();
    --v12->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v3 + 64, 0LL);
    if ( ValidateQueryData < 0 )
    {
      *(_DWORD *)(v3 + 216) |= 1u;
      PiDqQueryFreeActiveData(v3);
    }
    else
    {
      PiDqQueryGetNextIoctlInfo(v3, *(unsigned int *)(v2 + 8), v50, v58);
    }
    *(_DWORD *)(v3 + 216) &= ~0x10u;
    ExReleasePushLockEx(v3 + 64, 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  PiDqIrpComplete(v1, (unsigned int)ValidateQueryData, v46, v58);
  if ( v40 )
    IoClearActivityIdThread(v5);
  return (unsigned int)ValidateQueryData;
}
