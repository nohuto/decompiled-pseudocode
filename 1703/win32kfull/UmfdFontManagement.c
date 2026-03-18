/*
 * XREFs of UmfdFontManagement @ 0x1C02B97C0
 * Callers:
 *     AtmDrvFontManagementRedirector @ 0x1C027F7B0 (AtmDrvFontManagementRedirector.c)
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C0090638 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     ?GetDrvType@FontManagementRequest@@UEBA?AW4FontDriverType@@XZ @ 0x1C02B96A0 (-GetDrvType@FontManagementRequest@@UEBA-AW4FontDriverType@@XZ.c)
 */

__int64 __fastcall UmfdFontManagement(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int a6, __int64 a7)
{
  unsigned int DrvType; // eax
  int v8; // eax
  unsigned int v9; // ecx
  void **v11; // [rsp+20h] [rbp-31h] BYREF
  int v12; // [rsp+28h] [rbp-29h]
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-21h]
  __int64 v14; // [rsp+38h] [rbp-19h]
  __int64 v15; // [rsp+40h] [rbp-11h]
  int v16; // [rsp+48h] [rbp-9h]
  int v17; // [rsp+4Ch] [rbp-5h]
  __int64 v18; // [rsp+50h] [rbp-1h]
  int v19; // [rsp+58h] [rbp+7h]
  __int64 v20; // [rsp+60h] [rbp+Fh]
  int v21; // [rsp+68h] [rbp+17h]
  __int128 v22; // [rsp+70h] [rbp+1Fh]
  __int64 v23; // [rsp+80h] [rbp+2Fh]

  v12 = 13;
  v23 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = &FontManagementRequest::`vftable';
  v18 = a5;
  v19 = a6;
  v14 = a1;
  v20 = a7;
  v22 = 0LL;
  v15 = a2;
  v16 = a3;
  v17 = a4;
  v21 = -1;
  DrvType = FontManagementRequest::GetDrvType((__int64)&v11);
  v8 = UmfdClientSendAndWaitForCompletion(DrvType, (__int64)&v11);
  v9 = v21;
  if ( v8 < 0 )
    return (unsigned int)-1;
  return v9;
}
