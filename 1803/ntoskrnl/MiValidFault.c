/*
 * XREFs of MiValidFault @ 0x14001ECF0
 * Callers:
 *     MiUserFault @ 0x14001B870 (MiUserFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     KeFlushSingleTb @ 0x14003B184 (KeFlushSingleTb.c)
 *     MiTbFlushType @ 0x14003B3C0 (MiTbFlushType.c)
 *     MiReleaseFaultState @ 0x140057E38 (MiReleaseFaultState.c)
 *     MiRelockFaultState @ 0x140059A7C (MiRelockFaultState.c)
 *     MiPteHasShadow @ 0x140062834 (MiPteHasShadow.c)
 *     MiUpdatePrefetchPriority @ 0x1400AE9F0 (MiUpdatePrefetchPriority.c)
 *     MiCheckSystemNxFault @ 0x1400B545C (MiCheckSystemNxFault.c)
 *     KeInvalidAccessAllowed @ 0x1400B54F4 (KeInvalidAccessAllowed.c)
 *     MiLockPageAndSetDirty @ 0x1401248B8 (MiLockPageAndSetDirty.c)
 *     MiWriteValidPteNewProtection @ 0x140125DC0 (MiWriteValidPteNewProtection.c)
 *     MiCopyOnWrite @ 0x140126BA0 (MiCopyOnWrite.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiCheckAndUpdateIoAttribution @ 0x1401379B4 (MiCheckAndUpdateIoAttribution.c)
 *     MiInvalidPteConforms @ 0x1401A6560 (MiInvalidPteConforms.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiCanGrantExecute @ 0x140261800 (MiCanGrantExecute.c)
 *     MiSetFaultPacketDirectives @ 0x1402620F0 (MiSetFaultPacketDirectives.c)
 *     MiValidVirtualizationFault @ 0x140262110 (MiValidVirtualizationFault.c)
 *     MiForceCrashForInvalidAccess @ 0x1407499E8 (MiForceCrashForInvalidAccess.c)
 */

__int64 __fastcall MiValidFault(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // rsi
  ULONG_PTR v3; // r8
  ULONG_PTR v4; // r14
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r10
  __int64 v9; // r11
  __int64 v10; // rax
  _KPROCESS *Process; // rbp
  char v12; // al
  signed __int64 v14; // rbx
  _BYTE *v15; // rax
  ULONG_PTR v16; // rdi
  int v17; // eax
  unsigned int v18; // edi
  unsigned int v19; // esi
  __int64 v20; // rbx
  unsigned __int64 v21; // rax
  __int64 v22; // r11
  __int64 v23; // r11
  _BYTE *v24; // r14
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r11
  unsigned __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // r9
  unsigned __int64 v33; // r12
  unsigned __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned __int64 v40; // r10
  unsigned __int64 v41; // r11
  unsigned __int64 v42; // rdx
  __int64 v43; // rax
  char v44; // dl
  BOOL v45; // edx
  int v46; // r8d
  signed __int64 v47; // rcx
  unsigned int v48; // eax
  __int64 v49; // [rsp+70h] [rbp+8h] BYREF
  __int64 v50; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v51; // [rsp+80h] [rbp+18h]

  v50 = a2;
  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 16);
  v6 = 0xFFFFF68000000000uLL;
  v7 = ((*(_QWORD *)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v51 = v7;
  v8 = 0xFFFFF6FB7DBED7F8uLL;
  if ( v7 >= 0xFFFFF6FB7DBED000uLL
    && v7 <= 0xFFFFF6FB7DBED7F8uLL
    && (unsigned int)MiPteHasShadow(a1, a2, v3, 0xFFFFF68000000000uLL)
    && (v9 & 1) != 0
    && ((v9 & 0x20) == 0 || (v9 & 0x42) == 0) )
  {
    a2 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
    if ( a2 )
    {
      v10 = *(_QWORD *)(a2 + 8 * ((v7 >> 3) & 0x1FF));
      a2 = v9 | 0x20;
      if ( (v10 & 0x20) == 0 )
        a2 = v9;
    }
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (v4 & 1) != 0 )
  {
    v12 = *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( v12 == 1 )
    {
      MiUpdatePrefetchPriority(v4 & 0xFFFFFFFFFFFFFFFEuLL, v2, 0LL);
      return 0LL;
    }
    if ( v12 == 3 )
      return 0LL;
  }
  v14 = v50;
  if ( v2 >= v6 && v2 <= 0xFFFFF6FFFFFFFFFFuLL && (v50 & 0x80u) != 0LL )
  {
    v15 = (_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (v4 & 1) != 0 )
    {
      if ( *v15 == 1 )
        return (unsigned int)-1073741819;
      if ( (v4 & 1) != 0 )
      {
        if ( *v15 != 3 )
        {
          if ( (v4 & 1) != 0 )
            goto LABEL_124;
          goto LABEL_23;
        }
        return (unsigned int)-1073741819;
      }
    }
LABEL_23:
    if ( (unsigned __int8)KeInvalidAccessAllowed(v4) == 1 )
      return (unsigned int)-1073741819;
LABEL_124:
    KeBugCheckEx(0x50u, v2, v3, v4, 8uLL);
  }
  if ( (v50 & 4) == 0 && v2 <= 0x7FFFFFFEFFFFLL )
    return (unsigned int)-1073741819;
  v16 = v3 & 2;
  if ( (v3 & 2) != 0 )
  {
    if ( (v50 & 0x200) != 0 )
    {
      v17 = MiCopyOnWrite(v2);
      if ( v17 < 0 )
        return MiSetFaultPacketDirectives(a1, (unsigned int)v17);
      v18 = 274;
      goto LABEL_51;
    }
    if ( (v50 & 0x800) == 0 )
      return (unsigned int)-1073741819;
    if ( v50 >= 0 && (Process[1].DirectoryTableBase & 0x1000000000LL) != 0 && v2 < 0xFFFF800000000000uLL )
    {
      if ( (BYTE1(KeGetCurrentThread()[1].Queue) & 0x10) == 0 )
      {
        v19 = -1073739997;
        if ( *(_BYTE *)(a1 + 80) != 1 )
        {
          LOBYTE(a2) = 17;
          v20 = MiReleaseFaultState(a1 + 56, a2, 0LL);
          MiForceCrashForInvalidAccess(Process);
          MiRelockFaultState(a1 + 56, v20);
          return 3221227299LL;
        }
        return v19;
      }
      v14 = v50;
    }
  }
  else if ( (v3 & 0x10) != 0 )
  {
    if ( v50 < 0 )
    {
      if ( (unsigned int)MiCanGrantExecute(Process, v2) != 1 )
        return (unsigned int)-1073741819;
      v21 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v50);
      if ( !(unsigned int)MiIsPfnInline((v21 >> 12) & 0xFFFFFFFFFLL) )
        return (unsigned int)-1073741819;
      v23 = v22 & 0x7FFFFFFFFFFFFFFFLL;
      if ( (MiFlags & 0x100) != 0 || (MiFlags & 0x200) != 0 )
        v23 |= 0x20uLL;
      MiWriteValidPteNewProtection(v7, v23);
      if ( (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
        KeFlushSingleTb(v2, 1LL, 0LL);
      v18 = 0;
      goto LABEL_51;
    }
    if ( !*(_BYTE *)(a1 + 80) )
    {
      MiCheckSystemNxFault(a1, v50, 5LL);
      v8 = 0xFFFFF6FB7DBED7F8uLL;
    }
  }
  if ( v16 )
  {
    v25 = v14;
    v26 = 0xFFFFF6FB7DBED000uLL;
    if ( (unsigned __int64)&v50 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&v50 <= v8
      && (unsigned int)MiPteHasShadow(&v50, v14, v3, v6)
      && (v14 & 1) != 0
      && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
    {
      v27 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
      if ( v27 )
      {
        v28 = *(_QWORD *)(v27 + 8 * (((unsigned __int64)&v50 >> 3) & 0x1FF));
        v25 = v14;
        if ( (v28 & 0x20) != 0 )
          v25 = v14 | 0x20;
        v14 = v50;
        if ( (v28 & 0x42) != 0 )
          v25 |= 0x42uLL;
      }
      else
      {
        v14 = v50;
        v25 = v50;
      }
    }
    v29 = 0xFFFFFFFFFLL;
    v30 = (v25 >> 12) & 0xFFFFFFFFFLL;
    if ( v30 <= qword_1403CB780 )
    {
      if ( !MmPhysicalMemoryBlock
        || (v29 = 0x20000000000000LL, (*(_QWORD *)(48 * v30 - 0x57FFFFFFFD8LL) & 0x20000000000000LL) != 0) )
      {
        v31 = 48 * v30 - 0x58000000000LL;
        v32 = *(_QWORD *)(v31 + 16);
        v33 = v31 + 16;
        if ( v31 + 16 >= v26
          && v33 <= v8
          && (unsigned int)MiPteHasShadow(v29, v30, v3, v32)
          && (v32 & 1) != 0
          && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
        {
          v34 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
          if ( v34 )
          {
            v35 = *(_QWORD *)(v34 + 8 * ((v33 >> 3) & 0x1FF));
            v36 = v32 | 0x20;
            if ( (v35 & 0x20) == 0 )
              v36 = v32;
            v32 = v36;
            if ( (v35 & 0x42) != 0 )
              v32 = v36 | 0x42;
          }
          v14 = v50;
        }
        v49 = v32;
        if ( (unsigned int)MiInvalidPteConforms(v32) && (v39 & 0x400) == 0 )
        {
          if ( (unsigned __int64)&v49 >= v41
            && (unsigned __int64)&v49 <= v40
            && (unsigned int)MiPteHasShadow(&v49, v37, v38, v39)
            && (v39 & 1) != 0
            && ((v39 & 0x20) == 0 || (v39 & 0x42) == 0) )
          {
            v42 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v42 )
            {
              v43 = *(_QWORD *)(v42 + 8 * (((unsigned __int64)&v49 >> 3) & 0x1FF));
              v44 = v39 | 0x20;
              if ( (v43 & 0x20) == 0 )
                v44 = v39;
              LOBYTE(v39) = v44;
              if ( (v43 & 0x42) != 0 )
                LOBYTE(v39) = v44 | 0x42;
            }
            v14 = v50;
          }
          if ( (v39 & 4) != 0 )
            MiLockPageAndSetDirty(v31, 1LL);
        }
        if ( (*(_QWORD *)(v31 + 40) & 0x200000000000000LL) != 0 && (*(_DWORD *)v33 & 0x400LL) != 0 )
          MiCheckAndUpdateIoAttribution(v31);
        v7 = v51;
      }
    }
  }
  v18 = 0;
  v45 = 0;
  v46 = 0;
  v47 = v14;
  if ( (v14 & 0x20) != 0 )
  {
    if ( (MiFlags & 0x100) == 0 )
      v45 = (MiFlags & 0x200) == 0;
  }
  else
  {
    v47 = v14 | 0x20;
    v46 = 1;
  }
  if ( (*(_QWORD *)(a1 + 8) & 2) == 0 || (v47 & 2) != 0 )
  {
    if ( !v46 )
    {
LABEL_118:
      if ( v45 && (MiFlags & 0x100) == 0 && (MiFlags & 0x200) == 0 )
      {
        v48 = 0;
        if ( *(_QWORD *)(a1 + 56) )
          v48 = MiTbFlushType();
        KeFlushSingleTb(v2, v48, 0LL);
      }
      goto LABEL_51;
    }
  }
  else
  {
    if ( (v47 & 0x42) == 0x40 )
      v45 = 1;
    v47 |= 0x62uLL;
  }
  if ( v14 == _InterlockedCompareExchange64((volatile signed __int64 *)v7, v47, v14) )
    goto LABEL_118;
LABEL_51:
  if ( (v4 & 1) != 0 )
  {
    v24 = (_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *v24 == 5 )
      MiValidVirtualizationFault(a1, v24, v7);
  }
  return v18;
}
