/*
 * XREFs of ?bMultToWorld@EXFORMOBJ@@QEAAHPEAVMATRIX@@K@Z @ 0x1C0291B3C
 * Callers:
 *     ?bModifyWorldTransform@XDCOBJ@@QEAAHPEBU_XFORML@@K@Z @ 0x1C002C48C (-bModifyWorldTransform@XDCOBJ@@QEAAHPEBU_XFORML@@K@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

int __fastcall EXFORMOBJ::bMultToWorld(struct MATRIX **this, struct MATRIX *a2, int a3)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  struct MATRIX *v5; // r8
  struct MATRIX *v6; // rdx
  struct MATRIX *v8; // [rsp+20h] [rbp-48h] BYREF
  int v9; // [rsp+2Ch] [rbp-3Ch]
  _OWORD v10[2]; // [rsp+30h] [rbp-38h] BYREF
  int v11; // [rsp+50h] [rbp-18h]

  v3 = *(_OWORD *)a2;
  v9 = 0;
  v11 = *((_DWORD *)a2 + 8);
  v8 = a2;
  v4 = *((_OWORD *)a2 + 1);
  v10[0] = v3;
  v10[1] = v4;
  if ( a3 == 2 )
  {
    v5 = *this;
    v6 = (struct MATRIX *)v10;
  }
  else
  {
    v6 = *this;
    v5 = (struct MATRIX *)v10;
  }
  return EXFORMOBJ::bMultiply((EXFORMOBJ *)&v8, v6, v5, 0);
}
