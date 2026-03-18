/*
 * XREFs of ??0CMouseAcceleration@@IEAA@I@Z @ 0x1C005ED7C
 * Callers:
 *     CMouseAcceleration_CreateInstance @ 0x1C00063E0 (CMouseAcceleration_CreateInstance.c)
 * Callees:
 *     memset @ 0x1C00ABB80 (memset.c)
 */

CMouseAcceleration *__fastcall CMouseAcceleration::CMouseAcceleration(CMouseAcceleration *this, unsigned int a2)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // ebx

  *((_BYTE *)this + 8) = 0;
  memset((char *)this + 16, 0, 0x50uLL);
  *((_DWORD *)this + 24) = a2;
  *(_QWORD *)this = &CMouseAcceleration::`vftable';
  *((_DWORD *)this + 27) = 0;
  *((_BYTE *)this + 112) = 1;
  *((_DWORD *)this + 26) = a2;
  if ( a2 <= 2 )
  {
    v6 = (8 * a2) & 0x7FFFFFF;
  }
  else
  {
    v4 = a2 - 3;
    v5 = a2 << 8;
    if ( v4 > 7 )
      v6 = (v5 - 1536) >> 2;
    else
      v6 = (v5 - 512) >> 3;
  }
  *((_DWORD *)this + 27) = v6;
  return this;
}
