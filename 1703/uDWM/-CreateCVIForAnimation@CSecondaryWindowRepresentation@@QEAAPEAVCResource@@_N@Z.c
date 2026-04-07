/*
 * XREFs of ?CreateCVIForAnimation@CSecondaryWindowRepresentation@@QEAAPEAVCResource@@_N@Z @ 0x180039E20
 * Callers:
 *     ?EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ @ 0x18002DFD8 (-EnsureRenderData@CTopLevelWindow3D@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001E8B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x180035C98 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18003A9F8 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

struct CResource *__fastcall CSecondaryWindowRepresentation::CreateCVIForAnimation(
        CSecondaryWindowRepresentation *this,
        char a2)
{
  int v2; // eax
  __int64 v5; // rdx
  int v6; // eax
  CBaseObject *v7; // rdi
  int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // edx
  int v16; // eax
  __int64 v18; // rcx
  CBaseObject *v19; // [rsp+58h] [rbp-9h] BYREF
  __int128 v20; // [rsp+60h] [rbp-1h]
  __int128 v21; // [rsp+70h] [rbp+Fh] BYREF
  __int128 v22; // [rsp+88h] [rbp+27h] BYREF

  v2 = *((_DWORD *)this + 22);
  v19 = 0LL;
  LODWORD(v21) = v2;
  DWORD1(v21) = *((_DWORD *)this + 24);
  DWORD2(v21) = *((_DWORD *)this + 20) - *((_DWORD *)this + 23);
  HIDWORD(v21) = *((_DWORD *)this + 21) - *((_DWORD *)this + 25);
  v5 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
  v20 = v21;
  v6 = CResource::Create(5u, v5, &v19);
  v7 = v19;
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x347u);
    goto LABEL_15;
  }
  v9 = 0LL;
  v22 = 0LL;
  do
  {
    *(float *)((char *)&v21 + v9) = (float)*(int *)((char *)&v20 + v9);
    v9 += 4LL;
  }
  while ( v9 < 16 );
  CSecondaryWindowRepresentation::EnsureOwnedWindowVisual(this);
  v10 = 0LL;
  v11 = *((_QWORD *)this + 6);
  v12 = *((_QWORD *)this + 8);
  if ( *((_DWORD *)this + 18) != 1 )
  {
    if ( *((_DWORD *)this + 18) == 2 )
    {
      v18 = *(_QWORD *)(v12 + 424);
      if ( v18 )
      {
        v10 = *(_QWORD *)(v18 + 32);
        goto LABEL_6;
      }
    }
    else
    {
      if ( *((_DWORD *)this + 18) != 3 )
        goto LABEL_6;
      if ( !CWindowData::IsImmersiveWindow(*((CWindowData **)this + 8)) )
      {
        v10 = *(_QWORD *)(*(_QWORD *)(v12 + 432) + 80LL);
        goto LABEL_6;
      }
    }
  }
  v10 = v12;
LABEL_6:
  v13 = *(_QWORD *)(v10 + 400);
  if ( v13 )
  {
    if ( (*((_BYTE *)this + 40) & 4) != 0 )
      v11 = *(_QWORD *)(v13 + 528);
    else
      v11 = *(_QWORD *)(v13 + 256);
  }
  if ( v11 && (v14 = *(_QWORD *)(v11 + 16)) != 0 )
    v15 = *(_DWORD *)(v14 + 24);
  else
    v15 = 0;
  v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *, __int128 *, _DWORD, _DWORD, int, _DWORD))(**((_QWORD **)v7 + 2) + 992LL))(
          *((_QWORD *)v7 + 2),
          *((unsigned int *)v7 + 6),
          &v21,
          &v22,
          0,
          0,
          v15,
          0);
  v8 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x363u);
  }
  else if ( a2 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)v7 + 2) + 1000LL))(
      *((_QWORD *)v7 + 2),
      *((unsigned int *)v7 + 6));
  }
LABEL_15:
  if ( v8 < 0 && v7 )
  {
    CBaseObject::Release(v7);
    return 0LL;
  }
  return v7;
}
