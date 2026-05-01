/*
 * XREFs of ?IsPhone@@YA_NXZ @ 0x1802FB940
 * Callers:
 *     ?SecurityShim_SharedMessagePortSecurity@@YAJPEBGPEAPEAX@Z @ 0x1802FB978 (-SecurityShim_SharedMessagePortSecurity@@YAJPEBGPEAPEAX@Z.c)
 *     ?SecurityShim_SharedMessagePortSecurityCleanup@@YAXPEAX@Z @ 0x1802FB9F8 (-SecurityShim_SharedMessagePortSecurityCleanup@@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

bool IsPhone(void)
{
  bool result; // al
  int v1; // [rsp+30h] [rbp+8h] BYREF
  int v2; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v2 = 0;
  RtlGetDeviceFamilyInfoEnum(0LL, &v1, &v2);
  if ( v1 != 4 )
    return 0;
  result = 1;
  if ( v2 != 1 )
    return 0;
  return result;
}
