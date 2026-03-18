/*
 * XREFs of ?GetVmBusChannel@DXGPROCESS@@QEAAPEAUVMBCHANNEL__@@XZ @ 0x1C0024CC8
 * Callers:
 *     MapChildMmioSpace @ 0x1C019A600 (MapChildMmioSpace.c)
 *     MapGpadl @ 0x1C019A6C0 (MapGpadl.c)
 *     UnmapChildMmioSpace @ 0x1C019A720 (UnmapChildMmioSpace.c)
 *     UnmapGpadl @ 0x1C019A770 (UnmapGpadl.c)
 * Callees:
 *     <none>
 */

struct VMBCHANNEL__ *__fastcall DXGPROCESS::GetVmBusChannel(DXGPROCESS *this)
{
  char v1; // al

  while ( 1 )
  {
    v1 = *((_BYTE *)this + 307);
    if ( (v1 & 4) != 0 )
      break;
    if ( (v1 & 8) == 0 )
      return 0LL;
    this = (DXGPROCESS *)*((_QWORD *)this + 55);
  }
  return (struct VMBCHANNEL__ *)*((_QWORD *)this + 57);
}
