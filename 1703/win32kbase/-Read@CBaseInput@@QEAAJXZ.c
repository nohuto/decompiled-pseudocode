/*
 * XREFs of ?Read@CBaseInput@@QEAAJXZ @ 0x1C004FCB0
 * Callers:
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C009A4A0 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     ?InitializeInputSensors@@YAJXZ @ 0x1C012E15C (-InitializeInputSensors@@YAJXZ.c)
 * Callees:
 *     RIMReadInput @ 0x1C0093320 (RIMReadInput.c)
 */

__int64 __fastcall CBaseInput::Read(CBaseInput *this)
{
  __int64 v1; // r9

  v1 = *((_QWORD *)this + 25);
  *((_DWORD *)this + 7) = 64;
  return RIMReadInput(
           *((_QWORD *)this + 1),
           (int)this + 72,
           64,
           v1,
           0,
           (__int64)this + 48,
           (__int64)this + 24,
           (__int64)this + 32);
}
