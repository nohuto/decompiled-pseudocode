/*
 * XREFs of EditionDevicePnpNotification @ 0x1C00C6E80
 * Callers:
 *     <none>
 * Callees:
 *     PostDeviceNotification @ 0x1C00C7F8C (PostDeviceNotification.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0112544 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C01F51CC (-InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01F52C0 (-InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01F53F4 (-InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01F5490 (-InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021C044 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021C310 (-OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

void __fastcall EditionDevicePnpNotification(_DWORD *a1)
{
  __int64 v1; // rdx
  int v2; // esi
  unsigned __int8 v4; // al
  __int64 v5; // rbx
  int v6; // eax
  int v7; // eax
  int v8; // ecx
  struct RawInputManagerDeviceObject *v9; // rbx
  InteractiveControlManager *v10; // rax
  struct RawInputManagerDeviceObject *v11; // rbx
  InteractiveControlManager *v12; // rax

  v1 = *(_QWORD *)a1;
  v2 = 0;
  v4 = *(_BYTE *)(*(_QWORD *)a1 + 48LL);
  v5 = 2LL;
  if ( v4 != 2 )
  {
    if ( v4 > 1u )
      return;
    v8 = a1[5] - 2;
    if ( v8 )
    {
      if ( v8 != 1 )
        return;
      goto LABEL_10;
    }
    goto LABEL_9;
  }
  v2 = a1[4];
  switch ( a1[5] )
  {
    case 1:
      if ( v1 )
      {
        v6 = *(_DWORD *)(v1 + 200);
        if ( (v6 & 0x100) != 0 )
        {
          v11 = (struct RawInputManagerDeviceObject *)((v1 - 64) & -(__int64)(v1 != 0));
          v12 = InteractiveControlManager::Instance();
          InteractiveControlManager::OnDeviceAttach(v12, v11);
        }
        else if ( (v6 & 0x200) != 0 )
        {
          InkProcessorOnInkDeviceAttached((struct RawInputManagerDeviceObject *)((v1 - 64) & -(__int64)(v1 != 0)));
        }
      }
      return;
    case 2:
      if ( (*(_DWORD *)(v1 + 200) & 0x200) != 0 )
        InkProcessorOnInkDeviceOpened((struct RawInputManagerDeviceObject *)((v1 - 64) & -(__int64)(v1 != 0)));
LABEL_9:
      v5 = 1LL;
LABEL_10:
      PostDeviceNotification(0LL, *(struct DEVICEINFO **)a1, v2);
      if ( (*(_DWORD *)(*(_QWORD *)a1 + 184LL) & 0x1000) != 0 && (unsigned __int64)(v5 - 1) <= 1 )
        ZwUpdateWnfStateData(&WNF_PNPA_DEVNODES_CHANGED, 0LL, 0LL, 0LL, 0LL, 0, 0);
      return;
    case 3:
      if ( (*(_DWORD *)(v1 + 200) & 0x200) != 0 )
        InkProcessorOnInkDeviceClosed((struct RawInputManagerDeviceObject *)((v1 - 64) & -(__int64)(v1 != 0)));
      goto LABEL_10;
    case 4:
      v7 = *(_DWORD *)(v1 + 200);
      if ( (v7 & 0x100) != 0 )
      {
        v9 = (struct RawInputManagerDeviceObject *)((v1 - 64) & -(__int64)(v1 != 0));
        v10 = InteractiveControlManager::Instance();
        InteractiveControlManager::OnDeviceRemoval(v10, v9);
      }
      else if ( (v7 & 0x200) != 0 )
      {
        InkProcessorOnInkDeviceRemoved((struct RawInputManagerDeviceObject *)((v1 - 64) & -(__int64)(v1 != 0)));
      }
      break;
  }
}
