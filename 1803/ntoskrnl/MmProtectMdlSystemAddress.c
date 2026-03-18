/*
 * XREFs of MmProtectMdlSystemAddress @ 0x140254B70
 * Callers:
 *     <none>
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1400151F0 (MiPteInShadowRange.c)
 *     MI_IS_PHYSICAL_ADDRESS @ 0x1400160B0 (MI_IS_PHYSICAL_ADDRESS.c)
 *     MiInsertTbFlushEntry @ 0x140026270 (MiInsertTbFlushEntry.c)
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1400627E0 (MiWritePteShadow.c)
 *     MiMappingHasIoTracker @ 0x140110DA0 (MiMappingHasIoTracker.c)
 *     MiFlushTbList @ 0x140116C90 (MiFlushTbList.c)
 *     MiMakeProtectionMask @ 0x140117260 (MiMakeProtectionMask.c)
 *     MiWriteValidPteNewProtection @ 0x140125DC0 (MiWriteValidPteNewProtection.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiMakeProtectionPfnCompatible @ 0x1401389C0 (MiMakeProtectionPfnCompatible.c)
 *     MiLookupIoPageNode @ 0x140139B50 (MiLookupIoPageNode.c)
 *     MiIoSpaceIsConstant @ 0x140139FA8 (MiIoSpaceIsConstant.c)
 *     MiMappingHasIoReferences @ 0x14013CCF0 (MiMappingHasIoReferences.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MiMakeTransitionPte @ 0x1401A669C (MiMakeTransitionPte.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x140264B7C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 */

NTSTATUS __stdcall MmProtectMdlSystemAddress(PMDL MemoryDescriptorList, ULONG NewProtect)
{
  unsigned __int64 MappedSystemVa; // rdi
  unsigned int ProtectionMask; // eax
  __int64 v7; // r8
  unsigned int v8; // r14d
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 ByteCount; // r10
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  _QWORD *v14; // rbx
  int HasIoTracker; // r12d
  unsigned __int64 v16; // r15
  ULONG_PTR BugCheckParameter4; // rax
  __int64 v18; // rsi
  __int64 TransitionPte; // rax
  __int64 v20; // rdx
  int v21; // r8d
  __int64 v22; // rcx
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // rsi
  char v25; // r9
  __int64 v26; // r8
  unsigned __int64 v27; // r11
  int ProtectionPfnCompatible; // eax
  __int64 v29; // r9
  _QWORD *v30; // rax
  int v31; // r11d
  unsigned __int8 v32; // r10
  int v33; // ecx
  _QWORD *v34; // rax
  unsigned __int64 ValidPte; // rax
  __int64 v36; // rcx
  unsigned __int64 v37; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v38; // [rsp+40h] [rbp-C0h]
  int v39; // [rsp+48h] [rbp-B8h]
  _QWORD v40[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v41; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v42; // [rsp+64h] [rbp-9Ch]
  int v43; // [rsp+68h] [rbp-98h]
  int v44; // [rsp+6Ch] [rbp-94h]
  __int64 v45; // [rsp+70h] [rbp-90h]
  __int64 v46; // [rsp+78h] [rbp-88h]

  if ( (MemoryDescriptorList->MdlFlags & 1) == 0 )
    return -1073741799;
  MappedSystemVa = (unsigned __int64)MemoryDescriptorList->MappedSystemVa;
  if ( (unsigned int)MI_IS_PHYSICAL_ADDRESS(MappedSystemVa) )
    return -1073741637;
  ProtectionMask = MiMakeProtectionMask(NewProtect);
  v8 = ProtectionMask;
  if ( ProtectionMask == -1 )
    return -1073741755;
  v9 = ProtectionMask >> 3;
  if ( (unsigned int)(v9 - 1) <= 1 || (_DWORD)v9 == 3 && (ProtectionMask & 7) != 0 )
    return -1073741755;
  if ( (ProtectionMask & 5) == 5 )
    return -1073741755;
  v10 = (MappedSystemVa >> 9) & 0x7FFFFFFFF8LL;
  ByteCount = MemoryDescriptorList->ByteCount;
  v44 = 0;
  v41 = 0;
  v12 = MappedSystemVa & 0xFFF;
  v42 = 0;
  v45 = 0LL;
  v13 = MappedSystemVa & 0xFFFFFFFFFFFFF000uLL;
  v46 = 0LL;
  v14 = (_QWORD *)(v10 - 0x98000000000LL);
  HasIoTracker = 0;
  v38 = (v12 + ByteCount + 4095) >> 12;
  v43 = 20;
  v37 = v13;
  if ( v38 )
  {
    v16 = v13;
    do
    {
      BugCheckParameter4 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v14);
      v40[0] = BugCheckParameter4;
      if ( (BugCheckParameter4 & 1) != 0 )
      {
        v39 = 1;
        v18 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v40) >> 12) & 0xFFFFFFFFFLL;
        MiInsertTbFlushEntry((__int64)&v41, v37, 1LL, 0);
        if ( v16 == v13 )
          HasIoTracker = MiMappingHasIoTracker(v13);
      }
      else
      {
        if ( (BugCheckParameter4 & 0x800) == 0 || ((BugCheckParameter4 >> 5) & 0x1F) != 0x18 )
          KeBugCheckEx(0x1Au, 0x1235uLL, (ULONG_PTR)MemoryDescriptorList, (ULONG_PTR)v14, BugCheckParameter4);
        v39 = 0;
        v18 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(v40);
        if ( v16 == v13 && (v25 & 8) != 0 )
          HasIoTracker = 1;
      }
      if ( v8 == 24 )
      {
        TransitionPte = MiMakeTransitionPte(v18, 24);
        v40[0] = TransitionPte;
        v20 = TransitionPte;
        if ( HasIoTracker == v21 && v16 == v13 )
        {
          v20 = TransitionPte | 8;
          v40[0] = TransitionPte | 8;
        }
        *v14 = v20;
        if ( MiPteInShadowRange((unsigned __int64)v14) )
          MiWritePteShadow(v22, v9, v7);
        v24 = v37;
      }
      else
      {
        if ( MiIsPfnInline(v18) )
        {
          ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(v8, 48 * v18 - 0x58000000000LL);
        }
        else
        {
          KeGetCurrentIrql();
          __writecr8(v27);
          v30 = MiIoSpaceIsConstant(v18, v26);
          __writecr8(v32);
          if ( v30 )
          {
            v33 = *((_DWORD *)v30 + 10);
          }
          else
          {
            v34 = MiLookupIoPageNode(v18);
            if ( !v34 )
              KeBugCheckEx(0x1Au, 0x61949uLL, v18, 1uLL, 0LL);
            v31 = 2;
            v33 = *(unsigned __int16 *)(v34[6] + 2 * ((v18 & 0xFFFFFFFFFLL) - v34[5])) >> 14;
          }
          ProtectionPfnCompatible = v8 & 7;
          if ( v33 )
          {
            if ( v33 == v31 )
              ProtectionPfnCompatible |= 0x18u;
          }
          else
          {
            ProtectionPfnCompatible |= 8u;
          }
        }
        ValidPte = MiMakeValidPte((unsigned __int64)v14, v18, ProtectionPfnCompatible | 0xA0000000, v29);
        v40[0] = ValidPte;
        if ( v39 == 1 )
        {
          MiWriteValidPteNewProtection((unsigned __int64)v14, ValidPte);
        }
        else
        {
          *v14 = ValidPte;
          if ( MiPteInShadowRange((unsigned __int64)v14) )
            MiWritePteShadow(v36, v9, v7);
        }
        v24 = v37;
        if ( HasIoTracker == 1 && v37 == v13 )
          MiMappingHasIoReferences(v13);
        v23 = v38;
      }
      ++v14;
      v37 = v24 + 4096;
      v16 = v24 + 4096;
      v38 = v23 - 1;
    }
    while ( v23 != 1 );
  }
  MiFlushTbList((__int64)&v41, v9, v7);
  return 0;
}
