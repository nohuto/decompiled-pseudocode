/*
 * XREFs of ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C02555A8
 * Callers:
 *     ?GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z @ 0x1C00F36A0 (-GreExtEscapeInternal@@YAHAEAVDCOBJ@@HHPEADH1@Z.c)
 * Callees:
 *     ?Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z @ 0x1C003235C (-Escape@PDEVOBJ@@QEAAKPEAU_SURFOBJ@@KKPEAXK1@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?fBlockExtEscape@@YAHAEAVDCOBJ@@@Z @ 0x1C00F393C (-fBlockExtEscape@@YAHAEAVDCOBJ@@@Z.c)
 *     ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0267808 (-vForceClientRgnUpdate@@YAXXZ.c)
 *     ?hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z @ 0x1C0285604 (-hdevFindDeviceHdev@@YAPEAUHDEV__@@PEAU1@U_RECTL@@PEAVEWNDOBJ@@@Z.c)
 */

__int64 __fastcall iWndObjSetupExtEscape(struct DCOBJ *a1, __int64 a2, __int64 a3, void *a4, unsigned int a5, void *a6)
{
  unsigned int v6; // ebx
  unsigned int v8; // r15d
  unsigned int v9; // r12d
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r8
  HDEV DeviceHdev; // rax
  __int64 v17; // rsi
  struct _SURFOBJ *v18; // r10
  __int64 v19; // r10
  unsigned int v20; // edi
  struct _RECTL v21; // [rsp+40h] [rbp-39h] BYREF
  _BYTE v22[32]; // [rsp+50h] [rbp-29h] BYREF
  __int64 v23; // [rsp+70h] [rbp-9h]
  __int64 v24; // [rsp+78h] [rbp-1h]
  HDEV v25; // [rsp+D0h] [rbp+57h] BYREF

  v6 = 0;
  v8 = a3;
  v9 = a2;
  if ( *(_QWORD *)(*(_QWORD *)a1 + 512LL) )
  {
    UserEnterUserCritSec(a1, a2, a3);
    v23 = 0LL;
    v24 = 0LL;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v22, a1, 0);
    if ( !(unsigned int)fBlockExtEscape(a1, v12, v13, v14) )
    {
      v15 = *(_QWORD *)a1;
      DeviceHdev = *(HDEV *)(*(_QWORD *)a1 + 48LL);
      v25 = DeviceHdev;
      v17 = (*(_QWORD *)(v15 + 512) + 24LL) & -(__int64)(*(_QWORD *)(v15 + 512) != 0LL);
      v18 = (struct _SURFOBJ *)v17;
      if ( ((_DWORD)DeviceHdev[8] & 0x20000) != 0 )
      {
        v21 = *(struct _RECTL *)(v15 + 1448);
        DeviceHdev = hdevFindDeviceHdev(*(HDEV *)(v15 + 48), &v21, 0LL);
        v18 = (struct _SURFOBJ *)v17;
        if ( DeviceHdev )
        {
          if ( *(_QWORD *)(*(_QWORD *)a1 + 512LL) == *((_QWORD *)v25 + 321) )
          {
            v19 = *((_QWORD *)DeviceHdev + 321);
            if ( v19 )
              v18 = (struct _SURFOBJ *)(v19 + 24);
            else
              v18 = 0LL;
          }
          v25 = DeviceHdev;
        }
        else
        {
          DeviceHdev = v25;
        }
      }
      if ( *((_QWORD *)DeviceHdev + 362) )
      {
        v20 = PDEVOBJ::Escape((PDEVOBJ *)&v25, v18, v9, v8, a4, a5, a6);
        if ( gbWndobjUpdate )
        {
          gbWndobjUpdate = 0;
          vForceClientRgnUpdate();
        }
        v6 = v20;
      }
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v22);
    UserLeaveUserCritSec();
    return v6;
  }
  else
  {
    EngSetLastError(6u);
    return 0LL;
  }
}
