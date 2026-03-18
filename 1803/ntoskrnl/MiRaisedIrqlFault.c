/*
 * XREFs of MiRaisedIrqlFault @ 0x1400B5050
 * Callers:
 *     MmAccessFault @ 0x14001B320 (MmAccessFault.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
 *     MiNoFaultFound @ 0x1400B53AC (MiNoFaultFound.c)
 *     MiCheckSystemNxFault @ 0x1400B545C (MiCheckSystemNxFault.c)
 *     KeInvalidAccessAllowed @ 0x1400B54F4 (KeInvalidAccessAllowed.c)
 *     MiTransientCombineAddress @ 0x140144B48 (MiTransientCombineAddress.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     MiGenerateAccessViolation @ 0x140261A7C (MiGenerateAccessViolation.c)
 */

__int64 __fastcall MiRaisedIrqlFault(ULONG_PTR *a1)
{
  _DWORD *MmInternal; // rcx
  ULONG_PTR v3; // rdx
  _BYTE *v5; // rax
  unsigned __int64 *i; // r11
  ULONG_PTR v7; // rax
  __int64 v8; // r9
  ULONG_PTR v9; // r10
  __int64 v10; // r11
  unsigned __int64 v11; // rsi
  ULONG_PTR v12; // rax
  ULONG_PTR v13; // r10
  unsigned __int64 v14; // rax
  int v15; // r9d
  ULONG_PTR v16; // rdx
  ULONG_PTR v17; // [rsp+48h] [rbp+10h] BYREF

  MmInternal = KeGetCurrentPrcb()->MmInternal;
  if ( MmInternal && MmInternal[3120] )
  {
    v3 = *a1;
    if ( KeGetCurrentIrql() != 2 )
      KeBugCheckEx(0x50u, v3, a1[1], KeGetCurrentIrql(), 0xAuLL);
    if ( v3 < 0xFFFFF6FB40000000uLL || v3 > 0xFFFFF6FB7FFFFFFFuLL )
      KeBugCheckEx(0x50u, v3, a1[1], a1[2], 0xBuLL);
    return 3221225477LL;
  }
  v5 = (_BYTE *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (a1[2] & 1) != 0 && *v5 == 1 )
    return 3221225477LL;
  if ( (a1[2] & 1) == 0 )
  {
    if ( (unsigned __int8)KeInvalidAccessAllowed(a1[2]) != 1 )
      goto LABEL_14;
    return 3221225477LL;
  }
  if ( *v5 == 3 )
    return 3221225477LL;
LABEL_14:
  if ( (unsigned int)MiTransientCombineAddress(KeGetCurrentThread(), *a1) == 1 )
    return 3221225477LL;
  if ( *a1 < 0xFFFF800000000000uLL )
    return 3489660934LL;
  for ( i = a1 + 6; ; i = (unsigned __int64 *)(v10 - 8) )
  {
    v7 = MI_READ_PTE_LOCK_FREE(*i);
    if ( (v7 & 1) == 0 )
      return (unsigned int)MiGenerateAccessViolation(a1) != 0 ? -1073741819 : -805306362;
    if ( (v7 & 0x80u) != 0LL )
    {
      if ( (a1[1] & 2) != 0 && (v7 & 0x800) == 0 )
        KeBugCheckEx(0xBEu, v9, v7, a1[2], 0xFuLL);
      MiCheckSystemNxFault(a1, v7, 3LL);
      v16 = *a1;
      if ( *a1 >= 0xFFFFF68000000000uLL && v16 <= 0xFFFFF6FFFFFFFFFFuLL )
        KeBugCheckEx(0x50u, v16, a1[1], a1[2], 8uLL);
      return 0LL;
    }
    if ( !v8 )
      break;
  }
  v11 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = MI_READ_PTE_LOCK_FREE(v11);
  v17 = v12;
  if ( (v12 & 1) != 0 )
  {
    if ( (a1[1] & 2) != 0 )
    {
      if ( (v12 & 0x200) != 0 )
        return 3489660934LL;
      if ( (v12 & 0x800) == 0 )
        KeBugCheckEx(0xBEu, v13, v12, a1[2], 0xAuLL);
    }
    MiCheckSystemNxFault(a1, v12, 0LL);
    v14 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v17);
    if ( *(_WORD *)(48 * ((v14 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 32) > 1u
      || (*(_BYTE *)(48 * ((v14 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL) & 1) == 0
      || (*(_BYTE *)(48 * ((v14 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 35) & 8) != 0 )
    {
      MiNoFaultFound((_DWORD)a1, v11, *a1, v15, 1);
      return 0LL;
    }
  }
  return (unsigned int)MiGenerateAccessViolation(a1) != 0 ? -1073741819 : -805306362;
}
