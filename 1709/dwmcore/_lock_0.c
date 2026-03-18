/*
 * XREFs of _lock_0 @ 0x1800C30BF
 * Callers:
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x1800C2A28 (--0_Lockit@std@@QEAA@H@Z.c)
 *     _onexit_0 @ 0x1800C2D04 (_onexit_0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall lock_0(__int64 a1)
{
  return _lock(a1);
}
