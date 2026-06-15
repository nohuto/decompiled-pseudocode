/*
 * XREFs of ??_GCProcessSubmixProxy@@MEAAPEAXI@Z @ 0x180008090
 * Callers:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIProcessSubmixProxy@@U?$InterfaceList@UIInspectable@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180008900 (-Release@-$RuntimeClass@U-$InterfaceList@UIProcessSubmixProxy@@U-$InterfaceList@UIInspectable@@V.c)
 * Callees:
 *     ??1CProcessSubmixProxy@@MEAA@XZ @ 0x1800080C4 (--1CProcessSubmixProxy@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CProcessSubmixProxy *__fastcall CProcessSubmixProxy::`scalar deleting destructor'(CProcessSubmixProxy *this, char a2)
{
  CProcessSubmixProxy::~CProcessSubmixProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xB8);
  return this;
}
