/*
 * XREFs of ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x1C0157B18
 * Callers:
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C014FAAC (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014EF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C01564E8 (-ReleaseAllVidPnSourceOwners@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?Stop@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1C01BAC88 (-Stop@DXGPROTECTEDSESSION@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::Stop(PERESOURCE **this, char a2)
{
  PERESOURCE **i; // rax
  struct _KTHREAD **v4; // rdi
  DXGPROTECTEDSESSION *v5; // rsi
  DXGPROTECTEDSESSION *j; // rbx

  if ( !a2 )
  {
    ADAPTER_DISPLAY::ReleaseAllVidPnSourceOwners(this, (PERESOURCE **)this[2][308]);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 3));
    for ( i = (PERESOURCE **)this[8]; i != this + 8 && i; i = (PERESOURCE **)*i )
      *((_DWORD *)i + 14) = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 3);
    v4 = (struct _KTHREAD **)(this + 55);
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 55));
    v5 = (DXGPROTECTEDSESSION *)(this + 60);
    for ( j = (DXGPROTECTEDSESSION *)this[60]; j != v5 && j; j = *(DXGPROTECTEDSESSION **)j )
      DXGPROTECTEDSESSION::Stop(j);
    DXGFASTMUTEX::Release(v4);
  }
}
