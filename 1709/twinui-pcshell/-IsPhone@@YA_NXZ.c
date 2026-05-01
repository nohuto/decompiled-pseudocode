/*
 * XREFs of ?IsPhone@@YA_NXZ @ 0x1801BF2C8
 * Callers:
 *     ?Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z @ 0x1801BF07C (-Initialize@SharedMessagePortRefPtr@@QEAAJW4InputCapability@@@Z.c)
 *     ?SecurityShim_SharedMessagePortSecurity@@YAJPEBGPEAPEAX@Z @ 0x1801BF300 (-SecurityShim_SharedMessagePortSecurity@@YAJPEBGPEAPEAX@Z.c)
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
