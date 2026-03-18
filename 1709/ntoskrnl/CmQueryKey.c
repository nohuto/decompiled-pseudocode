/*
 * XREFs of CmQueryKey @ 0x1404A7650
 * Callers:
 *     NtQueryKey @ 0x1404A8630 (NtQueryKey.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14001655C (CmpFreeTransientPoolWithTag.c)
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     PsBoostThreadIo @ 0x1400813B0 (PsBoostThreadIo.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     CmQueryLayeredKey @ 0x1401E318C (CmQueryLayeredKey.c)
 *     CmpFreeKeyControlBlock @ 0x140478B50 (CmpFreeKeyControlBlock.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 *     CmpConstructNameWithStatus @ 0x14047F6E0 (CmpConstructNameWithStatus.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140482380 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpUnlockTwoKcbs @ 0x140482410 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1404827AC (CmpLockTwoKcbsShared.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140568D78 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpIsMasterHive @ 0x140569B5C (CmpIsMasterHive.c)
 *     CmpIsSystemEntity @ 0x140569D5C (CmpIsSystemEntity.c)
 *     CmpQueryKeyData @ 0x140569E70 (CmpQueryKeyData.c)
 *     CmGetKeyFlags @ 0x1405F2C10 (CmGetKeyFlags.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14068FF9C (CmEnumerateValueKeyFromMergedView.c)
 *     CmVirtualKCBToRealPath @ 0x140690D1C (CmVirtualKCBToRealPath.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x140691B68 (CmpFindSubKeyByNumberFromMergedView.c)
 */

__int64 __fastcall CmQueryKey(__int64 a1, __int64 a2, int a3, unsigned int *a4, unsigned int a5, unsigned int *a6)
{
  __int64 v10; // rbx
  int KeyData; // r12d
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v14; // r12
  __int64 v15; // rbx
  ULONG_PTR v16; // r12
  __int64 v17; // rcx
  UNICODE_STRING *p_UnicodeString; // rax
  unsigned int v19; // eax
  unsigned int v20; // ecx
  int v21; // eax
  int v22; // r12d
  __int64 v23; // rdx
  char IsSystemEntity; // al
  unsigned __int8 v25; // r8
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // eax
  int v29; // ecx
  __int64 v30; // rcx
  int v31; // r8d
  ULONG_PTR v32; // rbx
  int v33; // edi
  __int64 v34; // rdx
  int LayeredKey; // ebx
  int v36; // [rsp+50h] [rbp-128h]
  _DWORD v37[3]; // [rsp+54h] [rbp-124h] BYREF
  __int64 v38; // [rsp+60h] [rbp-118h]
  __int64 v39; // [rsp+68h] [rbp-110h]
  __int64 v40; // [rsp+70h] [rbp-108h] BYREF
  const void **v41; // [rsp+78h] [rbp-100h]
  unsigned int v42; // [rsp+80h] [rbp-F8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-F0h]
  unsigned int v44; // [rsp+90h] [rbp-E8h]
  unsigned int *v45; // [rsp+98h] [rbp-E0h]
  unsigned int *v46; // [rsp+A0h] [rbp-D8h]
  UNICODE_STRING UnicodeString; // [rsp+A8h] [rbp-D0h] BYREF
  UNICODE_STRING *v48; // [rsp+B8h] [rbp-C0h] BYREF
  unsigned int v49; // [rsp+C0h] [rbp-B8h]
  _BYTE v50[4]; // [rsp+D4h] [rbp-A4h] BYREF
  _BYTE v51[4]; // [rsp+E4h] [rbp-94h] BYREF
  _BYTE v52[8]; // [rsp+F0h] [rbp-88h] BYREF
  _BYTE v53[8]; // [rsp+F8h] [rbp-80h] BYREF
  char v54; // [rsp+100h] [rbp-78h] BYREF
  unsigned int v55; // [rsp+110h] [rbp-68h]
  unsigned int v56; // [rsp+118h] [rbp-60h]
  unsigned int v57; // [rsp+11Ch] [rbp-5Ch]
  unsigned int v58; // [rsp+124h] [rbp-54h]
  unsigned int v59; // [rsp+128h] [rbp-50h]

  v38 = a1;
  v39 = a2;
  v45 = a4;
  v46 = a6;
  v41 = 0LL;
  v10 = 0LL;
  v40 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( a3 == 7 )
  {
    *a6 = 4;
    if ( a5 < 4 )
    {
      return (unsigned int)-1073741789;
    }
    else
    {
      *a4 = *(unsigned __int16 *)(a1 + 50);
      return 0;
    }
  }
  if ( !CmpPuntBoot )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite((PERESOURCE)&CmpRegistryLock, 1u);
    v10 = v40;
  }
  v14 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)&v37[1] = v14;
  BugCheckParameter2 = v14;
  if ( *(_WORD *)(v14 + 58) )
  {
    LayeredKey = CmQueryLayeredKey(a1, a3, a4, a5, a6);
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 56) && !*(_QWORD *)(a1 + 64) )
      goto LABEL_11;
    ExAcquirePushLockSharedEx(v14 + 40, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 48));
    if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      KeyData = -1073740763;
      if ( (*(_DWORD *)(a1 + 48) & 1) == 0 )
        KeyData = -1073741444;
      CmpUnlockKcb(BugCheckParameter2);
      CmpUnlockRegistry();
      return (unsigned int)KeyData;
    }
    *(_QWORD *)&v37[1] = BugCheckParameter2;
    CmpUnlockKcb(BugCheckParameter2);
    LayeredKey = CmpTransSearchAddTransFromKeyBody(a1, &v40);
    if ( LayeredKey >= 0 )
    {
      v10 = v40;
LABEL_11:
      if ( a2 )
      {
        v16 = *(_QWORD *)(a2 + 8);
        *(_QWORD *)&v37[1] = v16;
        BugCheckParameter2 = v16;
        CmpLockTwoKcbsShared(v16, *(_QWORD *)(a1 + 8));
      }
      else
      {
        v15 = *(_QWORD *)(a1 + 8);
        ExAcquirePushLockSharedEx(v15 + 40, 0LL);
        _InterlockedIncrement((volatile signed __int32 *)(v15 + 48));
        v10 = v40;
        v16 = BugCheckParameter2;
        *(_QWORD *)&v37[1] = BugCheckParameter2;
      }
      if ( a3 != 3 )
      {
        if ( a2 && CmpIsKeyDeletedForKeyBody(a2, v10) || CmpIsKeyDeletedForKeyBody(a1, v10) )
        {
          v21 = -1073741444;
          if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
            v21 = -1073740763;
          KeyData = v21;
          v36 = v21;
          goto LABEL_117;
        }
        if ( a3 != 5 )
        {
          if ( a3 != 6 )
          {
            if ( a3 != 8 )
            {
              KeyData = CmpQueryKeyData(v16, a3, (_DWORD)a4, a5, (__int64)a6, v10);
              v36 = KeyData;
              goto LABEL_20;
            }
            *a6 = 4;
            if ( a5 >= 4 )
            {
              if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v37[1] + 24LL) + 5360LL) & 1) != 0 )
                *a4 &= ~1u;
              else
                *a4 |= 1u;
              KeyData = 0;
              v36 = 0;
LABEL_21:
              if ( a2 )
              {
                if ( ((a3 - 3) & 0xFFFFFFFC) != 0 || a3 == 4 )
                {
                  v30 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 160LL);
                  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 160LL) < v30 )
                    *(_QWORD *)a4 = v30;
                }
                if ( ((a3 - 2) & 0xFFFFFFFD) == 0 )
                {
                  if ( (unsigned int)CmpFindSubKeyByNumberFromMergedView(
                                       *(_QWORD *)(a2 + 8),
                                       *(_QWORD *)(a1 + 8),
                                       -1,
                                       v10,
                                       (__int64)v52,
                                       (__int64)v50,
                                       0LL,
                                       (__int64)v37) == -2147483622 )
                  {
                    if ( a3 == 2 )
                      a4[5] = v37[0];
                    else
                      a4[3] = v37[0];
                  }
                  LOBYTE(v31) = 1;
                  if ( (unsigned int)CmEnumerateValueKeyFromMergedView(a1, a2, v31, -1, 0, 0LL, 0, 0LL, (__int64)v37) == -2147483622 )
                  {
                    if ( a3 == 2 )
                      a4[8] = v37[0];
                    else
                      a4[5] = v37[0];
                  }
                  KeyData = CmpQueryKeyData(*(_QWORD *)(a1 + 8), a3, (unsigned int)&v54, 48, (__int64)a6, v10);
                  v36 = KeyData;
                  if ( (int)(KeyData + 0x80000000) < 0 || KeyData == -2147483643 )
                  {
                    if ( a3 == 2 )
                    {
                      if ( v56 > a4[6] )
                        a4[6] = v56;
                      if ( v58 > a4[9] )
                        a4[9] = v58;
                      if ( v59 > a4[10] )
                        a4[10] = v59;
                    }
                    else
                    {
                      if ( v55 > a4[4] )
                        a4[4] = v55;
                      if ( v56 > a4[6] )
                        a4[6] = v56;
                      if ( v57 > a4[7] )
                        a4[7] = v57;
                    }
                  }
                }
              }
              else if ( CmpVEEnabled )
              {
                v17 = *(_QWORD *)(a1 + 8);
                if ( (*(_DWORD *)(v17 + 176) & 0x1000000) != 0 && ((a3 - 2) & 0xFFFFFFFD) == 0 )
                {
                  KeyData = CmpFindSubKeyByNumberFromMergedView(
                              v17,
                              0,
                              -1,
                              v10,
                              (__int64)v53,
                              (__int64)v51,
                              0LL,
                              (__int64)&v42);
                  v36 = KeyData;
                  if ( KeyData == -2147483622 )
                  {
                    if ( a3 == 2 )
                      a4[5] = v42;
                    else
                      a4[3] = v42;
                    KeyData = 0;
                    v36 = 0;
                  }
                }
              }
              goto LABEL_117;
            }
            KeyData = -1073741789;
LABEL_116:
            v36 = KeyData;
            goto LABEL_117;
          }
          v22 = 4;
          *a6 = 4;
          if ( a5 < 4 )
          {
            KeyData = -1073741789;
LABEL_78:
            v36 = KeyData;
            goto LABEL_20;
          }
          v23 = *(_QWORD *)&v37[1];
          if ( CmpVEEnabled && (*(_DWORD *)(*(_QWORD *)&v37[1] + 176LL) & 0x2000000) == 0 )
          {
            if ( (unsigned __int8)CmpIsMasterHive(*(_QWORD *)&v37[1]) )
            {
              v23 = *(_QWORD *)&v37[1];
            }
            else
            {
              IsSystemEntity = CmpIsSystemEntity(0LL);
              v23 = *(_QWORD *)&v37[1];
              if ( !IsSystemEntity )
              {
                v25 = 1;
                goto LABEL_71;
              }
            }
          }
          v25 = 0;
LABEL_71:
          v26 = v25 | *a4 & 0xFFFFFFFE;
          *a4 = v26;
          v27 = v26 & 0xFFFFFFFD;
          *a4 = v27;
          if ( v25 && (*(_DWORD *)(v23 + 176) & 0x20) == 0 )
            *a4 = v27 | 2;
          if ( !CmpVEEnabled || (*(_DWORD *)(v23 + 176) & 0x1000000) == 0 )
            v22 = 0;
          v28 = v22 | *a4 & 0xFFFFFFFB;
          *a4 = v28;
          v29 = v28 ^ ((unsigned __int8)v28 ^ (unsigned __int8)(*(_DWORD *)(v23 + 176) >> 22)) & 8;
          *a4 = v29;
          *a4 = v29 ^ ((unsigned __int8)v29 ^ (unsigned __int8)(*(_DWORD *)(v23 + 176) >> 19)) & 0x10;
          KeyData = 0;
          goto LABEL_78;
        }
        *a6 = 12;
        if ( a5 < 0xC )
        {
          KeyData = -1073741789;
        }
        else
        {
          *a4 = CmGetKeyFlags(v16, v10);
          a4[1] = 0;
          if ( *(int *)(v16 + 32) < 0 )
            a4[1] = 1;
          if ( (*(_DWORD *)(v16 + 176) & 0x100000) != 0 )
            a4[1] |= 2u;
          a4[2] = (*(_DWORD *)(v16 + 176) >> 4) & 0xF;
          KeyData = 0;
        }
        v36 = KeyData;
LABEL_20:
        if ( KeyData >= 0 )
          goto LABEL_21;
LABEL_117:
        if ( a2 )
        {
          CmpUnlockTwoKcbs(*(_QWORD *)(a2 + 8), *(_QWORD *)(a1 + 8));
        }
        else
        {
          v32 = *(_QWORD *)(a1 + 8);
          v33 = *(_DWORD *)(v32 + 4) & 0x80000;
          if ( *(struct _KTHREAD **)(v32 + 48) == KeGetCurrentThread() )
            *(_QWORD *)(v32 + 48) = 0LL;
          else
            _InterlockedDecrement((volatile signed __int32 *)(v32 + 48));
          ExReleasePushLockEx(v32 + 40, 0LL);
          if ( v33 && (*(_DWORD *)(v32 + 4) & 0x80000) != 0 )
            CmpFreeKeyControlBlock(v32);
          KeyData = v36;
        }
        if ( !CmpPuntBoot )
        {
          ExReleaseResourceLite((PERESOURCE)&CmpRegistryLock);
          KeLeaveCriticalRegion();
          LOBYTE(v34) = 1;
          PsBoostThreadIo((__int64)KeGetCurrentThread(), v34);
          KeyData = v36;
        }
        if ( UnicodeString.Buffer )
        {
          RtlFreeUnicodeString(&UnicodeString);
        }
        else if ( v41 )
        {
          CmpFreeTransientPoolWithTag(v41, 0x624E4D43u);
        }
        return (unsigned int)KeyData;
      }
      *(_QWORD *)&v37[1] = *(_QWORD *)(a1 + 8);
      BugCheckParameter2 = *(_QWORD *)&v37[1];
      if ( CmpIsKeyDeletedForKeyBody(a1, v10) )
      {
        if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
        {
          KeyData = -1073740763;
          goto LABEL_116;
        }
        KeyData = -1073741444;
        v36 = -1073741444;
      }
      else
      {
        KeyData = 0;
        v36 = 0;
      }
      if ( !*(_QWORD *)(*(_QWORD *)&v37[1] + 72LL) )
      {
LABEL_58:
        KeyData = -1073741670;
        goto LABEL_116;
      }
      if ( CmpVEEnabled && (*(_DWORD *)(*(_QWORD *)&v37[1] + 176LL) & 0x1000000) != 0 )
      {
        if ( (int)CmVirtualKCBToRealPath(*(_QWORD *)&v37[1], &UnicodeString) < 0 )
        {
LABEL_44:
          if ( v41 )
          {
            v19 = *(unsigned __int16 *)v41;
            v44 = v19 + 4;
            *a6 = v19 + 4;
            if ( a5 < 4 )
            {
              KeyData = -1073741789;
              v36 = -1073741789;
            }
            else
            {
              *a4 = v19;
              v20 = a5 - 4;
              v49 = a5 - 4;
              v44 = v19;
              if ( a5 - 4 >= v19 )
              {
                v20 = v19;
              }
              else
              {
                KeyData = -2147483643;
                v36 = -2147483643;
              }
              memmove(a4 + 1, v41[1], v20);
            }
            goto LABEL_20;
          }
          goto LABEL_58;
        }
        p_UnicodeString = &UnicodeString;
      }
      else
      {
        v48 = 0LL;
        CmpConstructNameWithStatus(*(__int64 *)&v37[1], &v48);
        p_UnicodeString = v48;
      }
      v41 = (const void **)p_UnicodeString;
      goto LABEL_44;
    }
  }
  CmpUnlockRegistry();
  return (unsigned int)LayeredKey;
}
