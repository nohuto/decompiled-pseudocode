/*
 * XREFs of WPP_SF_I @ 0x1800DAE98
 * Callers:
 *     ?ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z @ 0x1800DA400 (-ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_I(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_917ef38764913c31df93337219a3aa90_Traceguids, 24LL, (__int64 *)va);
}
