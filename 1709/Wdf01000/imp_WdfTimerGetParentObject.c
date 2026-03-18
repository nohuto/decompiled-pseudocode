/*
 * XREFs of imp_WdfTimerGetParentObject @ 0x1C0001950
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0002E5C (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0081680 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

unsigned __int64 __fastcall imp_WdfTimerGetParentObject(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Timer)
{
  FxTimer *v2; // rcx
  __int64 Offset; // r8
  FxObject *m_Object; // rax
  FxTimer *pFxTimer; // [rsp+48h] [rbp+10h] BYREF

  if ( !Timer )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1028uLL);
  v2 = (FxTimer *)(~Timer & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (Timer & 1) != 0 )
  {
    Offset = LOWORD(v2->__vftable);
    v2 = (FxTimer *)((char *)v2 - Offset);
  }
  if ( v2->m_Type == 4136 )
  {
    pFxTimer = v2;
  }
  else
  {
    FxObjectHandleGetPtrQI(v2, (void **)&pFxTimer, (void *)Timer, 0x1028u, Offset);
    v2 = pFxTimer;
  }
  m_Object = v2->m_Object;
  if ( m_Object && m_Object->m_ObjectSize )
    return (unsigned __int64)m_Object ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    return 0LL;
}
