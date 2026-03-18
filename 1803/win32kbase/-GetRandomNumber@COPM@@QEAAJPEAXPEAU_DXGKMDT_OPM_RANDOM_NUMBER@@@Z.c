/*
 * XREFs of ?GetRandomNumber@COPM@@QEAAJPEAXPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z @ 0x1C00C5E08
 * Callers:
 *     NtGdiGetOPMRandomNumber @ 0x1C00C68F0 (NtGdiGetOPMRandomNumber.c)
 * Callees:
 *     ?Lock@CMutex@@QEAAXXZ @ 0x1C0062E70 (-Lock@CMutex@@QEAAXXZ.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00C5C30 (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtected.c)
 *     ?GetRandomNumber@COPMProtectedOutput@@QEAAJPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z @ 0x1C00C5E94 (-GetRandomNumber@COPMProtectedOutput@@QEAAJPEAU_DXGKMDT_OPM_RANDOM_NUMBER@@@Z.c)
 */

__int64 __fastcall COPM::GetRandomNumber(COPM *this, unsigned __int64 a2, struct _DXGKMDT_OPM_RANDOM_NUMBER *a3)
{
  PVOID v3; // rdi
  PRKMUTEX *v6; // rbx
  int HandleObject; // edi
  COPMProtectedOutput *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = this;
  v3 = P;
  v6 = (PRKMUTEX *)((char *)P + 24);
  CMutex::Lock((void **)P + 3);
  HandleObject = CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject((__int64)v3, a2, &v9);
  if ( HandleObject >= 0 )
  {
    HandleObject = COPMProtectedOutput::GetRandomNumber(v9, a3);
    if ( HandleObject >= 0 )
      HandleObject = 0;
  }
  if ( *v6 )
    KeReleaseMutex(*v6, 0);
  return (unsigned int)HandleObject;
}
