/*
 * XREFs of CmQueryValueKey @ 0x1405063C0
 * Callers:
 *     NtQueryValueKey @ 0x1405074B0 (NtQueryValueKey.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14007EAA8 (CmpAllocateTransientPoolWithTag.c)
 *     HvpGetCellContextReinitialize @ 0x14008D150 (HvpGetCellContextReinitialize.c)
 *     PsBoostThreadIo @ 0x14008D1F0 (PsBoostThreadIo.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpLockTableAdd @ 0x1401DFA5C (CmpLockTableAdd.c)
 *     CmpLockTableRemove @ 0x1401DFB90 (CmpLockTableRemove.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14042DC14 (CmpTransSearchAddTransFromKeyBody.c)
 *     RtlCompareUnicodeStrings @ 0x140485820 (RtlCompareUnicodeStrings.c)
 *     CmpFindNameInListWithStatus @ 0x1404905C4 (CmpFindNameInListWithStatus.c)
 *     CmpCleanUpKcbValueCache @ 0x140491380 (CmpCleanUpKcbValueCache.c)
 *     CmpFreeKeyControlBlock @ 0x140491410 (CmpFreeKeyControlBlock.c)
 *     CmpTryConvertKcbLockSharedToExclusive @ 0x140491788 (CmpTryConvertKcbLockSharedToExclusive.c)
 *     CmEqualTrans @ 0x1404CE678 (CmEqualTrans.c)
 *     CmpLockKcbStackExclusive @ 0x1404CFFD8 (CmpLockKcbStackExclusive.c)
 *     CmListGetNextElement @ 0x1404D4148 (CmListGetNextElement.c)
 *     CmpLockKcbStackShared @ 0x1404FF968 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1404FF9E0 (CmpUnlockKcbStack.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140501430 (CmpIsKeyDeletedForKeyBody.c)
 *     RtlUpcaseUnicodeChar @ 0x140502520 (RtlUpcaseUnicodeChar.c)
 *     CmpQueryKeyValueData @ 0x140503410 (CmpQueryKeyValueData.c)
 *     CmpSetKcbAtLayerHeight @ 0x14066DD6C (CmpSetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmQueryValueKey(__int64 a1, unsigned __int16 *a2, int a3, _DWORD *a4, unsigned int a5, int *a6)
{
  __int16 v6; // di
  __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // r12
  struct _PRIVILEGE_SET *v13; // r14
  __int16 v14; // bx
  __int16 v15; // bx
  __int64 *v16; // rsi
  __int64 v17; // rbx
  char v18; // dl
  __int64 v19; // rdi
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // r11
  __int16 v23; // bx
  bool v24; // zf
  __int64 v25; // r14
  unsigned int v26; // r12d
  __int64 v27; // rdx
  unsigned int v28; // r13d
  unsigned int *v29; // rsi
  PCWCH *v30; // rdi
  __int64 v31; // rax
  unsigned __int16 v32; // r15
  const WCHAR *v33; // r14
  unsigned __int16 v34; // r12
  WCHAR *v35; // rsi
  WCHAR v36; // di
  unsigned int v37; // ebx
  LONG v38; // ebx
  __int64 v39; // rdx
  int v40; // edi
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rbx
  int v45; // edi
  __int16 v46; // si
  struct _PRIVILEGE_SET *v47; // rbx
  unsigned __int64 *v48; // r14
  unsigned __int64 v49; // rbx
  bool v50; // r15
  __int64 v51; // rdx
  char *NextElement; // rax
  _QWORD *v54; // r10
  SIZE_T v55; // rdi
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  __int64 v57; // r10
  __int64 v58; // r10
  int v59; // ecx
  int NameInListWithStatus; // eax
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rcx
  char v64; // [rsp+40h] [rbp-A9h]
  int v65; // [rsp+44h] [rbp-A5h] BYREF
  __int16 v66; // [rsp+48h] [rbp-A1h]
  __int16 v67; // [rsp+4Ah] [rbp-9Fh]
  unsigned int *v68; // [rsp+50h] [rbp-99h]
  struct _PRIVILEGE_SET *v69; // [rsp+58h] [rbp-91h]
  _QWORD v70[4]; // [rsp+60h] [rbp-89h] BYREF
  __int64 v71; // [rsp+80h] [rbp-69h]
  __int64 v72; // [rsp+88h] [rbp-61h] BYREF
  __int64 v73; // [rsp+90h] [rbp-59h]
  __int64 v74; // [rsp+98h] [rbp-51h]
  __int64 v75; // [rsp+A0h] [rbp-49h] BYREF
  char v76[8]; // [rsp+A8h] [rbp-41h] BYREF
  char v77[8]; // [rsp+B0h] [rbp-39h] BYREF
  char v78[8]; // [rsp+B8h] [rbp-31h] BYREF
  char v79[8]; // [rsp+C0h] [rbp-29h] BYREF
  __int64 v80; // [rsp+C8h] [rbp-21h]
  __int64 v81; // [rsp+D0h] [rbp-19h]
  unsigned __int16 v82; // [rsp+D8h] [rbp-11h]
  const WCHAR *v83; // [rsp+E0h] [rbp-9h]

  v6 = 0;
  v7 = (__int64)a2;
  v8 = a1;
  v72 = 0LL;
  v9 = 0LL;
  memset(v70, 0, sizeof(v70));
  v74 = 0LL;
  WORD1(v70[0]) = -1;
  v65 = -1;
  HvpGetCellContextReinitialize((__int64)v79);
  HvpGetCellContextReinitialize((__int64)v76);
  if ( !CmpPuntBoot )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)&CmpRegistryLock, 1u);
  }
  v12 = *(_QWORD *)(v8 + 8);
  v13 = 0LL;
  v81 = v12;
  v69 = 0LL;
  v14 = *(_WORD *)(v12 + 58);
  if ( v14 >= 2 && v14 != 1 )
  {
    v55 = 8LL * (unsigned int)(v14 - 1);
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(v10, v55, 0x35364D43u);
    v69 = TransientPoolWithTag;
    v13 = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
    {
      v13 = (struct _PRIVILEGE_SET *)v70[3];
      v45 = -1073741670;
      goto LABEL_71;
    }
    memset(TransientPoolWithTag, 0, v55);
    v6 = 0;
  }
  LOWORD(v70[0]) = v14;
  v15 = *(_WORD *)(v12 + 58);
  v70[3] = v13;
  v67 = v15;
  WORD1(v70[0]) = v15;
  if ( v15 )
  {
    v57 = *(_QWORD *)(v12 + 184);
    if ( v57 )
    {
      do
      {
        CmpSetKcbAtLayerHeight(v70, (unsigned __int16)v15, *(_QWORD *)(v57 + 16));
        v57 = *(_QWORD *)(v58 + 24);
        --v15;
      }
      while ( v57 );
      v13 = (struct _PRIVILEGE_SET *)v70[3];
      v15 = WORD1(v70[0]);
      v69 = (struct _PRIVILEGE_SET *)v70[3];
      v67 = WORD1(v70[0]);
    }
  }
  else
  {
    v70[1] = v12;
  }
  if ( *(_QWORD *)(v8 + 56) || *(_QWORD *)(v8 + 64) )
  {
    CmpLockKcbStackShared((__int64)v70);
    if ( CmpIsKeyDeletedForKeyBody(v8, 0LL) )
    {
      v45 = -1073740763;
      if ( (*(_BYTE *)(v8 + 48) & 1) == 0 )
        v45 = -1073741444;
      goto LABEL_77;
    }
    CmpUnlockKcbStack((__int64)v70);
    v45 = CmpTransSearchAddTransFromKeyBody(v8, &v72);
    if ( v45 < 0 )
      goto LABEL_71;
    v6 = 0;
  }
  if ( v15 >= 0 )
  {
    v16 = &v70[1];
    do
    {
      if ( v6 >= 2 )
        v17 = *((_QWORD *)v13 + v6 - 2);
      else
        v17 = *v16;
      if ( (*(_DWORD *)(v17 + 4) & 0x100000) != 0 )
        *(_DWORD *)(v17 + 60) = CmpLockTableAdd(v17, 0);
      ExAcquirePushLockSharedEx(v17 + 40, 0LL);
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 48));
      ++v6;
      v13 = (struct _PRIVILEGE_SET *)v70[3];
      ++v16;
      v67 = WORD1(v70[0]);
    }
    while ( v6 <= SWORD1(v70[0]) );
    v7 = (__int64)a2;
  }
  v18 = 0;
  v69 = v13;
  v19 = 0LL;
LABEL_17:
  v64 = v18;
  v20 = *(_DWORD *)(v8 + 48);
  v21 = *(_QWORD *)(v8 + 8);
  v75 = 0LL;
  if ( (v20 & 9) == 0 )
  {
    v22 = v72;
    if ( !v72 )
      goto LABEL_19;
    NextElement = CmListGetNextElement((_QWORD *)(v21 + 200), &v75, 32);
    if ( !NextElement )
    {
LABEL_90:
      v18 = v64;
LABEL_19:
      v23 = *(_WORD *)(v12 + 58);
      while ( 1 )
      {
        v66 = v23;
        if ( v23 < 0 )
          break;
        v9 = v23 >= 2 ? *((_QWORD *)v13 + v23 - 2) : v70[v23 + 1];
        v24 = *(_WORD *)(v9 + 58) == 0;
        v73 = v9;
        if ( !v24 && *(_BYTE *)(v9 + 57) == 1 )
          break;
        if ( *(_DWORD *)(v9 + 32) == -1 )
        {
          --v23;
        }
        else
        {
          if ( v22 && *(_QWORD *)(v9 + 280) == v22 )
          {
            NameInListWithStatus = CmpFindNameInListWithStatus(
                                     *(_QWORD *)(v9 + 24),
                                     (unsigned int *)(v9 + 272),
                                     v7,
                                     0,
                                     0LL,
                                     (__int64)&v65);
            LODWORD(v68) = NameInListWithStatus;
            v45 = NameInListWithStatus;
            if ( NameInListWithStatus >= 0 )
              goto LABEL_53;
            if ( NameInListWithStatus != -1073741772 )
              goto LABEL_60;
          }
          else
          {
            if ( (*(_DWORD *)(v9 + 4) & 8) != 0 )
            {
              if ( !v18 && !CmpTryConvertKcbLockSharedToExclusive(v9) )
              {
                CmpUnlockKcbStack((__int64)v70);
                CmpLockKcbStackExclusive((__int64)v70);
                v8 = a1;
                v18 = 1;
                v12 = v81;
                goto LABEL_17;
              }
              CmpCleanUpKcbValueCache(v9);
              v61 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(v9 + 24) + 8LL))(
                      *(_QWORD *)(v9 + 24),
                      *(unsigned int *)(v9 + 32),
                      v76);
              v62 = *(unsigned int *)(v61 + 40);
              LODWORD(v61) = *(_DWORD *)(v61 + 36);
              *(_QWORD *)(v9 + 96) = v62;
              v63 = *(_QWORD *)(v9 + 24);
              *(_DWORD *)(v9 + 88) = v61;
              (*(void (__fastcall **)(__int64, char *))(v63 + 16))(v63, v76);
            }
            v25 = *(_QWORD *)(v9 + 24);
            v26 = *(_DWORD *)(v9 + 88);
            v80 = v25;
            v65 = v26;
            v71 = 0LL;
            HvpGetCellContextReinitialize((__int64)v78);
            if ( v26 )
            {
              v19 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(v25 + 8))(v25, v27, v78);
              v71 = v19;
            }
            HvpGetCellContextReinitialize((__int64)v77);
            if ( v26 )
            {
              v28 = 0;
              v29 = (unsigned int *)v19;
              v68 = (unsigned int *)v19;
              v30 = (PCWCH *)a2;
              while ( 1 )
              {
                v31 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(v25 + 8))(v25, *v29, v77);
                v32 = *(_WORD *)(v31 + 2);
                v33 = (const WCHAR *)(v31 + 20);
                LOBYTE(v31) = *(_BYTE *)(v31 + 16);
                v83 = v33;
                v82 = v32;
                if ( (v31 & 1) != 0 )
                {
                  v34 = *a2 >> 1;
                  v35 = (WCHAR *)*((_QWORD *)a2 + 1);
                  if ( v34 )
                  {
                    while ( v32 )
                    {
                      v36 = *v35++;
                      v37 = *(unsigned __int8 *)v33;
                      v33 = (const WCHAR *)((char *)v33 + 1);
                      if ( v36 != (_WORD)v37 )
                      {
                        if ( v36 >= 0x61u )
                        {
                          if ( v36 > 0x7Au )
                            v36 = RtlUpcaseUnicodeChar(v36);
                          else
                            v36 -= 32;
                        }
                        if ( v37 >= 0x61 )
                        {
                          if ( v37 > 0x7A )
                            LOWORD(v37) = RtlUpcaseUnicodeChar(v37);
                          else
                            LOWORD(v37) = v37 - 32;
                        }
                        v38 = v36 - (unsigned __int16)v37;
                        if ( v38 )
                          goto LABEL_38;
                      }
                      --v32;
                      if ( !--v34 )
                        break;
                    }
                  }
                  v38 = v34 - v32;
LABEL_38:
                  v29 = v68;
                  v26 = v65;
                  v30 = (PCWCH *)a2;
                }
                else
                {
                  v38 = RtlCompareUnicodeStrings(
                          v30[1],
                          (unsigned __int64)*(unsigned __int16 *)v30 >> 1,
                          v33,
                          (unsigned __int64)v32 >> 1,
                          1u);
                }
                v25 = v80;
                (*(void (__fastcall **)(__int64, char *))(v80 + 16))(v80, v77);
                if ( !v38 )
                  break;
                ++v29;
                ++v28;
                v68 = v29;
                if ( v28 >= v26 )
                {
                  v9 = v73;
                  goto LABEL_42;
                }
              }
              v39 = v71;
              v40 = 0;
              LODWORD(v68) = 0;
              v41 = v28;
              v9 = v73;
              v65 = *(_DWORD *)(v71 + 4 * v41);
            }
            else
            {
LABEL_42:
              v39 = v71;
              v40 = -1073741772;
              LODWORD(v68) = -1073741772;
              v65 = -1;
            }
            if ( v39 )
              (*(void (__fastcall **)(__int64, char *))(v25 + 16))(v25, v78);
            if ( v40 >= 0 )
            {
LABEL_53:
              v42 = *(_QWORD *)(v9 + 24);
              goto LABEL_54;
            }
            v7 = (__int64)a2;
            v23 = v66;
          }
          if ( *(_WORD *)(v9 + 58) && *(_BYTE *)(v9 + 57) )
            break;
          v13 = v69;
          --v23;
          v22 = v72;
          v19 = 0LL;
          v18 = v64;
        }
      }
      v42 = v74;
LABEL_54:
      if ( v65 == -1 )
      {
        v45 = -1073741772;
        goto LABEL_77;
      }
      v43 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(v42 + 8))(v42, (unsigned int)v65, v79);
      v44 = v43;
      if ( (*(_DWORD *)(v42 + 144) & 0x80000) != 0 && (*(_BYTE *)(v43 + 16) & 2) != 0 )
      {
        v45 = -1073741772;
        LODWORD(v68) = -1073741772;
      }
      else
      {
        LODWORD(v68) = CmpQueryKeyValueData(v9, v65, v43, a3, a4, a5, a6);
        v45 = (int)v68;
        if ( (int)v68 >= 0 )
        {
          v45 = 0;
          LODWORD(v68) = 0;
        }
      }
      if ( v44 )
        (*(void (__fastcall **)(__int64, char *))(v42 + 16))(v42, v79);
      goto LABEL_60;
    }
    while ( 1 )
    {
      v59 = *((_DWORD *)NextElement + 17);
      if ( v59 == 2 || v59 == 11 )
        break;
      NextElement = CmListGetNextElement(v54, &v75, 32);
      if ( !NextElement )
        goto LABEL_90;
    }
    if ( !CmEqualTrans(*((_QWORD *)NextElement + 7), v22) )
    {
      v22 = v72;
      goto LABEL_90;
    }
  }
  v45 = -1073741444;
  if ( (*(_DWORD *)(v8 + 48) & 1) != 0 )
    v45 = -1073740763;
LABEL_77:
  LODWORD(v68) = v45;
LABEL_60:
  v46 = 0;
  if ( v67 < 0 )
  {
    v13 = v69;
  }
  else
  {
    v47 = v69;
    v48 = &v70[1];
    while ( 1 )
    {
      if ( v46 >= 2 )
        v49 = *((_QWORD *)v47 + v46 - 2);
      else
        v49 = *v48;
      v50 = (*(_DWORD *)(v49 + 4) & 0x80000) != 0;
      if ( *(struct _KTHREAD **)(v49 + 48) == KeGetCurrentThread() )
        *(_QWORD *)(v49 + 48) = 0LL;
      else
        _InterlockedDecrement((volatile signed __int32 *)(v49 + 48));
      ExReleasePushLockEx(v49 + 40, 0LL);
      if ( (*(_DWORD *)(v49 + 4) & 0x100000) != 0 )
        CmpLockTableRemove(v49, *(_DWORD *)(v49 + 60));
      if ( v50 && (*(_DWORD *)(v49 + 4) & 0x80000) != 0 )
        CmpFreeKeyControlBlock(v49);
      ++v46;
      ++v48;
      if ( v46 > SWORD1(v70[0]) )
        break;
      v47 = (struct _PRIVILEGE_SET *)v70[3];
    }
    v13 = (struct _PRIVILEGE_SET *)v70[3];
    v45 = (int)v68;
  }
LABEL_71:
  if ( !CmpPuntBoot )
  {
    ExReleaseResourceLite((PERESOURCE)&CmpRegistryLock);
    KeLeaveCriticalRegion();
    LOBYTE(v51) = 1;
    PsBoostThreadIo((__int64)KeGetCurrentThread(), v51);
    v13 = (struct _PRIVILEGE_SET *)v70[3];
  }
  if ( v13 )
    MiDeleteSubsection(v13);
  return (unsigned int)v45;
}
