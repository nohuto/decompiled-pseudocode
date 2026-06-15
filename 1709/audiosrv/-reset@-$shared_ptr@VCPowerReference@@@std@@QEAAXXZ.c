/*
 * XREFs of ?reset@?$shared_ptr@VCPowerReference@@@std@@QEAAXXZ @ 0x18002969C
 * Callers:
 *     ?StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z @ 0x180026000 (-StopStream@CVADServer@@UEAAJ_KW4VadStreamStateChangeReason@@@Z.c)
 *     ?FinalRelease@CVADServer@@QEAAXXZ @ 0x180027B60 (-FinalRelease@CVADServer@@QEAAXXZ.c)
 *     ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x18008AB80 (-DestroyStream@CVADServer@@UEAAJ_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall std::shared_ptr<CPowerReference>::reset(_QWORD *a1)
{
  std::_Ref_count_base *v1; // rax

  v1 = (std::_Ref_count_base *)a1[1];
  a1[1] = 0LL;
  *a1 = 0LL;
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
