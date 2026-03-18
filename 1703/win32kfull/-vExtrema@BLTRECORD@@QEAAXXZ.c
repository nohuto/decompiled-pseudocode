/*
 * XREFs of ?vExtrema@BLTRECORD@@QEAAXXZ @ 0x1C026C718
 * Callers:
 *     ?bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z @ 0x1C026BB04 (-bRotate@BLTRECORD@@QEAAHAEAVDCOBJ@@0KE@Z.c)
 *     GrePlgBlt @ 0x1C026DEAC (GrePlgBlt.c)
 * Callees:
 *     <none>
 */

void __fastcall BLTRECORD::vExtrema(BLTRECORD *this)
{
  int v1; // ebx
  int v2; // r8d
  int v3; // edx
  int v4; // r9d

  v1 = *((_DWORD *)this + 33);
  v2 = *((_DWORD *)this + 32);
  v3 = v2 + *((_DWORD *)this + 34) - *((_DWORD *)this + 30);
  v4 = v1 + *((_DWORD *)this + 35) - *((_DWORD *)this + 31);
  *((_DWORD *)this + 36) = v3;
  *((_DWORD *)this + 37) = v4;
  *((_DWORD *)this + 56) = v2 > *((_DWORD *)this + 30) == v2 > v3;
  *((_DWORD *)this + 57) = v1 > *((_DWORD *)this + 31) == v1 > v4;
}
