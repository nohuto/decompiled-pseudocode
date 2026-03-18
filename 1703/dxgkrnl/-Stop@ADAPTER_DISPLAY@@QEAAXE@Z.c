/*
 * XREFs of ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x1C017317C
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C016F704 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0104CEC (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::Stop(PERESOURCE **this, char a2)
{
  struct _KTHREAD **v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 **v7; // rbx
  __int64 *i; // rax

  if ( !a2 )
  {
    ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(this, (PERESOURCE **)this[2][286]);
    v3 = (struct _KTHREAD **)(this + 3);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 3));
    v7 = (__int64 **)(this + 8);
    for ( i = *v7; i != (__int64 *)v7 && i; i = (__int64 *)*i )
      *((_DWORD *)i + 14) = 0;
    DXGFASTMUTEX::Release(v3, v4, v5, v6);
  }
}
