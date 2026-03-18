/*
 * XREFs of MiValidFault @ 0x1400FCBC0
 * Callers:
 *     MmAccessFault @ 0x1400BDCD0 (MmAccessFault.c)
 * Callees:
 *     MiCheckAndUpdateIoAttribution @ 0x140023948 (MiCheckAndUpdateIoAttribution.c)
 *     KeInvalidAccessAllowed @ 0x140027A64 (KeInvalidAccessAllowed.c)
 *     MiCheckSystemNxFault @ 0x14003446C (MiCheckSystemNxFault.c)
 *     MiTbFlushType @ 0x14007FA04 (MiTbFlushType.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiLocateAddress @ 0x1400C2010 (MiLocateAddress.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     MiUpdatePrefetchPriority @ 0x1400FCFF0 (MiUpdatePrefetchPriority.c)
 *     MiLockPageAndSetDirty @ 0x140100B80 (MiLockPageAndSetDirty.c)
 *     MiWriteValidPteNewProtection @ 0x140100C50 (MiWriteValidPteNewProtection.c)
 *     KeFlushSingleTb @ 0x14010DE88 (KeFlushSingleTb.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiInvalidPteConforms @ 0x14017CEB0 (MiInvalidPteConforms.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiCanGrantExecute @ 0x14021BD68 (MiCanGrantExecute.c)
 *     MiValidVirtualizationFault @ 0x14021C39C (MiValidVirtualizationFault.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiValidFault(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR a2,
        ULONG_PTR *a3,
        ULONG_PTR a4,
        char a5,
        char a6)
{
  ULONG_PTR v9; // r10
  unsigned __int64 *v10; // rsi
  _KPROCESS *Process; // rcx
  ULONG_PTR v12; // r15
  char v13; // al
  __int64 v15; // rax
  unsigned int v16; // r13d
  unsigned __int8 v17; // bp
  ULONG_PTR v18; // r12
  __int64 v19; // r9
  unsigned __int64 v20; // rax
  __int64 v21; // r11
  __int64 v22; // r11
  __int64 v23; // rdx
  unsigned __int64 Address; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rbp
  __int64 v27; // rdx
  __int16 v28; // cx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // r10
  unsigned int v36; // eax
  _BYTE *v37; // rdi
  _KPROCESS *v38; // [rsp+78h] [rbp+10h]
  __int64 v39; // [rsp+88h] [rbp+20h] BYREF

  v9 = BugCheckParameter2;
  v10 = (unsigned __int64 *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  Process = KeGetCurrentThread()->ApcState.Process;
  v38 = Process;
  v12 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    v13 = *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( v13 == 1 )
    {
      MiUpdatePrefetchPriority(a4 & 0xFFFFFFFFFFFFFFFEuLL, a2, 0LL);
      return 0LL;
    }
    if ( v13 == 3 )
      return 0LL;
  }
  if ( a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL && *(char *)a3 < 0 )
  {
    if ( (a4 & 1) == 0 )
      goto LABEL_12;
    if ( ((*(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) - 1) & 0xFD) != 0 )
    {
      if ( (a4 & 1) != 0 )
        goto LABEL_67;
LABEL_12:
      if ( !KeInvalidAccessAllowed(a4) )
LABEL_67:
        KeBugCheckEx(0x50u, a2, v9, a4, 8uLL);
    }
    return 3221225477LL;
  }
  v15 = *a3;
  v16 = 0;
  if ( (*a3 & 4) == 0 && a2 <= 0x7FFFFFFEFFFFLL )
    return 3221225477LL;
  v17 = a5;
  v18 = v9 & 2;
  if ( (v9 & 2) != 0 )
  {
    if ( (v15 & 0x200) != 0 )
    {
      if ( !(unsigned int)MiCopyOnWriteEx(a2, (__int64)v10, 0xFFFFFFFFFFFFFFFFuLL, a5, 0) )
        return 3221225495LL;
      v16 = 274;
      goto LABEL_63;
    }
    if ( (v15 & 0x800) == 0 )
      return 3221225477LL;
  }
  else if ( (v9 & 0x10) != 0 )
  {
    if ( v15 < 0 )
    {
      if ( (unsigned int)MiCanGrantExecute(Process, a2) != 1 )
        return 3221225477LL;
      v20 = MI_GET_PAGE_FRAME_FROM_PTE(a3);
      if ( !MiIsPfnInline(v20) )
        return 3221225477LL;
      v22 = v21 & 0x7FFFFFFFFFFFFFFFLL;
      if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
        v22 |= 0x20uLL;
      MiWriteValidPteNewProtection(v10, v22);
      if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
        goto LABEL_63;
      v23 = 1LL;
      goto LABEL_62;
    }
    if ( !a6 )
      MiCheckSystemNxFault(v9, a2, a4, *a3, 5u);
  }
  if ( !v38[1].ActiveProcessors.Bitmap[3] || (Address = MiLocateAddress(a2)) == 0 || (*(_BYTE *)(Address + 48) & 7) != 3 )
  {
    if ( v18 )
    {
      v25 = MI_GET_PAGE_FRAME_FROM_PTE(a3);
      if ( v25 <= qword_14036C290
        && (!MmPhysicalMemoryBlock || (*(_QWORD *)(48 * v25 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0) )
      {
        v26 = 48 * v25 - 0x58000000000LL;
        v39 = MI_READ_PTE_LOCK_FREE(v26 + 16);
        if ( (unsigned int)MiInvalidPteConforms(v39) && (v28 & 0x400) == 0 && (MI_READ_PTE_LOCK_FREE(&v39) & 4) != 0 )
          MiLockPageAndSetDirty(v26, 1LL);
        if ( (*(_QWORD *)(v26 + 40) & 0x200000000000000LL) != 0 && (*(_DWORD *)(v26 + 16) & 0x400LL) != 0 )
          MiCheckAndUpdateIoAttribution(v26, v27, v29, v30);
        v17 = a5;
      }
    }
    v31 = MI_READ_PTE_LOCK_FREE(v10);
    v19 = v31;
    if ( !v18 || (v31 & 2) != 0 )
      goto LABEL_63;
    v32 = MI_READ_PTE_LOCK_FREE(v10);
    *v10 = v33 & 0x80FFFFFFFFFFFFFFuLL | ((HIBYTE(v32) & 0xF | (16 * ((v32 >> 60) & 7))) << 56);
    if ( (unsigned int)MiPteInShadowRange(v10) )
      MiWritePteShadow(v34);
    if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
      goto LABEL_63;
    v36 = 0;
    if ( v35 )
      v36 = MiTbFlushType(v35);
    v23 = v36;
LABEL_62:
    KeFlushSingleTb(a2, v23, 0LL);
LABEL_63:
    if ( v12 )
    {
      v37 = (_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( *v37 == 5 )
        MiValidVirtualizationFault(v37, v10, v17, v19);
    }
    return v16;
  }
  if ( v12 )
  {
    if ( *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
      return 3221225793LL;
    goto LABEL_63;
  }
  return v16;
}
