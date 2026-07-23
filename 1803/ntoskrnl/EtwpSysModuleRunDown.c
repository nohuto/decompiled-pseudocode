/*
 * XREFs of EtwpSysModuleRunDown @ 0x1406297E8
 * Callers:
 *     EtwpProcessEnumCallback @ 0x1406292D0 (EtwpProcessEnumCallback.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1401080D0 (EtwpLogKernelEvent.c)
 *     HvlQueryConnection @ 0x140173020 (HvlQueryConnection.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     MmEnumerateSystemImages @ 0x14062991C (MmEnumerateSystemImages.c)
 */

__int64 __fastcall EtwpSysModuleRunDown(__int64 a1, char a2)
{
  __int16 v4; // ax
  unsigned int v6; // r8d
  __int64 v7; // rdx
  unsigned int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // [rsp+38h] [rbp-59h] BYREF
  _QWORD v11[3]; // [rsp+40h] [rbp-51h] BYREF
  __int16 v12; // [rsp+58h] [rbp-39h]
  _BYTE v13[16]; // [rsp+68h] [rbp-29h] BYREF
  int v14; // [rsp+78h] [rbp-19h]
  int v15; // [rsp+80h] [rbp-11h]
  __int16 v16; // [rsp+86h] [rbp-Bh]
  __int64 v17; // [rsp+88h] [rbp-9h]
  __int64 v18; // [rsp+90h] [rbp-1h]
  __int64 v19; // [rsp+98h] [rbp+7h]
  PVOID *v20; // [rsp+A8h] [rbp+17h] BYREF
  __int64 v21; // [rsp+B0h] [rbp+1Fh]
  void *v22; // [rsp+C8h] [rbp+37h]
  __int64 v23; // [rsp+D0h] [rbp+3Fh]

  if ( !a2 )
  {
    v6 = *(_DWORD *)a1;
    v7 = *(_QWORD *)(a1 + 1112);
    v20 = &PsNtosImageBase;
    v21 = 8LL;
    EtwpLogKernelEvent((__int64)&v20, v7, v6, 1u, 0x1421u, 0x401802u);
    if ( !(unsigned int)HvlQueryConnection(&v10) )
    {
      v8 = *(_DWORD *)a1;
      v9 = *(_QWORD *)(a1 + 1112);
      v20 = (PVOID *)&v10;
      v21 = 8LL;
      EtwpLogKernelEvent((__int64)&v20, v9, v8, 1u, 0x1422u, 0x401802u);
    }
  }
  v11[2] = a1;
  v11[1] = &v20;
  v11[0] = v13;
  v4 = 5123;
  if ( !a2 )
    v4 = 5124;
  v12 = v4;
  v14 = 0;
  v20 = (PVOID *)v13;
  v17 = 0LL;
  v22 = &EtwpNull;
  v15 = 0;
  v16 = 0;
  v18 = 0LL;
  v19 = 0LL;
  v21 = 56LL;
  v23 = 2LL;
  return MmEnumerateSystemImages(EtwpSystemImageEnumCallback, v11);
}
