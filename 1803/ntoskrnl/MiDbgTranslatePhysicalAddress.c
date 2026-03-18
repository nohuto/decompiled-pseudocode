/*
 * XREFs of MiDbgTranslatePhysicalAddress @ 0x140260E34
 * Callers:
 *     MiDbgCopyMemory @ 0x1402607B8 (MiDbgCopyMemory.c)
 * Callees:
 *     MiMakeValidPte @ 0x14002EB00 (MiMakeValidPte.c)
 *     KeFlushSingleTb @ 0x14003B184 (KeFlushSingleTb.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140079C30 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1400E4380 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiLockPageAtDpcInline @ 0x140124DA0 (MiLockPageAtDpcInline.c)
 *     MiIsPfnInline @ 0x140136FF0 (MiIsPfnInline.c)
 *     MiMakeProtectionPfnCompatible @ 0x1401389C0 (MiMakeProtectionPfnCompatible.c)
 *     KeFlushSingleCurrentTb @ 0x14014F598 (KeFlushSingleCurrentTb.c)
 *     MiCheckPhysicalAddressRange @ 0x1402604F4 (MiCheckPhysicalAddressRange.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x140261178 (MiDbgUnTranslatePhysicalAddress.c)
 */

__int64 __fastcall MiDbgTranslatePhysicalAddress(unsigned __int64 a1, char a2, __int64 a3)
{
  __int64 v3; // r12
  int v4; // esi
  __int16 v7; // bx
  unsigned __int64 v8; // rcx
  __int64 v9; // r12
  unsigned __int64 v10; // r13
  int ProtectionPfnCompatible; // ebp
  unsigned __int8 CurrentIrql; // al
  int v13; // edx
  int v14; // r8d
  __int64 v15; // r14
  __int64 v16; // r9
  _QWORD *v17; // rdx
  int v18; // ecx
  unsigned __int64 v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  unsigned __int64 v22; // r8
  char v23; // di
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax
  volatile signed __int64 *v28; // rsi
  unsigned __int64 ValidPte; // rax

  v3 = qword_1403CBF88;
  v4 = 0;
  v7 = a1;
  if ( !qword_1403CBF88 || !MiCheckPhysicalAddressRange(a1, 1LL) )
    return 0LL;
  *(_DWORD *)a3 = 0;
  v9 = v3 << 25 >> 16;
  v10 = v8 >> 12;
  ProtectionPfnCompatible = (a2 & 1) != 0 ? 4 : 1;
  if ( (a2 & 4) != 0 )
  {
    CurrentIrql = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
  }
  *(_BYTE *)(a3 + 4) = CurrentIrql;
  if ( MiIsPfnInline(v8 >> 12) )
  {
    v15 = 48 * v10 - 0x58000000000LL;
    if ( v13 )
    {
      *(_DWORD *)a3 = 1;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
      {
        if ( (a2 & 0x41) != 0 || (KiBugCheckActive & 3) == 0 )
          return 0LL;
        ++dword_1403CBF90;
        *(_DWORD *)a3 = 4;
      }
    }
    else
    {
      *(_DWORD *)a3 = v14;
      MiLockPageAtDpcInline(48 * v10 - 0x58000000000LL);
    }
    *(_QWORD *)(a3 + 8) = v15;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, 48 * v10 - 0x58000000000LL);
    if ( (*(_BYTE *)(v15 + 34) & 0xC0) == 0xC0 )
      ProtectionPfnCompatible |= 8u;
    goto LABEL_60;
  }
  if ( v13 )
  {
    *(_DWORD *)a3 = 8;
    if ( !(unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel(&dword_1403CC340) )
      return 0LL;
  }
  else
  {
    *(_DWORD *)a3 = 16;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_1403CC340);
  }
  v17 = (_QWORD *)qword_1403CC350;
  v18 = 3;
  while ( v17 )
  {
    v19 = v17[5];
    if ( v10 < v19 )
    {
      v17 = (_QWORD *)*v17;
    }
    else
    {
      if ( v10 < v19 + 512 )
        break;
      v17 = (_QWORD *)v17[1];
    }
  }
  v16 = 0xFFFFFFFFFLL;
  if ( !v17 )
    goto LABEL_29;
  v18 = *(unsigned __int16 *)(v17[6] + 2 * ((v10 & 0xFFFFFFFFFLL) - v17[5])) >> 14;
  v20 = 0LL;
  if ( v18 != 3 )
    v20 = v17;
  if ( !v20 )
  {
LABEL_29:
    v21 = (_QWORD *)qword_1403CC358;
    while ( v21 )
    {
      v22 = v21[5];
      if ( v10 < v22 )
      {
        v21 = (_QWORD *)*v21;
      }
      else
      {
        if ( v10 < v22 + 512 )
        {
          v18 = *(unsigned __int16 *)(v21[6] + 2 * ((v10 & 0xFFFFFFFFFLL) - v22)) >> 14;
          break;
        }
        v21 = (_QWORD *)v21[1];
      }
    }
  }
  if ( v18 == 3 )
  {
    if ( (a2 & 4) == 0 )
      v4 = 3;
    v18 = v4;
    if ( (a2 & 0x28) == 0 )
      goto LABEL_43;
    v23 = a2 & 0xD7;
  }
  else
  {
    v23 = a2 & 0xC7;
    if ( v18 )
    {
      if ( v18 == 2 )
        a2 = v23 | 0x20;
      else
        a2 = v23 | 8;
      goto LABEL_43;
    }
  }
  a2 = v23 | 0x10;
LABEL_43:
  if ( (a2 & 8) == 0 )
  {
    if ( (a2 & 0x10) != 0 )
    {
      v24 = __readcr4();
      if ( (v24 & 0x20080) != 0 )
      {
        __writecr4(v24 ^ 0x80);
        __writecr4(v24);
      }
      else
      {
        v25 = __readcr3();
        __writecr3(v25);
      }
      ProtectionPfnCompatible |= 8u;
    }
    else
    {
      if ( (a2 & 0x20) == 0 )
      {
LABEL_67:
        MiDbgUnTranslatePhysicalAddress(a3);
        return 0LL;
      }
      v26 = __readcr4();
      if ( (v26 & 0x20080) != 0 )
      {
        __writecr4(v26 ^ 0x80);
        __writecr4(v26);
      }
      else
      {
        v27 = __readcr3();
        __writecr3(v27);
      }
      ProtectionPfnCompatible |= 0x18u;
    }
  }
  if ( v18 == 3 )
    ++dword_1403CBF90;
LABEL_60:
  v28 = (volatile signed __int64 *)qword_1403CBF88;
  ValidPte = MiMakeValidPte(qword_1403CBF88, v10, ProtectionPfnCompatible | 0xA0000000, v16);
  if ( (a2 & 0x41) != 0 )
    byte_1403CBF80 = 1;
  if ( _InterlockedCompareExchange64(v28, ValidPte, 0LL) )
    goto LABEL_67;
  *(_DWORD *)a3 |= 0x20u;
  if ( (*(_DWORD *)a3 & 0x12) != 0 )
    KeFlushSingleTb(v9, 0, 1u);
  else
    KeFlushSingleCurrentTb(v9, 0);
  return v9 + (v7 & 0xFFF);
}
