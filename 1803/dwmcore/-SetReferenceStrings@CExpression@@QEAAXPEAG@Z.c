/*
 * XREFs of ?SetReferenceStrings@CExpression@@QEAAXPEAG@Z @ 0x18018C74C
 * Callers:
 *     ??1CExpression@@UEAA@XZ @ 0x180054BAC (--1CExpression@@UEAA@XZ.c)
 *     ?ProcessSetReferenceStrings@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETREFERENCESTRINGS@@PEBXI@Z @ 0x18018C6CC (-ProcessSetReferenceStrings@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETREFER.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18003862C (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CExpression::SetReferenceStrings(CExpression *this, unsigned __int16 *a2)
{
  char **v2; // rcx
  unsigned __int16 *v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = (char **)((char *)this + 280);
  if ( a2 == (unsigned __int16 *)`CExpression::SetReferenceStrings'::`2'::sc_defaultValue )
    *((_DWORD *)*v2 + 1) &= ~0x4000000u;
  else
    CSparseStorage::SetData(v2, 6, 8u, &v3);
}
