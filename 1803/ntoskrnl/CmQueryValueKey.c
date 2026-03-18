/*
 * XREFs of CmQueryValueKey @ 0x1405A0B80
 * Callers:
 *     NtQueryValueKey @ 0x14059DE50 (NtQueryValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140009020 (CmpAllocateTransientPoolWithTag.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     PsBoostThreadIo @ 0x1400FE2B0 (PsBoostThreadIo.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmEqualTrans @ 0x140498AE0 (CmEqualTrans.c)
 *     CmpLockKcbStackExclusive @ 0x14049A938 (CmpLockKcbStackExclusive.c)
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x1404A3370 (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmpFindNameInListWithStatus @ 0x1404A38E0 (CmpFindNameInListWithStatus.c)
 *     CmpQueryKeyValueData @ 0x1404A6780 (CmpQueryKeyValueData.c)
 *     CmpFreeKeyControlBlock @ 0x1404A82B0 (CmpFreeKeyControlBlock.c)
 *     CmpLockKcbStackShared @ 0x1404A8434 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1404A8B74 (CmpUnlockKcbStack.c)
 *     RtlUpcaseUnicodeChar @ 0x1404A9730 (RtlUpcaseUnicodeChar.c)
 *     CmpCleanUpKcbValueCache @ 0x1404A99D4 (CmpCleanUpKcbValueCache.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404AECB0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14054BFC8 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmListGetNextElement @ 0x14054F160 (CmListGetNextElement.c)
 *     RtlCompareUnicodeStrings @ 0x140557CF0 (RtlCompareUnicodeStrings.c)
 *     CmpSetKcbAtLayerHeight @ 0x1406FB3E8 (CmpSetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmQueryValueKey(__int64 a1, unsigned __int16 *a2, int a3, void *a4, unsigned int a5, __int64 a6)
{
  struct _PRIVILEGE_SET *v6; // r15
  __int64 v7; // r14
  __int64 v8; // r13
  _KPROCESS *Process; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // rax
  __int16 v14; // bx
  __int16 v15; // r12
  __int64 v16; // r11
  __int16 v17; // di
  __int64 *v18; // rsi
  __int64 *v19; // rbx
  __int64 v20; // rbx
  char v21; // cl
  int v22; // eax
  __int64 v23; // r10
  __int16 v24; // bx
  __int64 v25; // rsi
  bool v26; // zf
  unsigned int v27; // r12d
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned int v31; // r13d
  unsigned int *v32; // rsi
  __int64 v33; // rax
  unsigned __int16 v34; // r15
  const WCHAR *v35; // r14
  unsigned __int16 v36; // r12
  WCHAR *v37; // rsi
  WCHAR v38; // di
  unsigned int v39; // ebx
  int v40; // ebx
  LONG v41; // ebx
  __int64 v42; // rdx
  unsigned int v43; // ecx
  int v44; // r14d
  __int64 v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rbx
  int KeyValueData; // r14d
  __int16 v50; // di
  struct _PRIVILEGE_SET *v51; // rcx
  ULONG_PTR *v52; // rsi
  ULONG_PTR *v53; // rbx
  ULONG_PTR v54; // rbx
  bool v55; // r15
  __int64 v56; // rdx
  char *NextElement; // rax
  int NameInListWithStatus; // eax
  int v60; // ecx
  int v61; // ecx
  SIZE_T v62; // rdi
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  __int64 v64; // r10
  __int64 v65; // r10
  char v66; // al
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rcx
  char v70; // [rsp+48h] [rbp-C0h]
  __int16 v71; // [rsp+4Ah] [rbp-BEh]
  unsigned int v72; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v73; // [rsp+50h] [rbp-B8h]
  struct _PRIVILEGE_SET *v74; // [rsp+58h] [rbp-B0h]
  unsigned __int16 *v75; // [rsp+60h] [rbp-A8h]
  _QWORD v76[4]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v77; // [rsp+88h] [rbp-80h] BYREF
  __int64 v78; // [rsp+90h] [rbp-78h] BYREF
  __int64 v79; // [rsp+98h] [rbp-70h]
  __int64 v80; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v81; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v82; // [rsp+B0h] [rbp-58h] BYREF
  int v83; // [rsp+B8h] [rbp-50h]
  __int64 v84; // [rsp+C0h] [rbp-48h]
  __int64 v85; // [rsp+C8h] [rbp-40h]
  unsigned int *v86; // [rsp+D0h] [rbp-38h]
  __int64 v87; // [rsp+D8h] [rbp-30h]
  __int64 v88; // [rsp+E0h] [rbp-28h]
  _QWORD *v89; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v90; // [rsp+F0h] [rbp-18h]
  __int64 v91; // [rsp+F8h] [rbp-10h]
  void *Src; // [rsp+100h] [rbp-8h]
  _BYTE v93[48]; // [rsp+108h] [rbp+0h] BYREF

  v6 = 0LL;
  v7 = a1;
  v83 = a3;
  v75 = a2;
  v90 = a1;
  v8 = 0LL;
  Src = a4;
  v91 = a6;
  v81 = 0LL;
  memset(v76, 0, sizeof(v76));
  Process = (_KPROCESS *)qword_1403CA2E8;
  v88 = 0LL;
  WORD1(v76[0]) = -1;
  v72 = -1;
  v82 = 0xFFFFFFFFLL;
  v77 = 0xFFFFFFFFLL;
  if ( !qword_1403CA2E8 )
    Process = KeGetCurrentThread()->ApcState.Process;
  KiStackAttachProcess(Process, 0, (__int64)v93);
  if ( !CmpPuntBoot )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)&CmpRegistryLock, 1u);
  }
  v13 = *(_QWORD *)(v7 + 8);
  v84 = v13;
  v74 = 0LL;
  v14 = *(_WORD *)(v13 + 58);
  v71 = v14;
  v15 = v14;
  if ( v14 >= 2 )
  {
    v15 = *(_WORD *)(v13 + 58);
    v71 = v15;
    if ( v14 == 1 )
    {
      v13 = v84;
    }
    else
    {
      v62 = 8LL * (unsigned int)(v14 - 1);
      TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, v62, 0x35364D43u);
      v74 = TransientPoolWithTag;
      v6 = TransientPoolWithTag;
      if ( !TransientPoolWithTag )
      {
        KeyValueData = -1073741670;
LABEL_70:
        v6 = (struct _PRIVILEGE_SET *)v76[3];
        goto LABEL_71;
      }
      memset(TransientPoolWithTag, 0, v62);
      v13 = v84;
      v15 = *(_WORD *)(v84 + 58);
      v71 = v15;
    }
  }
  LOWORD(v76[0]) = v14;
  v76[3] = v6;
  WORD1(v76[0]) = v15;
  if ( v15 )
  {
    v64 = *(_QWORD *)(v13 + 184);
    if ( v64 )
    {
      do
      {
        CmpSetKcbAtLayerHeight(v76, (unsigned __int16)v15, *(_QWORD *)(v64 + 16));
        v64 = *(_QWORD *)(v65 + 24);
        --v15;
      }
      while ( v64 );
      v6 = (struct _PRIVILEGE_SET *)v76[3];
      v15 = WORD1(v76[0]);
      v74 = (struct _PRIVILEGE_SET *)v76[3];
      v71 = WORD1(v76[0]);
    }
  }
  else
  {
    v76[1] = v13;
  }
  if ( *(_QWORD *)(v7 + 56) || *(_QWORD *)(v7 + 64) )
  {
    CmpLockKcbStackShared((__int64)v76);
    if ( CmpIsKeyDeletedForKeyBody(v7, 0LL) )
    {
      v26 = (*(_BYTE *)(v7 + 48) & 1) == 0;
      KeyValueData = -1073740763;
      if ( v26 )
        KeyValueData = -1073741444;
LABEL_61:
      v16 = 0LL;
      goto LABEL_62;
    }
    CmpUnlockKcbStack((__int64)v76);
    KeyValueData = CmpTransSearchAddTransFromKeyBody((_QWORD *)v7, &v81);
    if ( KeyValueData < 0 )
      goto LABEL_71;
    v7 = v90;
  }
  v16 = 0LL;
  v17 = 0;
  if ( v15 >= 0 )
  {
    v18 = &v76[1];
    do
    {
      if ( v17 >= 2 )
        v19 = (__int64 *)((char *)v6 + 8 * v17 - 16);
      else
        v19 = v18;
      v20 = *v19;
      ExAcquirePushLockSharedEx(v20 + 40, 0LL);
      _InterlockedIncrement((volatile signed __int32 *)(v20 + 48));
      ++v17;
      v6 = (struct _PRIVILEGE_SET *)v76[3];
      ++v18;
      v71 = WORD1(v76[0]);
    }
    while ( v17 <= SWORD1(v76[0]) );
    v16 = 0LL;
  }
  v21 = 0;
  v74 = v6;
LABEL_17:
  v70 = v21;
  v22 = *(_DWORD *)(v7 + 48);
  v89 = 0LL;
  if ( (v22 & 9) == 0 )
  {
    v23 = v81;
    if ( !v81 )
      goto LABEL_19;
    NextElement = CmListGetNextElement((_QWORD **)(*(_QWORD *)(v7 + 8) + 200LL), &v89, 32);
    if ( !NextElement )
    {
LABEL_88:
      v21 = v70;
LABEL_19:
      v24 = *(_WORD *)(v84 + 58);
      v25 = (__int64)v75;
      while ( 1 )
      {
        while ( 1 )
        {
          LOWORD(v73) = v24;
          if ( v24 < 0
            || (v24 >= 2 ? (v8 = *((_QWORD *)v6 + v24 - 2)) : (v8 = v76[v24 + 1]),
                (v26 = *(_WORD *)(v8 + 58) == 0, v87 = v8, !v26) && *(_BYTE *)(v8 + 57) == 1) )
          {
            v46 = v88;
            goto LABEL_55;
          }
          if ( *(_DWORD *)(v8 + 32) != -1 )
            break;
          --v24;
        }
        if ( v23 && *(_QWORD *)(v8 + 280) == v23 )
        {
          NameInListWithStatus = CmpFindNameInListWithStatus(
                                   *(_QWORD *)(v8 + 24),
                                   (unsigned int *)(v8 + 272),
                                   v25,
                                   0,
                                   v16,
                                   (__int64)&v72);
          KeyValueData = NameInListWithStatus;
          if ( NameInListWithStatus >= 0 )
          {
            v46 = *(_QWORD *)(v8 + 24);
            goto LABEL_92;
          }
          if ( NameInListWithStatus != -1073741772 )
            goto LABEL_61;
        }
        else
        {
          if ( (*(_DWORD *)(v8 + 4) & 8) != 0 )
          {
            if ( !v21 && !CmpTryConvertKcbLockSharedToExclusive(v8) )
            {
              CmpUnlockKcbStack((__int64)v76);
              CmpLockKcbStackExclusive((__int64)v76);
              v7 = v90;
              v21 = 1;
              v16 = 0LL;
              goto LABEL_17;
            }
            CmpCleanUpKcbValueCache(v8);
            v67 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(v8 + 24) + 8LL))(
                    *(_QWORD *)(v8 + 24),
                    *(unsigned int *)(v8 + 32),
                    &v77);
            v68 = *(unsigned int *)(v67 + 40);
            LODWORD(v67) = *(_DWORD *)(v67 + 36);
            *(_QWORD *)(v8 + 96) = v68;
            v69 = *(_QWORD *)(v8 + 24);
            *(_DWORD *)(v8 + 88) = v67;
            (*(void (__fastcall **)(__int64, __int64 *))(v69 + 16))(v69, &v77);
            v16 = 0LL;
          }
          v27 = *(_DWORD *)(v8 + 88);
          v28 = *(_QWORD *)(v8 + 24);
          v29 = v16;
          v30 = *(unsigned int *)(v8 + 96);
          v80 = 0xFFFFFFFFLL;
          v72 = v27;
          v85 = v28;
          v79 = v16;
          if ( v27 )
          {
            v29 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(v28 + 8))(v28, v30, &v80);
            v79 = v29;
            v16 = 0LL;
          }
          v78 = 0xFFFFFFFFLL;
          if ( v27 )
          {
            v31 = v16;
            v86 = (unsigned int *)v29;
            v32 = (unsigned int *)v29;
            while ( 1 )
            {
              v33 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v28 + 8))(v28, *v32, &v78);
              v34 = *(_WORD *)(v33 + 2);
              v35 = (const WCHAR *)(v33 + 20);
              if ( (*(_BYTE *)(v33 + 16) & 1) != 0 )
              {
                v36 = *v75 >> 1;
                v37 = (WCHAR *)*((_QWORD *)v75 + 1);
                if ( v36 )
                {
                  while ( 1 )
                  {
                    if ( !v34 )
                    {
LABEL_36:
                      v28 = v85;
                      goto LABEL_37;
                    }
                    v38 = *v37++;
                    v39 = *(unsigned __int8 *)v35;
                    v35 = (const WCHAR *)((char *)v35 + 1);
                    if ( v38 != (_WORD)v39 )
                    {
                      if ( v38 >= 0x61u )
                      {
                        if ( v38 > 0x7Au )
                          v38 = RtlUpcaseUnicodeChar(v38);
                        else
                          v38 -= 32;
                      }
                      if ( v39 >= 0x61 )
                      {
                        if ( v39 > 0x7A )
                          LOWORD(v39) = RtlUpcaseUnicodeChar(v39);
                        else
                          LOWORD(v39) = v39 - 32;
                      }
                      v41 = v38 - (unsigned __int16)v39;
                      if ( v41 )
                        break;
                    }
                    --v34;
                    if ( !--v36 )
                      goto LABEL_36;
                  }
                  v32 = v86;
                  v28 = v85;
                  v27 = v72;
                }
                else
                {
LABEL_37:
                  v32 = v86;
                  v40 = v36;
                  v27 = v72;
                  v41 = v40 - v34;
                }
              }
              else
              {
                v41 = RtlCompareUnicodeStrings(
                        *((PCWCH *)v75 + 1),
                        (unsigned __int64)*v75 >> 1,
                        v35,
                        (unsigned __int64)v34 >> 1,
                        1u);
              }
              (*(void (__fastcall **)(__int64, __int64 *))(v28 + 16))(v28, &v78);
              if ( !v41 )
                break;
              ++v32;
              ++v31;
              v86 = v32;
              if ( v31 >= v27 )
              {
                v8 = v87;
                v16 = 0LL;
                goto LABEL_45;
              }
            }
            v42 = v79;
            v16 = 0LL;
            v45 = v31;
            v44 = 0;
            v8 = v87;
            v43 = *(_DWORD *)(v79 + 4 * v45);
          }
          else
          {
LABEL_45:
            v42 = v79;
            v43 = -1;
            v44 = -1073741772;
          }
          v72 = v43;
          if ( v42 )
          {
            (*(void (__fastcall **)(__int64, __int64 *))(v28 + 16))(v28, &v80);
            v16 = 0LL;
          }
          if ( v44 >= 0 )
          {
            v46 = *(_QWORD *)(v8 + 24);
            goto LABEL_55;
          }
          v25 = (__int64)v75;
          v24 = v73;
        }
        if ( *(_WORD *)(v8 + 58) && *(_BYTE *)(v8 + 57) )
          break;
        v6 = v74;
        --v24;
        v23 = v81;
        v16 = 0LL;
        v21 = v70;
      }
      v46 = v88;
LABEL_92:
      v16 = 0LL;
LABEL_55:
      if ( v72 == -1 )
      {
        KeyValueData = -1073741772;
      }
      else
      {
        v47 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(v46 + 8))(v46, v72, &v82);
        v48 = v47;
        if ( (*(_DWORD *)(v46 + 160) & 0x80000) != 0 && (*(_BYTE *)(v47 + 16) & 2) != 0 )
        {
          KeyValueData = -1073741772;
          v16 = 0LL;
        }
        else
        {
          KeyValueData = CmpQueryKeyValueData(v8, v72, v47, v83, Src, a5, (int *)v91);
          v16 = 0LL;
          if ( KeyValueData >= 0 )
            KeyValueData = 0;
        }
        if ( v48 )
        {
          (*(void (__fastcall **)(__int64, __int64 *))(v46 + 16))(v46, &v82);
          goto LABEL_61;
        }
      }
      goto LABEL_62;
    }
    while ( 1 )
    {
      v61 = *((_DWORD *)NextElement + 17);
      if ( v61 == 2 || v61 == 11 )
        break;
      NextElement = CmListGetNextElement((_QWORD **)(v11 + 200), &v89, 32);
      if ( !NextElement )
      {
        v21 = v70;
        goto LABEL_19;
      }
    }
    v66 = CmEqualTrans(*((_QWORD *)NextElement + 7), v23);
    v16 = 0LL;
    if ( !v66 )
    {
      v23 = v81;
      goto LABEL_88;
    }
  }
  v60 = *(_DWORD *)(v7 + 48);
  KeyValueData = -1073741444;
  if ( (v60 & 1) != 0 )
    KeyValueData = -1073740763;
LABEL_62:
  v50 = v16;
  if ( (__int16)v16 <= v71 )
  {
    v51 = v74;
    v52 = &v76[1];
    while ( 1 )
    {
      if ( v50 >= 2 )
        v53 = (ULONG_PTR *)((char *)v51 + 8 * v50 - 16);
      else
        v53 = v52;
      v54 = *v53;
      v55 = (*(_DWORD *)(v54 + 4) & 0x80000) != 0;
      if ( *(struct _KTHREAD **)(v54 + 48) == KeGetCurrentThread() )
        *(_QWORD *)(v54 + 48) = v16;
      else
        _InterlockedDecrement((volatile signed __int32 *)(v54 + 48));
      ExReleasePushLockEx(v54 + 40, 0LL, v10, v11);
      if ( v55 && (*(_DWORD *)(v54 + 4) & 0x80000) != 0 )
        CmpFreeKeyControlBlock(v54);
      ++v50;
      ++v52;
      if ( v50 > SWORD1(v76[0]) )
        break;
      v51 = (struct _PRIVILEGE_SET *)v76[3];
      v16 = 0LL;
    }
    goto LABEL_70;
  }
  v6 = v74;
LABEL_71:
  if ( !CmpPuntBoot )
  {
    ExReleaseResourceLite((PERESOURCE)&CmpRegistryLock);
    KeLeaveCriticalRegion();
    LOBYTE(v56) = 1;
    PsBoostThreadIo((__int64)KeGetCurrentThread(), v56);
    v6 = (struct _PRIVILEGE_SET *)v76[3];
  }
  KiUnstackDetachProcess((__int64)v93, 0LL);
  if ( v6 )
    CmSiFreeMemory(v6);
  return (unsigned int)KeyValueData;
}
