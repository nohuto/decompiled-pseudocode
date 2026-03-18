/*
 * XREFs of ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00441CC
 * Callers:
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C01D3598 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C01D3910 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 * Callees:
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z @ 0x1C00074CC (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     ?Initialize@DMMVIDPNSOURCEMODE@@QEAAJAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x1C0021098 (-Initialize@DMMVIDPNSOURCEMODE@@QEAAJAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@W4_D3DKMDT_VIDPN_SO.c)
 *     ??0DMMVIDPNSOURCEMODE@@QEAA@I@Z @ 0x1C0021200 (--0DMMVIDPNSOURCEMODE@@QEAA@I@Z.c)
 */

bool __fastcall DMMVIDPNSOURCEMODE::operator==(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // bl
  __int64 v13; // rbp
  __int64 v14; // rax
  _BYTE v15[112]; // [rsp+20h] [rbp-98h] BYREF

  if ( *(_DWORD *)(a1 + 72) != *(_DWORD *)(a2 + 4) )
    return 0;
  DMMVIDPNSOURCEMODE::DMMVIDPNSOURCEMODE((DMMVIDPNSOURCEMODE *)v15, 0LL, a3, a4);
  v7 = DMMVIDPNSOURCEMODE::Initialize(
         (DMMVIDPNSOURCEMODE *)v15,
         (const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *)(a2 + 8),
         (enum _D3DKMDT_VIDPN_SOURCE_MODE_TYPE)*(_DWORD *)(a2 + 4));
  v12 = 0;
  v13 = v7;
  if ( v7 >= 0 )
    return DMMVIDPNSOURCEMODE::operator==(a1, (__int64)v15, v10, v11);
  v14 = WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  *(_QWORD *)(v14 + 24) = a2;
  *(_QWORD *)(v14 + 32) = v13;
  return v12;
}
