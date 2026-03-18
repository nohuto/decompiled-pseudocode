/*
 * XREFs of ?Free@BamoConnection@Bamo@Microsoft@@AEAAXXZ @ 0x1801537E0
 * Callers:
 *     ??_GConnectionIndirector@BamoImpl@Microsoft@@MEAAPEAXI@Z @ 0x180153030 (--_GConnectionIndirector@BamoImpl@Microsoft@@MEAAPEAXI@Z.c)
 *     ?OnZeroReferenceCount@BamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ @ 0x180154240 (-OnZeroReferenceCount@BamoConnectionImpl@BamoImpl@Microsoft@@EEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::Bamo::BamoConnection::Free(Microsoft::Bamo::BamoConnection *this)
{
  if ( this )
    (**(void (__fastcall ***)(Microsoft::Bamo::BamoConnection *, __int64))this)(this, 1LL);
}
