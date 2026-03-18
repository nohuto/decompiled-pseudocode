/*
 * XREFs of ?redloop@@YAHXZ @ 0x1C00C3D68
 * Callers:
 *     ?inv_cmap@@YAXHPEAURGBX@@HPEAKPEAE@Z @ 0x1C00C3BD0 (-inv_cmap@@YAXHPEAURGBX@@HPEAKPEAE@Z.c)
 * Callees:
 *     ?greenloop@@YAHH@Z @ 0x1C00C3EB0 (-greenloop@@YAHH@Z.c)
 */

__int64 redloop(void)
{
  unsigned int v0; // edi
  int v1; // r13d
  int v2; // esi
  __int64 v3; // r12
  int v4; // r15d
  int v5; // ebx
  int v6; // r14d
  int v7; // ebp
  int v8; // ecx
  int v9; // ebx
  int v10; // esi
  bool v11; // sf
  int i; // ecx

  v0 = 0;
  v1 = dword_1C03279B4;
  v2 = dword_1C03279B4;
  v3 = qword_1C03279E0;
  v4 = dword_1C03279C0;
  v5 = dword_1C03279CC;
  v6 = 2 * dword_1C0327A0C;
  v7 = dword_1C03279CC;
  qword_1C03279F0 = qword_1C03279F8;
  v8 = 1;
  dword_1C03279BC = dword_1C03279C0;
  for ( qword_1C03279D8 = qword_1C03279E0; v2 < 32; v8 = 0 )
  {
    if ( (unsigned int)greenloop(v8) )
    {
      v0 = 1;
    }
    else if ( v0 )
    {
      break;
    }
    dword_1C03279BC += v7;
    ++v2;
    qword_1C03279D8 += 4096LL;
    v7 += v6;
    qword_1C03279F0 += 1024LL;
  }
  v9 = v5 - v6;
  qword_1C03279D8 = v3 - 4096;
  v10 = v1 - 1;
  dword_1C03279BC = v4 - v9;
  qword_1C03279F0 = qword_1C03279F8 - 1024;
  v11 = v1 - 1 < 0;
  for ( i = 1; ; i = 0 )
  {
    dword_1C0327D28 = v9;
    if ( v11 )
      break;
    if ( (unsigned int)greenloop(i) )
    {
      v0 = 1;
    }
    else if ( v0 )
    {
      return v0;
    }
    qword_1C03279D8 -= 4096LL;
    v9 -= v6;
    dword_1C03279BC -= v9;
    qword_1C03279F0 -= 1024LL;
    v11 = --v10 < 0;
  }
  return v0;
}
