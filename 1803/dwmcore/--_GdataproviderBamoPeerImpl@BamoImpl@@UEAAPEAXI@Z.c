/*
 * XREFs of ??_GdataproviderBamoPeerImpl@BamoImpl@@UEAAPEAXI@Z @ 0x180153200
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1801545D0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 */

BamoImpl::dataproviderBamoPeerImpl *__fastcall BamoImpl::dataproviderBamoPeerImpl::`scalar deleting destructor'(
        BamoImpl::dataproviderBamoPeerImpl *this,
        char a2)
{
  Microsoft::BamoImpl::BamoImplObject *v4; // rcx

  v4 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 3);
  if ( v4 )
    Microsoft::BamoImpl::BamoImplObject::Release(v4);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
