/*
 * XREFs of ??1DCMEMOBJ@@QEAA@XZ @ 0x1C00551C0
 * Callers:
 *     GreCreateDisplayDC @ 0x1C0055870 (GreCreateDisplayDC.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004C224 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C00518E8 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 */

void __fastcall DCMEMOBJ::~DCMEMOBJ(struct HOBJ__ **this)
{
  struct HOBJ__ *v1; // rax
  bool v2; // zf
  struct HOBJ__ *v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  int v5; // [rsp+2Ch] [rbp-Ch]
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+48h] [rbp+10h] BYREF

  v1 = *this;
  if ( *this )
  {
    v4 = 0;
    v5 = 0;
    *this = 0LL;
    v2 = *((_DWORD *)this + 4) == 0;
    v3 = v1;
    if ( v2 )
    {
      v6 = 0x400000;
      bDeleteDCOBJ(&v3, &v6, &v7);
      v1 = v3;
    }
    if ( v1 )
      XDCOBJ::vUnlockFast((XDCOBJ *)&v3);
  }
}
