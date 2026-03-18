/*
 * XREFs of MmFreeVirtualMemory @ 0x1404AD570
 * Callers:
 *     PsDispatchIumService @ 0x14015CBE4 (PsDispatchIumService.c)
 *     NtFreeVirtualMemory @ 0x1404AD4B0 (NtFreeVirtualMemory.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400083C0 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140009050 (KiStackAttachProcess.c)
 *     MiObtainReferencedVadEx @ 0x14001B0F0 (MiObtainReferencedVadEx.c)
 *     MiFreeVadRange @ 0x1400719E4 (MiFreeVadRange.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1400E6714 (UNLOCK_ADDRESS_SPACE.c)
 *     ObfDereferenceObjectWithTag @ 0x1400FEDA0 (ObfDereferenceObjectWithTag.c)
 *     MiLocateVadEvent @ 0x1401147D0 (MiLocateVadEvent.c)
 *     MiUnlockAndDereferenceVad @ 0x140117340 (MiUnlockAndDereferenceVad.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiDecommitRegion @ 0x1404AE180 (MiDecommitRegion.c)
 *     MiCheckSecuredVad @ 0x1404D73E0 (MiCheckSecuredVad.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     MiCoalescePlaceholderAllocations @ 0x14074D2C8 (MiCoalescePlaceholderAllocations.c)
 *     MiDecommitEnclavePages @ 0x140752190 (MiDecommitEnclavePages.c)
 *     MiFreeEnclaveModules @ 0x140752314 (MiFreeEnclaveModules.c)
 *     PerfInfoLogVirtualFree @ 0x1407A93FC (PerfInfoLogVirtualFree.c)
 */

__int64 __fastcall MmFreeVirtualMemory(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 *a2,
        unsigned __int64 *a3,
        unsigned int a4,
        unsigned __int8 a5,
        int a6)
{
  unsigned int v6; // edi
  ULONG_PTR v9; // rbp
  unsigned __int64 v10; // rcx
  _KPROCESS *Process; // rdx
  unsigned __int64 v12; // rsi
  int v13; // r8d
  int v14; // ebx
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // r15
  _QWORD *p_Lock; // rcx
  unsigned __int64 v18; // rbp
  __int64 v19; // r9
  __int64 v20; // r10
  unsigned __int64 v21; // r11
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r8
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  __int64 v27; // rax
  PVOID v28; // rdi
  __int64 result; // rax
  int v30; // eax
  PVOID v31; // rbx
  int v32; // edx
  int v33; // r8d
  int v34; // eax
  unsigned int v35; // edi
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // r8
  __int64 v40; // r9
  char v41; // [rsp+40h] [rbp-E8h] BYREF
  unsigned int v42; // [rsp+44h] [rbp-E4h] BYREF
  PVOID Object; // [rsp+48h] [rbp-E0h]
  int v44; // [rsp+50h] [rbp-D8h]
  int v45; // [rsp+54h] [rbp-D4h]
  ULONG_PTR BugCheckParameter1a; // [rsp+58h] [rbp-D0h] BYREF
  int v47; // [rsp+60h] [rbp-C8h]
  unsigned __int64 v48; // [rsp+68h] [rbp-C0h]
  ULONG_PTR v49; // [rsp+70h] [rbp-B8h]
  unsigned __int64 v50; // [rsp+78h] [rbp-B0h]
  void *v51; // [rsp+80h] [rbp-A8h]
  unsigned __int64 v52; // [rsp+88h] [rbp-A0h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-98h]
  __int64 v54; // [rsp+98h] [rbp-90h] BYREF
  _BYTE v55[32]; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v56; // [rsp+C8h] [rbp-60h]

  v6 = a4;
  v49 = BugCheckParameter1;
  v54 = 0LL;
  v9 = BugCheckParameter1;
  if ( (a4 & 0xC000) == 0 || (a4 & 0xC000) == 49152 )
    return 3221225714LL;
  v10 = *a2;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v12 = *a3;
  v51 = Process;
  v52 = v10;
  if ( v10 > 0x7FFFFFFEFFFFLL )
    return 3221225712LL;
  if ( 0x7FFFFFFF0000LL - v10 < v12 )
    return 3221225713LL;
  if ( (a4 & 2) != 0 )
  {
    if ( (a4 & 1) != 0 )
      return 3221225485LL;
    v13 = a6 | 0x4000000;
    v6 = a4 & 0xFFFFFFFD;
  }
  else
  {
    v13 = a6;
  }
  v45 = v13;
  if ( (v6 & 1) == 0 )
    goto LABEL_7;
  if ( (v6 & 2) != 0 )
    return 3221225485LL;
  v13 |= 0xC000000u;
  v45 = v13;
  v6 &= ~1u;
LABEL_7:
  v44 = v13 & 0x4000000;
  if ( (v13 & 0x4000000) != 0 )
  {
    if ( v6 != 0x8000 )
      return 3221225714LL;
    if ( v12 && v12 == (v12 & 0xFFFFFFFFFFFFF000uLL) )
    {
      if ( v10 == (v10 & 0xFFFFFFFFFFFFF000uLL) )
        goto LABEL_8;
      return 3221225712LL;
    }
    return 3221225713LL;
  }
LABEL_8:
  v14 = 0;
  v15 = v10 & 0xFFFFFFFFFFFFF000uLL;
  v56 = 0LL;
  v16 = (v10 + v12 - 1) | 0xFFF;
  v48 = (v10 & 0xFFFFFFFFFFFFF000uLL) >> 12;
  v50 = v16 >> 12;
  if ( v9 == -1LL )
  {
    p_Lock = &Process->Header.Lock;
    Object = Process;
  }
  else
  {
    result = ObpReferenceObjectByHandleWithTag(v9, 0x6D566D4Du, (__int64)&BugCheckParameter1a, 0LL, 0LL);
    v42 = result;
    if ( (int)result < 0 )
      return result;
    p_Lock = (_QWORD *)BugCheckParameter1a;
    Object = (PVOID)BugCheckParameter1a;
    if ( v51 != (void *)BugCheckParameter1a )
    {
      v14 = 1;
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1a, 0, (__int64)v55);
      p_Lock = (_QWORD *)BugCheckParameter1a;
    }
    v13 = v45;
  }
  v41 = 0;
  if ( (v6 & 0xFFFF3FFF) != 0 && (!p_Lock[226] || (v6 & 0x10000) == 0 || (v6 & 0x4000) != 0) )
  {
    v35 = -1073741582;
    goto LABEL_118;
  }
  if ( (v13 & 0xC000000) == 0xC000000 )
  {
    v35 = MiCoalescePlaceholderAllocations(p_Lock, v15, v16, a5);
    if ( v14 )
      KiUnstackDetachProcess((__int64)v55, 0LL);
    if ( v9 == -1LL )
      return v35;
    p_Lock = Object;
LABEL_86:
    ObfDereferenceObjectWithTag(p_Lock, 0x6D566D4Du);
    return v35;
  }
  v47 = v6 & 0x8000;
  v18 = MiObtainReferencedVadEx(v15, v47 != 0, (int *)&v42);
  if ( !v18 )
  {
    v35 = v42;
LABEL_117:
    v9 = v49;
    p_Lock = Object;
LABEL_118:
    if ( v14 )
    {
      KiUnstackDetachProcess((__int64)v55, 0LL);
      p_Lock = Object;
    }
    if ( v9 == -1LL )
      return v35;
    goto LABEL_86;
  }
  while ( 1 )
  {
    v20 = v48;
    v21 = *(unsigned int *)(v18 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 32) << 32);
    v22 = *(unsigned int *)(v18 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 33) << 32);
    v51 = (void *)v21;
    BugCheckParameter1a = v22;
    if ( v12 )
    {
      v23 = v50;
    }
    else
    {
      v50 = v22;
      v23 = v22;
      v16 = (v22 << 12) | 0xFFF;
      if ( v47 )
      {
        if ( v48 != v21 )
          goto LABEL_114;
        v15 = v21 << 12;
      }
    }
    if ( v48 < v21 || v48 > v22 || v23 < v21 || v23 > v22 )
    {
      v35 = -1073741798;
      goto LABEL_109;
    }
    v19 = *(unsigned int *)(v18 + 48);
    v24 = *(_DWORD *)(v18 + 48) & 0x4000;
    if ( (v6 & 0x10000) != 0 )
    {
      if ( v24 || (v19 & 7) != 0 || v48 == v21 && v23 == v22 )
      {
LABEL_92:
        v35 = -1073741797;
        goto LABEL_109;
      }
    }
    else if ( !v24 || (v19 & 7) == 1 )
    {
      goto LABEL_92;
    }
    v25 = v44;
    if ( v44 )
    {
      if ( !MiLocateVadEvent(v18, 512)
        && (v36 = *(unsigned int *)(v18 + 52),
            LODWORD(v36) = v36 & 0x7FFFFFFF,
            (v36 | ((unsigned __int64)*(unsigned __int8 *)(v18 + 34) << 31)) != 0x7FFFFFFFDLL)
        || (v37 = *(unsigned int *)(v18 + 52),
            LODWORD(v37) = v37 & 0x7FFFFFFF,
            v22 = BugCheckParameter1a,
            (v37 | ((unsigned __int64)*(unsigned __int8 *)(v18 + 34) << 31)) == 0x7FFFFFFFDLL)
        && v20 == v21
        && v23 == BugCheckParameter1a )
      {
        v35 = -1073741800;
        goto LABEL_109;
      }
      v25 = v44;
    }
    if ( (v19 & 0x8000000) != 0 )
    {
      if ( v47 )
      {
        if ( (*((_DWORD *)Object + 193) & 0x20) != 0 )
        {
          v34 = 0;
LABEL_58:
          v42 = v34;
          if ( v34 < 0 )
            goto LABEL_108;
          goto LABEL_24;
        }
        v33 = v22 - v21;
        v32 = (_DWORD)v21 << 12;
      }
      else
      {
        v32 = v52;
        v33 = v23 - v20;
      }
      v34 = MiCheckSecuredVad(v18, v32, (v33 + 1) << 12, 85, a5);
      v22 = BugCheckParameter1a;
      v21 = (unsigned __int64)v51;
      v23 = v50;
      v20 = v48;
      v25 = v44;
      goto LABEL_58;
    }
LABEL_24:
    if ( !v47 )
    {
      if ( v12 )
        v12 = v16 - v15 + 1;
      if ( (*(_DWORD *)(v18 + 48) & 0x10000) != 0 )
      {
        v38 = MiDecommitEnclavePages((_DWORD)Object, v18, v15, v12, v45);
        v42 = v38;
        if ( v38 != -1073741802 )
        {
          if ( v38 < 0 )
          {
LABEL_108:
            v35 = v42;
            goto LABEL_109;
          }
LABEL_33:
          MiUnlockAndDereferenceVad((PVOID)v18, v22, v23, v19);
          v28 = Object;
          if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
            PerfInfoLogVirtualFree(v15, v12, Object);
          if ( v14 )
            KiUnstackDetachProcess((__int64)v55, 0LL);
          if ( v49 != -1LL )
            ObfDereferenceObjectWithTag(v28, 0x6D566D4Du);
          *a3 = v12;
          result = 0LL;
          *a2 = v15;
          return result;
        }
      }
      v26 = *(_DWORD *)(v18 + 48) & 7;
      if ( v26 == 3 )
      {
        v35 = -1073741664;
      }
      else if ( v26 == 5 )
      {
        v35 = -1073741664;
      }
      else
      {
        v27 = *(unsigned int *)(v18 + 52);
        LODWORD(v27) = v27 & 0x7FFFFFFF;
        if ( (v27 | ((unsigned __int64)*(unsigned __int8 *)(v18 + 34) << 31)) == 0x7FFFFFFFDLL )
        {
          v35 = -1073741664;
        }
        else
        {
          if ( v12 )
          {
LABEL_32:
            MiDecommitRegion(v18, v15, v16);
            goto LABEL_33;
          }
          if ( v52 >> 12 == (*(unsigned int *)(v18 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 32) << 32)) )
          {
            v16 = ((*(unsigned int *)(v18 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 33) << 32)) << 12) | 0xFFF;
            goto LABEL_32;
          }
LABEL_114:
          v35 = -1073741665;
        }
      }
LABEL_109:
      MiUnlockAndDereferenceVad((PVOID)v18, v22, v23, v19);
      if ( v41 == 1 )
        UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)Object, v39, v40);
      goto LABEL_117;
    }
    v19 = (__int64)Object;
    if ( (*((_DWORD *)Object + 435) & 0x100) != 0 && (v20 != v21 || v23 != v22) )
    {
      v35 = -1073741558;
      goto LABEL_109;
    }
    v30 = MiFreeVadRange(v18, (int)&v41, v20, v23, (__int64)Object, v25 != 0);
    v42 = v30;
    if ( v30 >= 0 )
      break;
    if ( v30 != -1073741267 )
      goto LABEL_108;
  }
  if ( v14 )
    KiUnstackDetachProcess((__int64)v55, 0LL);
  v31 = Object;
  if ( v54 )
    MiFreeEnclaveModules(&v54);
  if ( v49 != -1LL )
    ObfDereferenceObjectWithTag(v31, 0x6D566D4Du);
  *a3 = v16 - v15 + 1;
  result = 0LL;
  *a2 = v15;
  return result;
}
