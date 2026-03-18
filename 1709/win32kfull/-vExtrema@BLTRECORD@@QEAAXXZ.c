/*
 * XREFs of ?vExtrema@BLTRECORD@@QEAAXXZ @ 0x1C00020FC
 * Callers:
 *     GrePlgBlt @ 0x1C0001CD0 (GrePlgBlt.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C0002190 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall BLTRECORD::vExtrema(BLTRECORD *this)
{
  int v1; // edi
  int v2; // r8d
  int v3; // r10d
  int v4; // r11d
  int v5; // edx
  int v6; // r9d

  v1 = *((_DWORD *)this + 33);
  v2 = *((_DWORD *)this + 32);
  v3 = *((_DWORD *)this + 30);
  v4 = *((_DWORD *)this + 31);
  v5 = v2 + *((_DWORD *)this + 34) - v3;
  v6 = v1 + *((_DWORD *)this + 35) - v4;
  *((_DWORD *)this + 36) = v5;
  *((_DWORD *)this + 37) = v6;
  *((_DWORD *)this + 56) = (v2 <= v3) ^ (v2 > v5);
  *((_DWORD *)this + 57) = (v1 > v6) ^ (v1 <= v4);
}
