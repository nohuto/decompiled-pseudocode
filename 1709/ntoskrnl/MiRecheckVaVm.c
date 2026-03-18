/*
 * XREFs of MiRecheckVaVm @ 0x140066A38
 * Callers:
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 *     MiCrcStillIntact @ 0x1400EA158 (MiCrcStillIntact.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiIsAddressValid @ 0x140066790 (MiIsAddressValid.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1400D56B0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 */

__int64 __fastcall MiRecheckVaVm(__int64 a1, unsigned __int64 a2)
{
  unsigned int v4; // ebx
  int SystemRegionType; // eax
  char v6; // cl
  bool v7; // zf
  _QWORD *v8; // rdi
  __int64 v9; // rax

  v4 = 1;
  if ( (*(_BYTE *)(a1 + 192) & 7) == 0 )
  {
    if ( a2 < 0xFFFF800000000000uLL )
      goto LABEL_7;
    return 0LL;
  }
  if ( a2 < 0xFFFF800000000000uLL )
    return 0LL;
  ExAcquireSpinLockSharedAtDpcLevel(&dword_140388924);
  SystemRegionType = MiGetSystemRegionType(a2);
  v6 = *(_BYTE *)(a1 + 192) & 7;
  switch ( v6 )
  {
    case 1:
      if ( SystemRegionType == 1 )
      {
LABEL_7:
        v8 = (_QWORD *)(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        if ( MiIsAddressValid((__int64)v8) )
        {
          v9 = *v8;
          if ( (unsigned __int64)v8 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v8 <= 0xFFFFF6FB7DBED7F8uLL )
            LOWORD(v9) = MiReadPteShadow(v8, *v8);
          if ( (v9 & 1) != 0 || (v9 & 0x400) == 0 && (v9 & 0x800) != 0 )
            goto LABEL_15;
        }
        goto LABEL_14;
      }
      v7 = SystemRegionType == 11;
      break;
    case 2:
      v7 = SystemRegionType == 8;
      break;
    case 3:
      v7 = SystemRegionType == 6;
      break;
    case 4:
      v7 = SystemRegionType == 9;
      break;
    default:
      goto LABEL_7;
  }
  if ( v7 )
    goto LABEL_7;
LABEL_14:
  v4 = 0;
LABEL_15:
  if ( (*(_BYTE *)(a1 + 192) & 7) != 0 )
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140388924);
  return v4;
}
