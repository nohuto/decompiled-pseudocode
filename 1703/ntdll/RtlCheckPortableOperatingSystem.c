/*
 * XREFs of RtlCheckPortableOperatingSystem @ 0x180089440
 * Callers:
 *     <none>
 * Callees:
 *     RtlCheckRegistryKey @ 0x180056420 (RtlCheckRegistryKey.c)
 *     sub_180056454 @ 0x180056454 (sub_180056454.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall RtlCheckPortableOperatingSystem(bool *a1)
{
  int v2; // edi
  _QWORD v4[14]; // [rsp+30h] [rbp-78h] BYREF
  int v5; // [rsp+B8h] [rbp+10h] BYREF

  v5 = 0;
  v2 = 0;
  if ( (int)RtlCheckRegistryKey(2LL, (__int64)L"MiniNT") >= 0 )
    goto LABEL_6;
  memset(v4, 0, sizeof(v4));
  v4[2] = L"PortableOperatingSystem";
  LODWORD(v4[1]) = 292;
  v4[3] = &v5;
  LODWORD(v4[4]) = 0x4000000;
  v2 = sub_180056454(2LL, 0LL, (__int64)v4, 0LL, 0LL, 1);
  if ( v2 == -1073741772 )
    v2 = -1073741275;
  if ( v2 >= 0 )
LABEL_6:
    *a1 = v5 != 0;
  return (unsigned int)v2;
}
