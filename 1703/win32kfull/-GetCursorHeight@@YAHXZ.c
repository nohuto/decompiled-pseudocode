/*
 * XREFs of ?GetCursorHeight@@YAHXZ @ 0x1C020CDCC
 * Callers:
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C020D3F8 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 * Callees:
 *     GreGetBitmapBits @ 0x1C0026F44 (GreGetBitmapBits.c)
 *     GreExtGetObjectW @ 0x1C00462D8 (GreExtGetObjectW.c)
 *     _InternalGetIconInfo @ 0x1C0048770 (_InternalGetIconInfo.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 GetCursorHeight(void)
{
  unsigned int v0; // ebx
  __int64 v1; // rcx
  unsigned __int64 v2; // rcx
  unsigned int v3; // r9d
  int v4; // ecx
  __int64 v5; // r8
  __int64 v6; // rdx
  unsigned int v9; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v10[8]; // [rsp+38h] [rbp-C8h] BYREF
  int v11; // [rsp+40h] [rbp-C0h]
  int v12[2]; // [rsp+48h] [rbp-B8h]
  __int64 v13; // [rsp+50h] [rbp-B0h]
  unsigned __int16 v14[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v15; // [rsp+5Ch] [rbp-A4h]
  int v16; // [rsp+60h] [rbp-A0h]
  _WORD v17[128]; // [rsp+80h] [rbp-80h] BYREF

  v0 = 16;
  v9 = 0;
  v1 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 328LL);
  if ( v1 && (unsigned int)InternalGetIconInfo(v1, (__int64)v10, 0LL, 0LL, 0LL, 0) )
  {
    if ( (unsigned int)GreExtGetObjectW(*(HBRUSH *)v12, 32LL, v14)
      && (unsigned int)GreGetBitmapBits(*(__int64 *)v12, 0x100u, v17, &v9) )
    {
      v2 = (unsigned __int64)(v15 * v16) >> 4;
      if ( v13 )
      {
        v3 = 0;
      }
      else
      {
        v3 = v2 - 1;
        LODWORD(v2) = (int)v2 / 2;
      }
      if ( (unsigned int)v2 >= 0x80 )
        LODWORD(v2) = 127;
      v4 = v2 - 1;
      v5 = v4;
      if ( v4 >= 0 )
      {
        v6 = v3 < 0x80 ? (int)v3 : 0;
        do
        {
          if ( v6 )
          {
            if ( v17[v6--] )
              break;
          }
          if ( v17[v5] != 0xFFFF )
            break;
          --v4;
          --v5;
        }
        while ( v5 >= 0 );
      }
      v0 = 16LL * (v4 + 1) / (unsigned __int64)v15 - v11;
    }
    if ( v13 )
      GreDeleteObject(v13);
    if ( *(_QWORD *)v12 )
      GreDeleteObject(*(_QWORD *)v12);
  }
  return v0;
}
