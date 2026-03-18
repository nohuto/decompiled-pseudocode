/*
 * XREFs of ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1C003AF34
 * Callers:
 *     ?GetDispatcherObjectByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@@Z @ 0x1C000EF94 (-GetDispatcherObjectByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@@Z.c)
 *     ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C003ACE0 (-OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z.c)
 *     ?GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z @ 0x1C01228F8 (-GetDispatcherObjectByIndex@CRIMBase@@IEBAPEAXI@Z.c)
 *     ?IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z @ 0x1C0123204 (-IsDispatcherObjectValid@CRIMBase@@IEBA_NI@Z.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C0124210 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CRIMBase::SensorDispatcherObject::IsValid(CRIMBase::SensorDispatcherObject *this)
{
  bool v2; // bl

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(this, 0LL);
  v2 = *((_DWORD *)this + 5) != 0;
  ExReleasePushLockSharedEx(this, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
