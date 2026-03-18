/*
 * XREFs of ?RotateCursorShapeWorker@@YAXPEAUCURSOR_INFO@@PEBU1@@Z @ 0x1C01B3AA8
 * Callers:
 *     ?RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGK_DRIVERCAPS@@@Z @ 0x1C01B384C (-RotateCursorShape@@YAJPEBU_DXGKARG_SETPOINTERSHAPE@@PEAU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATIO.c)
 * Callees:
 *     ?GetRotatedPoint@@YAXIIPEAI0W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@II@Z @ 0x1C01B37A4 (-GetRotatedPoint@@YAXIIPEAI0W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@II@Z.c)
 */

void __fastcall RotateCursorShapeWorker(struct CURSOR_INFO *a1, const struct CURSOR_INFO *a2)
{
  unsigned int v2; // r14d
  unsigned int v3; // esi
  unsigned int i; // r12d
  unsigned int v7; // ebp
  unsigned __int64 v8; // r13
  char v9; // bl
  _BYTE *v10; // r8
  _DWORD *v11; // rbx
  unsigned int v12; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+90h] [rbp+18h] BYREF

  v2 = *((_DWORD *)a1 + 2);
  v3 = 0;
  for ( i = *(_DWORD *)a1; v3 < v2; ++v3 )
  {
    v7 = 0;
    if ( i )
    {
      v8 = 0LL;
      do
      {
        if ( *((_DWORD *)a1 + 9) )
        {
          v9 = (*(_BYTE *)((v8 >> 3) + v3 * *((_DWORD *)a2 + 4) + *((_QWORD *)a2 + 3)) >> (7 - (v7 & 7))) & 1;
          GetRotatedPoint(
            v7,
            v3,
            &v13,
            &v12,
            *((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)a1 + 8),
            *(_DWORD *)a2,
            *((_DWORD *)a2 + 2));
          v10 = (_BYTE *)(*((_QWORD *)a1 + 3) + ((unsigned __int64)v13 >> 3) + v12 * *((_DWORD *)a1 + 5));
          *v10 = (v9 << (7 - (v13 & 7))) | *v10 & ~(1 << (7 - (v13 & 7)));
        }
        else
        {
          v11 = (_DWORD *)(*((_QWORD *)a2 + 3) + 4 * v7 + (unsigned __int64)(v3 * *((_DWORD *)a2 + 4)));
          GetRotatedPoint(
            v7,
            v3,
            &v13,
            &v12,
            *((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)a1 + 8),
            *(_DWORD *)a2,
            *((_DWORD *)a2 + 2));
          *(_DWORD *)(4 * v13 + (unsigned __int64)(v12 * *((_DWORD *)a1 + 5)) + *((_QWORD *)a1 + 3)) = *v11;
        }
        ++v7;
        ++v8;
      }
      while ( v7 < i );
    }
  }
}
