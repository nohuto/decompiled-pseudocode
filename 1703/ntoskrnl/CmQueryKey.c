/*
 * XREFs of CmQueryKey @ 0x140500AB0
 * Callers:
 *     NtQueryKey @ 0x140507B00 (NtQueryKey.c)
 * Callees:
 *     PsBoostThreadIo @ 0x14008D1F0 (PsBoostThreadIo.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     CmpFreeTransientPoolWithTag @ 0x1400DB880 (CmpFreeTransientPoolWithTag.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     CmQueryLayeredKey @ 0x1401DEC90 (CmQueryLayeredKey.c)
 *     CmpLockTableAdd @ 0x1401DFA5C (CmpLockTableAdd.c)
 *     CmpLockTableRemove @ 0x1401DFB90 (CmpLockTableRemove.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14042DC14 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpFreeKeyControlBlock @ 0x140491410 (CmpFreeKeyControlBlock.c)
 *     CmpIsMasterHive @ 0x1404D3FBC (CmpIsMasterHive.c)
 *     CmpIsSystemEntity @ 0x1404D4280 (CmpIsSystemEntity.c)
 *     CmpUnlockTwoKcbs @ 0x1404FDB60 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1404FDFB4 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x1404FF9AC (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 *     CmpQueryKeyData @ 0x1405006A4 (CmpQueryKeyData.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140501430 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpConstructNameWithStatus @ 0x1405014C0 (CmpConstructNameWithStatus.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     CmGetKeyFlags @ 0x1405D62EC (CmGetKeyFlags.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14066668C (CmEnumerateValueKeyFromMergedView.c)
 *     CmVirtualKCBToRealPath @ 0x140666C60 (CmVirtualKCBToRealPath.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x14066742C (CmpFindSubKeyByNumberFromMergedView.c)
 */

__int64 __fastcall CmQueryKey(__int64 a1, __int64 a2, int a3, unsigned int *a4, unsigned int a5, unsigned int *a6)
{
  __int64 v10; // r12
  int KeyData; // r13d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // r13
  __int64 v15; // r13
  unsigned __int64 v16; // r13
  UNICODE_STRING *p_UnicodeString; // rax
  unsigned int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  int v21; // r13d
  __int64 v22; // rdx
  bool IsSystemEntity; // al
  unsigned __int8 v24; // r8
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // eax
  int v28; // ecx
  __int64 v29; // rcx
  int v30; // r8d
  unsigned __int64 v31; // rbx
  int v32; // edi
  __int64 v33; // rdx
  int v34; // r12d
  unsigned int LayeredKey; // ebx
  int v36; // [rsp+50h] [rbp-118h]
  _DWORD v37[3]; // [rsp+54h] [rbp-114h] BYREF
  __int64 v38; // [rsp+60h] [rbp-108h]
  __int64 v39; // [rsp+68h] [rbp-100h]
  __int64 v40; // [rsp+70h] [rbp-F8h] BYREF
  PVOID P; // [rsp+78h] [rbp-F0h]
  unsigned int v42; // [rsp+80h] [rbp-E8h]
  unsigned int v43; // [rsp+84h] [rbp-E4h] BYREF
  unsigned __int64 v44; // [rsp+88h] [rbp-E0h]
  unsigned int *v45; // [rsp+90h] [rbp-D8h]
  unsigned int *v46; // [rsp+98h] [rbp-D0h]
  UNICODE_STRING UnicodeString; // [rsp+A0h] [rbp-C8h] BYREF
  UNICODE_STRING *v48; // [rsp+B0h] [rbp-B8h] BYREF
  unsigned int v49; // [rsp+B8h] [rbp-B0h]
  _BYTE v50[4]; // [rsp+CCh] [rbp-9Ch] BYREF
  _BYTE v51[4]; // [rsp+DCh] [rbp-8Ch] BYREF
  _BYTE v52[8]; // [rsp+E8h] [rbp-80h] BYREF
  _BYTE v53[8]; // [rsp+F0h] [rbp-78h] BYREF
  _BYTE v54[16]; // [rsp+F8h] [rbp-70h] BYREF
  unsigned int v55; // [rsp+108h] [rbp-60h]
  unsigned int v56; // [rsp+110h] [rbp-58h]
  unsigned int v57; // [rsp+114h] [rbp-54h]
  unsigned int v58; // [rsp+11Ch] [rbp-4Ch]
  unsigned int v59; // [rsp+120h] [rbp-48h]

  v38 = a1;
  v39 = a2;
  v45 = a4;
  v46 = a6;
  P = 0LL;
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
  v44 = v14;
  if ( *(_WORD *)(v14 + 58) )
  {
    LayeredKey = CmQueryLayeredKey(a1, a3, a4, a5, a6);
LABEL_144:
    CmpUnlockRegistry();
    return LayeredKey;
  }
  if ( !*(_QWORD *)(a1 + 56) && !*(_QWORD *)(a1 + 64) )
  {
LABEL_11:
    if ( a2 )
    {
      v16 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)&v37[1] = v16;
      v44 = v16;
      CmpLockTwoKcbsShared(v16, *(_QWORD *)(a1 + 8));
    }
    else
    {
      v15 = *(_QWORD *)(a1 + 8);
      if ( (*(_DWORD *)(v15 + 4) & 0x100000) != 0 )
        *(_DWORD *)(v15 + 60) = CmpLockTableAdd(*(_QWORD *)(a1 + 8), 0);
      ExAcquirePushLockSharedEx(v15 + 40, 0LL);
      _InterlockedIncrement((volatile signed __int32 *)(v15 + 48));
      v10 = v40;
      v16 = v44;
      *(_QWORD *)&v37[1] = v44;
    }
    if ( a3 == 3 )
    {
      *(_QWORD *)&v37[1] = *(_QWORD *)(a1 + 8);
      v44 = *(_QWORD *)&v37[1];
      if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v10) )
      {
        if ( (*(_DWORD *)(a1 + 48) & 1) != 0 )
        {
          KeyData = -1073740763;
          goto LABEL_35;
        }
        KeyData = -1073741444;
      }
      else
      {
        KeyData = 0;
      }
      v36 = KeyData;
      if ( !*(_QWORD *)(*(_QWORD *)&v37[1] + 72LL) )
        goto LABEL_34;
      if ( CmpVEEnabled && (*(_DWORD *)(*(_QWORD *)&v37[1] + 176LL) & 0x1000000) != 0 )
      {
        if ( (int)CmVirtualKCBToRealPath(*(_QWORD *)&v37[1], &UnicodeString) < 0 )
        {
LABEL_23:
          if ( P )
          {
            v18 = *(unsigned __int16 *)P;
            v42 = v18 + 4;
            *a6 = v18 + 4;
            if ( a5 < 4 )
            {
              KeyData = -1073741789;
              v36 = -1073741789;
            }
            else
            {
              *a4 = v18;
              v49 = a5 - 4;
              v42 = v18;
              if ( a5 - 4 < v18 )
              {
                v18 = a5 - 4;
                v42 = a5 - 4;
                KeyData = -2147483643;
                v36 = -2147483643;
              }
              memmove(a4 + 1, *((const void **)P + 1), v18);
            }
            goto LABEL_29;
          }
LABEL_34:
          KeyData = -1073741670;
          goto LABEL_35;
        }
        p_UnicodeString = &UnicodeString;
      }
      else
      {
        v48 = 0LL;
        CmpConstructNameWithStatus(*(_QWORD *)&v37[1], &v48);
        p_UnicodeString = v48;
      }
      P = p_UnicodeString;
      goto LABEL_23;
    }
    if ( a2 && (unsigned __int8)CmpIsKeyDeletedForKeyBody(a2, v10)
      || (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v10) )
    {
      v20 = -1073741444;
      if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
        v20 = -1073740763;
      KeyData = v20;
      v36 = v20;
      goto LABEL_118;
    }
    if ( a3 == 5 )
    {
      *a6 = 12;
      if ( a5 < 0xC )
      {
        KeyData = -1073741789;
      }
      else
      {
        *a4 = CmGetKeyFlags(v16, v10);
        a4[1] = 0;
        if ( *(_DWORD *)(v16 + 32) >= 0x80000000 )
          a4[1] = 1;
        if ( (*(_DWORD *)(v16 + 176) & 0x100000) != 0 )
          a4[1] |= 2u;
        a4[2] = (*(_DWORD *)(v16 + 176) >> 4) & 0xF;
        KeyData = 0;
      }
      v36 = KeyData;
LABEL_29:
      if ( KeyData >= 0 )
        goto LABEL_30;
LABEL_118:
      if ( a2 )
      {
        CmpUnlockTwoKcbs(*(void **)(a2 + 8), *(_QWORD *)(a1 + 8));
      }
      else
      {
        v31 = *(_QWORD *)(a1 + 8);
        v32 = *(_DWORD *)(v31 + 4) & 0x80000;
        if ( *(struct _KTHREAD **)(v31 + 48) == KeGetCurrentThread() )
          *(_QWORD *)(v31 + 48) = 0LL;
        else
          _InterlockedDecrement((volatile signed __int32 *)(v31 + 48));
        ExReleasePushLockEx(v31 + 40, 0LL);
        if ( (*(_DWORD *)(v31 + 4) & 0x100000) != 0 )
          CmpLockTableRemove(v31, *(_DWORD *)(v31 + 60));
        if ( v32 && (*(_DWORD *)(v31 + 4) & 0x80000) != 0 )
          CmpFreeKeyControlBlock(v31);
        KeyData = v36;
      }
      if ( !CmpPuntBoot )
      {
        ExReleaseResourceLite((PERESOURCE)&CmpRegistryLock);
        KeLeaveCriticalRegion();
        LOBYTE(v33) = 1;
        PsBoostThreadIo((__int64)KeGetCurrentThread(), v33);
        KeyData = v36;
      }
      if ( UnicodeString.Buffer )
      {
        RtlFreeUnicodeString(&UnicodeString);
      }
      else if ( P )
      {
        CmpFreeTransientPoolWithTag(P, 0x624E4D43u);
      }
      return (unsigned int)KeyData;
    }
    if ( a3 != 6 )
    {
      if ( a3 != 8 )
      {
        KeyData = CmpQueryKeyData(v16, a3, (__int64)a4, a5, a6, v10);
        v36 = KeyData;
        goto LABEL_29;
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
LABEL_30:
        if ( a2 )
        {
          if ( ((a3 - 3) & 0xFFFFFFFC) != 0 || a3 == 4 )
          {
            v29 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 160LL);
            if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 160LL) < v29 )
              *(_QWORD *)a4 = v29;
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
            LOBYTE(v30) = 1;
            if ( (unsigned int)CmEnumerateValueKeyFromMergedView(a1, a2, v30, -1, 0, 0LL, 0, 0LL, (__int64)v37) == -2147483622 )
            {
              if ( a3 == 2 )
                a4[8] = v37[0];
              else
                a4[5] = v37[0];
            }
            KeyData = CmpQueryKeyData(*(_QWORD *)(a1 + 8), a3, (__int64)v54, 0x30u, a6, v10);
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
          v19 = *(_QWORD *)(a1 + 8);
          if ( (*(_DWORD *)(v19 + 176) & 0x1000000) != 0 && ((a3 - 2) & 0xFFFFFFFD) == 0 )
          {
            KeyData = CmpFindSubKeyByNumberFromMergedView(
                        v19,
                        0,
                        -1,
                        v10,
                        (__int64)v53,
                        (__int64)v51,
                        0LL,
                        (__int64)&v43);
            v36 = KeyData;
            if ( KeyData == -2147483622 )
            {
              if ( a3 == 2 )
                a4[5] = v43;
              else
                a4[3] = v43;
              KeyData = 0;
              v36 = 0;
            }
          }
        }
        goto LABEL_118;
      }
      KeyData = -1073741789;
LABEL_35:
      v36 = KeyData;
      goto LABEL_118;
    }
    v21 = 4;
    *a6 = 4;
    if ( a5 < 4 )
    {
      KeyData = -1073741789;
LABEL_80:
      v36 = KeyData;
      goto LABEL_29;
    }
    v22 = *(_QWORD *)&v37[1];
    if ( CmpVEEnabled && (*(_DWORD *)(*(_QWORD *)&v37[1] + 176LL) & 0x2000000) == 0 )
    {
      if ( CmpIsMasterHive(*(__int64 *)&v37[1]) )
      {
        v22 = *(_QWORD *)&v37[1];
      }
      else
      {
        IsSystemEntity = CmpIsSystemEntity(0LL);
        v22 = *(_QWORD *)&v37[1];
        if ( !IsSystemEntity )
        {
          v24 = 1;
          goto LABEL_73;
        }
      }
    }
    v24 = 0;
LABEL_73:
    v25 = v24 | *a4 & 0xFFFFFFFE;
    *a4 = v25;
    v26 = v25 & 0xFFFFFFFD;
    *a4 = v26;
    if ( v24 && (*(_DWORD *)(v22 + 176) & 0x20) == 0 )
      *a4 = v26 | 2;
    if ( !CmpVEEnabled || (*(_DWORD *)(v22 + 176) & 0x1000000) == 0 )
      v21 = 0;
    v27 = v21 | *a4 & 0xFFFFFFFB;
    *a4 = v27;
    v28 = v27 ^ ((unsigned __int8)v27 ^ (unsigned __int8)(*(_DWORD *)(v22 + 176) >> 22)) & 8;
    *a4 = v28;
    *a4 = v28 ^ ((unsigned __int8)v28 ^ (unsigned __int8)(*(_DWORD *)(v22 + 176) >> 19)) & 0x10;
    KeyData = 0;
    goto LABEL_80;
  }
  CmpLockKcbShared(v14);
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
  {
    LayeredKey = -1073741444;
    if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
      LayeredKey = -1073740763;
    CmpUnlockKcb(*(__int64 *)&v37[1]);
    goto LABEL_144;
  }
  CmpUnlockKcb(v14);
  v34 = CmpTransSearchAddTransFromKeyBody(a1, &v40);
  if ( v34 >= 0 )
  {
    v10 = v40;
    goto LABEL_11;
  }
  CmpUnlockRegistry();
  return (unsigned int)v34;
}
