/*
 * XREFs of ?DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ @ 0x1C0148DE4
 * Callers:
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C014B1C4 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C014FAAC (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::DestroySerializeFStateTransitWorker(DXGADAPTER *this)
{
  if ( *((_QWORD *)this + 313) )
  {
    if ( *((_QWORD *)this + 414) )
    {
      *((_BYTE *)this + 3320) = 1;
      KeSetEvent((PRKEVENT)((char *)this + 3184), 0, 0);
      ZwWaitForSingleObject(*((HANDLE *)this + 414), 0, 0LL);
      ZwClose(*((HANDLE *)this + 414));
      *((_QWORD *)this + 414) = 0LL;
    }
  }
}
