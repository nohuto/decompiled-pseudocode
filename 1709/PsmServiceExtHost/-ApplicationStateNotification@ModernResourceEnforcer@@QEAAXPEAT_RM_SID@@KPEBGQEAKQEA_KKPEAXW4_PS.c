/*
 * XREFs of ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000BCB0
 * Callers:
 *     PsmHostStateNotification2 @ 0x180015AD0 (PsmHostStateNotification2.c)
 * Callees:
 *     ?HandlePsmHostEmpty@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x18000C400 (-HandlePsmHostEmpty@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_KPEAX_N@Z @ 0x18000C694 (-HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K.c)
 *     ??2@YAPEAX_K@Z @ 0x180025A8C (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800269DC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800269EC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180026AA5 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 *     ??_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z @ 0x18002FC40 (--_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z.c)
 */

int __fastcall ModernResourceEnforcer::ApplicationStateNotification(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        unsigned int *a5,
        unsigned __int64 *Src,
        unsigned int a7,
        void *a8,
        int a9)
{
  struct _RTL_CRITICAL_SECTION *v9; // rbp
  int v14; // edi
  unsigned __int64 v15; // rbx
  unsigned int v16; // r13d
  unsigned int *v17; // rdi
  __int64 v18; // rbp
  unsigned __int64 *v19; // r15
  _QWORD *v20; // rax
  _QWORD *v21; // rdi
  unsigned int v22; // edx
  _QWORD *v23; // r12
  unsigned __int16 *v24; // rcx
  unsigned __int16 *v25; // r13
  char *v26; // rax
  char *v27; // rax
  unsigned __int64 v28; // rax
  void **v29; // rax
  char v30; // r15
  char *v31; // rbp
  size_t v32; // rbx
  char *v33; // rbx
  unsigned __int16 *v34; // rcx
  char *v35; // rax
  _QWORD *v36; // rcx
  unsigned __int64 v37; // rax
  _WORD *v38; // rcx
  PVOID Heap; // rbx
  PVOID v40; // rsi
  void *v42[2]; // [rsp+40h] [rbp-58h] BYREF
  void *Block[9]; // [rsp+50h] [rbp-48h] BYREF
  void *v44; // [rsp+A0h] [rbp+8h]

  v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 16));
  v14 = a9;
  v15 = -1LL;
  if ( a9 )
  {
    v16 = a7;
    if ( !a7 )
      goto LABEL_10;
    v17 = a5;
    v18 = a7;
    v19 = Src;
    do
    {
      if ( a9 == 1 )
      {
        ModernResourceEnforcer::HandleAcquireReleaseGroupSchedulingOwnership(
          (ModernResourceEnforcer *)a1,
          a4,
          (union _RM_SID *)a2,
          a3,
          *v17,
          *v19,
          a8,
          1);
      }
      else if ( a9 == 2 )
      {
        ModernResourceEnforcer::HandleAcquireReleaseGroupSchedulingOwnership(
          (ModernResourceEnforcer *)a1,
          a4,
          (union _RM_SID *)a2,
          a3,
          *v17,
          *v19,
          a8,
          0);
      }
      ++v19;
      ++v17;
      --v18;
    }
    while ( v18 );
    v14 = a9;
    v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
    v15 = -1LL;
  }
  else
  {
    if ( *a5 == 6 )
      v37 = -1LL;
    else
      v37 = *Src;
    ModernResourceEnforcer::HandlePsmHostEmpty((ModernResourceEnforcer *)a1, a4, (union _RM_SID *)a2, a3, *a5, v37);
  }
  v16 = a7;
LABEL_10:
  RtlLeaveCriticalSection(v9);
  LODWORD(v20) = v14 - 1;
  if ( (unsigned int)(v14 - 1) <= 1 )
    return (int)v20;
  if ( v16 <= 1 )
  {
    LODWORD(v20) = (_DWORD)a5;
    if ( *a5 == 6 )
      return (int)v20;
  }
  v20 = operator new(0x98uLL);
  v21 = v20;
  if ( !v20 )
    return (int)v20;
  v22 = 0;
  v20[1] = v20 + 3;
  v23 = v20 + 17;
  v20[2] = v20 + 3;
  *((_WORD *)v20 + 12) = 0;
  v20[14] = 0LL;
  v20[15] = 0LL;
  *((_DWORD *)v20 + 32) = 0;
  v20[17] = 0LL;
  v20[18] = 0LL;
  if ( a4 )
  {
    do
      ++v15;
    while ( a4[v15] );
  }
  else
  {
    v15 = 0LL;
  }
  v24 = (unsigned __int16 *)v20[1];
  v25 = (unsigned __int16 *)(v20 + 3);
  if ( v24 == (unsigned __int16 *)(v20 + 3) )
    v26 = (char *)v20 + 38;
  else
    v26 = *(char **)v25;
  if ( v15 <= (v26 - (char *)v24) >> 1 )
  {
    if ( v24 != a4 )
      memmove(v24, a4, 2 * v15);
    v38 = (_WORD *)(v21[1] + 2 * v15);
    v21[2] = v38;
    *v38 = 0;
  }
  else
  {
    if ( v24 == v25 )
      v27 = (char *)v21 + 38;
    else
      v27 = *(char **)v25;
    v28 = 2 * ((v27 - (char *)v24) >> 1) + 1;
    if ( v28 < v15 )
      v28 = v15;
    if ( v28 > 0x3FFFFFFFFFFFFFFELL )
      v28 = 0x3FFFFFFFFFFFFFFELL;
    if ( v15 > v28 )
    {
      Block[0] = 0LL;
      v29 = Block;
      Block[1] = 0LL;
      v30 = 2;
    }
    else
    {
      v42[1] = (void *)(v28 + 1);
      if ( v28 + 1 > 0x7FFFFFFFFFFFFFFFLL )
      {
        v42[0] = 0LL;
      }
      else
      {
        v42[0] = operator new(2 * (v28 + 1), (const struct std::nothrow_t *)&unk_180052632);
        v22 = 0;
      }
      v29 = v42;
      v30 = 1;
    }
    v31 = (char *)*v29;
    v44 = v29[1];
    *v29 = 0LL;
    if ( (v30 & 2) != 0 )
    {
      v30 &= ~2u;
      if ( Block[0] )
        operator delete(Block[0]);
    }
    if ( (v30 & 1) != 0 && v42[0] )
      operator delete(v42[0]);
    if ( !v31 )
      goto LABEL_63;
    v32 = 2 * v15;
    memcpy_0(v31, a4, v32);
    v33 = &v31[v32];
    *(_WORD *)v33 = 0;
    v34 = (unsigned __int16 *)v21[1];
    if ( v34 != v25 )
      operator delete(v34);
    v21[1] = v31;
    v21[2] = v33;
    v35 = &v31[2 * (_QWORD)v44 - 2];
    v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
    *(_QWORD *)v25 = v35;
  }
  if ( a7 > 1 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * a7);
    if ( Heap )
    {
      v40 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 4LL * a7);
      if ( v40 )
      {
        memcpy_0(Heap, Src, 8LL * a7);
        v21[15] = Heap;
        memcpy_0(v40, a5, 4LL * a7);
        v21[14] = v40;
        v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 16);
        goto LABEL_39;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    }
LABEL_63:
    LODWORD(v20) = (unsigned int)ModernResourceEnforcer::ModernResourceEnforcerWorkItem::`scalar deleting destructor'(
                                   (ModernResourceEnforcer::ModernResourceEnforcerWorkItem *)v21,
                                   v22);
    return (int)v20;
  }
  *((_DWORD *)v21 + 28) = *a5;
  v21[15] = *Src;
LABEL_39:
  *((_DWORD *)v21 + 33) = a9;
  *(_DWORD *)v21 = 2;
  *(_OWORD *)(v21 + 5) = *(_OWORD *)a2;
  *(_OWORD *)(v21 + 7) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(v21 + 9) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(v21 + 11) = *(_OWORD *)(a2 + 48);
  *((_DWORD *)v21 + 26) = *(_DWORD *)(a2 + 64);
  *((_DWORD *)v21 + 27) = a3;
  *((_DWORD *)v21 + 32) = a7;
  RtlEnterCriticalSection(v9);
  v36 = *(_QWORD **)(a1 + 72);
  if ( *v36 != a1 + 64 )
    __fastfail(3u);
  *v23 = a1 + 64;
  v23[1] = v36;
  *v36 = v23;
  *(_QWORD *)(a1 + 72) = v23;
  if ( (*(_BYTE *)(a1 + 344) & 1) == 0 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    TpPostWork(*(_QWORD *)(a1 + 56));
    *(_DWORD *)(a1 + 344) |= 1u;
  }
  LODWORD(v20) = RtlLeaveCriticalSection(v9);
  return (int)v20;
}
