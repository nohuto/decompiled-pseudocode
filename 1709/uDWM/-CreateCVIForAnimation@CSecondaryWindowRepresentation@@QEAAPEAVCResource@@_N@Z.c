/*
 * XREFs of ?CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCResource@@_N@Z @ 0x18000E2D8
 * Callers:
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x18002250C (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 * Callees:
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18000EEE4 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180010B70 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800250B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

struct CResource *__fastcall CSecondaryWindowRepresentation::CreateCVIForAnimation(
        CSecondaryWindowRepresentation *this,
        char a2)
{
  int v2; // eax
  int v5; // eax
  CBaseObject *v6; // rdi
  int v7; // ebx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // edx
  int v15; // eax
  __int64 v17; // rcx
  _DWORD v18[4]; // [rsp+58h] [rbp+7h]
  CBaseObject *v19; // [rsp+68h] [rbp+17h] BYREF
  __int128 v20; // [rsp+70h] [rbp+1Fh] BYREF
  _DWORD v21[4]; // [rsp+80h] [rbp+2Fh] BYREF

  v2 = *((_DWORD *)this + 22);
  v19 = 0LL;
  v18[0] = v2;
  v18[1] = *((_DWORD *)this + 24);
  v18[2] = *((_DWORD *)this + 20) - *((_DWORD *)this + 23);
  v18[3] = *((_DWORD *)this + 21) - *((_DWORD *)this + 25);
  v5 = CResource::Create(5LL, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4), &v19);
  v6 = v19;
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x347u);
    goto LABEL_15;
  }
  v8 = 0LL;
  v20 = 0LL;
  do
  {
    *(float *)&v21[v8] = (float)(int)v18[v8];
    ++v8;
  }
  while ( v8 < 4 );
  CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(this);
  v9 = 0LL;
  v10 = *((_QWORD *)this + 6);
  v11 = *((_QWORD *)this + 8);
  if ( *((_DWORD *)this + 18) != 1 )
  {
    if ( *((_DWORD *)this + 18) == 2 )
    {
      v17 = *(_QWORD *)(v11 + 424);
      if ( v17 )
      {
        v9 = *(_QWORD *)(v17 + 32);
        goto LABEL_6;
      }
    }
    else
    {
      if ( *((_DWORD *)this + 18) != 3 )
        goto LABEL_6;
      if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)this + 8)) )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(v11 + 432) + 80LL);
        goto LABEL_6;
      }
    }
  }
  v9 = v11;
LABEL_6:
  v12 = *(_QWORD *)(v9 + 400);
  if ( v12 )
  {
    if ( (*((_BYTE *)this + 40) & 4) != 0 )
      v10 = *(_QWORD *)(v12 + 528);
    else
      v10 = *(_QWORD *)(v12 + 256);
  }
  if ( v10 && (v13 = *(_QWORD *)(v10 + 16)) != 0 )
    v14 = *(_DWORD *)(v13 + 24);
  else
    v14 = 0;
  v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *, __int128 *, _DWORD, _DWORD, int, _DWORD))(**((_QWORD **)v6 + 2) + 992LL))(
          *((_QWORD *)v6 + 2),
          *((unsigned int *)v6 + 6),
          v21,
          &v20,
          0,
          0,
          v14,
          0);
  v7 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x363u);
  }
  else if ( a2 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v6 + 2) + 1000LL))(
      *((_QWORD *)v6 + 2),
      *((unsigned int *)v6 + 6));
  }
LABEL_15:
  if ( v7 < 0 && v6 )
  {
    CBaseObject::Release(v6);
    return 0LL;
  }
  return v6;
}
