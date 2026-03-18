/*
 * XREFs of MiDbgTranslatePhysicalAddress @ 0x14021B390
 * Callers:
 *     MiDbgCopyMemory @ 0x14021AE1C (MiDbgCopyMemory.c)
 * Callees:
 *     KxTryToAcquireQueuedSpinLock @ 0x14007651C (KxTryToAcquireQueuedSpinLock.c)
 *     MiLockPageAtDpcInline @ 0x14009C240 (MiLockPageAtDpcInline.c)
 *     MiMakeValidPte @ 0x1400A12B0 (MiMakeValidPte.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400A5B28 (MiMakeProtectionPfnCompatible.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     MiIsPfnInline @ 0x1400B54F0 (MiIsPfnInline.c)
 *     KeFlushSingleTb @ 0x14010DE88 (KeFlushSingleTb.c)
 *     KeFlushSingleCurrentTb @ 0x140136CE4 (KeFlushSingleCurrentTb.c)
 *     KeFlushCurrentTbOnly @ 0x14017BB28 (KeFlushCurrentTbOnly.c)
 *     MiCheckPhysicalAddressRange @ 0x14021AB54 (MiCheckPhysicalAddressRange.c)
 *     MiDbgUnTranslatePhysicalAddress @ 0x14021B6BC (MiDbgUnTranslatePhysicalAddress.c)
 */

unsigned __int64 __fastcall MiDbgTranslatePhysicalAddress(unsigned __int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 v3; // r12
  int v4; // esi
  __int16 v7; // bx
  unsigned __int64 v8; // rcx
  int v9; // r9d
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // r13
  int ProtectionPfnCompatible; // ebp
  unsigned __int8 CurrentIrql; // al
  int v14; // edx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // r15
  _QWORD *v18; // rcx
  _QWORD *v19; // rdx
  int v20; // r15d
  unsigned __int64 v21; // rax
  _QWORD *v22; // rdx
  unsigned __int64 v23; // rax
  char v24; // di
  volatile signed __int64 *v25; // rsi
  unsigned __int64 ValidPte; // rax

  v3 = qword_14036CAC8;
  v4 = 0;
  v7 = a1;
  if ( !qword_14036CAC8 || !MiCheckPhysicalAddressRange(a1, 1LL) )
    return 0LL;
  *(_DWORD *)a3 = 0;
  v10 = v3 << 25 >> 16;
  v11 = v8 >> 12;
  ProtectionPfnCompatible = v9 + (((unsigned __int8)v9 & a2) != 0 ? 3 : 0);
  if ( (a2 & 4) != 0 )
  {
    *(_BYTE *)(a3 + 4) = 17;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    *(_BYTE *)(a3 + 4) = CurrentIrql;
  }
  if ( MiIsPfnInline(v8 >> 12) )
  {
    v17 = 48 * v11 - 0x58000000000LL;
    if ( v14 )
    {
      *(_DWORD *)a3 = v16;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
      {
        if ( (a2 & 0x41) != 0 || (KiBugCheckActive & 3) == 0 )
          return 0LL;
        dword_14036CAD0 += v16;
        *(_DWORD *)a3 = 4;
      }
    }
    else
    {
      *(_DWORD *)a3 = v15;
      MiLockPageAtDpcInline(48 * v11 - 0x58000000000LL);
    }
    *(_QWORD *)(a3 + 8) = v17;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(ProtectionPfnCompatible, 48 * v11 - 0x58000000000LL);
    if ( (*(_BYTE *)(v17 + 34) & 0xC0) == 0xC0 )
      ProtectionPfnCompatible |= 8u;
    goto LABEL_54;
  }
  v18 = (_QWORD *)(a3 + 16);
  if ( v14 )
  {
    *(_DWORD *)a3 = 8;
    *(_QWORD *)(a3 + 24) = &qword_14036CE00;
    *v18 = 0LL;
    if ( !(unsigned int)KxTryToAcquireQueuedSpinLock((signed __int64)v18, &qword_14036CE00) )
      return 0LL;
  }
  else
  {
    *(_DWORD *)a3 = 16;
    *(_QWORD *)(a3 + 24) = &qword_14036CE00;
    *v18 = 0LL;
    KxAcquireQueuedSpinLock((__int64)v18, (volatile __int64 *)&qword_14036CE00);
  }
  v19 = (_QWORD *)qword_14036CE10;
  v20 = 3;
  while ( v19 )
  {
    v21 = v19[5];
    if ( v11 < v21 )
    {
      v19 = (_QWORD *)*v19;
    }
    else
    {
      if ( v11 < v21 + 512 )
        break;
      v19 = (_QWORD *)v19[1];
    }
  }
  if ( !v19 )
    goto LABEL_29;
  v20 = *(unsigned __int16 *)(v19[6] + 2 * ((v11 & 0xFFFFFFFFFLL) - v19[5])) >> 14;
  if ( v20 == 3 )
    v19 = 0LL;
  if ( !v19 )
  {
LABEL_29:
    v22 = (_QWORD *)qword_14036CE18;
    while ( v22 )
    {
      v23 = v22[5];
      if ( v11 < v23 )
      {
        v22 = (_QWORD *)*v22;
      }
      else
      {
        if ( v11 < v23 + 512 )
        {
          v20 = *(unsigned __int16 *)(v22[6] + 2 * ((v11 & 0xFFFFFFFFFLL) - v22[5])) >> 14;
          break;
        }
        v22 = (_QWORD *)v22[1];
      }
    }
  }
  if ( v20 == 3 )
  {
    if ( (a2 & 4) == 0 )
      v4 = 3;
    v20 = v4;
    if ( (a2 & 0x28) == 0 )
      goto LABEL_43;
    v24 = a2 & 0xD7;
  }
  else
  {
    v24 = a2 & 0xC7;
    if ( v20 )
    {
      if ( v20 == 2 )
        a2 = v24 | 0x20;
      else
        a2 = v24 | 8;
      goto LABEL_43;
    }
  }
  a2 = v24 | 0x10;
LABEL_43:
  if ( (a2 & 8) == 0 )
  {
    if ( (a2 & 0x10) != 0 )
    {
      KeFlushCurrentTbOnly(3);
      ProtectionPfnCompatible |= 8u;
    }
    else
    {
      if ( (a2 & 0x20) == 0 )
      {
LABEL_61:
        MiDbgUnTranslatePhysicalAddress(a3);
        return 0LL;
      }
      KeFlushCurrentTbOnly(3);
      ProtectionPfnCompatible |= 0x18u;
    }
  }
  if ( v20 == 3 )
    ++dword_14036CAD0;
LABEL_54:
  v25 = (volatile signed __int64 *)qword_14036CAC8;
  ValidPte = MiMakeValidPte(qword_14036CAC8, v11, ProtectionPfnCompatible | 0xA0000000);
  if ( (a2 & 0x41) != 0 )
    byte_14036CAC0 = 1;
  if ( _InterlockedCompareExchange64(v25, ValidPte, 0LL) )
    goto LABEL_61;
  *(_DWORD *)a3 |= 0x20u;
  if ( (*(_DWORD *)a3 & 0x12) != 0 )
    KeFlushSingleTb(v10, 0, 1u);
  else
    KeFlushSingleCurrentTb(v10, 0);
  return v10 + (v7 & 0xFFF);
}
