/*
 * XREFs of ?UpdateBitmapAttributes@CDxHandleBitmapRealization@@MEAA_NVDisplayId@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180045B40
 * Callers:
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180045A60 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?UpdateBitmapAttributes@CDxHandleStereoBitmapRealization@@MEAA_NVDisplayId@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802150E0 (-UpdateBitmapAttributes@CDxHandleStereoBitmapRealization@@MEAA_NVDisplayId@@W4DXGI_ALPHA_MODE@@W.c)
 * Callees:
 *     ?GetDisplayId@CDxHandleBitmapRealization@@UEBA?AVDisplayId@@XZ @ 0x1800457F0 (-GetDisplayId@CDxHandleBitmapRealization@@UEBA-AVDisplayId@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDxHandleBitmapRealization::UpdateBitmapAttributes(__int64 a1, int a2, int a3, int a4)
{
  char v5; // si
  _DWORD *(__fastcall *v9)(__int64, int *); // rax
  _DWORD *DisplayId; // rax
  int v11; // ecx
  int v12; // eax
  __int64 v14; // rbx
  __int64 v15; // rbx
  unsigned int *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  v9 = *(_DWORD *(__fastcall **)(__int64, int *))(*(_QWORD *)a1 + 48LL);
  if ( v9 == CDxHandleBitmapRealization::GetDisplayId )
    DisplayId = CDxHandleBitmapRealization::GetDisplayId(a1, &v20);
  else
    DisplayId = v9(a1, &v20);
  if ( a2 != *DisplayId )
  {
    if ( *(_DWORD *)(*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a1 + 48LL))(a1, &v20) == DisplayId::Invalid )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
    }
    else
    {
      v14 = *(_QWORD *)(a1 + 392);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 104);
        v16 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a1 + 48LL))(a1, &v20);
        (*(void (__fastcall **)(__int64, _QWORD))(v15 + 88))(*(_QWORD *)(a1 + 392) + 104LL, *v16);
      }
    }
    v5 = 1;
  }
  v11 = *(_DWORD *)(a1 + 152);
  v12 = 3;
  if ( v11 )
    v12 = *(_DWORD *)(a1 + 152);
  if ( a3 != v12 )
  {
    v17 = *(_QWORD *)(a1 + 392);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v17 + 104) + 96LL))(v17 + 104);
    v5 = 1;
  }
  if ( a4 != *(_DWORD *)(a1 + 196) )
  {
    v18 = *(_QWORD *)(a1 + 392);
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)(v18 + 104) + 104LL))(v18 + 104);
    v5 = 1;
  }
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 16) + 24LL))(
      a1 + 16,
      (*(_QWORD *)(a1 + 392) + 112LL) & -(__int64)(*(_QWORD *)(a1 + 392) != 0LL));
    v19 = *(_QWORD *)(a1 + 384);
    if ( v19 )
      *(_BYTE *)(v19 + 205) = 0;
  }
  return v5;
}
