/*
 * XREFs of ?SetReferenceStrings@CExpression@@QEAAXPEAG@Z @ 0x180162A54
 * Callers:
 *     ??1CExpression@@UEAA@XZ @ 0x1800A81F4 (--1CExpression@@UEAA@XZ.c)
 *     ?ProcessSetReferenceStrings@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETREFERENCESTRINGS@@PEBXI@Z @ 0x1801626C8 (-ProcessSetReferenceStrings@CExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_EXPRESSION_SETREFER.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x1800B3E30 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CExpression::SetReferenceStrings(CExpression *this, unsigned __int16 *a2)
{
  unsigned __int16 *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2;
  if ( a2 == (unsigned __int16 *)`CBaseExpression::SetDebugInfo'::`2'::sc_defaultValue )
    *(_DWORD *)(*((_QWORD *)this + 33) + 4LL) &= ~0x4000000u;
  else
    CSparseStorage::SetData((CExpression *)((char *)this + 264), 6u, 8u, &v2);
}
