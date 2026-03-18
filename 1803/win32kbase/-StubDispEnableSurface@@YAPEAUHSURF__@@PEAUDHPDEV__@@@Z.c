/*
 * XREFs of ?StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00DBA10
 * Callers:
 *     <none>
 * Callees:
 *     bDeleteSurface @ 0x1C0063570 (bDeleteSurface.c)
 *     EngAssociateSurface @ 0x1C0068400 (EngAssociateSurface.c)
 *     EngCreateDeviceSurface @ 0x1C0069B90 (EngCreateDeviceSurface.c)
 */

HSURF __fastcall StubDispEnableSurface(struct DHPDEV__ *a1)
{
  HSURF DeviceSurface; // rax
  HSURF v3; // rbx

  DeviceSurface = EngCreateDeviceSurface(0LL, *(SIZEL *)(a1 + 4), 6u);
  v3 = DeviceSurface;
  if ( !DeviceSurface )
    return 0LL;
  if ( !EngAssociateSurface(DeviceSurface, *(HDEV *)a1, 0x479u) )
  {
    bDeleteSurface((unsigned int)v3);
    return 0LL;
  }
  *((_QWORD *)a1 + 1) = v3;
  return v3;
}
