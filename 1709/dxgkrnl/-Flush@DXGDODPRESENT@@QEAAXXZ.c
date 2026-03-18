/*
 * XREFs of ?Flush@DXGDODPRESENT@@QEAAXXZ @ 0x1C007FD0C
 * Callers:
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C0084910 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C010240C (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 * Callees:
 *     ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1C007F65C (-Flush@BLTQUEUE@@QEAAXXZ.c)
 */

void __fastcall DXGDODPRESENT::Flush(DXGDODPRESENT *this)
{
  unsigned int i; // ebx

  for ( i = 0; i < *(_DWORD *)this; ++i )
    BLTQUEUE::Flush((BLTQUEUE *)(*((_QWORD *)this + 1) + 2704LL * i));
}
