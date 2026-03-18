/*
 * XREFs of NVMePowerCleanUp @ 0x1C000605C
 * Callers:
 *     NVMeControllerStop @ 0x1C0004EAC (NVMeControllerStop.c)
 *     NVMeControllerRemove @ 0x1C0004FE4 (NVMeControllerRemove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMePowerCleanUp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // r9
  __int64 v7; // r8

  *(_DWORD *)(a1 + 1152) &= 0xFFFFFFFA;
  result = StorPortExtendedFunction(34LL, a1, *(_QWORD *)(a1 + 1192), a4);
  v7 = *(_QWORD *)(a1 + 1136);
  if ( v7 )
  {
    result = StorPortExtendedFunction(1LL, a1, v7, v6);
    *(_QWORD *)(a1 + 1136) = 0LL;
  }
  return result;
}
