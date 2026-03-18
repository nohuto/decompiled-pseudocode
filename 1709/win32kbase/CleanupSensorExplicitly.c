/*
 * XREFs of CleanupSensorExplicitly @ 0x1C009B620
 * Callers:
 *     ?UninitializeInputSensors@@YAXXZ @ 0x1C012D7C0 (-UninitializeInputSensors@@YAXXZ.c)
 * Callees:
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C0019BF8 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     ?CleanupHandles@CRIMBase@@IEAAXXZ @ 0x1C001A8F0 (-CleanupHandles@CRIMBase@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CleanupSensorExplicitly(int a1)
{
  CBaseInput *v1; // rbx
  bool result; // al
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = *(&qword_1C0188018 + 6 * a1);
  result = CBaseInput::ExecutingOnSensorHostingThread(v1);
  if ( result )
  {
    (*(void (__fastcall **)(CBaseInput *))(*(_QWORD *)v1 + 40LL))(v1);
    CRIMBase::CleanupHandles(v1, v3, v4);
    result = 0;
    *((_QWORD *)v1 + 119) = 0LL;
  }
  return result;
}
