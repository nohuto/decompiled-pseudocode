/*
 * XREFs of ?CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCResource@@_N@Z @ 0x18002E518
 * Callers:
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x1800227C8 (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800140B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180015990 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18002F0C4 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
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
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // edx
  int v16; // eax
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
  v5 = CResource::Create(5u, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4), &v19);
  v6 = v19;
  v7 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x346u);
    goto LABEL_17;
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
  if ( *((_DWORD *)this + 18) == 1 )
    goto LABEL_19;
  if ( *((_DWORD *)this + 18) != 2 )
  {
    if ( *((_DWORD *)this + 18) != 3 )
      goto LABEL_8;
    if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)this + 8)) )
    {
      v9 = *(_QWORD *)(*(_QWORD *)(v11 + 432) + 80LL);
      goto LABEL_8;
    }
    goto LABEL_19;
  }
  v12 = *(_QWORD *)(v11 + 424);
  if ( !v12 )
  {
LABEL_19:
    v9 = v11;
    goto LABEL_8;
  }
  v9 = *(_QWORD *)(v12 + 32);
LABEL_8:
  v13 = *(_QWORD *)(v9 + 392);
  if ( v13 )
  {
    if ( (*((_BYTE *)this + 40) & 4) != 0 )
      v10 = *(_QWORD *)(v13 + 528);
    else
      v10 = *(_QWORD *)(v13 + 256);
  }
  if ( v10 && (v14 = *(_QWORD *)(v10 + 16)) != 0 )
    v15 = *(_DWORD *)(v14 + 24);
  else
    v15 = 0;
  v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *, __int128 *, _DWORD, _DWORD, int, _DWORD))(**((_QWORD **)v6 + 2) + 1008LL))(
          *((_QWORD *)v6 + 2),
          *((unsigned int *)v6 + 6),
          v21,
          &v20,
          0,
          0,
          v15,
          0);
  v7 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x362u);
  }
  else if ( a2 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v6 + 2) + 1016LL))(
      *((_QWORD *)v6 + 2),
      *((unsigned int *)v6 + 6));
  }
LABEL_17:
  if ( v7 < 0 && v6 )
  {
    CBaseObject::Release(v6);
    return 0LL;
  }
  return v6;
}
