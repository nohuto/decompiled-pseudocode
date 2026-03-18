/*
 * XREFs of ?bModifyWorldTransform@XDCOBJ@@QEAAHPEBU_XFORML@@K@Z @ 0x1C002C48C
 * Callers:
 *     NtGdiModifyWorldTransform @ 0x1C00F0C60 (NtGdiModifyWorldTransform.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C001B89C (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bWorldXformIdentity@@YAHPEBU_XFORML@@@Z @ 0x1C0023528 (-bWorldXformIdentity@@YAHPEBU_XFORML@@@Z.c)
 *     ?bWorldMatrixInRange@@YAHPEAVMATRIX@@@Z @ 0x1C002358C (-bWorldMatrixInRange@@YAHPEAVMATRIX@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memcmp @ 0x1C0143590 (memcmp.c)
 *     ?bMultToWorld@EXFORMOBJ@@QEAAHPEAVMATRIX@@K@Z @ 0x1C0291B3C (-bMultToWorld@EXFORMOBJ@@QEAAHPEAVMATRIX@@K@Z.c)
 */

__int64 __fastcall XDCOBJ::bModifyWorldTransform(XDCOBJ *this, const struct _XFORML *a2, unsigned int a3)
{
  unsigned int v4; // ebx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD v15[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 Buf1; // [rsp+30h] [rbp-30h] BYREF
  __int128 v17; // [rsp+40h] [rbp-20h]

  v4 = 0;
  if ( a3 == 1 )
    goto LABEL_11;
  if ( a3 <= 1 )
    return v4;
  if ( a3 <= 3 )
  {
    vConvertXformToMatrix(a2, &Buf1);
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 80LL) + 352LL) & 2) == 0 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v15, this, 515);
      if ( !v15[0] || !(unsigned int)EXFORMOBJ::bMultToWorld((EXFORMOBJ *)v15, (struct MATRIX *)&Buf1, a3) )
        return v4;
    }
    if ( !(unsigned int)bWorldMatrixInRange((struct MATRIX *)&Buf1) )
      return v4;
    v13 = *(_QWORD *)this;
    *(_OWORD *)(v13 + 408) = Buf1;
    *(_OWORD *)(v13 + 424) = v17;
    v14 = *(_QWORD *)(*(_QWORD *)this + 80LL);
    *(_OWORD *)(v14 + 256) = Buf1;
    *(_OWORD *)(v14 + 272) = v17;
    if ( memcmp(&Buf1, gmxIdentity_LToL, 0x20uLL) )
      goto LABEL_8;
LABEL_13:
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 80LL) + 352LL) |= 0x80B2u;
    return 1;
  }
  if ( a3 != 4 )
    return v4;
  if ( bWorldXformIdentity(a2) )
  {
LABEL_11:
    v11 = *(_QWORD *)this;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 80LL) + 352LL) & 2) != 0 )
      return 1;
    *(_OWORD *)(v11 + 408) = *(_OWORD *)&gmxIdentity_LToL;
    *(_OWORD *)(v11 + 424) = *((_OWORD *)&gmxIdentity_LToL + 1);
    v12 = *(_QWORD *)(*(_QWORD *)this + 80LL);
    *(_OWORD *)(v12 + 256) = *(_OWORD *)&gmxIdentity_LToL;
    *(_OWORD *)(v12 + 272) = *((_OWORD *)&gmxIdentity_LToL + 1);
    goto LABEL_13;
  }
  vConvertXformToMatrix(v6, &Buf1);
  if ( (unsigned int)bWorldMatrixInRange((struct MATRIX *)&Buf1) )
  {
    v7 = *(_QWORD *)this;
    *(_OWORD *)(v7 + 408) = Buf1;
    *(_OWORD *)(v7 + 424) = v17;
    v8 = *(_QWORD *)(*(_QWORD *)this + 80LL);
    *(_OWORD *)(v8 + 256) = Buf1;
    *(_OWORD *)(v8 + 272) = v17;
LABEL_8:
    v9 = *(_QWORD *)this;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 80LL) + 352LL) |= 0x80B0u;
    *(_DWORD *)(*(_QWORD *)(v9 + 80) + 352LL) &= ~2u;
    return 1;
  }
  return v4;
}
