/*
 * XREFs of CmpParseKey @ 0x1405080E0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetPermanentSiloContext @ 0x14000C280 (PsGetPermanentSiloContext.c)
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14007EAA8 (CmpAllocateTransientPoolWithTag.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14008D480 (ExIsResourceAcquiredSharedLite.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     PsGetCurrentSilo @ 0x1400EDEE0 (PsGetCurrentSilo.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmPostCallbackNotificationEx @ 0x1404346B0 (CmPostCallbackNotificationEx.c)
 *     CmpDoesParseEnterRegistryA @ 0x14045B2F4 (CmpDoesParseEnterRegistryA.c)
 *     CmpCleanupParseContext @ 0x1404D5440 (CmpCleanupParseContext.c)
 *     CmpCallCallBacksEx @ 0x140533C00 (CmpCallCallBacksEx.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     CmpRollbackTransactionArray @ 0x14066BB50 (CmpRollbackTransactionArray.c)
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
  char v13; // r13
  __int64 v14; // rcx
  __int64 *v15; // r12
  __int64 v16; // rsi
  unsigned __int16 v17; // r8
  _WORD *v18; // rdx
  __int16 v19; // ax
  struct _KTHREAD *CurrentThread; // rax
  const UNICODE_STRING *v21; // r14
  int v22; // r15d
  int v23; // r9d
  __int64 v24; // r13
  __int64 v25; // rax
  int v26; // eax
  unsigned int v27; // edi
  int v28; // eax
  __int64 v29; // r8
  _DWORD *v30; // rcx
  int v31; // r8d
  __int64 v32; // rbx
  struct _KTHREAD *v33; // rcx
  __int16 v34; // ax
  struct _PRIVILEGE_SET *v35; // rbx
  bool v37; // zf
  int v38; // edi
  __int64 v39; // rax
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  struct _PRIVILEGE_SET *v41; // rdi
  int v42; // eax
  int v43; // [rsp+38h] [rbp-C8h]
  __int128 v44; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v45[2]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v46; // [rsp+70h] [rbp-90h] BYREF
  __int64 v47; // [rsp+78h] [rbp-88h]
  __int64 v48; // [rsp+80h] [rbp-80h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+88h] [rbp-78h]
  _WORD v50[4]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v51; // [rsp+98h] [rbp-68h]
  _QWORD v52[2]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v53[3]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v54; // [rsp+C8h] [rbp-38h]
  __int64 v55; // [rsp+D0h] [rbp-30h]
  __int64 v56; // [rsp+D8h] [rbp-28h]
  __int64 v57; // [rsp+E0h] [rbp-20h]
  _QWORD v58[18]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v59[2]; // [rsp+180h] [rbp+80h] BYREF
  int v60; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 v61; // [rsp+1E0h] [rbp+E0h]
  unsigned __int8 v62; // [rsp+1E8h] [rbp+E8h]

  v62 = a4;
  v61 = a3;
  v48 = 0LL;
  Privileges = 0LL;
  v13 = 0;
  v44 = *a7;
  memset(v58, 0, 0x88uLL);
  v15 = a11;
  v16 = a8;
  v46 = 0LL;
  v47 = 0LL;
  v45[1] = v45;
  *a11 = 0LL;
  v45[0] = v45;
  LODWORD(a7) = 0;
  v60 = 0;
  if ( a2 != CmKeyObjectType )
    return 3221225508LL;
  if ( (PVOID)a1 == CmpRegistryRootObject )
  {
    a8 = 0LL;
    PsGetPermanentSiloContext(*(_QWORD *)(a10 + 8), CmpSiloContextSlot, (unsigned __int64 *)&a8);
    if ( a8 )
    {
      if ( *(_QWORD *)(a8 + 32) )
        a1 = *(_QWORD *)(a8 + 32);
    }
  }
  v17 = v44;
  v18 = (_WORD *)*((_QWORD *)&v44 + 1);
  if ( (_WORD)v44 )
  {
    v14 = 65534LL;
    while ( *(_WORD *)(*((_QWORD *)&v44 + 1) + 2 * ((unsigned __int64)v17 >> 1) - 2) == 92 )
    {
      v37 = v17 == 2;
      v17 -= 2;
      LOWORD(v44) = v17;
      if ( v37 )
        goto LABEL_9;
    }
    if ( v17 )
    {
      v19 = WORD1(v44);
      do
      {
        if ( *v18 != 92 )
          break;
        ++v18;
        v17 -= 2;
        v19 -= 2;
        *((_QWORD *)&v44 + 1) = v18;
        LOWORD(v44) = v17;
        WORD1(v44) = v19;
      }
      while ( v17 );
    }
  }
LABEL_9:
  if ( !v16 )
  {
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(v14, 0xE0uLL, 0x34364D43u);
    Privileges = TransientPoolWithTag;
    v41 = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
      return 3221225626LL;
    memset(TransientPoolWithTag, 0, 0xE0uLL);
    v18 = (_WORD *)*((_QWORD *)&v44 + 1);
    v16 = (__int64)v41;
    v17 = v44;
  }
  if ( *(_QWORD *)(a1 + 8) != *((_QWORD *)CmpRegistryRootObject + 1)
    || !v17
    || ((*v18 - 65) & 0xFFDF) != 0
    || v17 > 2u && v18[1] != 92
    || (*(_DWORD *)v16 & 0x40) != 0 )
  {
    if ( (*(_DWORD *)v16 & 0x800) != 0 && !CmpDoesParseEnterRegistryA(a1, (unsigned __int16 *)&v44) )
    {
      v27 = -1073741790;
      goto LABEL_40;
    }
    if ( (*(_DWORD *)(a1 + 48) & 0x10) != 0 )
      *(_DWORD *)(v16 + 24) |= 0x10u;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v21 = String2;
    v22 = a5;
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) )
    {
      v24 = v61;
      v58[13] = 1LL;
      LODWORD(v58[15]) = *(_DWORD *)(v16 + 28);
      LOBYTE(v23) = 1;
      HIDWORD(v58[15]) = v22;
      v58[14] = &v44;
      LOBYTE(v58[16]) = v62;
      LODWORD(v58[3]) = *(_DWORD *)(v16 + 24);
      v58[2] = CmKeyObjectType;
      LODWORD(v58[7]) = *(_DWORD *)(v61 + 16);
      v58[0] = v21;
      v58[1] = a1;
      v58[9] = v15;
      v25 = *(_QWORD *)(v16 + 72);
      if ( (v25 & 1) != 0 )
        v25 = 0LL;
      v58[12] = v25;
      v46 = v58;
      if ( (*(_DWORD *)v16 & 1) != 0 )
      {
        v50[0] = *(_WORD *)(v16 + 4);
        v50[1] = v50[0];
        v51 = *(_QWORD *)(v16 + 8);
        v58[8] = v16 + 32;
        v58[4] = v50;
        v58[5] = *(_QWORD *)(v61 + 64);
        v58[6] = a9;
        v26 = CmpCallCallBacksEx(26, (unsigned int)v58, (unsigned int)&v46, v23, 27, a1, (__int64)v45);
      }
      else
      {
        v26 = CmpCallCallBacksEx(28, (unsigned int)v58, (unsigned int)&v46, v23, 29, a1, (__int64)v45);
      }
      v27 = v26;
      if ( v26 >= 0 )
      {
        LODWORD(a1) = v58[1];
        v13 = 1;
        goto LABEL_22;
      }
      if ( v26 == -1073740541 )
      {
        v27 = v47;
        if ( (_DWORD)v47 != 260 )
        {
          if ( (_DWORD)v47 != 872 )
          {
            v42 = HIDWORD(v58[7]);
            *(_DWORD *)(v24 + 20) |= HIDWORD(v58[7]);
            *(_DWORD *)(v24 + 16) &= ~(v42 | 0x2000000);
            v27 = 0;
            goto LABEL_39;
          }
LABEL_67:
          v39 = a10;
          *(_QWORD *)(v16 + 64) = 0LL;
          *(_QWORD *)(v39 + 8) = 0LL;
LABEL_39:
          v33 = KeGetCurrentThread();
          v34 = v33->KernelApcDisable + 1;
          v33->KernelApcDisable = v34;
          if ( !v34
            && ($69CD3F157F9F39B6F7113F2231989901 *)v33->ApcState.ApcListHead[0].Flink != &v33->152
            && !v33->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery((__int64)v33);
          }
          goto LABEL_40;
        }
      }
LABEL_36:
      if ( v27 != 872 )
      {
        if ( v27 == 260 )
          *(_QWORD *)(a10 + 8) = PsGetCurrentSilo();
        goto LABEL_39;
      }
      goto LABEL_67;
    }
    while ( 1 )
    {
LABEL_22:
      while ( 1 )
      {
        *(_OWORD *)v59 = v44;
        v28 = CmpDoParseKey(a1, v61, v62, v22, v21, (__int64)v59, v16, v43, (__int64)&v48);
        v27 = v28;
        if ( v28 != 259 )
          break;
        KeWaitForSingleObject((char *)&stru_14033BD00 + 152 * *(unsigned int *)(v16 + 136), Executive, 0, 0, 0LL);
        *(_DWORD *)v16 &= ~0x100u;
      }
      if ( v28 != -1073741267 )
        break;
      v38 = (int)a7;
      if ( (unsigned int)a7 >= 0x40 )
      {
        v27 = -1073741772;
        goto LABEL_26;
      }
      if ( (*(_DWORD *)(v16 + 96) & 4) != 0 )
      {
        CmpRollbackTransactionArray(*(unsigned int *)(v16 + 120), *(_QWORD *)(v16 + 128), v29, &v60);
        *(_DWORD *)(v16 + 96) &= ~4u;
        *(_DWORD *)(v16 + 120) = 0;
        *(_QWORD *)(v16 + 128) = 0LL;
      }
      LODWORD(a7) = v38 + 1;
    }
    if ( v28 >= 0 )
      *v15 = v48;
LABEL_26:
    if ( !v13 )
      goto LABEL_36;
    v30 = (_DWORD *)v61;
    v31 = *(_DWORD *)(v61 + 20);
    HIDWORD(v58[7]) = v31;
    if ( (*(_DWORD *)v16 & 1) != 0 )
    {
      v27 = CmPostCallbackNotificationEx(27, *v15, v27, (__int64)v58, (__int64)&v46, v45);
    }
    else
    {
      v32 = *v15;
      if ( !CmpCallBackCount )
      {
LABEL_33:
        if ( (v27 & 0x80000000) == 0 && v31 != v30[5] )
        {
          v30[5] = v31;
          v30[4] = v30[6] & ~(v31 | 0x2000000);
        }
        goto LABEL_36;
      }
      if ( !ExIsResourceAcquiredSharedLite((PERESOURCE)&CmpRegistryLock) && (_QWORD *)v45[0] != v45 )
      {
        v53[0] = v32;
        v55 = 0LL;
        v56 = 0LL;
        v57 = 0LL;
        v53[2] = v58;
        v52[0] = v53;
        v53[1] = v27;
        v52[1] = &v46;
        v54 = v27;
        CmpCallCallBacksEx(29, (unsigned int)v53, (unsigned int)v52, 0, 29, v32, (__int64)v45);
        v27 = v54;
      }
    }
    v31 = HIDWORD(v58[7]);
    v30 = (_DWORD *)v61;
    goto LABEL_33;
  }
  v27 = -1073741790;
LABEL_40:
  v35 = Privileges;
  if ( Privileges )
  {
    CmpCleanupParseContext((__int64)Privileges, 0);
    MiDeleteSubsection(v35);
  }
  return v27;
}
