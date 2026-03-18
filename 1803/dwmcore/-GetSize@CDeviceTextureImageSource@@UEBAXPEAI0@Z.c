/*
 * XREFs of ?GetSize@CDeviceTextureImageSource@@UEBAXPEAI0@Z @ 0x1800D6E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDeviceTextureImageSource::GetSize(CDeviceTextureImageSource *this, unsigned int *a2, unsigned int *a3)
{
  __int64 v3; // r9

  v3 = *((_QWORD *)this + 2);
  *a2 = *(_DWORD *)(v3 + 140);
  *a3 = *(_DWORD *)(v3 + 144);
}
