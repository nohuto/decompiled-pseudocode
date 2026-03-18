/*
 * XREFs of ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0006248
 * Callers:
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C000ACA0 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 *     ?NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C000AE20 (-NewRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1C000AE90 (-UnbindAllAnimations@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z.c)
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C000C130 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C0016268 (-RemoveExpiredAnimations@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00174F8 (-EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1C01462BC (-DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C0015294 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 */

void __fastcall DirectComposition::CAnimationBinding::DetachAndDelete(
        DirectComposition::CAnimationBinding *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CAnimationBinding *v3; // rbx
  _QWORD *i; // rcx
  _QWORD *j; // rcx
  struct DirectComposition::CResourceMarshaler *v6; // rax

  v3 = this;
  if ( !*((_DWORD *)this + 2) )
    goto LABEL_9;
  for ( i = (_QWORD *)(*((_QWORD *)this + 2) + 32LL);
        (DirectComposition::CAnimationBinding *)*i != v3;
        i = (_QWORD *)(*i + 32LL) )
  {
    ;
  }
  *i = *((_QWORD *)v3 + 4);
  for ( j = (_QWORD *)(*((_QWORD *)v3 + 3) + 8LL);
        (DirectComposition::CAnimationBinding *)*j != v3;
        j = (_QWORD *)(*j + 40LL) )
  {
    ;
  }
  *j = *((_QWORD *)v3 + 5);
  if ( (*((_DWORD *)v3 + 2) & 3) != 0 )
  {
    v6 = (struct DirectComposition::CResourceMarshaler *)(***((__int64 (__fastcall ****)(_QWORD))v3 + 3))(*((_QWORD *)v3 + 3));
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v6);
  }
  this = v3;
  if ( !*((_QWORD *)a2 + 44) )
  {
    *((_QWORD *)a2 + 44) = v3;
    memset(v3, 0, 0x30uLL);
  }
  else
  {
LABEL_9:
    Win32FreePool(this);
  }
}
