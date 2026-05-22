/*
 * XREFs of ?OnDeviceRemoval@HeatDeviceCollection@@MEAAJK@Z @ 0x18009B250
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x18009CE20 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 */

__int64 __fastcall HeatDeviceCollection::OnDeviceRemoval(HeatDeviceCollection *this, unsigned int a2)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx

  v2 = HIDDeviceCollection::OnDeviceRemoval(this, a2);
  v4 = v2;
  if ( v2 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(v3, &MinInput_Warning_CheckResult, 0, 149, v2);
  return v4;
}
