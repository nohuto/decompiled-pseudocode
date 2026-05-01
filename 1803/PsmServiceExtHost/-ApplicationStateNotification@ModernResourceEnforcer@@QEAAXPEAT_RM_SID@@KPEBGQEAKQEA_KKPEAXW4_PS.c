/*
 * XREFs of ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x180015570
 * Callers:
 *     PsmHostStateNotification2 @ 0x180013D60 (PsmHostStateNotification2.c)
 * Callees:
 *     ?_GrowAlloc@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAA?AV?$_ContainerAllocation@V?$allocator@G@utl@@@2@_K@Z @ 0x180014070 (-_GrowAlloc@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAA-AV-$_ContainerAllo.c)
 *     ?AddRef@ModernResourceEnforcer@@UEAAKXZ @ 0x180015560 (-AddRef@ModernResourceEnforcer@@UEAAKXZ.c)
 *     ?HandlePsmHostEmpty@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K@Z @ 0x180015C48 (-HandlePsmHostEmpty@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K@Z.c)
 *     ?HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_KPEAX_N@Z @ 0x180015E74 (-HandleAcquireReleaseGroupSchedulingOwnership@ModernResourceEnforcer@@IEAAXPEBGPEAT_RM_SID@@KK_K.c)
 *     ??2@YAPEAX_K@Z @ 0x18003E450 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F5A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180041D16 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 *     ??_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z @ 0x18004CBD4 (--_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z.c)
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
  int v13; // ebp
  unsigned __int64 v14; // rbx
  unsigned int v15; // r12d
  unsigned int *v16; // rsi
  __int64 v17; // rbp
  unsigned __int64 *v18; // r15
  _QWORD *v19; // rax
  _QWORD *v20; // rsi
  _QWORD *v21; // r12
  unsigned __int16 *v22; // rcx
  char **v23; // r13
  char *v24; // rax
  unsigned int v25; // edx
  char *v26; // rbp
  size_t v27; // rbx
  char *v28; // rbx
  char **v29; // rcx
  void *v30; // rax
  char *v31; // rcx
  _QWORD *v32; // rcx
  __int64 (__fastcall *v33)(ModernResourceEnforcer *); // rax
  unsigned __int64 v34; // rcx
  unsigned __int16 *v35; // rax
  PVOID Heap; // rdi
  PVOID v37; // r15
  void *v39[9]; // [rsp+40h] [rbp-48h] BYREF

  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 248));
  v13 = a9;
  v14 = -1LL;
  if ( a9 )
  {
    v15 = a7;
    if ( !a7 )
      goto LABEL_10;
    v16 = a5;
    v17 = a7;
    v18 = Src;
    do
    {
      if ( a9 == 1 )
      {
        ModernResourceEnforcer::HandleAcquireReleaseGroupSchedulingOwnership(
          (ModernResourceEnforcer *)a1,
          a4,
          (union _RM_SID *)a2,
          a3,
          *v16,
          *v18,
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
          *v16,
          *v18,
          a8,
          0);
      }
      ++v18;
      ++v16;
      --v17;
    }
    while ( v17 );
    v13 = a9;
    v14 = -1LL;
  }
  else
  {
    if ( *a5 == 6 )
      v34 = -1LL;
    else
      v34 = *Src;
    ModernResourceEnforcer::HandlePsmHostEmpty((ModernResourceEnforcer *)a1, a4, (union _RM_SID *)a2, a3, *a5, v34);
  }
  v15 = a7;
LABEL_10:
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 248));
  LODWORD(v19) = v13 - 1;
  if ( (unsigned int)(v13 - 1) <= 1 )
    return (int)v19;
  if ( v15 <= 1 )
  {
    LODWORD(v19) = (_DWORD)a5;
    if ( *a5 == 6 )
      return (int)v19;
  }
  v19 = operator new(0x98uLL);
  v20 = v19;
  if ( !v19 )
    return (int)v19;
  v19[1] = v19 + 3;
  v21 = v19 + 17;
  v19[2] = v19 + 3;
  *((_WORD *)v19 + 12) = 0;
  v19[14] = 0LL;
  v19[15] = 0LL;
  *((_DWORD *)v19 + 32) = 0;
  v19[17] = 0LL;
  v19[18] = 0LL;
  if ( a4 )
  {
    do
      ++v14;
    while ( a4[v14] );
  }
  else
  {
    v14 = 0LL;
  }
  v22 = (unsigned __int16 *)v19[1];
  v23 = (char **)(v19 + 3);
  if ( v22 == (unsigned __int16 *)(v19 + 3) )
    v24 = (char *)v19 + 38;
  else
    v24 = *v23;
  if ( v14 <= (v24 - (char *)v22) >> 1 )
  {
    if ( v22 != a4 )
    {
      memmove(v22, a4, 2 * v14);
      v22 = (unsigned __int16 *)v20[1];
    }
    v35 = &v22[v14];
    v20[2] = v35;
    *v35 = 0;
  }
  else
  {
    utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_GrowAlloc(
      v20 + 1,
      v39,
      v14);
    v26 = (char *)v39[0];
    if ( !v39[0] )
      goto LABEL_46;
    v27 = 2 * v14;
    memcpy_0(v39[0], a4, v27);
    v28 = &v26[v27];
    *(_WORD *)v28 = 0;
    v29 = (char **)v20[1];
    if ( v29 != v23 )
      operator delete(v29);
    v30 = v39[1];
    v20[1] = v26;
    v20[2] = v28;
    v31 = &v26[2 * (_QWORD)v30 - 2];
    v13 = a9;
    *v23 = v31;
  }
  if ( a7 > 1 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * a7);
    if ( Heap )
    {
      v37 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 4LL * a7);
      if ( v37 )
      {
        memcpy_0(Heap, Src, 8LL * a7);
        v20[15] = Heap;
        memcpy_0(v37, a5, 4LL * a7);
        v20[14] = v37;
        goto LABEL_25;
      }
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
    }
LABEL_46:
    LODWORD(v19) = (unsigned int)ModernResourceEnforcer::ModernResourceEnforcerWorkItem::`scalar deleting destructor'(
                                   (ModernResourceEnforcer::ModernResourceEnforcerWorkItem *)v20,
                                   v25);
    return (int)v19;
  }
  *((_DWORD *)v20 + 28) = *a5;
  v20[15] = *Src;
LABEL_25:
  *(_DWORD *)v20 = 2;
  *((_DWORD *)v20 + 33) = v13;
  *(_OWORD *)(v20 + 5) = *(_OWORD *)a2;
  *(_OWORD *)(v20 + 7) = *(_OWORD *)(a2 + 16);
  *(_OWORD *)(v20 + 9) = *(_OWORD *)(a2 + 32);
  *(_OWORD *)(v20 + 11) = *(_OWORD *)(a2 + 48);
  *((_DWORD *)v20 + 26) = *(_DWORD *)(a2 + 64);
  *((_DWORD *)v20 + 27) = a3;
  *((_DWORD *)v20 + 32) = a7;
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 248));
  v32 = *(_QWORD **)(a1 + 304);
  if ( *v32 != a1 + 296 )
    __fastfail(3u);
  *v21 = a1 + 296;
  v21[1] = v32;
  *v32 = v21;
  *(_QWORD *)(a1 + 304) = v21;
  if ( (*(_BYTE *)(a1 + 360) & 1) == 0 )
  {
    v33 = *(__int64 (__fastcall **)(ModernResourceEnforcer *))(*(_QWORD *)a1 + 8LL);
    if ( v33 == ModernResourceEnforcer::AddRef )
      ModernResourceEnforcer::AddRef((ModernResourceEnforcer *)a1);
    else
      v33((ModernResourceEnforcer *)a1);
    TpPostWork(*(_QWORD *)(a1 + 288));
    *(_DWORD *)(a1 + 360) |= 1u;
  }
  LODWORD(v19) = RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 248));
  return (int)v19;
}
