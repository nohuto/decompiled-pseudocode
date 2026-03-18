/*
 * XREFs of ?DestroyProtectedOutput@COPM@@QEAAJPEAX@Z @ 0x1C00A0DBC
 * Callers:
 *     ?OPMDestroyProtectedOutput@@YAJPEAX@Z @ 0x1C00A0C84 (-OPMDestroyProtectedOutput@@YAJPEAX@Z.c)
 * Callees:
 *     ?Lock@CMutex@@QEAAXXZ @ 0x1C0074C60 (-Lock@CMutex@@QEAAXXZ.c)
 *     ?DestroyHandleInternal@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@AEAAJPEAVCOPMProtectedOutput@@KPEAVCMutex@@@Z @ 0x1C0074D38 (-DestroyHandleInternal@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@AEAAJPEAVCOPMProtectedO.c)
 *     ?GetHandleObject@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtectedOutput@@@Z @ 0x1C00A16BC (-GetHandleObject@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@QEAAJPEAXPEAPEAVCOPMProtected.c)
 */

__int64 __fastcall COPM::DestroyProtectedOutput(COPM *this, void *a2)
{
  COPM *v2; // rsi
  int HandleObject; // edi
  int v5; // eax
  struct _KMUTANT *v6; // rcx
  COPM *v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = this;
  v2 = qword_1C01903B8;
  CMutex::Lock((void **)qword_1C01903B8 + 4);
  HandleObject = CMonitorHandleTable<COPMProtectedOutput,void *>::GetHandleObject(v2, a2, &v8);
  if ( HandleObject >= 0 )
  {
    v5 = CMonitorHandleTable<COPMProtectedOutput,void *>::DestroyHandleInternal(
           (__int64)v2,
           (__int64)v8,
           (unsigned int)a2,
           (COPM *)((char *)v2 + 24));
    HandleObject = 0;
    if ( v5 < 0 )
      HandleObject = v5;
  }
  v6 = (struct _KMUTANT *)*((_QWORD *)v2 + 4);
  if ( v6 )
    KeReleaseMutex(v6, 0);
  return (unsigned int)HandleObject;
}
