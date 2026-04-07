/*
 * XREFs of ?CreateCombinedGeometry@ResourceHelper@@SAJPEBVCResource@@0W4Enum@MilCombineMode@@PEAPEAV2@@Z @ 0x18007F478
 * Callers:
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180027358 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18001E8B0 (-Create@CResource@@SAJW4Enum@DwmResourceType@@PEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ResourceHelper::CreateCombinedGeometry(__int64 a1, __int64 a2, __int64 a3, CBaseObject **a4)
{
  CBaseObject *v7; // rbx
  int v8; // eax
  unsigned int v9; // edi
  int v10; // edx
  __int64 v11; // r9
  int v12; // eax
  CBaseObject *v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = *a4;
  if ( !v14 || (_InterlockedIncrement((volatile signed __int32 *)v14 + 2), (v7 = v14) == 0LL) )
  {
    v8 = CResource::Create(7u, *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4), &v14);
    v9 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x76u);
      goto LABEL_17;
    }
    v7 = v14;
  }
  if ( a2 )
    v10 = *(_DWORD *)(a2 + 24);
  else
    v10 = 0;
  if ( a1 )
    v11 = *(unsigned int *)(a1 + 24);
  else
    v11 = 0LL;
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, int))(**((_QWORD **)v7 + 2) + 1160LL))(
          *((_QWORD *)v7 + 2),
          *((unsigned int *)v7 + 6),
          1LL,
          v11,
          v10);
  v9 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x7Du);
    goto LABEL_18;
  }
  if ( *a4 )
    CBaseObject::Release(*a4);
  *a4 = v7;
  _InterlockedIncrement((volatile signed __int32 *)v7 + 2);
LABEL_17:
  v7 = v14;
LABEL_18:
  if ( v7 )
    CBaseObject::Release(v7);
  return v9;
}
