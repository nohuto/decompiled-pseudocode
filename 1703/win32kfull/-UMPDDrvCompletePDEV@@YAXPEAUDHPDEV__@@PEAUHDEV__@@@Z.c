/*
 * XREFs of ?UMPDDrvCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1C0113780
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0096D9C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C0096E08 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0098320 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

void __fastcall UMPDDrvCompletePDEV(struct DHPDEV__ *a1, HDEV a2)
{
  size_t v4; // [rsp+20h] [rbp-58h]
  UMPDOBJ *v5; // [rsp+30h] [rbp-48h] BYREF
  _QWORD Src[5]; // [rsp+38h] [rbp-40h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v5);
  memset(Src, 0, sizeof(Src));
  if ( v5 )
  {
    LODWORD(v4) = 0;
    Src[0] = 0x100000028LL;
    Src[2] = *(_QWORD *)v5;
    Src[3] = a1;
    Src[4] = a2;
    UMPDOBJ::Thunk(v5, Src, 0x28u, 0LL, v4);
  }
  XUMPDOBJ::~XUMPDOBJ(&v5);
}
