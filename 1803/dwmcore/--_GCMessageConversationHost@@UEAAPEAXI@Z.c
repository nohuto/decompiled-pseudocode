/*
 * XREFs of ??_GCMessageConversationHost@@UEAAPEAXI@Z @ 0x180152A90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ @ 0x1800D62A0 (-Do_not_derive_from_BamoConnection_directly@dataproviderBamoConnection@@EEBAXXZ.c)
 *     ?Disconnect@CMessageConversationHost@@QEAAXXZ @ 0x180152AF4 (-Disconnect@CMessageConversationHost@@QEAAXXZ.c)
 */

CMessageConversationHost *__fastcall CMessageConversationHost::`scalar deleting destructor'(
        CMessageConversationHost *this,
        char a2)
{
  *(_QWORD *)this = &CMessageConversationHost::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CMessageConversationHost::`vftable'{for `IMessageConversationHost'};
  CMessageConversationHost::Disconnect(this);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      dataproviderBamoConnection::Do_not_derive_from_BamoConnection_directly(this);
    else
      operator delete(this);
  }
  return this;
}
