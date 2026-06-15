/*
 * XREFs of MigrateSpatialProperties @ 0x18004B3CC
 * Callers:
 *     ?MakeActive@CSpatialProperties@@QEAAJ_NPEAUIMMDevice@@PEAUIPropertyStore@@@Z @ 0x180054E10 (-MakeActive@CSpatialProperties@@QEAAJ_NPEAUIMMDevice@@PEAUIPropertyStore@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180015190 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     Create_SpatialAudioDevicePropertyWriter @ 0x18004B4C4 (Create_SpatialAudioDevicePropertyWriter.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800617E0 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MigrateSpatialProperties(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // r8d
  unsigned int v6; // r9d
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // [rsp+38h] [rbp-D0h] BYREF
  PROPVARIANT pvar; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+48h] [rbp-C0h]
  __int64 v12; // [rsp+50h] [rbp-B8h]
  __int64 v13; // [rsp+58h] [rbp-B0h]
  int v14; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v15; // [rsp+6Ch] [rbp-9Ch]
  _OWORD v16[3]; // [rsp+74h] [rbp-94h]
  int v17; // [rsp+A4h] [rbp-64h]
  BOOL v18; // [rsp+ACh] [rbp-5Ch]
  unsigned __int16 v19[256]; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int16 v20[128]; // [rsp+2B8h] [rbp+1B0h] BYREF
  __int128 v21; // [rsp+3B8h] [rbp+2B0h]
  int v22; // [rsp+3C8h] [rbp+2C0h]
  int v23; // [rsp+3CCh] [rbp+2C4h]
  int v24; // [rsp+3D0h] [rbp+2C8h]
  int v25; // [rsp+3D4h] [rbp+2CCh]
  int v26; // [rsp+3D8h] [rbp+2D0h]
  int v27; // [rsp+3DCh] [rbp+2D4h]
  int v28; // [rsp+3E0h] [rbp+2D8h]
  __int128 v29; // [rsp+3E4h] [rbp+2DCh]
  __int16 v30; // [rsp+3F4h] [rbp+2ECh]
  __int16 v31; // [rsp+3F6h] [rbp+2EEh]
  __int16 v32; // [rsp+3F8h] [rbp+2F0h]

  v13 = -2LL;
  memset_0(&v14, 0, 0x48uLL);
  memset_0(v19, 0, 0x342uLL);
  v9 = 0LL;
  pvar = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( (*(int (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)a1 + 40LL))(
         a1,
         &PKEY_SpatialAudio_Endpoint_Settings,
         &pvar) < 0 )
    goto LABEL_3;
  if ( (_WORD)pvar == 65 )
    goto LABEL_3;
  PropVariantClear(&pvar);
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a1 + 40LL))(
         a1,
         &PKEY_RS2_SpatialAudioEndpoint_Settings,
         &pvar) < 0
    || (_WORD)pvar != 65
    || (unsigned int)v11 < 0x50
    || (int)Create_SpatialAudioDevicePropertyWriter(a2, a1, &v9) < 0 )
  {
    goto LABEL_3;
  }
  v5 = 0;
  v6 = *(_DWORD *)(v12 + 68);
  if ( !v6 )
    goto LABEL_16;
  while ( 1 )
  {
    v7 = 842LL * v5 + v12 + 80;
    v8 = *(_QWORD *)(v7 + 776) - *(_QWORD *)(v12 + 20);
    if ( !v8 )
      v8 = *(_QWORD *)(v7 + 784) - *(_QWORD *)(v12 + 28);
    if ( !v8 )
      break;
    if ( ++v5 >= v6 )
      goto LABEL_16;
  }
  if ( !v7 )
  {
LABEL_16:
    if ( *(_DWORD *)(v12 + 8) || !v6 )
      goto LABEL_3;
    v7 = v12 + 80;
  }
  v14 = *(_DWORD *)(v12 + 8);
  v17 = *(_DWORD *)(v12 + 72);
  v15 = *(_QWORD *)(v12 + 12);
  v18 = *(_DWORD *)(v12 + 16) != 0;
  v16[0] = *(_OWORD *)(v12 + 20);
  v16[1] = *(_OWORD *)(v12 + 36);
  v21 = *(_OWORD *)(v7 + 776);
  v22 = *(_DWORD *)(v7 + 792);
  v23 = *(_DWORD *)(v7 + 796);
  v24 = *(_DWORD *)(v7 + 800);
  v25 = *(_DWORD *)(v7 + 804);
  v26 = *(_DWORD *)(v7 + 808);
  v27 = *(_DWORD *)(v7 + 812);
  v28 = *(_DWORD *)(v7 + 816);
  v29 = *(_OWORD *)(v7 + 820);
  v30 = *(_WORD *)(v7 + 836);
  v31 = *(_WORD *)(v7 + 838);
  v32 = *(_WORD *)(v7 + 840);
  StringCchCopyW((char *)v19, 256LL, (char *)(v7 + 8));
  StringCchCopyW((char *)v20, 128LL, (char *)(v7 + 520));
  (*(void (__fastcall **)(__int64, int *, unsigned __int16 *, __int64))(*(_QWORD *)v9 + 64LL))(v9, &v14, v19, 834LL);
LABEL_3:
  PropVariantClear(&pvar);
  result = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a1 + 48LL))(
             a1,
             &PKEY_RS2_SpatialAudioEndpoint_Settings,
             &pvar);
  if ( v9 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return result;
}
