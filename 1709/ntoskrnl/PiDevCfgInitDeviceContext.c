/*
 * XREFs of PiDevCfgInitDeviceContext @ 0x14058AA6C
 * Callers:
 *     PpDevCfgProcessDeviceClass @ 0x14044EB08 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14044EE8C (PpDevCfgProcessDeviceReset.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14058B640 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgProcessDevice @ 0x1405A0E30 (PiDevCfgProcessDevice.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1405D62D0 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgInitDeviceCallback @ 0x1406C6210 (PiDevCfgInitDeviceCallback.c)
 *     PpDevCfgCheckDeviceNeedsUpdate @ 0x1406C9CD8 (PpDevCfgCheckDeviceNeedsUpdate.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1406C9D50 (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     _CmOpenDeviceRegKey @ 0x140520CAC (_CmOpenDeviceRegKey.c)
 *     PiDevCfgQueryObjectProperties @ 0x14058ABD0 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgFreeDeviceContext @ 0x14058B72C (PiDevCfgFreeDeviceContext.c)
 */

__int64 __fastcall PiDevCfgInitDeviceContext(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rdi
  _BYTE *v7; // rcx
  __int64 v8; // r9
  DEVPROPKEY **v9; // rdx
  _QWORD *v10; // r8
  __int64 v11; // rax
  int ObjectProperties; // ebp
  unsigned int v13; // edi
  int *v14; // rsi
  _BYTE v16[128]; // [rsp+40h] [rbp-A8h] BYREF

  memset(a3, 0, 0x48uLL);
  a3[1] = a1;
  v6 = a3 + 2;
  if ( a2 )
  {
    *v6 = a2;
  }
  else
  {
    ObjectProperties = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, a1, 0x10u, 0, 983103, 0, (__int64)(a3 + 2), 0LL);
    if ( ObjectProperties < 0 )
    {
LABEL_13:
      PiDevCfgFreeDeviceContext(a3);
      return (unsigned int)ObjectProperties;
    }
    *(_DWORD *)a3 |= 0x80000000;
  }
  memset(v16, 0, 0x78uLL);
  v7 = &v16[8];
  v8 = 3LL;
  v9 = off_1407F3698;
  v10 = a3 + 3;
  do
  {
    v11 = (__int64)*v9++;
    *((_QWORD *)v7 + 1) = v10;
    v10 += 2;
    *((_QWORD *)v7 - 1) = v11;
    *(_DWORD *)v7 = 8210;
    *((_DWORD *)v7 + 5) = 6;
    v7 += 40;
    --v8;
  }
  while ( v8 );
  ObjectProperties = PiDevCfgQueryObjectProperties((_DWORD)v7, a3[1], 1, *v6, (__int64)v16, 3);
  if ( ObjectProperties < 0 )
    goto LABEL_13;
  v13 = 0;
  v14 = (int *)&v16[32];
  do
  {
    if ( *v14 < 0 )
      RtlInitUnicodeString((PUNICODE_STRING)&a3[2 * v13 + 3], 0LL);
    ++v13;
    v14 += 10;
  }
  while ( v13 < 3 );
  return (unsigned int)ObjectProperties;
}
