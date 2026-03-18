/*
 * XREFs of ?UpdatePTPRightClickZone@CPTPEngine@@AEAAXH@Z @ 0x1C01389C4
 * Callers:
 *     ?ProcessEnvironment@CPTPEngine@@MEAAJXZ @ 0x1C01367C0 (-ProcessEnvironment@CPTPEngine@@MEAAJXZ.c)
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

  v1 = *((_DWORD *)this + 106);
  v3 = *((_DWORD *)this + 11);
  if ( v1 )
  {
    v4 = v3 * (100 - *((_DWORD *)this + 104)) / 100;
LABEL_5:
    *((_DWORD *)this + 787) = v4;
    goto LABEL_9;
  }
  v5 = *((_DWORD *)this + 84);
  if ( (unsigned int)(v5 - 1) <= 0x63 )
  {
    v4 = v3 * (100 - v5) / 0x64u;
    goto LABEL_5;
  }
  v6 = v3 - *((_DWORD *)this + 86);
  if ( v3 * (100 - *((_DWORD *)this + 38)) / 0x64u < v6 )
    v6 = v3 * (100 - *((_DWORD *)this + 38)) / 0x64u;
  *((_DWORD *)this + 787) = v6;
LABEL_9:
  *((_DWORD *)this + 789) = v3;
  v7 = *((_DWORD *)this + 10);
  if ( v1 )
  {
    v8 = v7 * *((_DWORD *)this + 103) / 100;
  }
  else
  {
    v9 = *((_DWORD *)this + 85);
    if ( (unsigned int)(v9 - 1) > 0x63 )
      v9 = *((_DWORD *)this + 39);
    v8 = v7 * v9 / 0x64u;
  }
  v10 = *((_DWORD *)this + 7);
  *((_DWORD *)this + 796) = v8;
  if ( v10 )
  {
    *((_DWORD *)this + 786) = 0;
    *((_DWORD *)this + 788) = v8;
  }
  else
  {
    *((_DWORD *)this + 788) = v7;
    *((_DWORD *)this + 786) = v7 - *((_DWORD *)this + 796);
  }
  *((_DWORD *)this + 805) ^= (*((_DWORD *)this + 805) ^ (v10 << 18)) & 0x40000;
}
