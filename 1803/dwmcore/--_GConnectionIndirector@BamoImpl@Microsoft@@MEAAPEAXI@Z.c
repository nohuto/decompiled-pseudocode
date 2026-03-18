/*
 * XREFs of ??_GConnectionIndirector@BamoImpl@Microsoft@@MEAAPEAXI@Z @ 0x180153030
 * Callers:
 *     ?OnZeroReferenceCount@ConnectionIndirector@BamoImpl@Microsoft@@EEAAXXZ @ 0x1801543D0 (-OnZeroReferenceCount@ConnectionIndirector@BamoImpl@Microsoft@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     ?Free@BamoConnection@Bamo@Microsoft@@AEAAXXZ @ 0x1801537E0 (-Free@BamoConnection@Bamo@Microsoft@@AEAAXXZ.c)
 */

Microsoft::BamoImpl::ConnectionIndirector *__fastcall Microsoft::BamoImpl::ConnectionIndirector::`scalar deleting destructor'(
        Microsoft::BamoImpl::ConnectionIndirector *this,
        char a2)
{
  __int64 v4; // rcx

  *(_QWORD *)this = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `Microsoft::BamoImpl::BamoImplObject'};
  *((_QWORD *)this + 2) = &Microsoft::BamoImpl::ConnectionIndirector::`vftable'{for `IMessageConversationHost'};
  v4 = *((_QWORD *)this + 3);
  if ( v4 )
    Microsoft::Bamo::BamoConnection::Free(*(Microsoft::Bamo::BamoConnection **)(v4 + 16));
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
