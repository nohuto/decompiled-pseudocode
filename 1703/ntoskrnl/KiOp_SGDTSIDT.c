/*
 * XREFs of KiOp_SGDTSIDT @ 0x140206E00
 * Callers:
 *     <none>
 * Callees:
 *     KiOpRetrieveRegMemAddress @ 0x14016718C (KiOpRetrieveRegMemAddress.c)
 *     memmove @ 0x140192A40 (memmove.c)
 */

__int64 __fastcall KiOp_SGDTSIDT(__int64 a1)
{
  __int64 v2; // xmm0_8
  void *IdtBase; // rcx
  __int16 v4; // ax
  __int64 v5; // rdi
  unsigned int v6; // ecx
  char *v7; // r8
  _TBYTE Src; // [rsp+28h] [rbp-30h] BYREF
  char v10; // [rsp+68h] [rbp+10h] BYREF
  void *v11; // [rsp+70h] [rbp+18h] BYREF
  __int64 v12; // [rsp+78h] [rbp+20h]

  if ( ((KiBugCheckActive & 3) == 0 || !VslVsmEnabled)
    && (!KiNPIEPEnabled || *(_BYTE *)(a1 + 81) != 1 && (KiBugCheckActive & 3) == 0) )
  {
    return 0LL;
  }
  if ( (*(_BYTE *)(a1 + 65) & 0x38) != 0 )
  {
    if ( *(_BYTE *)(a1 + 81) )
    {
      v2 = KiOpIdtr;
      goto LABEL_12;
    }
    IdtBase = KeGetPcr()->IdtBase;
    v4 = 4095;
LABEL_14:
    LOWORD(Src) = v4;
    *(_QWORD *)((char *)&Src + 2) = IdtBase;
    goto LABEL_15;
  }
  if ( !*(_BYTE *)(a1 + 81) )
  {
    IdtBase = KeGetPcr()->NtTib.ExceptionList;
    v4 = 87;
    goto LABEL_14;
  }
  v2 = KiOpGdtr;
LABEL_12:
  *(_QWORD *)&Src = v2;
  HIWORD(Src) = -1;
LABEL_15:
  v5 = *(_QWORD *)(a1 + 32);
  v12 = v5;
  *(_DWORD *)v5 = -1073741819;
  if ( (int)KiOpRetrieveRegMemAddress(a1, (__int64 *)&v11, &v10, 0LL) < 0 )
  {
    v11 = (void *)-1LL;
  }
  else
  {
    v6 = *(_BYTE *)(a1 + 58) != 0 ? 6 : 10;
    if ( v10 == 1 )
    {
      v7 = (char *)v11 + v6;
      if ( (unsigned __int64)v7 > 0x7FFFFFFF0000LL || v7 < v11 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    memmove(v11, &Src, v6);
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 248LL) += (unsigned int)(*(_DWORD *)(a1 + 16) - *(_DWORD *)a1);
    ++KiOpDescriptorTableStoreSkip;
    *(_BYTE *)(a1 + 96) = 1;
  }
  if ( !*(_BYTE *)(a1 + 96) )
  {
    *(_DWORD *)v5 = -1073741819;
    *(_QWORD *)(v5 + 32) = 1LL;
    *(_QWORD *)(v5 + 40) = v11;
    *(_BYTE *)(a1 + 97) = 1;
  }
  return 0LL;
}
