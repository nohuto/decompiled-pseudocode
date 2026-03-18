/*
 * XREFs of CmpParseKey @ 0x14059EF70
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140009020 (CmpAllocateTransientPoolWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x14007C0E0 (KiCheckForKernelApcDelivery.c)
 *     PsGetPermanentSiloContext @ 0x1400A5EF0 (PsGetPermanentSiloContext.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400FDA10 (ExIsResourceAcquiredSharedLite.c)
 *     PsGetCurrentSilo @ 0x140105440 (PsGetCurrentSilo.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     CmPostCallbackNotificationEx @ 0x14049EC90 (CmPostCallbackNotificationEx.c)
 *     CmpCleanupParseContext @ 0x14049FF18 (CmpCleanupParseContext.c)
 *     CmpDoesParseEnterRegistryA @ 0x140580D4C (CmpDoesParseEnterRegistryA.c)
 *     CmpCallCallBacksEx @ 0x1405A7050 (CmpCallCallBacksEx.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     CmpRollbackTransactionArray @ 0x1406F9C2C (CmpRollbackTransactionArray.c)
 *     PsGetParentSilo @ 0x1407788F0 (PsGetParentSilo.c)
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
  __int64 *v15; // r12
  __int64 v16; // rsi
  unsigned __int16 v17; // r8
  _WORD *v18; // rdx
  __int16 v19; // ax
  struct _KTHREAD *CurrentThread; // rax
  int v21; // r9d
  __int64 v22; // rax
  int v23; // eax
  signed int v24; // ebx
  int v25; // eax
  __int64 v26; // r8
  int v27; // r8d
  __int64 v28; // rdi
  struct _KTHREAD *v29; // rcx
  bool v30; // zf
  struct _PRIVILEGE_SET *v31; // rdi
  __int64 i; // rbx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  struct _PRIVILEGE_SET *v38; // rbx
  int v39; // eax
  __int64 v40; // rax
  int v41; // [rsp+38h] [rbp-C8h]
  __int128 v42; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v43[2]; // [rsp+60h] [rbp-A0h] BYREF
  int v44; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v45; // [rsp+78h] [rbp-88h] BYREF
  __int64 v46; // [rsp+80h] [rbp-80h]
  __int64 v47; // [rsp+88h] [rbp-78h]
  __int64 v48; // [rsp+90h] [rbp-70h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+98h] [rbp-68h]
  _QWORD v50[2]; // [rsp+A0h] [rbp-60h] BYREF
  _WORD v51[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v52; // [rsp+B8h] [rbp-48h]
  _QWORD v53[18]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v54[8]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v55[2]; // [rsp+190h] [rbp+90h] BYREF
  char v56; // [rsp+1E8h] [rbp+E8h]
  unsigned int v58; // [rsp+210h] [rbp+110h]

  v56 = 0;
  v48 = 0LL;
  v14 = *a7;
  Privileges = 0LL;
  v42 = v14;
  memset(v53, 0, 0x88uLL);
  v15 = a11;
  v16 = a8;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v43[1] = v43;
  *a11 = 0LL;
  v43[0] = v43;
  v58 = 0;
  v44 = 0;
  if ( a2 != CmKeyObjectType )
    return 3221225508LL;
  if ( (PVOID)a1 == CmpRegistryRootObject )
  {
    for ( i = *(_QWORD *)(a10 + 8); ; i = PsGetParentSilo(i, v34, v35, v36) )
    {
      a8 = 0LL;
      PsGetPermanentSiloContext(i, CmpSiloContextSlot, (unsigned __int64 *)&a8);
      if ( a8 )
      {
        a1 = *(_QWORD *)(a8 + 32);
        if ( a1 )
          break;
      }
    }
  }
  v17 = v42;
  v18 = (_WORD *)*((_QWORD *)&v42 + 1);
  if ( (_WORD)v42 )
  {
    while ( *(_WORD *)(*((_QWORD *)&v42 + 1) + 2 * ((unsigned __int64)v17 >> 1) - 2) == 92 )
    {
      v30 = v17 == 2;
      v17 -= 2;
      LOWORD(v42) = v17;
      if ( v30 )
        goto LABEL_8;
    }
    if ( v17 )
    {
      v19 = WORD1(v42);
      do
      {
        if ( *v18 != 92 )
          break;
        ++v18;
        v17 -= 2;
        v19 -= 2;
        *((_QWORD *)&v42 + 1) = v18;
        LOWORD(v42) = v17;
        WORD1(v42) = v19;
      }
      while ( v17 );
    }
  }
LABEL_8:
  if ( !v16 )
  {
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, 0x128uLL, 0x34364D43u);
    Privileges = TransientPoolWithTag;
    v38 = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
      return 3221225626LL;
    memset(TransientPoolWithTag, 0, 0x128uLL);
    *(_QWORD *)&v38[7].Privilege[0].Luid.HighPart = (char *)v38 + 144;
    *(_QWORD *)&v38[7].Control = (char *)v38 + 144;
    memset(&v38[10].Privilege[0].Attributes, 0, 0x50uLL);
    v18 = (_WORD *)*((_QWORD *)&v42 + 1);
    v16 = (__int64)v38;
    v17 = v42;
  }
  if ( *(_QWORD *)(a1 + 8) != *((_QWORD *)CmpRegistryRootObject + 1)
    || !v17
    || ((*v18 - 65) & 0xFFDF) != 0
    || v17 > 2u && v18[1] != 92
    || (*(_DWORD *)v16 & 0x40) != 0 )
  {
    if ( (*(_DWORD *)v16 & 0x800) != 0 && !CmpDoesParseEnterRegistryA(a1, (unsigned __int16 *)&v42) )
    {
      v24 = -1073741790;
      goto LABEL_39;
    }
    if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
      *(_DWORD *)(v16 + 24) |= 0x10u;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      v53[13] = 1LL;
      LODWORD(v53[15]) = *(_DWORD *)(v16 + 28);
      HIDWORD(v53[15]) = a5;
      v53[14] = &v42;
      LOBYTE(v21) = 1;
      LOBYTE(v53[16]) = a4;
      LODWORD(v53[3]) = *(_DWORD *)(v16 + 24);
      v53[2] = CmKeyObjectType;
      LODWORD(v53[7]) = *(_DWORD *)(a3 + 16);
      v53[0] = String2;
      v53[1] = a1;
      v53[9] = v15;
      v22 = *(_QWORD *)(v16 + 72);
      if ( (v22 & 1) != 0 )
        v22 = 0LL;
      v53[12] = v22;
      v45 = v53;
      v47 = v16 + 144;
      if ( (*(_DWORD *)v16 & 1) != 0 )
      {
        v51[0] = *(_WORD *)(v16 + 4);
        v51[1] = v51[0];
        v52 = *(_QWORD *)(v16 + 8);
        v53[8] = v16 + 32;
        v53[4] = v51;
        v53[5] = *(_QWORD *)(a3 + 64);
        v53[6] = a9;
        v23 = CmpCallCallBacksEx(26, (unsigned int)v53, (unsigned int)&v45, v21, 27, a1, (__int64)v43);
      }
      else
      {
        v23 = CmpCallCallBacksEx(28, (unsigned int)v53, (unsigned int)&v45, v21, 29, a1, (__int64)v43);
      }
      v24 = v23;
      if ( v23 >= 0 )
      {
        LODWORD(a1) = v53[1];
        v56 = 1;
        goto LABEL_21;
      }
      if ( v23 == -1073740541 )
      {
        v24 = v46;
        if ( (_DWORD)v46 != 260 )
        {
          if ( (_DWORD)v46 != 872 )
          {
            v39 = HIDWORD(v53[7]);
            *(_DWORD *)(a3 + 20) |= HIDWORD(v53[7]);
            *(_DWORD *)(a3 + 16) &= ~(v39 | 0x2000000);
            v24 = 0;
LABEL_38:
            v29 = KeGetCurrentThread();
            v30 = v29->KernelApcDisable++ == -1;
            if ( v30
              && ($005F0E83B22994B61E86C72E0CE43C71 *)v29->ApcState.ApcListHead[0].Flink != &v29->152
              && !v29->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
            goto LABEL_39;
          }
LABEL_76:
          v40 = a10;
          *(_QWORD *)(v16 + 64) = 0LL;
          *(_QWORD *)(v40 + 8) = 0LL;
          goto LABEL_38;
        }
      }
LABEL_35:
      if ( v24 != 872 )
      {
        if ( v24 == 260 )
          *(_QWORD *)(a10 + 8) = PsGetCurrentSilo();
        goto LABEL_38;
      }
      goto LABEL_76;
    }
    while ( 1 )
    {
LABEL_21:
      while ( 1 )
      {
        *(_OWORD *)v55 = v42;
        v25 = CmpDoParseKey(a1, a3, a4, a5, String2, (__int64)v55, v16, v41, (__int64)&v48);
        v24 = v25;
        if ( v25 != 259 )
          break;
        KeWaitForSingleObject((char *)&stru_140396910 + 152 * *(unsigned int *)(v16 + 136), Executive, 0, 0, 0LL);
        *(_DWORD *)v16 &= ~0x100u;
      }
      if ( v25 != -1073741267 )
        break;
      if ( v58 >= 0x40 )
      {
        v24 = -1073741772;
        goto LABEL_25;
      }
      if ( (*(_DWORD *)(v16 + 96) & 4) != 0 )
      {
        CmpRollbackTransactionArray(*(unsigned int *)(v16 + 120), *(_QWORD *)(v16 + 128), v26, &v44);
        *(_DWORD *)(v16 + 96) &= ~4u;
        *(_DWORD *)(v16 + 120) = 0;
        *(_QWORD *)(v16 + 128) = 0LL;
      }
      ++v58;
    }
    if ( v25 >= 0 )
      *v15 = v48;
LABEL_25:
    if ( !v56 )
      goto LABEL_35;
    v27 = *(_DWORD *)(a3 + 20);
    v28 = *v15;
    HIDWORD(v53[7]) = v27;
    if ( (*(_DWORD *)v16 & 1) != 0 )
    {
      v24 = CmPostCallbackNotificationEx(27, v28, v24, (__int64)v53, (__int64)&v45, v43);
    }
    else
    {
      if ( !CmpCallBackCount )
      {
LABEL_32:
        if ( v24 >= 0 && v27 != *(_DWORD *)(a3 + 20) )
        {
          *(_DWORD *)(a3 + 20) = v27;
          *(_DWORD *)(a3 + 16) = *(_DWORD *)(a3 + 24) & ~(v27 | 0x2000000);
        }
        goto LABEL_35;
      }
      if ( !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) && (_QWORD *)v43[0] != v43 )
      {
        memset(v54, 0, 0x38uLL);
        v54[0] = v28;
        v54[2] = v53;
        LODWORD(v54[1]) = v24;
        v50[0] = v54;
        LODWORD(v54[3]) = v24;
        v50[1] = &v45;
        CmpCallCallBacksEx(29, (unsigned int)v54, (unsigned int)v50, 0, 29, v28, (__int64)v43);
        v24 = v54[3];
      }
    }
    v27 = HIDWORD(v53[7]);
    goto LABEL_32;
  }
  v24 = -1073741790;
LABEL_39:
  v31 = Privileges;
  if ( Privileges )
  {
    CmpCleanupParseContext((__int64)Privileges, 0);
    CmSiFreeMemory(v31);
  }
  return (unsigned int)v24;
}
