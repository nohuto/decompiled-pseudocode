/*
 * XREFs of EditionDevicePnpNotification @ 0x1C00B0690
 * Callers:
 *     <none>
 * Callees:
 *     PostDeviceNotification @ 0x1C00B173C (PostDeviceNotification.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0108804 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C01E91BC (-InkProcessorOnInkDeviceAttached@@YAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01E92B4 (-InkProcessorOnInkDeviceClosed@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01E93F8 (-InkProcessorOnInkDeviceOpened@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C01E949C (-InkProcessorOnInkDeviceRemoved@@YAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021ADD0 (-OnDeviceAttach@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021B0A8 (-OnDeviceRemoval@InteractiveControlManager@@QEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

void __fastcall EditionDevicePnpNotification(_DWORD *a1)
{
  __int64 v1; // rdx
  int v2; // esi
  unsigned __int8 v4; // al
  int v5; // eax
  int v6; // eax
  struct RawInputManagerDeviceObject *v7; // rbx
  InteractiveControlManager *v8; // rax
  struct RawInputManagerDeviceObject *v9; // rbx
  InteractiveControlManager *v10; // rax

  v1 = *(_QWORD *)a1;
  v2 = 0;
  v4 = *(_BYTE *)(*(_QWORD *)a1 + 48LL);
  if ( v4 == 2 )
  {
    v2 = a1[4];
    switch ( a1[5] )
    {
      case 1:
        if ( v1 )
        {
          v5 = *(_DWORD *)(v1 + 200);
          if ( (v5 & 0x100) != 0 )
          {
            v9 = (struct RawInputManagerDeviceObject *)((v1 - 64) & -(__int64)(v1 != 0));
            v10 = InteractiveControlManager::Instance();
            InteractiveControlManager::OnDeviceAttach(v10, v9);
          }
          else if ( (v5 & 0x200) != 0 )
          {
            InkProcessorOnInkDeviceAttached((struct RawInputManagerDeviceObject *)((v1 - 64) & -(__int64)(v1 != 0)));
          }
        }
        break;
      case 2:
        if ( (*(_DWORD *)(v1 + 200) & 0x200) != 0 )
          InkProcessorOnInkDeviceOpened((struct RawInputManagerDeviceObject *)((v1 - 64) & -(__int64)(v1 != 0)));
        goto LABEL_9;
      case 3:
        if ( (*(_DWORD *)(v1 + 200) & 0x200) != 0 )
          InkProcessorOnInkDeviceClosed((struct RawInputManagerDeviceObject *)((v1 - 64) & -(__int64)(v1 != 0)));
LABEL_9:
        PostDeviceNotification(0LL, *(struct DEVICEINFO **)a1, v2);
        return;
      case 4:
        v6 = *(_DWORD *)(v1 + 200);
        if ( (v6 & 0x100) != 0 )
        {
          v7 = (struct RawInputManagerDeviceObject *)((v1 - 64) & -(__int64)(v1 != 0));
          v8 = InteractiveControlManager::Instance();
          InteractiveControlManager::OnDeviceRemoval(v8, v7);
        }
        else if ( (v6 & 0x200) != 0 )
        {
          InkProcessorOnInkDeviceRemoved((struct RawInputManagerDeviceObject *)((v1 - 64) & -(__int64)(v1 != 0)));
        }
        break;
    }
  }
  else if ( v4 <= 1u && (unsigned int)(a1[5] - 2) <= 1 )
  {
    goto LABEL_9;
  }
}
