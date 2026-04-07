/*
 * XREFs of ?ComputeDisplayBounds@CDWMDisplaySet@@AEAAXXZ @ 0x18000F780
 * Callers:
 *     ?EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z @ 0x180022F44 (-EnumerateMonitors@CDesktopManager@@AEAAJPEAPEAVCDWMDisplaySet@@@Z.c)
 * Callees:
 *     ?IsRectEmpty@@YA_NAEBUtagRECT@@@Z @ 0x18001700C (-IsRectEmpty@@YA_NAEBUtagRECT@@@Z.c)
 */

void __fastcall CDWMDisplaySet::ComputeDisplayBounds(CDWMDisplaySet *this)
{
  __int64 v1; // r10
  CDWMDisplaySet *i; // r11
  const struct tagRECT *v3; // r8
  int v4; // edx
  _DWORD *v5; // r8
  __int64 v6; // r9
  int v7; // r10d
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax

  v1 = 0LL;
  for ( i = this; (unsigned int)v1 < *((_DWORD *)i + 16); v1 = (unsigned int)(v7 + 1) )
  {
    IsRectEmpty((const struct tagRECT *)(*(_QWORD *)(*((_QWORD *)i + 5) + 8 * v1) + 56LL));
    if ( IsRectEmpty(v3) )
    {
      if ( v4 )
      {
        v5[3] = 0;
        v5[2] = 0;
        v5[1] = 0;
        *v5 = 0;
      }
      else
      {
        *(_OWORD *)v5 = *(_OWORD *)(v6 + 56);
      }
    }
    else if ( !v4 )
    {
      v8 = *(_DWORD *)(v6 + 56);
      if ( v8 < *v5 )
        *v5 = v8;
      v9 = *(_DWORD *)(v6 + 60);
      if ( v9 < v5[1] )
        v5[1] = v9;
      v10 = *(_DWORD *)(v6 + 64);
      if ( v10 > v5[2] )
        v5[2] = v10;
      v11 = *(_DWORD *)(v6 + 68);
      if ( v11 > v5[3] )
        v5[3] = v11;
    }
  }
}
