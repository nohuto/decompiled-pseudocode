/*
 * XREFs of ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0257078
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C0101358 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C003D604 (-Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?fBlockExtEscape@@YAHAEAVDCOBJ@@@Z @ 0x1C0101610 (-fBlockExtEscape@@YAHAEAVDCOBJ@@@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C02665D8 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C0282168 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 */

__int64 __fastcall iWndObjSetupExtEscape(struct DCOBJ *a1, __int64 a2, __int64 a3, void *a4, unsigned int a5, void *a6)
{
  unsigned int v6; // edi
  unsigned int v8; // r15d
  unsigned int v9; // r12d
  __int64 v12; // rdx
  __int64 v13; // rax
  HDEV v14; // rbx
  __int64 v15; // rbp
  struct _SURFOBJ *v16; // r10
  HDEV DeviceHdev; // rax
  __int64 v18; // r10
  unsigned int v19; // ebx
  struct _RECTL v20; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v21[32]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v22; // [rsp+70h] [rbp-58h]
  __int64 v23; // [rsp+78h] [rbp-50h]
  struct PDEV *v24; // [rsp+D0h] [rbp+8h] BYREF

  v6 = 0;
  v8 = a3;
  v9 = a2;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 512LL) )
  {
    UserEnterUserCritSec(a1, a2, a3);
    v22 = 0LL;
    v23 = 0LL;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v21, a1, 0);
    if ( !(unsigned int)fBlockExtEscape(a1) )
    {
      v12 = *(_QWORD *)a1;
      v13 = *(_QWORD *)(*(_QWORD *)a1 + 512LL);
      v14 = *(HDEV *)(*(_QWORD *)a1 + 48LL);
      v24 = (struct PDEV *)v14;
      v15 = (v13 + 24) & -(__int64)(v13 != 0);
      v16 = (struct _SURFOBJ *)v15;
      if ( ((_DWORD)v14[8] & 0x20000) != 0 )
      {
        v20 = *(struct _RECTL *)(v12 + 1448);
        DeviceHdev = hdevFindDeviceHdev(v14, &v20, 0LL);
        v16 = (struct _SURFOBJ *)v15;
        if ( DeviceHdev )
        {
          if ( *(_QWORD *)(*(_QWORD *)a1 + 512LL) == *((_QWORD *)v14 + 321) )
          {
            v18 = *((_QWORD *)DeviceHdev + 321);
            if ( v18 )
              v16 = (struct _SURFOBJ *)(v18 + 24);
            else
              v16 = 0LL;
          }
          v14 = DeviceHdev;
          v24 = (struct PDEV *)DeviceHdev;
        }
      }
      if ( *((_QWORD *)v14 + 362) )
      {
        v19 = PDEVOBJ::Escape(&v24, v16, v9, v8, a4, a5, a6);
        if ( gbWndobjUpdate )
        {
          gbWndobjUpdate = 0;
          vForceClientRgnUpdate();
        }
        v6 = v19;
      }
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v21);
    UserLeaveUserCritSec();
    return v6;
  }
  else
  {
    EngSetLastError(6u);
    return 0LL;
  }
}
