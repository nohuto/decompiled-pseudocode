/*
 * XREFs of ?UpdatePTPRightClickZone@CPTPEngine@@AEAAXH@Z @ 0x1C0137D60
 * Callers:
 *     ?ProcessEnvironment@CPTPEngine@@MEAAJXZ @ 0x1C01353A0 (-ProcessEnvironment@CPTPEngine@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPTPEngine::UpdatePTPRightClickZone(CPTPEngine *this)
{
  int v1; // r11d
  int v3; // r9d
  unsigned int v4; // edx
  int v5; // edx
  unsigned int v6; // ecx
  int v7; // r9d
  unsigned int v8; // edx
  int v9; // ecx
  int v10; // ecx

  v1 = *((_DWORD *)this + 111);
  v3 = *((_DWORD *)this + 11);
  if ( v1 )
  {
    v4 = v3 * (100 - *((_DWORD *)this + 109)) / 100;
  }
  else
  {
    v5 = *((_DWORD *)this + 84);
    if ( (unsigned int)(v5 - 1) > 0x63 )
    {
      v6 = v3 - *((_DWORD *)this + 86);
      v4 = v3 * (100 - *((_DWORD *)this + 38)) / 0x64u;
      if ( v4 >= v6 )
        v4 = v6;
    }
    else
    {
      v4 = v3 * (100 - v5) / 0x64u;
    }
  }
  *((_DWORD *)this + 807) = v3;
  v7 = *((_DWORD *)this + 10);
  *((_DWORD *)this + 805) = v4;
  if ( v1 )
  {
    v8 = v7 * *((_DWORD *)this + 108) / 100;
  }
  else
  {
    v9 = *((_DWORD *)this + 85);
    if ( (unsigned int)(v9 - 1) > 0x63 )
      v9 = *((_DWORD *)this + 39);
    v8 = v7 * v9 / 0x64u;
  }
  v10 = *((_DWORD *)this + 7);
  *((_DWORD *)this + 814) = v8;
  if ( v10 )
  {
    *((_DWORD *)this + 804) = 0;
    *((_DWORD *)this + 806) = v8;
  }
  else
  {
    *((_DWORD *)this + 806) = v7;
    *((_DWORD *)this + 804) = v7 - *((_DWORD *)this + 814);
  }
  *((_DWORD *)this + 820) ^= (*((_DWORD *)this + 820) ^ (v10 << 18)) & 0x40000;
}
