/*
 * XREFs of MmProtectMdlSystemAddress @ 0x14020FE00
 * Callers:
 *     <none>
 * Callees:
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400A3C70 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400A5B28 (MiMakeProtectionPfnCompatible.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     MiMakeProtectionMask @ 0x1400CE440 (MiMakeProtectionMask.c)
 *     MiFlushTbList @ 0x1400D64A0 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400FA110 (MiInsertTbFlushEntry.c)
 *     MiWriteValidPteNewProtection @ 0x140100C50 (MiWriteValidPteNewProtection.c)
 *     MiMappingHasIoTracker @ 0x140123A48 (MiMappingHasIoTracker.c)
 *     MiLookupIoPageNode @ 0x140124B28 (MiLookupIoPageNode.c)
 *     MiIoSpaceIsConstant @ 0x1401253AC (MiIoSpaceIsConstant.c)
 *     MiMappingHasIoReferences @ 0x1401253CC (MiMappingHasIoReferences.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x14017CA24 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14017CCC8 (MiWritePteShadow.c)
 *     MiMakeTransitionPte @ 0x14017CFB4 (MiMakeTransitionPte.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x14021EE14 (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

NTSTATUS __stdcall MmProtectMdlSystemAddress(PMDL MemoryDescriptorList, ULONG NewProtect)
{
  unsigned __int64 MappedSystemVa; // rdi
  unsigned int v5; // r11d
  unsigned int ProtectionMask; // eax
  unsigned int v7; // r14d
  _KPROCESS *v8; // rdx
  __int64 v9; // rbx
  __int64 ByteCount; // r10
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  _QWORD *v13; // rbx
  unsigned __int64 v14; // r10
  int HasIoTracker; // r12d
  bool v16; // zf
  unsigned __int64 v17; // r15
  ULONG_PTR BugCheckParameter4; // rax
  int v19; // r11d
  __int64 v20; // rsi
  __int64 v21; // r11
  __int64 TransitionPte; // rax
  __int64 v23; // rdx
  int v24; // r11d
  unsigned __int64 v25; // r10
  __int64 v26; // r11
  char v27; // r9
  int v28; // r11d
  __int64 v29; // r11
  int ProtectionPfnCompatible; // eax
  _QWORD *v31; // rax
  int v32; // r10d
  unsigned __int8 v33; // r9
  int v34; // ecx
  _QWORD *v35; // rax
  unsigned __int64 ValidPte; // rax
  unsigned __int64 v37; // [rsp+38h] [rbp-C8h]
  int v38; // [rsp+40h] [rbp-C0h]
  __int64 v39; // [rsp+48h] [rbp-B8h] BYREF
  int v40; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v41; // [rsp+54h] [rbp-ACh]
  int v42; // [rsp+58h] [rbp-A8h]
  int v43; // [rsp+5Ch] [rbp-A4h]
  __int64 v44; // [rsp+60h] [rbp-A0h]
  __int64 v45; // [rsp+68h] [rbp-98h]

  if ( (MemoryDescriptorList->MdlFlags & 1) == 0 )
    return -1073741799;
  MappedSystemVa = (unsigned __int64)MemoryDescriptorList->MappedSystemVa;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(MappedSystemVa) )
    return -1073741637;
  ProtectionMask = MiMakeProtectionMask(v5);
  v7 = ProtectionMask;
  if ( ProtectionMask == -1 )
    return -1073741755;
  v8 = (_KPROCESS *)(ProtectionMask >> 3);
  if ( (unsigned int)((_DWORD)v8 - 1) <= 1 || (_DWORD)v8 == 3 && (ProtectionMask & 7) != 0 )
    return -1073741755;
  if ( (ProtectionMask & 5) == 5 )
    return -1073741755;
  v9 = (MappedSystemVa >> 9) & 0x7FFFFFFFF8LL;
  ByteCount = MemoryDescriptorList->ByteCount;
  v43 = 0;
  v40 = 0;
  v11 = MappedSystemVa & 0xFFF;
  v41 = 0;
  v44 = 0LL;
  v12 = MappedSystemVa & 0xFFFFFFFFFFFFF000uLL;
  v45 = 0LL;
  v13 = (_QWORD *)(v9 - 0x98000000000LL);
  v14 = (v11 + ByteCount + 4095) >> 12;
  HasIoTracker = 0;
  v16 = v14 == 0;
  v42 = 20;
  v17 = v12;
  while ( 1 )
  {
    v37 = v14;
    if ( v16 )
      break;
    BugCheckParameter4 = MI_READ_PTE_LOCK_FREE(v13);
    v39 = BugCheckParameter4;
    if ( ((unsigned __int8)BugCheckParameter4 & (unsigned __int8)v19) != 0 )
    {
      v38 = v19;
      v20 = MI_GET_PAGE_FRAME_FROM_PTE(&v39);
      MiInsertTbFlushEntry((__int64)&v40, v17, v21, 0);
      if ( v17 == v12 )
        HasIoTracker = MiMappingHasIoTracker(v12);
    }
    else
    {
      if ( (BugCheckParameter4 & 0x800) == 0 || ((BugCheckParameter4 >> 5) & 0x1F) != 0x18 )
        KeBugCheckEx(0x1Au, 0x1235uLL, (ULONG_PTR)MemoryDescriptorList, (ULONG_PTR)v13, BugCheckParameter4);
      v38 = 0;
      v20 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v39);
      if ( v17 == v12 && (v27 & 8) != 0 )
        HasIoTracker = v28;
    }
    if ( v7 == 24 )
    {
      TransitionPte = MiMakeTransitionPte(v20, 24);
      v39 = TransitionPte;
      v23 = TransitionPte;
      if ( HasIoTracker == v24 && v17 == v12 )
      {
        v23 = TransitionPte | 8;
        v39 = TransitionPte | 8;
      }
      *v13 = v23;
      if ( MiPteInShadowRange((unsigned __int64)v13) )
        MiWritePteShadow();
    }
    else
    {
      if ( MiIsPfnInline(v20) )
      {
        ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v7, 48 * v20 - 0x58000000000LL);
      }
      else
      {
        KeGetCurrentIrql();
        __writecr8(2uLL);
        v31 = MiIoSpaceIsConstant(v20, v29);
        __writecr8(v33);
        if ( v31 )
        {
          v34 = *((_DWORD *)v31 + 10);
        }
        else
        {
          v35 = MiLookupIoPageNode(v20);
          if ( !v35 )
            KeBugCheckEx(0x1Au, 0x61949uLL, v20, 1uLL, 0LL);
          v32 = 2;
          v34 = *(unsigned __int16 *)(v35[6] + 2 * ((v20 & 0xFFFFFFFFFLL) - v35[5])) >> 14;
        }
        ProtectionPfnCompatible = v7 & 7;
        if ( v34 )
        {
          if ( v34 == v32 )
            ProtectionPfnCompatible |= 0x18u;
        }
        else
        {
          ProtectionPfnCompatible |= 8u;
        }
      }
      ValidPte = MiMakeValidPte((unsigned __int64)v13, v20, ProtectionPfnCompatible | 0xA0000000);
      v39 = ValidPte;
      if ( v38 == 1 )
      {
        MiWriteValidPteNewProtection((__int64)v13);
      }
      else
      {
        *v13 = ValidPte;
        if ( MiPteInShadowRange((unsigned __int64)v13) )
          MiWritePteShadow();
      }
      if ( HasIoTracker == (_DWORD)v26 && v17 == v12 )
      {
        MiMappingHasIoReferences(v12);
        v26 = 1LL;
      }
      v25 = v37;
    }
    v17 += 4096LL;
    ++v13;
    v14 = v25 - v26;
    v16 = v14 == 0;
  }
  MiFlushTbList((__int64)&v40, v8);
  return 0;
}
