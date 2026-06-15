/*
 * XREFs of MigrateSpatialProperties @ 0x1800C9EF0
 * Callers:
 *     ?MakeActive@CSpatialProperties@@QEAAJ_NPEAUIMMDevice@@PEAUIPropertyStore@@@Z @ 0x1800C9DB0 (-MakeActive@CSpatialProperties@@QEAAJ_NPEAUIMMDevice@@PEAUIPropertyStore@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18002DA54 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memset @ 0x180033A5A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     Create_SpatialAudioDevicePropertyWriter @ 0x1800D1348 (Create_SpatialAudioDevicePropertyWriter.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MigrateSpatialProperties(__int64 a1, __int64 a2)
{
  unsigned int v4; // r8d
  unsigned int v5; // r9d
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // [rsp+38h] [rbp-D0h] BYREF
  PROPVARIANT pvar; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+48h] [rbp-C0h]
  __int64 v12; // [rsp+50h] [rbp-B8h]
  __int64 v13; // [rsp+58h] [rbp-B0h]
  _DWORD v14[20]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int16 v15[424]; // [rsp+B8h] [rbp-50h] BYREF

  v13 = -2LL;
  memset(v14, 0, 0x48uLL);
  memset(v15, 0, 0x342uLL);
  v9 = 0LL;
  pvar = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  if ( (*(int (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)a1 + 40LL))(
         a1,
         &PKEY_SpatialAudio_Endpoint_Settings,
         &pvar) < 0 )
    goto LABEL_18;
  if ( (_WORD)pvar == 65 )
    goto LABEL_18;
  PropVariantClear(&pvar);
  if ( (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a1 + 40LL))(
         a1,
         &PKEY_RS2_SpatialAudioEndpoint_Settings,
         &pvar) < 0
    || (_WORD)pvar != 65
    || (unsigned int)v11 < 0x50
    || (int)Create_SpatialAudioDevicePropertyWriter(a2, a1, &v9) < 0 )
  {
    goto LABEL_18;
  }
  v4 = 0;
  v5 = *(_DWORD *)(v12 + 68);
  if ( !v5 )
    goto LABEL_14;
  while ( 1 )
  {
    v6 = 842LL * v4 + v12 + 80;
    v7 = *(_QWORD *)(v6 + 776) - *(_QWORD *)(v12 + 20);
    if ( !v7 )
      v7 = *(_QWORD *)(v6 + 784) - *(_QWORD *)(v12 + 28);
    if ( !v7 )
      break;
    if ( ++v4 >= v5 )
      goto LABEL_14;
  }
  if ( !v6 )
  {
LABEL_14:
    if ( *(_DWORD *)(v12 + 8) || !v5 )
      goto LABEL_18;
    v6 = v12 + 80;
  }
  v14[0] = *(_DWORD *)(v12 + 8);
  v14[15] = *(_DWORD *)(v12 + 72);
  *(_QWORD *)&v14[1] = *(_QWORD *)(v12 + 12);
  v14[17] = *(_DWORD *)(v12 + 16) != 0;
  *(_OWORD *)&v14[3] = *(_OWORD *)(v12 + 20);
  *(_OWORD *)&v14[7] = *(_OWORD *)(v12 + 36);
  *(_OWORD *)&v15[384] = *(_OWORD *)(v6 + 776);
  *(_DWORD *)&v15[392] = *(_DWORD *)(v6 + 792);
  *(_DWORD *)&v15[394] = *(_DWORD *)(v6 + 796);
  *(_DWORD *)&v15[396] = *(_DWORD *)(v6 + 800);
  *(_DWORD *)&v15[398] = *(_DWORD *)(v6 + 804);
  *(_DWORD *)&v15[400] = *(_DWORD *)(v6 + 808);
  *(_DWORD *)&v15[402] = *(_DWORD *)(v6 + 812);
  *(_DWORD *)&v15[404] = *(_DWORD *)(v6 + 816);
  *(_OWORD *)&v15[406] = *(_OWORD *)(v6 + 820);
  v15[414] = *(_WORD *)(v6 + 836);
  v15[415] = *(_WORD *)(v6 + 838);
  v15[416] = *(_WORD *)(v6 + 840);
  StringCchCopyW(v15, 0x100uLL, (size_t *)(v6 + 8));
  StringCchCopyW(&v15[256], 0x80uLL, (size_t *)(v6 + 520));
  (*(void (__fastcall **)(__int64, _DWORD *, unsigned __int16 *, __int64))(*(_QWORD *)v9 + 64LL))(v9, v14, v15, 834LL);
LABEL_18:
  PropVariantClear(&pvar);
  result = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)a1 + 48LL))(
             a1,
             &PKEY_RS2_SpatialAudioEndpoint_Settings,
             &pvar);
  if ( v9 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return result;
}
