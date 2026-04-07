/*
 * XREFs of ?CreateOrUpdateImageBrush@CBitmapSource@@QEAAJPEAPEAVCResource@@00W4Enum@MilStretch@@@Z @ 0x180074130
 * Callers:
 *     ?UpdateBitmap@CImage@@QEAAJXZ @ 0x18000D5B4 (-UpdateBitmap@CImage@@QEAAJXZ.c)
 * Callees:
 *     ?HasSourceClip@CBitmapSource@@QEBA_NXZ @ 0x180013E34 (-HasSourceClip@CBitmapSource@@QEBA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800140B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSource::CreateOrUpdateImageBrush(
        int *a1,
        CBaseObject **a2,
        CBaseObject **a3,
        CBaseObject **a4,
        unsigned int a5)
{
  CBaseObject *v5; // rax
  CBaseObject *v10; // rax
  CBaseObject *v11; // rax
  int v12; // r12d
  int v13; // ebx
  int v14; // eax
  unsigned int v15; // ebx
  int v16; // eax
  int v17; // eax
  int v18; // r11d
  __int64 i; // rax
  int v20; // r9d
  int v21; // eax
  CBaseObject *v22; // rdx
  CBaseObject *v23; // rcx
  CBaseObject *v24; // rcx
  CBaseObject *v26; // [rsp+90h] [rbp-21h] BYREF
  CBaseObject *v27; // [rsp+98h] [rbp-19h] BYREF
  CBaseObject *v28; // [rsp+A0h] [rbp-11h] BYREF
  __int128 v29; // [rsp+A8h] [rbp-9h] BYREF
  __int128 v30; // [rsp+B8h] [rbp+7h] BYREF

  v5 = *a2;
  v26 = 0LL;
  v27 = 0LL;
  v28 = v5;
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v5 + 2);
  }
  else
  {
    v14 = CResource::Create(0x11u, *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL), &v28);
    v15 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x1D1u);
      goto LABEL_41;
    }
  }
  if ( a3 )
  {
    v10 = *a3;
    v26 = v10;
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
    }
    else
    {
      v16 = CResource::Create(0x1Bu, *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL), &v26);
      v15 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x1DAu);
        goto LABEL_41;
      }
    }
  }
  if ( a4 )
  {
    v11 = *a4;
    v27 = v11;
    if ( v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v11 + 2);
    }
    else
    {
      v17 = CResource::Create(0xAu, *(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL), &v27);
      v15 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x1E4u);
        goto LABEL_41;
      }
    }
  }
  v12 = 0;
  v29 = 0uLL;
  v30 = 0uLL;
  if ( v26 )
  {
    v12 = *((_DWORD *)v26 + 6);
    v13 = 0;
    v29 = 0uLL;
  }
  else
  {
    v13 = 1;
    v29 = _xmm;
  }
  if ( CBitmapSource::HasSourceClip((CBitmapSource *)a1) )
  {
    v18 = 0;
    for ( i = 0LL; i < 4; ++i )
      *((float *)&v30 + i) = (float)a1[i + 20];
  }
  else
  {
    v18 = 1;
    v30 = _xmm;
  }
  if ( v27 )
    v20 = *((_DWORD *)v27 + 6);
  else
    v20 = 0;
  v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int128 *, __int128 *, int, _DWORD, _DWORD, int, int, int, _DWORD, unsigned int, _DWORD, int, int, _DWORD))(**((_QWORD **)v28 + 2) + 1208LL))(
          *((_QWORD *)v28 + 2),
          *((unsigned int *)v28 + 6),
          a5,
          &v29,
          &v30,
          v20,
          0,
          0,
          v13,
          v18,
          v12,
          0,
          a5,
          0,
          1,
          1,
          *(_DWORD *)(*((_QWORD *)a1 + 2) + 24LL));
  v15 = v21;
  if ( v21 >= 0 )
  {
    if ( *a2 )
      CBaseObject::Release(*a2);
    v22 = v28;
    *a2 = v28;
    _InterlockedIncrement((volatile signed __int32 *)v22 + 2);
    if ( a3 )
    {
      if ( *a3 )
        CBaseObject::Release(*a3);
      v23 = v26;
      *a3 = v26;
      if ( v23 )
        _InterlockedIncrement((volatile signed __int32 *)v23 + 2);
    }
    if ( a4 )
    {
      if ( *a4 )
        CBaseObject::Release(*a4);
      v24 = v27;
      *a4 = v27;
      if ( v24 )
        _InterlockedIncrement((volatile signed __int32 *)v24 + 2);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v21, 0x227u);
  }
LABEL_41:
  if ( v28 )
    CBaseObject::Release(v28);
  if ( v26 )
    CBaseObject::Release(v26);
  if ( v27 )
    CBaseObject::Release(v27);
  return v15;
}
