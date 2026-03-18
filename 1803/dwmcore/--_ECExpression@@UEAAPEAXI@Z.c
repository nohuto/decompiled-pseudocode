/*
 * XREFs of ??_ECExpression@@UEAAPEAXI@Z @ 0x180053570
 * Callers:
 *     ?Release@CResource@@UEAAKXZ @ 0x180051660 (-Release@CResource@@UEAAKXZ.c)
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x180051B80 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ??1CExpression@@UEAA@XZ @ 0x180054BAC (--1CExpression@@UEAA@XZ.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 */

CExpression *__fastcall CExpression::`vector deleting destructor'(CExpression *this, char a2)
{
  CExpression::~CExpression(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    }
    else if ( this )
    {
      HeapFree(WPF::g_processHeap, 0, this);
    }
  }
  return this;
}
