/*
 * XREFs of ?ComputeGutterTouchTargeting@ImmersiveApplicationLayout@@YAHHW4DEVICE_SCALE_FACTOR@@@Z @ 0x180304F48
 * Callers:
 *     ?AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z @ 0x1802E2EA0 (-AppLayoutChanged@JointDivider@@UEAAJPEAUIAppLayout@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ImmersiveApplicationLayout::ComputeGutterTouchTargeting(
        ImmersiveApplicationLayout *this,
        int a2,
        enum DEVICE_SCALE_FACTOR a3)
{
  _DWORD *v3; // r9
  unsigned int v4; // r11d
  int v5; // r10d

  v3 = &unk_1803BE940;
  v4 = 184;
  v5 = 0;
  while ( (_DWORD)this != a2 * v3[4] / 100 )
  {
    ++v5;
    v3 += 6;
    if ( v5 )
      return v4;
  }
  return (unsigned int)v3[5];
}
