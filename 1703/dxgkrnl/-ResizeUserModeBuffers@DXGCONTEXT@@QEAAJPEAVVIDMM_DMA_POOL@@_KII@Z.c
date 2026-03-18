/*
 * XREFs of ?ResizeUserModeBuffers@DXGCONTEXT@@QEAAJPEAVVIDMM_DMA_POOL@@_KII@Z @ 0x1C0183E1C
 * Callers:
 *     DxgkRender @ 0x1C01A43F0 (DxgkRender.c)
 * Callees:
 *     ?IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z @ 0x1C000D924 (-IsValidationEnabledForAdapterInCallerContext@DXGVALIDATION@@QEAA_NPEAVDXGADAPTER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGCONTEXT::ResizeUserModeBuffers(
        DXGCONTEXT *this,
        struct VIDMM_DMA_POOL *a2,
        ULONG_PTR a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v5; // rbx
  __int64 v7; // rcx
  HANDLE v8; // r13
  __int64 v9; // r14
  NTSTATUS v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  struct DXGADAPTER *v16; // rbx
  struct DXGGLOBAL *Global; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax
  unsigned int v20; // eax
  NTSTATUS v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rbx
  unsigned __int64 v29; // rax
  NTSTATUS v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  struct DXGADAPTER *v36; // rbx
  struct DXGGLOBAL *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  _QWORD *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  void *v54; // rcx
  void *v55; // rcx
  PVOID v56; // rdi
  ULONG_PTR NumberOfBytes; // [rsp+38h] [rbp-80h] BYREF
  ULONG_PTR Size; // [rsp+40h] [rbp-78h] BYREF
  PVOID v60; // [rsp+48h] [rbp-70h] BYREF
  PVOID Address; // [rsp+50h] [rbp-68h] BYREF
  PVOID P; // [rsp+58h] [rbp-60h]
  HANDLE SecureHandle; // [rsp+60h] [rbp-58h]
  PVOID BaseAddress; // [rsp+68h] [rbp-50h] BYREF
  HANDLE v65; // [rsp+70h] [rbp-48h]
  PVOID PoolWithTag; // [rsp+78h] [rbp-40h]
  ULONG_PTR RegionSize; // [rsp+D0h] [rbp+18h] BYREF
  unsigned int v68; // [rsp+D8h] [rbp+20h]

  v68 = a4;
  RegionSize = a3;
  v5 = (unsigned int)a4;
  v7 = *((_QWORD *)this + 2);
  if ( !*(_DWORD *)(v7 + 72) )
    ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v7 + 104));
  BaseAddress = 0LL;
  PoolWithTag = 0LL;
  Size = 0LL;
  Address = 0LL;
  SecureHandle = 0LL;
  NumberOfBytes = 0LL;
  v60 = 0LL;
  P = 0LL;
  v8 = 0LL;
  v65 = 0LL;
  LODWORD(v9) = 0;
  if ( RegionSize )
  {
    v10 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x3000u, 4u);
    v9 = v10;
    if ( v10 < 0 )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdWarning(v12, v11, v13, v14);
      v19[3] = this;
      v19[4] = RegionSize;
      v19[5] = v9;
      WdLogEvent5_WdWarning(v19);
    }
    else
    {
      v15 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      v16 = *(struct DXGADAPTER **)(v15 + 16);
      Global = DXGGLOBAL::GetGlobal(v15, v11, v13, v14);
      if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)Global + 1108), v16) )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, RegionSize, 0x4B677844u);
        if ( !PoolWithTag )
        {
          LODWORD(v9) = -1073741801;
          v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, a2, a3, a4);
          v18[3] = this;
          v18[4] = RegionSize;
          v18[5] = -1073741801LL;
          WdLogEvent5_WdWarning(v18);
        }
      }
      v5 = v68;
    }
  }
  if ( (int)v9 < 0 || !(_DWORD)v5 )
    goto LABEL_23;
  v20 = 8 * v5;
  if ( (unsigned __int64)(8 * v5) > 0xFFFFFFFF )
  {
    v20 = -1;
    LODWORD(v9) = -1073741675;
  }
  else
  {
    LODWORD(v9) = 0;
  }
  Size = v20;
  if ( (int)v9 < 0 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, a2, a3, a4);
    v26[3] = this;
    v26[4] = v5;
    goto LABEL_19;
  }
  v21 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Address, 0LL, &Size, 0x3000u, 4u);
  v9 = v21;
  if ( v21 < 0 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
    v26[3] = this;
    v26[4] = Size;
    v26[5] = v9;
LABEL_19:
    WdLogEvent5_WdWarning(v26);
  }
  if ( (int)v9 < 0 )
  {
LABEL_53:
    v56 = P;
    goto LABEL_54;
  }
  SecureHandle = MmSecureVirtualMemory(Address, Size, 4u);
  if ( !SecureHandle )
  {
    LODWORD(v9) = -1073741801;
    v27 = WdLogNewEntry5_WdWarning(v7, a2, a3, a4);
    *(_QWORD *)(v27 + 24) = this;
    *(_QWORD *)(v27 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v27);
  }
LABEL_23:
  if ( (int)v9 < 0 )
    goto LABEL_53;
  if ( !a5 )
    goto LABEL_39;
  v28 = a5;
  v29 = 24LL * a5;
  if ( v29 > 0xFFFFFFFF )
  {
    LODWORD(v29) = -1;
    LODWORD(v9) = -1073741675;
  }
  else
  {
    LODWORD(v9) = 0;
  }
  NumberOfBytes = (unsigned int)v29;
  if ( (int)v9 < 0 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v7, a2, a3, a4);
    v42[3] = this;
    v42[4] = v28;
    goto LABEL_35;
  }
  v30 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v60, 0LL, &NumberOfBytes, 0x3000u, 4u);
  v9 = v30;
  if ( v30 < 0 )
  {
    v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v32, v31, v33, v34);
    v42[3] = this;
    v42[4] = NumberOfBytes;
    v42[5] = v9;
    goto LABEL_35;
  }
  v35 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v36 = *(struct DXGADAPTER **)(v35 + 16);
  v37 = DXGGLOBAL::GetGlobal(v32, v35, v33, v34);
  if ( DXGVALIDATION::IsValidationEnabledForAdapterInCallerContext((struct DXGGLOBAL *)((char *)v37 + 1108), v36) )
  {
    P = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x4B677844u);
    if ( !P )
    {
      LODWORD(v9) = -1073741801;
      v42 = (_QWORD *)WdLogNewEntry5_WdWarning(v39, v38, v40, v41);
      v42[3] = this;
      v42[4] = RegionSize;
      v42[5] = -1073741801LL;
LABEL_35:
      WdLogEvent5_WdWarning(v42);
    }
  }
  if ( (int)v9 < 0 )
    goto LABEL_53;
  v8 = MmSecureVirtualMemory(v60, NumberOfBytes, 4u);
  v65 = v8;
  if ( !v8 )
  {
    LODWORD(v9) = -1073741801;
    v47 = WdLogNewEntry5_WdWarning(v44, v43, v45, v46);
    *(_QWORD *)(v47 + 24) = this;
    *(_QWORD *)(v47 + 32) = -1073741801LL;
    WdLogEvent5_WdWarning(v47);
  }
LABEL_39:
  if ( (int)v9 < 0 )
    goto LABEL_53;
  v48 = _guard_dispatch_icall_fptr();
  v9 = v48;
  if ( v48 < 0 )
  {
    v53 = WdLogNewEntry5_WdWarning(v50, v49, v51, v52);
    *(_QWORD *)(v53 + 24) = this;
    *(_QWORD *)(v53 + 32) = v9;
    WdLogEvent5_WdWarning(v53);
  }
  if ( (int)v9 < 0 )
    goto LABEL_53;
  if ( RegionSize )
  {
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 7, (PSIZE_T)this + 6, 0x8000u);
    v54 = (void *)*((_QWORD *)this + 8);
    if ( v54 )
      ExFreePoolWithTag(v54, 0);
    *((_QWORD *)this + 7) = BaseAddress;
    *((_QWORD *)this + 8) = PoolWithTag;
    *((_QWORD *)this + 6) = RegionSize;
  }
  if ( v68 )
  {
    MmUnsecureVirtualMemory(*((HANDLE *)this + 12));
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 11, (PSIZE_T)this + 10, 0x8000u);
    *((_QWORD *)this + 12) = SecureHandle;
    *((_QWORD *)this + 11) = Address;
    *((_DWORD *)this + 18) = v68;
    *((_QWORD *)this + 10) = Size;
  }
  if ( !a5 )
    goto LABEL_53;
  MmUnsecureVirtualMemory(*((HANDLE *)this + 17));
  ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)this + 15, (PSIZE_T)this + 14, 0x8000u);
  v55 = (void *)*((_QWORD *)this + 16);
  if ( v55 )
    ExFreePoolWithTag(v55, 0);
  *((_QWORD *)this + 17) = v8;
  *((_QWORD *)this + 15) = v60;
  v56 = P;
  *((_QWORD *)this + 16) = P;
  *((_DWORD *)this + 26) = a5;
  *((_QWORD *)this + 14) = NumberOfBytes;
LABEL_54:
  if ( (int)v9 < 0 )
  {
    if ( v8 )
      MmUnsecureVirtualMemory(v8);
    if ( v60 )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v60, &NumberOfBytes, 0x8000u);
    if ( v56 )
      ExFreePoolWithTag(v56, 0);
    if ( SecureHandle )
      MmUnsecureVirtualMemory(SecureHandle);
    if ( Address )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &Address, &Size, 0x8000u);
    if ( BaseAddress )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  return (unsigned int)v9;
}
