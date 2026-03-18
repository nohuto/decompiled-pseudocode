/*
 * XREFs of ?Read@CBaseInput@@QEAAJXZ @ 0x1C001A6B0
 * Callers:
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C00A57F0 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 *     ?InitializeInputSensors@@YAJXZ @ 0x1C012D6C0 (-InitializeInputSensors@@YAJXZ.c)
 * Callees:
 *     RIMReadInput @ 0x1C00095B0 (RIMReadInput.c)
 */

__int64 __fastcall CBaseInput::Read(CBaseInput *this)
{
  __int64 v1; // r9

  v1 = *((_QWORD *)this + 29);
  *((_DWORD *)this + 7) = 64;
  return RIMReadInput(
           *((_QWORD *)this + 1),
           (__int64)this + 64,
           64,
           v1,
           0,
           (__int64)this + 48,
           (__int64)this + 24,
           (__int64)this + 32);
}
