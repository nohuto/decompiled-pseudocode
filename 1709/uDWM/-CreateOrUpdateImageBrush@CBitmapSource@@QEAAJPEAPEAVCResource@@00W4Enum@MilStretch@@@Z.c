/*
 * XREFs of ?CreateOrUpdateImageBrush@CBitmapSource@@QEAAJPEAPEAVCResource@@00W4Enum@MilStretch@@@Z @ 0x18006D370
 * Callers:
 *     ?UpdateBitmap@CImage@@QEAAJXZ @ 0x1800135C4 (-UpdateBitmap@CImage@@QEAAJXZ.c)
 * Callees:
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800250B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?HasSourceClip@CBitmapSource@@QEBA_NXZ @ 0x180025244 (-HasSourceClip@CBitmapSource@@QEBA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSource::CreateOrUpdateImageBrush(
        int *a1,
        CBaseObject **a2,
        CBaseObject **a3,
        CBaseObject **a4,
        unsigned int a5)
{
  CBaseObject *v5; // rax
  int v6; // r13d
  CBaseObject *v7; // rbx
  int v12; // eax
  unsigned int v13; // edi
  CBaseObject *v14; // rax
  int v15; // eax
  CBaseObject *v16; // rbx
  int v17; // eax
  int v18; // edi
  __int64 v19; // r8
  int v20; // r11d
  __int64 v21; // rax
  int v22; // r9d
  int v23; // eax
  CBaseObject *v24; // rdx
  CBaseObject *v25; // rcx
  CBaseObject *v27; // [rsp+90h] [rbp-31h] BYREF
  CBaseObject *v28; // [rsp+98h] [rbp-29h] BYREF
  CBaseObject *v29; // [rsp+A0h] [rbp-21h] BYREF
  __int128 v30; // [rsp+A8h] [rbp-19h] BYREF
  __int128 v31; // [rsp+B8h] [rbp-9h] BYREF

  v5 = *a2;
  v6 = 0;
  v28 = 0LL;
  v7 = 0LL;
  v27 = 0LL;
  v29 = v5;
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v5 + 2);
    v7 = v27;
  }
  if ( !v29 )
  {
    v12 = CResource::Create(0x11u, *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL), &v29);
    v13 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x20Eu);
      goto LABEL_44;
    }
  }
  if ( a3 )
  {
    v14 = *a3;
    v28 = v14;
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
      v7 = v27;
    }
    if ( !v28 )
    {
      v15 = CResource::Create(0x1Bu, *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL), &v28);
      v13 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x217u);
        goto LABEL_44;
      }
    }
  }
  if ( a4 )
  {
    v16 = *a4;
    v27 = v16;
    if ( v16 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v16 + 2);
      v7 = v27;
    }
    else
    {
      v17 = CResource::Create(9u, *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL), &v27);
      v13 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x221u);
LABEL_43:
        v7 = v27;
        goto LABEL_44;
      }
      v7 = v27;
    }
  }
  v30 = 0uLL;
  v31 = 0uLL;
  if ( v28 )
  {
    v6 = *((_DWORD *)v28 + 6);
    v18 = 0;
    v30 = 0uLL;
  }
  else
  {
    v18 = 1;
    v30 = _xmm;
  }
  if ( CBitmapSource::HasSourceClip((CBitmapSource *)a1) )
  {
    v20 = v19;
    v21 = v19;
    do
    {
      *((float *)&v31 + v21) = (float)a1[v21 + 20];
      ++v21;
    }
    while ( v21 < 4 );
  }
  else
  {
    v20 = 1;
    v31 = _xmm;
  }
  if ( v7 )
    v22 = *((_DWORD *)v7 + 6);
  else
    v22 = v19;
  v23 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, __int128 *, int, _DWORD, _DWORD, int, int, int, _DWORD, unsigned int, _DWORD, int, int, _DWORD))(**((_QWORD **)v29 + 2) + 1192LL))(
          *((_QWORD *)v29 + 2),
          *((unsigned int *)v29 + 6),
          a5,
          &v30,
          &v31,
          v22,
          0,
          0,
          v18,
          v20,
          v6,
          0,
          a5,
          v19,
          1,
          1,
          *(_DWORD *)(*((_QWORD *)a1 + 2) + 24LL));
  v13 = v23;
  if ( v23 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x264u);
    goto LABEL_44;
  }
  if ( *a2 )
    CBaseObject::Release(*a2);
  v24 = v29;
  *a2 = v29;
  _InterlockedIncrement((volatile signed __int32 *)v24 + 2);
  if ( a3 )
  {
    if ( *a3 )
      CBaseObject::Release(*a3);
    v25 = v28;
    *a3 = v28;
    if ( v25 )
      _InterlockedIncrement((volatile signed __int32 *)v25 + 2);
  }
  if ( !a4 )
    goto LABEL_43;
  if ( *a4 )
    CBaseObject::Release(*a4);
  v7 = v27;
  *a4 = v27;
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
    goto LABEL_43;
  }
LABEL_44:
  if ( v29 )
    CBaseObject::Release(v29);
  if ( v28 )
    CBaseObject::Release(v28);
  if ( v7 )
    CBaseObject::Release(v7);
  return v13;
}
