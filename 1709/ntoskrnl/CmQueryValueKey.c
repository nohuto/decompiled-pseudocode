/*
 * XREFs of CmQueryValueKey @ 0x1404AB970
 * Callers:
 *     NtQueryValueKey @ 0x1404A8B80 (NtQueryValueKey.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140016F60 (CmpAllocateTransientPoolWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     HvpGetCellContextReinitialize @ 0x1400812C8 (HvpGetCellContextReinitialize.c)
 *     PsBoostThreadIo @ 0x1400813B0 (PsBoostThreadIo.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmpLockKcbStackExclusive @ 0x140472C1C (CmpLockKcbStackExclusive.c)
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x140477DB8 (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmpCleanUpKcbValueCache @ 0x1404789E8 (CmpCleanUpKcbValueCache.c)
 *     CmpFreeKeyControlBlock @ 0x140478B50 (CmpFreeKeyControlBlock.c)
 *     CmpFindNameInListWithStatus @ 0x140479488 (CmpFindNameInListWithStatus.c)
 *     CmpQueryKeyValueData @ 0x14047DAE0 (CmpQueryKeyValueData.c)
 *     CmpLockKcbStackShared @ 0x14047E98C (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x14047EA68 (CmpUnlockKcbStack.c)
 *     RtlUpcaseUnicodeChar @ 0x1404817B0 (RtlUpcaseUnicodeChar.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140482380 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140568D78 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmEqualTrans @ 0x14056959C (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x14056A314 (CmListGetNextElement.c)
 *     RtlCompareUnicodeStrings @ 0x14056CEE0 (RtlCompareUnicodeStrings.c)
 *     CmpSetKcbAtLayerHeight @ 0x140698264 (CmpSetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmQueryValueKey(__int64 a1, unsigned __int16 *a2, int a3, _DWORD *a4, unsigned int a5, int *a6)
{
  __int64 v6; // rsi
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rdx
  PPRIVILEGE_SET v10; // rcx
  __int64 v11; // r11
  struct _KTHREAD *CurrentThread; // rax
  __int64 v13; // r15
  struct _PRIVILEGE_SET *v14; // rdi
  __int16 v15; // bx
  __int16 v16; // r14
  struct _PRIVILEGE_SET *v17; // rbx
  __int16 v18; // di
  int *v19; // rsi
  int *v20; // rbx
  __int64 v21; // rbx
  char v22; // cl
  int v23; // eax
  __int64 v24; // r10
  __int16 v25; // r14
  bool v26; // zf
  __int64 v27; // r14
  unsigned int v28; // r12d
  __int64 v29; // rdi
  __int64 v30; // rdx
  unsigned int *v31; // rsi
  PCWCH *v32; // rdi
  unsigned int v33; // r13d
  __int64 v34; // rax
  unsigned __int16 v35; // r15
  const WCHAR *v36; // r14
  unsigned __int16 v37; // r12
  WCHAR *v38; // rsi
  WCHAR v39; // di
  unsigned int v40; // ebx
  LONG v41; // ebx
  __int64 v42; // rdx
  int v43; // edi
  __int64 v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rbx
  int KeyValueData; // edi
  __int16 v49; // si
  PPRIVILEGE_SET v50; // rcx
  int *v51; // r14
  ULONG_PTR *v52; // rbx
  ULONG_PTR v53; // rbx
  bool v54; // r15
  __int64 v55; // rdx
  __int64 NextElement; // rax
  __int64 v58; // r9
  int NameInListWithStatus; // eax
  int v60; // ecx
  SIZE_T v61; // rsi
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  __int64 v63; // r10
  __int64 v64; // r10
  char v65; // al
  __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rcx
  char v69; // [rsp+48h] [rbp-C0h]
  unsigned int v70; // [rsp+4Ch] [rbp-BCh] BYREF
  __int16 v71; // [rsp+50h] [rbp-B8h]
  __int16 v72; // [rsp+52h] [rbp-B6h]
  PPRIVILEGE_SET v73; // [rsp+58h] [rbp-B0h]
  __int64 v74; // [rsp+60h] [rbp-A8h] BYREF
  int v75[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v76; // [rsp+70h] [rbp-98h]
  PPRIVILEGE_SET Privileges; // [rsp+78h] [rbp-90h]
  __int64 v78; // [rsp+80h] [rbp-88h]
  __int64 v79; // [rsp+88h] [rbp-80h] BYREF
  unsigned int *v80; // [rsp+90h] [rbp-78h]
  __int64 v81; // [rsp+98h] [rbp-70h]
  __int64 v82; // [rsp+A0h] [rbp-68h]
  __int64 v83; // [rsp+A8h] [rbp-60h] BYREF
  char v84[8]; // [rsp+B0h] [rbp-58h] BYREF
  char v85[8]; // [rsp+B8h] [rbp-50h] BYREF
  char v86[8]; // [rsp+C0h] [rbp-48h] BYREF
  char v87[8]; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v88; // [rsp+D0h] [rbp-38h]
  __int64 v89; // [rsp+D8h] [rbp-30h]

  v6 = (__int64)a2;
  v7 = a1;
  v74 = 4294901760LL;
  v79 = 0LL;
  v8 = 0LL;
  v73 = 0LL;
  *(_QWORD *)v75 = 0LL;
  v76 = 0LL;
  Privileges = 0LL;
  v82 = 0LL;
  v70 = -1;
  HvpGetCellContextReinitialize((__int64)v87);
  HvpGetCellContextReinitialize((__int64)v84);
  if ( CmpPuntBoot == (_BYTE)v9 )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), v9);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)&CmpRegistryLock, 1u);
    v10 = Privileges;
    v11 = 0LL;
    v73 = Privileges;
  }
  v13 = *(_QWORD *)(v7 + 8);
  v14 = (struct _PRIVILEGE_SET *)v11;
  v89 = v13;
  v15 = *(_WORD *)(v13 + 58);
  if ( v15 >= 2 && v15 != 1 )
  {
    v61 = 8LL * (unsigned int)(v15 - 1);
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag((__int64)v10, v61, 0x35364D43u);
    v14 = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
    {
      v17 = v73;
      KeyValueData = -1073741670;
      goto LABEL_68;
    }
    memset(TransientPoolWithTag, 0, v61);
    v6 = (__int64)a2;
    v11 = 0LL;
  }
  v16 = *(_WORD *)(v13 + 58);
  LOWORD(v74) = v15;
  v17 = v14;
  v73 = v14;
  Privileges = v14;
  v72 = v16;
  WORD1(v74) = v16;
  if ( v16 )
  {
    v63 = *(_QWORD *)(v13 + 184);
    if ( v63 )
    {
      do
      {
        CmpSetKcbAtLayerHeight(&v74, (unsigned __int16)v16, *(_QWORD *)(v63 + 16));
        v63 = *(_QWORD *)(v64 + 24);
        --v16;
      }
      while ( v63 );
      v17 = Privileges;
      v16 = WORD1(v74);
      v73 = Privileges;
      v72 = WORD1(v74);
    }
  }
  else
  {
    *(_QWORD *)v75 = v13;
  }
  if ( !*(_QWORD *)(v7 + 56) && !*(_QWORD *)(v7 + 64) )
  {
LABEL_8:
    v18 = v11;
    if ( (__int16)v11 <= v16 )
    {
      v19 = v75;
      do
      {
        if ( v18 >= 2 )
          v20 = (int *)((char *)v17 + 8 * v18 - 16);
        else
          v20 = v19;
        v21 = *(_QWORD *)v20;
        ExAcquirePushLockSharedEx(v21 + 40, 0LL);
        _InterlockedIncrement((volatile signed __int32 *)(v21 + 48));
        ++v18;
        v17 = Privileges;
        v19 += 2;
        v72 = WORD1(v74);
      }
      while ( v18 <= SWORD1(v74) );
      v6 = (__int64)a2;
      v11 = 0LL;
    }
    v22 = 0;
    v73 = v17;
LABEL_15:
    v69 = v22;
    v23 = *(_DWORD *)(v7 + 48);
    v83 = v11;
    if ( (v23 & 9) == 0 )
    {
      v24 = v79;
      if ( !v79 )
      {
LABEL_17:
        v25 = *(_WORD *)(v13 + 58);
        while ( 1 )
        {
          while ( 1 )
          {
            v71 = v25;
            if ( v25 < 0
              || (v25 >= 2 ? (v8 = *((_QWORD *)v17 + v25 - 2)) : (v8 = *(_QWORD *)&v75[2 * v25]),
                  (v26 = *(_WORD *)(v8 + 58) == 0, v81 = v8, !v26) && *(_BYTE *)(v8 + 57) == 1) )
            {
              v45 = v82;
              goto LABEL_52;
            }
            if ( *(_DWORD *)(v8 + 32) != -1 )
              break;
            --v25;
          }
          if ( v24 && *(_QWORD *)(v8 + 280) == v24 )
          {
            NameInListWithStatus = CmpFindNameInListWithStatus(
                                     *(_QWORD *)(v8 + 24),
                                     (unsigned int *)(v8 + 272),
                                     v6,
                                     0,
                                     v11,
                                     (__int64)&v70);
            KeyValueData = NameInListWithStatus;
            if ( NameInListWithStatus >= 0 )
            {
              v45 = *(_QWORD *)(v8 + 24);
LABEL_92:
              v11 = 0LL;
LABEL_52:
              if ( v70 == -1 )
              {
                KeyValueData = -1073741772;
              }
              else
              {
                v46 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(v45 + 8))(v45, v70, v87);
                v47 = v46;
                if ( (*(_DWORD *)(v45 + 144) & 0x80000) != 0 && (*(_BYTE *)(v46 + 16) & 2) != 0 )
                {
                  KeyValueData = -1073741772;
                  v11 = 0LL;
                }
                else
                {
                  KeyValueData = CmpQueryKeyValueData(v8, v70, v46, a3, a4, a5, a6);
                  v11 = 0LL;
                  if ( KeyValueData >= 0 )
                    KeyValueData = 0;
                }
                if ( v47 )
                {
                  (*(void (__fastcall **)(__int64, char *))(v45 + 16))(v45, v87);
                  goto LABEL_58;
                }
              }
LABEL_59:
              v49 = v11;
              if ( (__int16)v11 > v72 )
              {
                v17 = v73;
              }
              else
              {
                v50 = v73;
                v51 = v75;
                while ( 1 )
                {
                  if ( v49 >= 2 )
                    v52 = (ULONG_PTR *)((char *)v50 + 8 * v49 - 16);
                  else
                    v52 = (ULONG_PTR *)v51;
                  v53 = *v52;
                  v54 = (*(_DWORD *)(v53 + 4) & 0x80000) != 0;
                  if ( *(struct _KTHREAD **)(v53 + 48) == KeGetCurrentThread() )
                    *(_QWORD *)(v53 + 48) = v11;
                  else
                    _InterlockedDecrement((volatile signed __int32 *)(v53 + 48));
                  ExReleasePushLockEx(v53 + 40, 0LL);
                  if ( v54 && (*(_DWORD *)(v53 + 4) & 0x80000) != 0 )
                    CmpFreeKeyControlBlock(v53);
                  ++v49;
                  v51 += 2;
                  if ( v49 > SWORD1(v74) )
                    break;
                  v50 = Privileges;
                  v11 = 0LL;
                }
                v17 = Privileges;
              }
              goto LABEL_68;
            }
            if ( NameInListWithStatus != -1073741772 )
              goto LABEL_58;
          }
          else
          {
            if ( (*(_DWORD *)(v8 + 4) & 8) != 0 )
            {
              if ( !v22 && !CmpTryConvertKcbLockSharedToExclusive(v8) )
              {
                CmpUnlockKcbStack((__int64)&v74);
                CmpLockKcbStackExclusive((__int64)&v74);
                v13 = v89;
                v22 = 1;
                v7 = a1;
                v11 = 0LL;
                goto LABEL_15;
              }
              CmpCleanUpKcbValueCache(v8);
              v66 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(v8 + 24) + 8LL))(
                      *(_QWORD *)(v8 + 24),
                      *(unsigned int *)(v8 + 32),
                      v84);
              v67 = *(unsigned int *)(v66 + 40);
              LODWORD(v66) = *(_DWORD *)(v66 + 36);
              *(_QWORD *)(v8 + 96) = v67;
              v68 = *(_QWORD *)(v8 + 24);
              *(_DWORD *)(v8 + 88) = v66;
              (*(void (__fastcall **)(__int64, char *))(v68 + 16))(v68, v84);
              v11 = 0LL;
            }
            v27 = *(_QWORD *)(v8 + 24);
            v28 = *(_DWORD *)(v8 + 88);
            v29 = v11;
            v88 = v27;
            v70 = v28;
            v78 = v11;
            HvpGetCellContextReinitialize((__int64)v86);
            if ( v28 )
            {
              v29 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(v27 + 8))(v27, v30, v86);
              v78 = v29;
            }
            HvpGetCellContextReinitialize((__int64)v85);
            if ( v28 )
            {
              v31 = (unsigned int *)v29;
              v80 = (unsigned int *)v29;
              v32 = (PCWCH *)a2;
              v33 = v11;
              while ( 1 )
              {
                v34 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(v27 + 8))(v27, *v31, v85);
                v35 = *(_WORD *)(v34 + 2);
                v36 = (const WCHAR *)(v34 + 20);
                if ( (*(_BYTE *)(v34 + 16) & 1) != 0 )
                {
                  v37 = *a2 >> 1;
                  v38 = (WCHAR *)*((_QWORD *)a2 + 1);
                  if ( v37 )
                  {
                    while ( v35 )
                    {
                      v39 = *v38++;
                      v40 = *(unsigned __int8 *)v36;
                      v36 = (const WCHAR *)((char *)v36 + 1);
                      if ( v39 != (_WORD)v40 )
                      {
                        if ( v39 >= 0x61u )
                        {
                          if ( v39 > 0x7Au )
                            v39 = RtlUpcaseUnicodeChar(v39);
                          else
                            v39 -= 32;
                        }
                        if ( v40 >= 0x61 )
                        {
                          if ( v40 > 0x7A )
                            LOWORD(v40) = RtlUpcaseUnicodeChar(v40);
                          else
                            LOWORD(v40) = v40 - 32;
                        }
                        v41 = v39 - (unsigned __int16)v40;
                        if ( v41 )
                          goto LABEL_36;
                      }
                      --v35;
                      if ( !--v37 )
                        break;
                    }
                  }
                  v41 = v37 - v35;
LABEL_36:
                  v31 = v80;
                  v28 = v70;
                  v32 = (PCWCH *)a2;
                }
                else
                {
                  v41 = RtlCompareUnicodeStrings(
                          v32[1],
                          (unsigned __int64)*(unsigned __int16 *)v32 >> 1,
                          v36,
                          (unsigned __int64)v35 >> 1,
                          1u);
                }
                v27 = v88;
                (*(void (__fastcall **)(__int64, char *))(v88 + 16))(v88, v85);
                if ( !v41 )
                  break;
                ++v31;
                ++v33;
                v80 = v31;
                if ( v33 >= v28 )
                {
                  v8 = v81;
                  v11 = 0LL;
                  goto LABEL_40;
                }
              }
              v42 = v78;
              v11 = 0LL;
              v44 = v33;
              v43 = 0;
              v8 = v81;
              v70 = *(_DWORD *)(v78 + 4 * v44);
            }
            else
            {
LABEL_40:
              v42 = v78;
              v43 = -1073741772;
              v70 = -1;
            }
            if ( v42 )
            {
              (*(void (__fastcall **)(__int64, char *))(v27 + 16))(v27, v86);
              v11 = 0LL;
            }
            if ( v43 >= 0 )
            {
              v45 = *(_QWORD *)(v8 + 24);
              goto LABEL_52;
            }
            v6 = (__int64)a2;
            v25 = v71;
          }
          if ( *(_WORD *)(v8 + 58) && *(_BYTE *)(v8 + 57) )
          {
            v45 = v82;
            goto LABEL_92;
          }
          v17 = v73;
          --v25;
          v24 = v79;
          v11 = 0LL;
          v22 = v69;
        }
      }
      NextElement = CmListGetNextElement(*(_QWORD *)(v7 + 8) + 200LL, &v83, 32LL);
      if ( !NextElement )
      {
LABEL_85:
        v22 = v69;
        goto LABEL_17;
      }
      while ( 1 )
      {
        v60 = *(_DWORD *)(NextElement + 68);
        if ( v60 == 2 || v60 == 11 )
          break;
        NextElement = CmListGetNextElement(v58 + 200, &v83, 32LL);
        if ( !NextElement )
          goto LABEL_85;
      }
      v65 = CmEqualTrans(*(_QWORD *)(NextElement + 56));
      v11 = 0LL;
      if ( !v65 )
      {
        v24 = v79;
        goto LABEL_85;
      }
    }
    KeyValueData = -1073740763;
    if ( (*(_BYTE *)(v7 + 48) & 1) == 0 )
      KeyValueData = -1073741444;
    goto LABEL_59;
  }
  CmpLockKcbStackShared((__int64)&v74);
  if ( CmpIsKeyDeletedForKeyBody(v7, 0LL) )
  {
    KeyValueData = -1073740763;
    if ( (*(_BYTE *)(v7 + 48) & 1) == 0 )
      KeyValueData = -1073741444;
LABEL_58:
    v11 = 0LL;
    goto LABEL_59;
  }
  CmpUnlockKcbStack((__int64)&v74);
  KeyValueData = CmpTransSearchAddTransFromKeyBody(v7, &v79);
  if ( KeyValueData >= 0 )
  {
    v11 = 0LL;
    goto LABEL_8;
  }
LABEL_68:
  if ( !CmpPuntBoot )
  {
    ExReleaseResourceLite((PERESOURCE)&CmpRegistryLock);
    KeLeaveCriticalRegion();
    LOBYTE(v55) = 1;
    PsBoostThreadIo((__int64)KeGetCurrentThread(), v55);
    v17 = Privileges;
  }
  if ( v17 )
    MiDeleteSubsection(v17);
  return (unsigned int)KeyValueData;
}
