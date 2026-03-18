/*
 * XREFs of MmProtectMdlSystemAddress @ 0x140217160
 * Callers:
 *     <none>
 * Callees:
 *     MiWriteValidPteNewPage @ 0x140031C10 (MiWriteValidPteNewPage.c)
 *     MiMakeValidPte @ 0x140036F30 (MiMakeValidPte.c)
 *     MiMakeProtectionMask @ 0x14003D3F0 (MiMakeProtectionMask.c)
 *     MiFlushTbList @ 0x140056340 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x14009C1B0 (MiInsertTbFlushEntry.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400BD300 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400CD358 (MiMakeProtectionPfnCompatible.c)
 *     MiIsPfnInline @ 0x140106F50 (MiIsPfnInline.c)
 *     MiMappingHasIoTracker @ 0x14011880C (MiMappingHasIoTracker.c)
 *     MiLookupIoPageNode @ 0x140118BA8 (MiLookupIoPageNode.c)
 *     MiIoSpaceIsConstant @ 0x140119350 (MiIoSpaceIsConstant.c)
 *     MiMappingHasIoReferences @ 0x140119C0C (MiMappingHasIoReferences.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x14017C588 (MiWritePteShadow.c)
 *     MiMakeTransitionPte @ 0x14017C848 (MiMakeTransitionPte.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14022A1D0 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

NTSTATUS __stdcall MmProtectMdlSystemAddress(PMDL MemoryDescriptorList, ULONG NewProtect)
{
  unsigned __int64 MappedSystemVa; // rdi
  unsigned int ProtectionMask; // eax
  unsigned int v7; // r14d
  __int64 v8; // r11
  _KPROCESS *v9; // rdx
  unsigned __int64 *v10; // rbx
  __int64 ByteCount; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  int HasIoTracker; // r12d
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // r9
  ULONG_PTR BugCheckParameter4; // rdx
  __int64 v18; // rsi
  __int64 v19; // r11
  __int64 TransitionPte; // rax
  unsigned __int64 v21; // r10
  char v22; // dl
  int v23; // r11d
  __int64 v24; // r11
  int ProtectionPfnCompatible; // eax
  _QWORD *v26; // rax
  unsigned __int8 v27; // r10
  int v28; // ecx
  _QWORD *v29; // rax
  unsigned __int64 ValidPte; // rax
  int v31; // [rsp+34h] [rbp-CCh]
  ULONG_PTR v32; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v33; // [rsp+40h] [rbp-C0h]
  int v34; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v35; // [rsp+54h] [rbp-ACh]
  int v36; // [rsp+58h] [rbp-A8h]
  int v37; // [rsp+5Ch] [rbp-A4h]
  __int64 v38; // [rsp+60h] [rbp-A0h]
  __int64 v39; // [rsp+68h] [rbp-98h]

  if ( (MemoryDescriptorList->MdlFlags & 1) == 0 )
    return -1073741799;
  MappedSystemVa = (unsigned __int64)MemoryDescriptorList->MappedSystemVa;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(MappedSystemVa) )
    return -1073741637;
  ProtectionMask = MiMakeProtectionMask(NewProtect);
  v7 = ProtectionMask;
  if ( ProtectionMask == -1 )
    return -1073741755;
  LODWORD(v8) = 1;
  v9 = (_KPROCESS *)(ProtectionMask >> 3);
  if ( (unsigned int)((_DWORD)v9 - 1) <= 1 || (_DWORD)v9 == 3 && (ProtectionMask & 7) != 0 )
    return -1073741755;
  if ( (ProtectionMask & 5) == 5 )
    return -1073741755;
  v37 = 0;
  v10 = (unsigned __int64 *)(((MappedSystemVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  ByteCount = MemoryDescriptorList->ByteCount;
  v34 = 0;
  v35 = 0;
  v38 = 0LL;
  v12 = ByteCount + 4095 + (MappedSystemVa & 0xFFF);
  v39 = 0LL;
  v13 = MappedSystemVa & 0xFFFFFFFFFFFFF000uLL;
  HasIoTracker = 0;
  v33 = v12 >> 12;
  v15 = v13;
  v36 = 20;
  if ( v12 >> 12 )
  {
    v16 = 0xFFFFF6FB7DBED000uLL;
    do
    {
      BugCheckParameter4 = *v10;
      if ( (unsigned __int64)v10 >= v16 && (unsigned __int64)v10 <= 0xFFFFF6FB7DBED7F8uLL )
        BugCheckParameter4 = MiReadPteShadow();
      v32 = BugCheckParameter4;
      if ( ((unsigned __int8)BugCheckParameter4 & (unsigned __int8)v8) != 0 )
      {
        v31 = v8;
        v18 = MI_GET_PAGE_FRAME_FROM_PTE(&v32);
        MiInsertTbFlushEntry(&v34, v15, v19, 0);
        if ( v15 == v13 )
          HasIoTracker = MiMappingHasIoTracker(v13);
      }
      else
      {
        if ( (BugCheckParameter4 & 0x800) == 0 || ((BugCheckParameter4 >> 5) & 0x1F) != 0x18 )
          KeBugCheckEx(0x1Au, 0x1235uLL, (ULONG_PTR)MemoryDescriptorList, (ULONG_PTR)v10, BugCheckParameter4);
        v31 = 0;
        v18 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v32);
        if ( v15 == v13 && (v22 & 8) != 0 )
          HasIoTracker = v23;
      }
      if ( v7 == 24 )
      {
        TransitionPte = MiMakeTransitionPte(v18, 24);
        v32 = TransitionPte;
        if ( HasIoTracker == (_DWORD)v8 && v15 == v13 )
        {
          TransitionPte |= 8uLL;
          v32 = TransitionPte;
        }
        *v10 = TransitionPte;
        if ( (unsigned __int64)v10 < v16 || (unsigned __int64)v10 > v21 )
          goto LABEL_51;
        MiWritePteShadow();
        goto LABEL_50;
      }
      if ( MiIsPfnInline(v18) )
      {
        ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v7, 48 * v18 - 0x58000000000LL);
      }
      else
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
        v26 = MiIoSpaceIsConstant(v18, v24);
        __writecr8(v27);
        if ( v26 )
        {
          v28 = *((_DWORD *)v26 + 10);
        }
        else
        {
          v29 = MiLookupIoPageNode(v18);
          if ( !v29 )
            KeBugCheckEx(0x1Au, 0x61949uLL, v18, 1uLL, 0LL);
          v28 = *(unsigned __int16 *)(v29[6] + 2 * ((v18 & 0xFFFFFFFFFLL) - v29[5])) >> 14;
        }
        ProtectionPfnCompatible = v7 & 7;
        if ( v28 )
        {
          if ( v28 == 2 )
            ProtectionPfnCompatible |= 0x18u;
        }
        else
        {
          ProtectionPfnCompatible |= 8u;
        }
      }
      ValidPte = MiMakeValidPte((unsigned __int64)v10, v18, ProtectionPfnCompatible | 0xA0000000);
      v8 = 1LL;
      v32 = ValidPte;
      if ( v31 == 1 )
      {
        MiWriteValidPteNewPage(v10, ValidPte);
        v8 = 1LL;
      }
      else
      {
        *v10 = ValidPte;
        v16 = 0xFFFFF6FB7DBED000uLL;
        if ( (unsigned __int64)v10 < 0xFFFFF6FB7DBED000uLL || (unsigned __int64)v10 > 0xFFFFF6FB7DBED7F8uLL )
          goto LABEL_47;
        MiWritePteShadow();
      }
      v16 = 0xFFFFF6FB7DBED000uLL;
LABEL_47:
      if ( HasIoTracker != (_DWORD)v8 || v15 != v13 )
        goto LABEL_51;
      MiMappingHasIoReferences(v13);
      v8 = 1LL;
LABEL_50:
      v16 = 0xFFFFF6FB7DBED000uLL;
LABEL_51:
      v15 += 4096LL;
      ++v10;
      v33 -= v8;
    }
    while ( v33 );
  }
  MiFlushTbList((__int64)&v34, v9);
  return 0;
}
