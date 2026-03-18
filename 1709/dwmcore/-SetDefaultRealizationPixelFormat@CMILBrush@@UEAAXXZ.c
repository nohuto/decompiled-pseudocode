/*
 * XREFs of ?SetDefaultRealizationPixelFormat@CMILBrush@@UEAAXXZ @ 0x18007D990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMILBrush::SetDefaultRealizationPixelFormat(CMILBrush *this)
{
  if ( (*(unsigned __int8 (__fastcall **)(CMILBrush *))(*(_QWORD *)this + 40LL))(this) )
  {
    *((_DWORD *)this + 2) = 88;
    *((_DWORD *)this + 3) = 3;
  }
  else
  {
    *((_DWORD *)this + 2) = 87;
    *((_DWORD *)this + 3) = 1;
  }
  *((_DWORD *)this + 4) = 0;
}
