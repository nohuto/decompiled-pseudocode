/*
 * XREFs of WPP_SF_dID @ 0x1800DB150
 * Callers:
 *     ?ReacquirePhoneCallResource@CConstraintModelResourceManager@@UEAAJHPEA_K@Z @ 0x1800D9DF0 (-ReacquirePhoneCallResource@CConstraintModelResourceManager@@UEAAJHPEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_dID(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+88h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_917ef38764913c31df93337219a3aa90_Traceguids, 19LL, &v5);
}
