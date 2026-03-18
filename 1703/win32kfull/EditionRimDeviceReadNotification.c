/*
 * XREFs of EditionRimDeviceReadNotification @ 0x1C01A80E0
 * Callers:
 *     <none>
 * Callees:
 *     FindRimDevBackedDeviceInfo @ 0x1C01A8160 (FindRimDevBackedDeviceInfo.c)
 *     ?InkProcessorOnInkDeviceInputReport@@YAXPEAURawInputManagerDeviceObject@@PEAX@Z @ 0x1C01E9358 (-InkProcessorOnInkDeviceInputReport@@YAXPEAURawInputManagerDeviceObject@@PEAX@Z.c)
 *     ?OnInteractiveControlInputReport@@YAJPEAURawInputManagerDeviceObject@@PEAXK@Z @ 0x1C020A12C (-OnInteractiveControlInputReport@@YAJPEAURawInputManagerDeviceObject@@PEAXK@Z.c)
 */

void __fastcall EditionRimDeviceReadNotification(void *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 RimDevBackedDeviceInfo; // rax
  void *v8; // rdx
  struct RawInputManagerDeviceObject *v9; // rcx

  RimDevBackedDeviceInfo = FindRimDevBackedDeviceInfo(a4, 0LL, 2LL);
  if ( RimDevBackedDeviceInfo || (RimDevBackedDeviceInfo = FindRimDevBackedDeviceInfo(a4, 1LL, 2LL)) != 0 )
  {
    v9 = (struct RawInputManagerDeviceObject *)*(unsigned int *)(RimDevBackedDeviceInfo + 200);
    if ( ((unsigned __int16)v9 & 0x100) != 0 )
    {
      OnInteractiveControlInputReport(*(struct RawInputManagerDeviceObject **)(RimDevBackedDeviceInfo + 32), a1, a3);
    }
    else if ( ((unsigned __int16)v9 & 0x200) != 0 )
    {
      InkProcessorOnInkDeviceInputReport(v9, v8);
    }
  }
}
