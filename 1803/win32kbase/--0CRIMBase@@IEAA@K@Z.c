/*
 * XREFs of ??0CRIMBase@@IEAA@K@Z @ 0x1C01218A4
 * Callers:
 *     ??0CBaseInput@@IEAA@K@Z @ 0x1C012184C (--0CBaseInput@@IEAA@K@Z.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C009FB24 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

CRIMBase *__fastcall CRIMBase::CRIMBase(CRIMBase *this, int a2)
{
  char *v3; // rbx

  *(_QWORD *)this = &CRIMBase::`vftable';
  *((_QWORD *)this + 1) = -1LL;
  v3 = (char *)this + 144;
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = -1LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 34) = a2;
  *((_DWORD *)this + 14) = 64;
  memset((char *)this + 144, 0, 0x380uLL);
  `vector constructor iterator'(
    v3,
    64LL,
    14LL,
    (void (__fastcall *)(char *))CRIMBase::SensorDispatcherObject::SensorDispatcherObject);
  return this;
}
