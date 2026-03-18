/*
 * XREFs of CmQueryKey @ 0x1404AE2E0
 * Callers:
 *     NtQueryKey @ 0x14059E7B0 (NtQueryKey.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     CmpFreeTransientPoolWithTag @ 0x140009034 (CmpFreeTransientPoolWithTag.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     PsGetCurrentThreadProcess @ 0x1400BAFE0 (PsGetCurrentThreadProcess.c)
 *     PsBoostThreadIo @ 0x1400FE2B0 (PsBoostThreadIo.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     CmQueryLayeredKey @ 0x1402219B8 (CmQueryLayeredKey.c)
 *     KCBNeedsVirtualImage_0 @ 0x140221E5C (KCBNeedsVirtualImage_0.c)
 *     CmpUnlockRegistry @ 0x1404A8188 (CmpUnlockRegistry.c)
 *     CmpFreeKeyControlBlock @ 0x1404A82B0 (CmpFreeKeyControlBlock.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     CmpConstructNameWithStatus @ 0x1404ABC50 (CmpConstructNameWithStatus.c)
 *     CmpUnlockTwoKcbs @ 0x1404ACE30 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1404ACECC (CmpLockTwoKcbsShared.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404AECB0 (CmpIsKeyDeletedForKeyBody.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14054BFC8 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpQueryKeyData @ 0x140553CE4 (CmpQueryKeyData.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1405AE570 (SeCaptureSubjectContextEx.c)
 *     CmGetKeyFlags @ 0x1406136D0 (CmGetKeyFlags.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1406F3B38 (CmEnumerateValueKeyFromMergedView.c)
 *     CmVirtualKCBToRealPath @ 0x1406F456C (CmVirtualKCBToRealPath.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x1406F517C (CmpFindSubKeyByNumberFromMergedView.c)
 */

__int64 __fastcall CmQueryKey(__int64 a1, __int64 a2, int a3, unsigned int *a4, unsigned int a5, unsigned int *a6)
{
  __int64 v10; // r15
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v12; // rbx
  __int64 v13; // rsi
  ULONG_PTR v14; // rbx
  __int64 v15; // r8
  __int64 v16; // r9
  int KeyData; // esi
  UNICODE_STRING *p_UnicodeString; // rax
  unsigned int v19; // eax
  unsigned int v20; // ecx
  __int64 v21; // rbx
  int v22; // r12d
  unsigned int *v23; // rcx
  __int64 v24; // rcx
  unsigned int v25; // edx
  unsigned int v26; // edx
  unsigned int KeyFlags; // eax
  int v28; // edx
  int v29; // eax
  struct _KTHREAD *v30; // rbx
  struct _KPROCESS *CurrentThreadProcess; // rax
  int v32; // esi
  ULONG_PTR v33; // rbx
  bool v34; // al
  unsigned int v35; // r9d
  unsigned int v36; // r9d
  int v37; // r8d
  unsigned int v38; // r8d
  int v39; // ecx
  __int64 v40; // rdx
  int v41; // r8d
  unsigned int *v42; // rsi
  ULONG_PTR v43; // rbx
  int v44; // edi
  __int64 v45; // rdx
  unsigned int LayeredKey; // ebx
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // r9
  int v51; // [rsp+50h] [rbp-198h]
  __int64 v53[2]; // [rsp+60h] [rbp-188h] BYREF
  __int64 v54; // [rsp+70h] [rbp-178h] BYREF
  const void **v55; // [rsp+78h] [rbp-170h]
  ULONG_PTR BugCheckParameter2; // [rsp+80h] [rbp-168h]
  unsigned int v57; // [rsp+88h] [rbp-160h] BYREF
  unsigned int *v58; // [rsp+90h] [rbp-158h]
  __int64 v59; // [rsp+98h] [rbp-150h]
  unsigned int v60; // [rsp+A0h] [rbp-148h]
  unsigned int *v61; // [rsp+A8h] [rbp-140h]
  unsigned int *v62; // [rsp+B0h] [rbp-138h]
  UNICODE_STRING UnicodeString; // [rsp+B8h] [rbp-130h] BYREF
  UNICODE_STRING *v64; // [rsp+C8h] [rbp-120h] BYREF
  __int64 v65; // [rsp+D0h] [rbp-118h]
  unsigned int v66; // [rsp+D8h] [rbp-110h]
  _BYTE v67[4]; // [rsp+ECh] [rbp-FCh] BYREF
  _BYTE v68[4]; // [rsp+FCh] [rbp-ECh] BYREF
  struct _KTHREAD *v69; // [rsp+108h] [rbp-E0h]
  _BYTE v70[8]; // [rsp+110h] [rbp-D8h] BYREF
  _BYTE v71[8]; // [rsp+118h] [rbp-D0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+120h] [rbp-C8h] BYREF
  char v73; // [rsp+140h] [rbp-A8h] BYREF
  unsigned int v74; // [rsp+150h] [rbp-98h]
  unsigned int v75; // [rsp+158h] [rbp-90h]
  unsigned int v76; // [rsp+15Ch] [rbp-8Ch]
  unsigned int v77; // [rsp+164h] [rbp-84h]
  unsigned int v78; // [rsp+168h] [rbp-80h]
  _BYTE v79[48]; // [rsp+170h] [rbp-78h] BYREF

  v59 = a1;
  v65 = a1;
  v53[1] = a2;
  v61 = a4;
  v58 = a6;
  v62 = a6;
  v55 = 0LL;
  v10 = 0LL;
  v54 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( qword_1403CA2E8 )
  {
    KiStackAttachProcess((_KPROCESS *)qword_1403CA2E8, 0, (__int64)v79);
  }
  else
  {
    KiStackAttachProcess(KeGetCurrentThread()->ApcState.Process, 0, (__int64)v79);
    v10 = v54;
  }
  if ( !CmpPuntBoot )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)&CmpRegistryLock, 1u);
    v10 = v54;
  }
  v12 = *(_QWORD *)(a1 + 8);
  BugCheckParameter2 = v12;
  if ( !*(_WORD *)(v12 + 58) )
  {
    if ( !*(_QWORD *)(a1 + 56) && !*(_QWORD *)(a1 + 64) )
    {
LABEL_8:
      if ( a2 )
      {
        v12 = *(_QWORD *)(a2 + 8);
        BugCheckParameter2 = v12;
      }
      v13 = *(_QWORD *)(a1 + 8);
      if ( a2 )
      {
        CmpLockTwoKcbsShared(*(_QWORD *)(a2 + 8), *(_QWORD *)(a1 + 8));
      }
      else
      {
        ExAcquirePushLockSharedEx(v13 + 40, 0LL);
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 48));
        v10 = v54;
        v12 = BugCheckParameter2;
      }
      if ( a3 != 3 )
      {
        if ( a2 && (unsigned __int8)CmpIsKeyDeletedForKeyBody(a2, v10)
          || (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v10) )
        {
          v22 = 1;
          if ( (*(_DWORD *)(a1 + 48) & 1) != 0 )
          {
            KeyData = -1073740763;
            v51 = -1073740763;
          }
          else
          {
            KeyData = -1073741444;
            v51 = -1073741444;
          }
          goto LABEL_111;
        }
        if ( a3 == 5 )
        {
          *a6 = 12;
          if ( a5 < 0xC )
          {
            KeyData = -1073741789;
            v22 = 1;
            v23 = a4;
          }
          else
          {
            KeyFlags = CmGetKeyFlags(v12, v10);
            v23 = a4;
            *a4 = KeyFlags;
            a4[1] = 0;
            v28 = 0;
            v22 = 1;
            if ( *(int *)(v12 + 32) < 0 )
            {
              a4[1] = 1;
              v28 = 1;
            }
            v29 = *(_DWORD *)(v12 + 176);
            if ( (v29 & 0x100000) != 0 )
            {
              a4[1] = v28 | 2;
              v29 = *(_DWORD *)(v12 + 176);
            }
            a4[2] = (unsigned __int8)v29 >> 4;
            KeyData = 0;
          }
          v51 = KeyData;
          v21 = (__int64)v58;
LABEL_29:
          if ( KeyData >= 0 )
            goto LABEL_30;
LABEL_111:
          v43 = *(_QWORD *)(v65 + 8);
          if ( a2 )
          {
            CmpUnlockTwoKcbs(*(_QWORD *)(a2 + 8), *(_QWORD *)(v65 + 8), v15, v16);
          }
          else
          {
            v44 = *(_DWORD *)(v43 + 4) & 0x80000;
            if ( *(struct _KTHREAD **)(v43 + 48) != KeGetCurrentThread() )
              v22 = 0;
            if ( v22 == 1 )
              *(_QWORD *)(v43 + 48) = 0LL;
            else
              _InterlockedDecrement((volatile signed __int32 *)(v43 + 48));
            ExReleasePushLockEx(v43 + 40, 0LL, v15, v16);
            if ( v44 && (*(_DWORD *)(v43 + 4) & 0x80000) != 0 )
              CmpFreeKeyControlBlock(v43);
            KeyData = v51;
          }
          if ( !CmpPuntBoot )
          {
            ExReleaseResourceLite((PERESOURCE)&CmpRegistryLock);
            KeLeaveCriticalRegion();
            LOBYTE(v45) = 1;
            PsBoostThreadIo((__int64)KeGetCurrentThread(), v45);
            KeyData = v51;
          }
          KiUnstackDetachProcess((__int64)v79, 0LL);
          if ( UnicodeString.Buffer )
          {
            RtlFreeAnsiString(&UnicodeString);
          }
          else if ( v55 )
          {
            CmpFreeTransientPoolWithTag(v55, 0x624E4D43u);
          }
          return (unsigned int)KeyData;
        }
        if ( a3 == 6 )
        {
          v30 = KeGetCurrentThread();
          v69 = v30;
          CurrentThreadProcess = PsGetCurrentThreadProcess();
          SeCaptureSubjectContextEx(v30, CurrentThreadProcess, &SubjectContext);
          v32 = 4;
          *a6 = 4;
          if ( a5 >= 4 )
          {
            v33 = BugCheckParameter2;
            v34 = KCBNeedsVirtualImage_0(BugCheckParameter2);
            v35 = v34 | *a4 & 0xFFFFFFFE;
            *a4 = v35;
            v36 = v35 & 0xFFFFFFFD;
            *a4 = v36;
            v37 = v36;
            if ( v34 && (*(_DWORD *)(v33 + 176) & 0x20) == 0 )
            {
              v37 = v36 | 2;
              *a4 = v36 | 2;
            }
            if ( !CmpVEEnabled || (*(_DWORD *)(v33 + 176) & 0x1000000) == 0 )
              v32 = 0;
            v38 = v32 | v37 & 0xFFFFFFFB;
            *a4 = v38;
            v39 = v38 ^ ((unsigned __int8)v38 ^ (unsigned __int8)(*(_DWORD *)(v33 + 176) >> 22)) & 8;
            *a4 = v39;
            *a4 = v39 ^ ((unsigned __int8)v39 ^ (unsigned __int8)(*(_DWORD *)(v33 + 176) >> 19)) & 0x10;
            KeyData = 0;
          }
          else
          {
            KeyData = -1073741789;
          }
          v51 = KeyData;
          v21 = (__int64)v58;
          SeReleaseSubjectContext(&SubjectContext);
          v10 = v54;
          goto LABEL_28;
        }
        if ( a3 != 8 )
        {
          KeyData = CmpQueryKeyData(v12, a3, (_DWORD)a4, a5, (__int64)a6, v10);
          v51 = KeyData;
          v21 = (__int64)v58;
LABEL_28:
          v22 = 1;
          v23 = a4;
          goto LABEL_29;
        }
        *a6 = 4;
        if ( a5 >= 4 )
        {
          v23 = a4;
          v25 = *a4;
          if ( (*(_DWORD *)(*(_QWORD *)(v12 + 24) + 4152LL) & 1) != 0 )
            v26 = v25 & 0xFFFFFFFE;
          else
            v26 = v25 | 1;
          *a4 = v26;
          KeyData = 0;
          v51 = 0;
          v22 = 1;
          v21 = (__int64)v58;
LABEL_30:
          if ( a2 )
          {
            if ( ((a3 - 3) & 0xFFFFFFFC) != 0 || a3 == 4 )
            {
              v40 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 160LL);
              if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 160LL) < v40 )
                *(_QWORD *)v23 = v40;
            }
            if ( ((a3 - 2) & 0xFFFFFFFD) == 0 )
            {
              if ( (unsigned int)CmpFindSubKeyByNumberFromMergedView(
                                   *(_QWORD *)(a2 + 8),
                                   *(_QWORD *)(a1 + 8),
                                   -1,
                                   v10,
                                   (__int64)v70,
                                   (__int64)v67,
                                   0LL,
                                   (__int64)v53) == -2147483622 )
              {
                v42 = a4;
                if ( a3 == 2 )
                  a4[5] = v53[0];
                else
                  a4[3] = v53[0];
              }
              else
              {
                v42 = a4;
              }
              LOBYTE(v41) = 1;
              if ( (unsigned int)CmEnumerateValueKeyFromMergedView(a1, a2, v41, -1, 0, 0LL, 0, 0LL, (__int64)v53) == -2147483622 )
              {
                if ( a3 == 2 )
                  v42[8] = v53[0];
                else
                  v42[5] = v53[0];
              }
              KeyData = CmpQueryKeyData(*(_QWORD *)(a1 + 8), a3, (unsigned int)&v73, 48, v21, v10);
              v51 = KeyData;
              if ( (int)(KeyData + 0x80000000) < 0 || KeyData == -2147483643 )
              {
                if ( a3 == 2 )
                {
                  if ( v75 > a4[6] )
                    a4[6] = v75;
                  if ( v77 > a4[9] )
                    a4[9] = v77;
                  if ( v78 > a4[10] )
                    a4[10] = v78;
                }
                else
                {
                  if ( v74 > a4[4] )
                    a4[4] = v74;
                  if ( v75 > a4[6] )
                    a4[6] = v75;
                  if ( v76 > a4[7] )
                    a4[7] = v76;
                }
              }
            }
          }
          else if ( CmpVEEnabled )
          {
            v24 = *(_QWORD *)(a1 + 8);
            if ( (*(_DWORD *)(v24 + 176) & 0x1000000) != 0 && ((a3 - 2) & 0xFFFFFFFD) == 0 )
            {
              KeyData = CmpFindSubKeyByNumberFromMergedView(
                          v24,
                          0,
                          -1,
                          v10,
                          (__int64)v71,
                          (__int64)v68,
                          0LL,
                          (__int64)&v57);
              v51 = KeyData;
              if ( KeyData == -2147483622 )
              {
                if ( a3 == 2 )
                  a4[5] = v57;
                else
                  a4[3] = v57;
                KeyData = 0;
                v51 = 0;
              }
            }
          }
          goto LABEL_111;
        }
        KeyData = -1073741789;
LABEL_38:
        v22 = 1;
        v51 = KeyData;
        goto LABEL_111;
      }
      v14 = *(_QWORD *)(a1 + 8);
      BugCheckParameter2 = v14;
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v10) )
      {
        if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
        {
          KeyData = -1073740763;
          goto LABEL_38;
        }
        KeyData = -1073741444;
        v51 = -1073741444;
      }
      else
      {
        KeyData = 0;
        v51 = 0;
      }
      if ( !*(_QWORD *)(v14 + 72) )
      {
LABEL_37:
        KeyData = -1073741670;
        goto LABEL_38;
      }
      if ( CmpVEEnabled && (*(_DWORD *)(v14 + 176) & 0x1000000) != 0 )
      {
        if ( (int)CmVirtualKCBToRealPath(v14, &UnicodeString) < 0 )
        {
LABEL_20:
          if ( v55 )
          {
            v19 = *(unsigned __int16 *)v55;
            v60 = v19 + 4;
            *a6 = v19 + 4;
            if ( a5 < 4 )
            {
              KeyData = -1073741789;
              v51 = -1073741789;
            }
            else
            {
              *a4 = v19;
              v20 = a5 - 4;
              v66 = a5 - 4;
              v60 = v19;
              if ( a5 - 4 >= v19 )
              {
                v20 = v19;
              }
              else
              {
                KeyData = -2147483643;
                v51 = -2147483643;
              }
              memmove(a4 + 1, v55[1], v20);
            }
            v21 = (__int64)v58;
            goto LABEL_28;
          }
          goto LABEL_37;
        }
        p_UnicodeString = &UnicodeString;
      }
      else
      {
        v64 = 0LL;
        CmpConstructNameWithStatus(v14, &v64);
        p_UnicodeString = v64;
      }
      v55 = (const void **)p_UnicodeString;
      goto LABEL_20;
    }
    ExAcquirePushLockSharedEx(v12 + 40, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 48));
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      KeyData = -1073740763;
      if ( (*(_DWORD *)(a1 + 48) & 1) == 0 )
        KeyData = -1073741444;
      CmpUnlockKcb(BugCheckParameter2, v48, v49, v50);
    }
    else
    {
      v12 = BugCheckParameter2;
      CmpUnlockKcb(BugCheckParameter2, v48, v49, v50);
      KeyData = CmpTransSearchAddTransFromKeyBody(a1, &v54);
      if ( KeyData >= 0 )
      {
        v10 = v54;
        goto LABEL_8;
      }
    }
    CmpUnlockRegistry();
    KiUnstackDetachProcess((__int64)v79, 0LL);
    return (unsigned int)KeyData;
  }
  LayeredKey = CmQueryLayeredKey(a1, a3, a4, a5, a6);
  CmpUnlockRegistry();
  KiUnstackDetachProcess((__int64)v79, 0LL);
  return LayeredKey;
}
