/*
 * XREFs of MiDbgCopyMemory @ 0x1402276C0
 * Callers:
 *     MmDbgCopyMemory @ 0x140228280 (MmDbgCopyMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140035920 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400578A0 (MiUnlockWorkingSetExclusive.c)
 *     MiIsAddressValid @ 0x140066790 (MiIsAddressValid.c)
 *     MmGetPhysicalAddress @ 0x1400BBFC0 (MmGetPhysicalAddress.c)
 *     MiGetPhysicalAddress @ 0x1400BBFF0 (MiGetPhysicalAddress.c)
 *     MiGetAnyMultiplexedVm @ 0x1400C0094 (MiGetAnyMultiplexedVm.c)
 *     MiAcquireProperVm @ 0x1400D5208 (MiAcquireProperVm.c)
 *     MiCopyFromUntrustedMemory @ 0x140227460 (MiCopyFromUntrustedMemory.c)
 *     MiCopyToUntrustedMemory @ 0x140227588 (MiCopyToUntrustedMemory.c)
 *     MiDbgReleaseAddress @ 0x140227BA8 (MiDbgReleaseAddress.c)
 *     MiDbgTranslatePhysicalAddress @ 0x140227C44 (MiDbgTranslatePhysicalAddress.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x140227F74 (MiDbgUnTranslatePhysicalAddress.c)
 *     MiDbgWriteCheck @ 0x140228014 (MiDbgWriteCheck.c)
 *     ProbeForWrite @ 0x1404A3950 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiDbgCopyMemory(char *BaseAddress, _BYTE *a2, ULONG a3, unsigned int a4, unsigned int a5)
{
  char *v6; // r14
  unsigned int v8; // esi
  int v9; // r12d
  int v10; // ebx
  unsigned int v11; // edi
  char *v12; // rcx
  char *v13; // rdi
  LONG *SharedVm; // rdi
  KIRQL v15; // al
  __int64 v16; // rdx
  unsigned int v17; // edi
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  unsigned int v19; // eax
  unsigned int v20; // [rsp+20h] [rbp-78h] BYREF
  char *AnyMultiplexedVm; // [rsp+28h] [rbp-70h]
  __int64 v22; // [rsp+30h] [rbp-68h] BYREF
  char v23[8]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v24[88]; // [rsp+40h] [rbp-58h] BYREF
  KIRQL v26; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v27; // [rsp+B8h] [rbp+20h]

  v27 = a4;
  v6 = BaseAddress;
  if ( !a3 )
    return 3221225713LL;
  v8 = a5;
  v9 = a5 & 0x40;
  if ( (a5 & 0x40) != 0 && ((a5 & 2) != 0 || (a5 & 1) == 0 || (a5 & 4) == 0) )
    return 3221225714LL;
  AnyMultiplexedVm = 0LL;
  v26 = 17;
  v10 = 0;
  v11 = 1;
  if ( (a5 & 2) != 0 )
  {
    if ( (a5 & 4) != 0 || KeGetCurrentIrql() <= 1u )
    {
      v6 = (char *)MiDbgTranslatePhysicalAddress(BaseAddress, a5, v24);
      if ( !v6 )
        return 3221225473LL;
LABEL_41:
      if ( (v8 & 1) != 0 )
      {
        v6 = (char *)MiDbgWriteCheck(v6, v23, v11);
        if ( !v6 )
        {
          v17 = -1073741585;
          goto LABEL_48;
        }
        v10 = 1;
        goto LABEL_45;
      }
      goto LABEL_46;
    }
    return 3221225714LL;
  }
  if ( (a5 & 4) != 0 )
    goto LABEL_36;
  if ( KeGetCurrentIrql() > 1u )
    return 3221225714LL;
  v20 = 0;
  if ( (unsigned __int64)BaseAddress < 0xFFFF800000000000uLL )
  {
    if ( (a5 & 1) != 0 )
    {
      ProbeForWrite(BaseAddress, a3, a3);
    }
    else
    {
      if ( ((a3 - 1) & (unsigned int)BaseAddress) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = &BaseAddress[a3];
      if ( (unsigned __int64)&v6[a3] > 0x7FFFFFFF0000LL || v12 < v6 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( (v8 & 1) != 0 )
    {
LABEL_45:
      v19 = MiCopyToUntrustedMemory(v6, a2, a3, v27);
LABEL_47:
      v17 = v19;
      goto LABEL_48;
    }
LABEL_46:
    v19 = MiCopyFromUntrustedMemory(a2, v6, a3, v27);
    goto LABEL_47;
  }
  v13 = (char *)MiAcquireProperVm((unsigned __int64)BaseAddress, &v26);
  AnyMultiplexedVm = v13;
  if ( (unsigned __int64)v13 <= 1 )
  {
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
    v15 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v26 = v15;
    v13 = AnyMultiplexedVm;
  }
  if ( v13 != MiGetAnyMultiplexedVm(1) )
  {
    v11 = v20;
LABEL_36:
    if ( !MiIsAddressValid((__int64)v6) )
    {
      v17 = -1073741585;
      goto LABEL_52;
    }
    if ( !v9 )
      goto LABEL_41;
    PhysicalAddress = MmGetPhysicalAddress(v6);
    v6 = (char *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))MiDbgTranslatePhysicalAddress)(
                   (PHYSICAL_ADDRESS)PhysicalAddress.QuadPart,
                   v8,
                   v24);
    if ( v6 )
    {
      v8 |= 2u;
      goto LABEL_41;
    }
    goto LABEL_31;
  }
  if ( (unsigned int)MiGetPhysicalAddress((unsigned __int64)v6, &v22, &v20) )
  {
    v6 = (char *)MiDbgTranslatePhysicalAddress(v22, v8, v24);
    if ( v6 )
    {
      v8 |= 2u;
      if ( (v8 & 1) != 0 )
      {
        if ( !v20 )
        {
          v17 = -1073741819;
LABEL_48:
          if ( v10 )
            MiDbgReleaseAddress(v6, v23, v8);
          if ( (v8 & 2) != 0 )
            MiDbgUnTranslatePhysicalAddress(v24);
          goto LABEL_52;
        }
        goto LABEL_45;
      }
      goto LABEL_46;
    }
LABEL_31:
    v17 = -1073741823;
    goto LABEL_52;
  }
  v17 = -1073741819;
LABEL_52:
  if ( AnyMultiplexedVm )
  {
    LOBYTE(v16) = v26;
    MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v16);
  }
  return v17;
}
