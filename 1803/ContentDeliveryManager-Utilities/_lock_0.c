/*
 * XREFs of _lock_0 @ 0x1800C113B
 * Callers:
 *     ??0_Lockit@std@@QEAA@H@Z @ 0x1800A4EEC (--0_Lockit@std@@QEAA@H@Z.c)
 *     _onexit_0 @ 0x1800C0DD8 (_onexit_0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall lock_0(__int64 a1)
{
  return _lock(a1);
}
