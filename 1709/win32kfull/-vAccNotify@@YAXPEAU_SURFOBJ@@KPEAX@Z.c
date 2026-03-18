/*
 * XREFs of ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C008C12C
 * Callers:
 *     GreAccNotifyWindow @ 0x1C008CC7C (GreAccNotifyWindow.c)
 *     GreDwmStartup @ 0x1C00DEA90 (GreDwmStartup.c)
 *     GreDwmShutdown @ 0x1C00E3A28 (GreDwmShutdown.c)
 *     vAccNotifyDeleteSurfaceWrap @ 0x1C00F86E0 (vAccNotifyDeleteSurfaceWrap.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002B684 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C02665D8 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C0276C5C (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 */

void __fastcall vAccNotify(struct _SURFOBJ *a1, unsigned int a2, void *a3)
{
  HDEV hdev; // rbx
  int v7; // eax
  struct _DISPSURF *i; // rdi
  __int64 v9; // rbx
  struct _SURFOBJ *DevBitmap; // rax
  void (__fastcall *v11)(struct _SURFOBJ *, _QWORD, void *); // rax
  _BYTE v12[80]; // [rsp+20h] [rbp-68h] BYREF
  HDEV v13; // [rsp+90h] [rbp+8h] BYREF

  hdev = a1->hdev;
  if ( !hdev )
    hdev = (HDEV)UserGetHDEV();
  v13 = hdev;
  if ( hdev )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v12, (struct PDEVOBJ *)&v13);
    v7 = *((_DWORD *)hdev + 8);
    if ( (v7 & 0x20000000) != 0 )
    {
      for ( i = (struct _DISPSURF *)**((_QWORD **)hdev + 227); i; i = *(struct _DISPSURF **)i )
      {
        v9 = *((_QWORD *)i + 6);
        if ( v9
          && (*(_DWORD *)(v9 + 1840) & 0x8000000) != 0
          && (*(_DWORD *)(v9 + 2144) & 0x8000) != 0
          && *(_QWORD *)(*(_QWORD *)(v9 + 1808) + 760LL) )
        {
          DevBitmap = GetDevBitmap(i, a1);
          (*(void (__fastcall **)(struct _SURFOBJ *, _QWORD, void *))(*(_QWORD *)(v9 + 1808) + 760LL))(
            DevBitmap,
            a2,
            a3);
        }
      }
    }
    else if ( (v7 & 0x20000) == 0 && ((_DWORD)hdev[460] & 0x8000000) != 0 && ((_DWORD)hdev[536] & 0x8000) != 0 )
    {
      v11 = *(void (__fastcall **)(struct _SURFOBJ *, _QWORD, void *))(*((_QWORD *)hdev + 226) + 760LL);
      if ( v11 )
        v11(a1, a2, a3);
    }
    if ( gbWndobjUpdate )
    {
      if ( a2 == 5 )
      {
        gbWndobjUpdate = 0;
        vForceClientRgnUpdate();
      }
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v12);
  }
}
