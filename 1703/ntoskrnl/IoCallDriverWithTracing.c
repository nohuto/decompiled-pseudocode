/*
 * XREFs of IoCallDriverWithTracing @ 0x14004AEC4
 * Callers:
 *     IopCallDriverReference @ 0x14004AD54 (IopCallDriverReference.c)
 * Callees:
 *     EtwActivityIdControlKernel @ 0x1400802C0 (EtwActivityIdControlKernel.c)
 *     IofCallDriver @ 0x1400F1390 (IofCallDriver.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS __fastcall IoCallDriverWithTracing(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  _BYTE *v2; // rax
  __int64 v4; // r10
  __int64 v5; // r9
  PIRP v6; // r10
  PDEVICE_OBJECT v7; // r11
  int v8; // r9d
  __int64 v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 *v10; // [rsp+28h] [rbp-30h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF

  if ( *(char *)(a2 + 71) < 0 )
    return IofCallDriver(a1, (PIRP)a2);
  v2 = *(_BYTE **)(a2 + 200);
  if ( !v2 || (*v2 & 2) == 0 )
    return IofCallDriver(a1, (PIRP)a2);
  EtwActivityIdControlKernel(1LL, &v9);
  v5 = *(_QWORD *)(v4 + 200);
  v10 = &v11;
  v11 = *(_OWORD *)(v5 + 24);
  EtwActivityIdControlKernel(2LL, &v10);
  IofCallDriver(v7, v6);
  EtwActivityIdControlKernel(2LL, &v9);
  return v8;
}
