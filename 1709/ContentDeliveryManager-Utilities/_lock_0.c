/*
 * XREFs of _lock_0 @ 0x1800B42FB
 * Callers:
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x180097E54 (--0_Lockit@std@@QEAA@H@Z.c)
 *     _onexit_0 @ 0x1800B3D88 (_onexit_0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall lock_0(__int64 a1)
{
  return _lock(a1);
}
