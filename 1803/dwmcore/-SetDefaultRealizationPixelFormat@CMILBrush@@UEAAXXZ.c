/*
 * XREFs of ?SetDefaultRealizationPixelFormat@CMILBrush@@UEAAXXZ @ 0x18001D9E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMILBrush::SetDefaultRealizationPixelFormat(CMILBrush *this)
{
  int v2; // eax
  int v3; // ecx

  if ( (*(unsigned __int8 (__fastcall **)(CMILBrush *))(*(_QWORD *)this + 40LL))(this) )
  {
    v2 = 3;
    v3 = 88;
  }
  else
  {
    v2 = 1;
    v3 = 87;
  }
  *((_DWORD *)this + 2) = v3;
  *((_DWORD *)this + 3) = v2;
  *((_DWORD *)this + 4) = 0;
}
