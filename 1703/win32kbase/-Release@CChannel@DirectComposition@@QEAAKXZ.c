/*
 * XREFs of ?Release@CChannel@DirectComposition@@QEAAKXZ @ 0x1C001D880
 * Callers:
 *     ??1CConnection@DirectComposition@@AEAA@XZ @ 0x1C0014714 (--1CConnection@DirectComposition@@AEAA@XZ.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1C0080F98 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x1C008A3AC (-DestroyHandle@CChannel@DirectComposition@@SAJI@Z.c)
 *     ?UnlockAndUnreference@CChannel@DirectComposition@@UEAAXXZ @ 0x1C0140FA0 (-UnlockAndUnreference@CChannel@DirectComposition@@UEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CChannel::Release(DirectComposition::CChannel *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 )
    (*(void (__fastcall **)(DirectComposition::CChannel *))(*(_QWORD *)this + 24LL))(this);
  return v1;
}
