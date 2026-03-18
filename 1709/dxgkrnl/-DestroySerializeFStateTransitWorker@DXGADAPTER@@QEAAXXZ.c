/*
 * XREFs of ?DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ @ 0x1C0171380
 * Callers:
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C0114290 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C0172EE4 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::DestroySerializeFStateTransitWorker(DXGADAPTER *this)
{
  if ( *((_QWORD *)this + 294) )
  {
    if ( *((_QWORD *)this + 394) )
    {
      *((_BYTE *)this + 3160) = 1;
      KeSetEvent((PRKEVENT)((char *)this + 3032), 0, 0);
      ZwWaitForSingleObject(*((HANDLE *)this + 394), 0, 0LL);
      ZwClose(*((HANDLE *)this + 394));
      *((_QWORD *)this + 394) = 0LL;
    }
  }
}
