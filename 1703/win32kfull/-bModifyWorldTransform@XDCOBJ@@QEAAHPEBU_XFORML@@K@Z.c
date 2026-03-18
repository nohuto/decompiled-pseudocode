/*
 * XREFs of ?bModifyWorldTransform@XDCOBJ@@QEAAHPEBU_XFORML@@K@Z @ 0x1C0074D20
 * Callers:
 *     NtGdiModifyWorldTransform @ 0x1C00DE360 (NtGdiModifyWorldTransform.c)
 * Callees:
 *     ?bWorldMatrixInRange@@YAHPEAVMATRIX@@@Z @ 0x1C007D9EC (-bWorldMatrixInRange@@YAHPEAVMATRIX@@@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0095500 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memcmp @ 0x1C013C6B0 (memcmp.c)
 *     ?bMultToWorld@EXFORMOBJ@@QEAAHPEAVMATRIX@@K@Z @ 0x1C029549C (-bMultToWorld@EXFORMOBJ@@QEAAHPEAVMATRIX@@K@Z.c)
 */

__int64 __fastcall XDCOBJ::bModifyWorldTransform(XDCOBJ *this, const struct _XFORML *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD v14[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 Buf1; // [rsp+30h] [rbp-30h] BYREF
  __int128 v16; // [rsp+40h] [rbp-20h]

  v3 = 0;
  if ( a3 == 1 )
  {
LABEL_16:
    v10 = *(_QWORD *)this;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 80LL) + 352LL) & 2) == 0 )
    {
      *(_OWORD *)(v10 + 408) = *(_OWORD *)&gmxIdentity_LToL;
      *(_OWORD *)(v10 + 424) = *((_OWORD *)&gmxIdentity_LToL + 1);
      v11 = *(_QWORD *)(*(_QWORD *)this + 80LL);
      *(_OWORD *)(v11 + 256) = *(_OWORD *)&gmxIdentity_LToL;
      *(_OWORD *)(v11 + 272) = *((_OWORD *)&gmxIdentity_LToL + 1);
LABEL_18:
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 80LL) + 352LL) |= 0x80B2u;
    }
    return 1;
  }
  if ( a3 > 1 )
  {
    if ( a3 <= 3 )
    {
      vConvertXformToMatrix(a2, &Buf1);
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 80LL) + 352LL) & 2) != 0
        || (EXFORMOBJ::vQuickInit((EXFORMOBJ *)v14, this, 0x203u), v14[0])
        && (unsigned int)EXFORMOBJ::bMultToWorld((EXFORMOBJ *)v14, (struct MATRIX *)&Buf1, a3) )
      {
        if ( (unsigned int)bWorldMatrixInRange((struct MATRIX *)&Buf1) )
        {
          v12 = *(_QWORD *)this;
          *(_OWORD *)(v12 + 408) = Buf1;
          *(_OWORD *)(v12 + 424) = v16;
          v13 = *(_QWORD *)(*(_QWORD *)this + 80LL);
          *(_OWORD *)(v13 + 256) = Buf1;
          *(_OWORD *)(v13 + 272) = v16;
          if ( !memcmp(&Buf1, gmxIdentity_LToL, 0x20uLL) )
            goto LABEL_18;
          goto LABEL_12;
        }
      }
    }
    else if ( a3 == 4 )
    {
      if ( a2->eM11 == 1.0 && a2->eM12 == 0.0 && a2->eM21 == 0.0 && a2->eM22 == 1.0 && a2->eDx == 0.0 && a2->eDy == 0.0 )
        goto LABEL_16;
      vConvertXformToMatrix(a2, &Buf1);
      if ( (unsigned int)bWorldMatrixInRange((struct MATRIX *)&Buf1) )
      {
        v6 = *(_QWORD *)this;
        *(_OWORD *)(v6 + 408) = Buf1;
        *(_OWORD *)(v6 + 424) = v16;
        v7 = *(_QWORD *)(*(_QWORD *)this + 80LL);
        *(_OWORD *)(v7 + 256) = Buf1;
        *(_OWORD *)(v7 + 272) = v16;
LABEL_12:
        v8 = *(_QWORD *)this;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 80LL) + 352LL) |= 0x80B0u;
        *(_DWORD *)(*(_QWORD *)(v8 + 80) + 352LL) &= ~2u;
        return 1;
      }
    }
  }
  return v3;
}
