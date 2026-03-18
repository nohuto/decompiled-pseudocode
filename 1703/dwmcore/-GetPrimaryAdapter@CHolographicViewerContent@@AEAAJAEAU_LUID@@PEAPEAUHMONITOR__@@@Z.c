/*
 * XREFs of ?GetPrimaryAdapter@CHolographicViewerContent@@AEAAJAEAU_LUID@@PEAPEAUHMONITOR__@@@Z @ 0x1801A55B8
 * Callers:
 *     ?ProcessCreate@CHolographicViewerContent@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICVIEWERCONTENT_CREATE@@@Z @ 0x18012EA24 (-ProcessCreate@CHolographicViewerContent@@QEAAJPEAVCResourceTable@@PEBUMILCMD_HOLOGRAPHICVIEWERC.c)
 *     ?GetAdapterLuid@CHolographicViewerContent@@UEAAJPEAU_LUID@@@Z @ 0x1801A5590 (-GetAdapterLuid@CHolographicViewerContent@@UEAAJPEAU_LUID@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x1800CE0F0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHolographicViewerContent::GetPrimaryAdapter(
        CHolographicViewerContent *this,
        struct _LUID *a2,
        HMONITOR *a3)
{
  HRESULT v5; // eax
  unsigned int v6; // ebx
  unsigned int v7; // r14d
  unsigned int i; // esi
  int v9; // eax
  int v10; // eax
  __int64 v12; // [rsp+30h] [rbp-D0h] BYREF
  void *ppFactory; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v14[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v15[64]; // [rsp+50h] [rbp-B0h] BYREF
  int v16; // [rsp+90h] [rbp-70h]
  int v17; // [rsp+94h] [rbp-6Ch]
  int v18; // [rsp+A0h] [rbp-60h]
  HMONITOR v19; // [rsp+A8h] [rbp-58h]
  _BYTE v20[296]; // [rsp+B0h] [rbp-50h] BYREF
  struct _LUID v21; // [rsp+1D8h] [rbp+D8h]

  ppFactory = 0LL;
  v12 = 0LL;
  v14[0] = 0LL;
  if ( a3 )
    *a3 = 0LL;
  v5 = CreateDXGIFactory(&GUID_7b7166ec_21c7_44ae_b21a_c9ae321ae369, &ppFactory);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x207u);
  }
  else
  {
    v7 = 0;
LABEL_5:
    if ( (*(unsigned int (__fastcall **)(void *, _QWORD, __int64 *))(*(_QWORD *)ppFactory + 56LL))(ppFactory, v7, &v12) == -2005270526 )
    {
      v6 = -2005270526;
      *a2 = 0LL;
    }
    else
    {
      for ( i = 0; ; ++i )
      {
        if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v12 + 56LL))(v12, i, v14) == -2005270526 )
        {
          ReleaseInterface<IBitmapLock>(&v12);
          ++v7;
          goto LABEL_5;
        }
        v9 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v14[0] + 56LL))(v14[0], v15);
        v6 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x20Eu);
          goto LABEL_21;
        }
        if ( v18 && !v16 && !v17 )
          break;
        ReleaseInterface<IBitmapLock>(v14);
      }
      v10 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v12 + 64LL))(v12, v20);
      v6 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x215u);
      }
      else
      {
        *a2 = v21;
        if ( a3 )
          *a3 = v19;
      }
    }
  }
LABEL_21:
  if ( ppFactory )
  {
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppFactory + 16LL))(ppFactory);
    ppFactory = 0LL;
  }
  ReleaseInterface<IBitmapLock>(v14);
  ReleaseInterface<IBitmapLock>(&v12);
  return v6;
}
