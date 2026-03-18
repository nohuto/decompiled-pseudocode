/*
 * XREFs of ?UMPDDrvIcmDeleteColorTransform@@YAHPEAUDHPDEV__@@PEAX@Z @ 0x1C0289310
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0096D9C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C0096E08 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0098320 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

_BOOL8 __fastcall UMPDDrvIcmDeleteColorTransform(struct DHPDEV__ *a1, void *a2)
{
  BOOL v4; // ebx
  size_t Size; // [rsp+20h] [rbp-50h]
  int v7; // [rsp+30h] [rbp-40h] BYREF
  UMPDOBJ *v8; // [rsp+38h] [rbp-38h] BYREF
  _QWORD Src[5]; // [rsp+40h] [rbp-30h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v8);
  memset(Src, 0, sizeof(Src));
  v4 = 0;
  if ( v8 )
  {
    Src[0] = 0x4100000028LL;
    Src[2] = *(_QWORD *)v8;
    Src[3] = a1;
    Src[4] = a2;
    LODWORD(Size) = 4;
    if ( (unsigned int)UMPDOBJ::Thunk(v8, Src, 0x28u, &v7, Size) != -1 )
      v4 = v7 != 0;
  }
  XUMPDOBJ::~XUMPDOBJ(&v8);
  return v4;
}
