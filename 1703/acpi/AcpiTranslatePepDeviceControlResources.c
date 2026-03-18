/*
 * XREFs of AcpiTranslatePepDeviceControlResources @ 0x1C00A0970
 * Callers:
 *     <none>
 * Callees:
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C00A09B0 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 */

__int64 __fastcall AcpiTranslatePepDeviceControlResources(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  return AcpiTranslatePepDeviceControlResourcesInternal(
           *(_QWORD *)(RootDeviceExtension + 720),
           *(_QWORD *)(a1 + 16),
           *(_DWORD *)(a1 + 24),
           a4,
           *(void **)(a1 + 32),
           a1 + 40);
}
