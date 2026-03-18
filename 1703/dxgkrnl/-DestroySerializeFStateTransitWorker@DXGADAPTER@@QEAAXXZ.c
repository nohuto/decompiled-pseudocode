/*
 * XREFs of ?DestroySerializeFStateTransitWorker@DXGADAPTER@@QEAAXXZ @ 0x1C016DBB0
 * Callers:
 *     ?InitializePowerManagement@DXGADAPTER@@AEAAJXZ @ 0x1C010DDB0 (-InitializePowerManagement@DXGADAPTER@@AEAAJXZ.c)
 *     ?Stop@DXGADAPTER@@QEAAXEE@Z @ 0x1C016F704 (-Stop@DXGADAPTER@@QEAAXEE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGADAPTER::DestroySerializeFStateTransitWorker(DXGADAPTER *this)
{
  if ( *((_QWORD *)this + 291) )
  {
    if ( *((_QWORD *)this + 392) )
    {
      *((_BYTE *)this + 3144) = 1;
      KeSetEvent((PRKEVENT)((char *)this + 3008), 0, 0);
      ZwWaitForSingleObject(*((HANDLE *)this + 392), 0, 0LL);
      ZwClose(*((HANDLE *)this + 392));
      *((_QWORD *)this + 392) = 0LL;
    }
  }
}
