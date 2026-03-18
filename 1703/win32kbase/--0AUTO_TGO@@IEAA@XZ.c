/*
 * XREFs of ??0AUTO_TGO@@IEAA@XZ @ 0x1C0057AC4
 * Callers:
 *     _DrvChangeDisplaySettings_::_2_::_AUTO_KM::_AUTO_KM @ 0x1C0056AAC (_DrvChangeDisplaySettings_--_2_--_AUTO_KM--_AUTO_KM.c)
 *     DrvSetDisplayConfig @ 0x1C0056E00 (DrvSetDisplayConfig.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C00F9EA4 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C003DD40 (PushThreadGuardedObject.c)
 */

AUTO_TGO *__fastcall AUTO_TGO::AUTO_TGO(AUTO_TGO *this)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // rax

  *(_QWORD *)this = &AUTO_TGO::`vftable';
  v2 = PushThreadGuardedObject((_QWORD *)this + 2, (__int64)this, (__int64)AUTO_TGO::_DisposeThis);
  *((_DWORD *)this + 2) = v2;
  if ( !v2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v4, v3);
    WdLogEvent5_WdAssertion(v6);
  }
  return this;
}
