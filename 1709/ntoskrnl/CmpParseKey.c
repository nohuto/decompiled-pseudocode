/*
 * XREFs of CmpParseKey @ 0x1404A9210
 * Callers:
 *     <none>
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140016F60 (CmpAllocateTransientPoolWithTag.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140081010 (ExIsResourceAcquiredSharedLite.c)
 *     PsGetCurrentSilo @ 0x1400817D0 (PsGetCurrentSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     PsGetPermanentSiloContext @ 0x140103440 (PsGetPermanentSiloContext.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmpCallCallBacksEx @ 0x1404B3FE0 (CmpCallCallBacksEx.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmpCleanupParseContext @ 0x1404E322C (CmpCleanupParseContext.c)
 *     CmPostCallbackNotificationEx @ 0x1404E32E0 (CmPostCallbackNotificationEx.c)
 *     CmpDoesParseEnterRegistryA @ 0x14059AC48 (CmpDoesParseEnterRegistryA.c)
 *     CmpRollbackTransactionArray @ 0x1406961BC (CmpRollbackTransactionArray.c)
 *     PsGetParentSilo @ 0x1407146F0 (PsGetParentSilo.c)
 */

__int64 __fastcall CmpParseKey(
        __int64 a1,
        POBJECT_TYPE *a2,
        __int64 a3,
        unsigned __int8 a4,
        int a5,
        PCUNICODE_STRING String2,
        __int128 *a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 *a11)
{
  __int128 v14; // xmm0
  __int64 v15; // rcx
  __int64 *v16; // r12
  __int64 v17; // rsi
  unsigned __int16 v18; // r8
  _WORD *v19; // rdx
  __int16 v20; // ax
  struct _KTHREAD *CurrentThread; // rax
  int v22; // r9d
  __int64 v23; // rax
  int v24; // eax
  unsigned int v25; // edi
  int v26; // eax
  __int64 v27; // r8
  int v28; // r8d
  __int64 v29; // rbx
  struct _KTHREAD *v30; // rcx
  bool v31; // zf
  struct _PRIVILEGE_SET *v32; // rbx
  __int64 i; // rdi
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  struct _PRIVILEGE_SET *v36; // rdi
  int v37; // eax
  __int64 v38; // rax
  int v39; // [rsp+38h] [rbp-C8h]
  __int128 v40; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v41[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v42; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v43; // [rsp+78h] [rbp-88h] BYREF
  __int64 v44; // [rsp+80h] [rbp-80h]
  __int64 v45; // [rsp+88h] [rbp-78h]
  __int64 v46; // [rsp+90h] [rbp-70h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+98h] [rbp-68h]
  _WORD v48[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v49; // [rsp+A8h] [rbp-58h]
  _QWORD v50[2]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v51[3]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v52; // [rsp+D8h] [rbp-28h]
  __int64 v53; // [rsp+E0h] [rbp-20h]
  __int64 v54; // [rsp+E8h] [rbp-18h]
  __int64 v55; // [rsp+F0h] [rbp-10h]
  _QWORD v56[18]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v57[2]; // [rsp+190h] [rbp+90h] BYREF
  char v58; // [rsp+1E8h] [rbp+E8h]
  unsigned int v60; // [rsp+210h] [rbp+110h]

  v58 = 0;
  v46 = 0LL;
  v14 = *a7;
  Privileges = 0LL;
  v40 = v14;
  memset(v56, 0, 0x88uLL);
  v16 = a11;
  v17 = a8;
  v43 = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  v41[1] = v41;
  *a11 = 0LL;
  v41[0] = v41;
  v60 = 0;
  v42 = 0;
  if ( a2 != CmKeyObjectType )
    return 3221225508LL;
  if ( (PVOID)a1 == CmpRegistryRootObject )
  {
    for ( i = *(_QWORD *)(a10 + 8); ; i = PsGetParentSilo(i) )
    {
      a8 = 0LL;
      PsGetPermanentSiloContext(i, CmpSiloContextSlot, (unsigned __int64 *)&a8);
      if ( a8 )
      {
        if ( *(_QWORD *)(a8 + 32) )
          break;
      }
    }
    a1 = *(_QWORD *)(a8 + 32);
  }
  v18 = v40;
  v19 = (_WORD *)*((_QWORD *)&v40 + 1);
  if ( (_WORD)v40 )
  {
    v15 = 65534LL;
    while ( *(_WORD *)(*((_QWORD *)&v40 + 1) + 2 * ((unsigned __int64)v18 >> 1) - 2) == 92 )
    {
      v31 = v18 == 2;
      v18 -= 2;
      LOWORD(v40) = v18;
      if ( v31 )
        goto LABEL_9;
    }
    if ( v18 )
    {
      v20 = WORD1(v40);
      do
      {
        if ( *v19 != 92 )
          break;
        ++v19;
        v18 -= 2;
        v20 -= 2;
        *((_QWORD *)&v40 + 1) = v19;
        LOWORD(v40) = v18;
        WORD1(v40) = v20;
      }
      while ( v18 );
    }
  }
LABEL_9:
  if ( !v17 )
  {
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(v15, 0xF0uLL, 0x34364D43u);
    Privileges = TransientPoolWithTag;
    v36 = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
      return 3221225626LL;
    memset(TransientPoolWithTag, 0, 0xF0uLL);
    *(_QWORD *)&v36[7].Privilege[0].Luid.HighPart = (char *)v36 + 144;
    *(_QWORD *)&v36[7].Control = (char *)v36 + 144;
    memset(&v36[8], 0, 0x50uLL);
    v19 = (_WORD *)*((_QWORD *)&v40 + 1);
    v17 = (__int64)v36;
    v18 = v40;
  }
  if ( *(_QWORD *)(a1 + 8) != *((_QWORD *)CmpRegistryRootObject + 1)
    || !v18
    || ((*v19 - 65) & 0xFFDF) != 0
    || v18 > 2u && v19[1] != 92
    || (*(_DWORD *)v17 & 0x40) != 0 )
  {
    if ( (*(_DWORD *)v17 & 0x800) != 0 && !(unsigned __int8)CmpDoesParseEnterRegistryA(a1, &v40) )
    {
      v25 = -1073741790;
      goto LABEL_40;
    }
    if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
      *(_DWORD *)(v17 + 24) |= 0x10u;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      v56[13] = 1LL;
      LODWORD(v56[15]) = *(_DWORD *)(v17 + 28);
      HIDWORD(v56[15]) = a5;
      v56[14] = &v40;
      LOBYTE(v22) = 1;
      LOBYTE(v56[16]) = a4;
      LODWORD(v56[3]) = *(_DWORD *)(v17 + 24);
      v56[2] = CmKeyObjectType;
      LODWORD(v56[7]) = *(_DWORD *)(a3 + 16);
      v56[0] = String2;
      v56[1] = a1;
      v56[9] = v16;
      v23 = *(_QWORD *)(v17 + 72);
      if ( (v23 & 1) != 0 )
        v23 = 0LL;
      v56[12] = v23;
      v43 = v56;
      v45 = v17 + 144;
      if ( (*(_DWORD *)v17 & 1) != 0 )
      {
        v48[0] = *(_WORD *)(v17 + 4);
        v48[1] = v48[0];
        v49 = *(_QWORD *)(v17 + 8);
        v56[8] = v17 + 32;
        v56[4] = v48;
        v56[5] = *(_QWORD *)(a3 + 64);
        v56[6] = a9;
        v24 = CmpCallCallBacksEx(26, (unsigned int)v56, (unsigned int)&v43, v22, 27, a1, (__int64)v41);
      }
      else
      {
        v24 = CmpCallCallBacksEx(28, (unsigned int)v56, (unsigned int)&v43, v22, 29, a1, (__int64)v41);
      }
      v25 = v24;
      if ( v24 >= 0 )
      {
        LODWORD(a1) = v56[1];
        v58 = 1;
        goto LABEL_22;
      }
      if ( v24 == -1073740541 )
      {
        v25 = v44;
        if ( (_DWORD)v44 != 260 )
        {
          if ( (_DWORD)v44 != 872 )
          {
            v37 = HIDWORD(v56[7]);
            *(_DWORD *)(a3 + 20) |= HIDWORD(v56[7]);
            *(_DWORD *)(a3 + 16) &= ~(v37 | 0x2000000);
            v25 = 0;
LABEL_39:
            v30 = KeGetCurrentThread();
            v31 = v30->KernelApcDisable++ == -1;
            if ( v31
              && ($B476B70DB57F76B110DA5B9238C3E934 *)v30->ApcState.ApcListHead[0].Flink != &v30->152
              && !v30->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery((__int64)v30);
            }
            goto LABEL_40;
          }
LABEL_78:
          v38 = a10;
          *(_QWORD *)(v17 + 64) = 0LL;
          *(_QWORD *)(v38 + 8) = 0LL;
          goto LABEL_39;
        }
      }
LABEL_36:
      if ( v25 != 872 )
      {
        if ( v25 == 260 )
          *(_QWORD *)(a10 + 8) = PsGetCurrentSilo();
        goto LABEL_39;
      }
      goto LABEL_78;
    }
    while ( 1 )
    {
LABEL_22:
      while ( 1 )
      {
        *(_OWORD *)v57 = v40;
        v26 = CmpDoParseKey(a1, a3, a4, a5, String2, (__int64)v57, v17, v39, (__int64)&v46);
        v25 = v26;
        if ( v26 != 259 )
          break;
        KeWaitForSingleObject((char *)&stru_140353D30 + 152 * *(unsigned int *)(v17 + 136), Executive, 0, 0, 0LL);
        *(_DWORD *)v17 &= ~0x100u;
      }
      if ( v26 != -1073741267 )
        break;
      if ( v60 >= 0x40 )
      {
        v25 = -1073741772;
        goto LABEL_26;
      }
      if ( (*(_DWORD *)(v17 + 96) & 4) != 0 )
      {
        CmpRollbackTransactionArray(*(unsigned int *)(v17 + 120), *(_QWORD *)(v17 + 128), v27, &v42);
        *(_DWORD *)(v17 + 96) &= ~4u;
        *(_DWORD *)(v17 + 120) = 0;
        *(_QWORD *)(v17 + 128) = 0LL;
      }
      ++v60;
    }
    if ( v26 >= 0 )
      *v16 = v46;
LABEL_26:
    if ( !v58 )
      goto LABEL_36;
    v28 = *(_DWORD *)(a3 + 20);
    HIDWORD(v56[7]) = v28;
    if ( (*(_DWORD *)v17 & 1) != 0 )
    {
      v25 = CmPostCallbackNotificationEx(27, *v16, v25, (unsigned int)v56, (__int64)&v43, (__int64)v41);
    }
    else
    {
      v29 = *v16;
      if ( !CmpCallBackCount )
      {
LABEL_33:
        if ( (v25 & 0x80000000) == 0 && v28 != *(_DWORD *)(a3 + 20) )
        {
          *(_DWORD *)(a3 + 20) = v28;
          *(_DWORD *)(a3 + 16) = *(_DWORD *)(a3 + 24) & ~(v28 | 0x2000000);
        }
        goto LABEL_36;
      }
      if ( !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) && (_QWORD *)v41[0] != v41 )
      {
        v51[0] = v29;
        v53 = 0LL;
        v54 = 0LL;
        v55 = 0LL;
        v51[2] = v56;
        v50[0] = v51;
        v51[1] = v25;
        v50[1] = &v43;
        v52 = v25;
        CmpCallCallBacksEx(29, (unsigned int)v51, (unsigned int)v50, 0, 29, v29, (__int64)v41);
        v25 = v52;
      }
    }
    v28 = HIDWORD(v56[7]);
    goto LABEL_33;
  }
  v25 = -1073741790;
LABEL_40:
  v32 = Privileges;
  if ( Privileges )
  {
    CmpCleanupParseContext(Privileges, 0LL);
    MiDeleteSubsection(v32);
  }
  return v25;
}
