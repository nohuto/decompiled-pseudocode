/*
 * XREFs of ??_GCProcessSubmixProxy@@MEAAPEAXI@Z @ 0x180044810
 * Callers:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProcessSubmixProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002DAF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIProcessSubmixPro.c)
 * Callees:
 *     ??1CProcessSubmixProxy@@MEAA@XZ @ 0x180044CC0 (--1CProcessSubmixProxy@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CProcessSubmixProxy *__fastcall CProcessSubmixProxy::`scalar deleting destructor'(CProcessSubmixProxy *this, char a2)
{
  CProcessSubmixProxy::~CProcessSubmixProxy(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0xE0);
  return this;
}
