/*
 * XREFs of ?GetDisplayIndexFromDisplayId@CDisplaySet@@QEBAJVDisplayId@@PEAI@Z @ 0x1800988A4
 * Callers:
 *     ?GetDisplay@CDisplaySet@@QEBAJVDisplayId@@PEAPEBVCDisplay@@@Z @ 0x1800983E4 (-GetDisplay@CDisplaySet@@QEBAJVDisplayId@@PEAPEBVCDisplay@@@Z.c)
 *     ?GetDisplayPixelFormat@CDisplaySet@@QEBA?AW4DXGI_FORMAT@@VDisplayId@@@Z @ 0x18018EBF8 (-GetDisplayPixelFormat@CDisplaySet@@QEBA-AW4DXGI_FORMAT@@VDisplayId@@@Z.c)
 * Callees:
 *     ?GetDisplayId@CDisplay@@QEBA?AVDisplayId@@XZ @ 0x180077F1C (-GetDisplayId@CDisplay@@QEBA-AVDisplayId@@XZ.c)
 */

__int64 __fastcall CDisplaySet::GetDisplayIndexFromDisplayId(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r10
  unsigned int v3; // r11d
  __int64 v4; // rdi
  _DWORD *DisplayId; // rax
  _DWORD *v6; // r8
  int v7; // r10d
  int v8; // r9d
  int v10; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 72);
  v2 = 0LL;
  v3 = -2147024809;
  if ( v1 )
  {
    v4 = *(_QWORD *)(a1 + 48);
    while ( 1 )
    {
      DisplayId = CDisplay::GetDisplayId(*(_QWORD *)(v4 + 8 * v2), &v10);
      if ( v8 == *DisplayId )
        break;
      v2 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v2 >= v1 )
        return v3;
    }
    *v6 = v7;
    return 0;
  }
  return v3;
}
