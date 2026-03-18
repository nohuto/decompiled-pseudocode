/*
 * XREFs of ?UMPDDrvDisableSurface@@YAXPEAUDHPDEV__@@@Z @ 0x1C0124B70
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C00B8E38 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00B8EA4 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00B9504 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

void __fastcall UMPDDrvDisableSurface(struct DHPDEV__ *a1)
{
  size_t v2; // [rsp+20h] [rbp-48h]
  UMPDOBJ *v3; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v4[4]; // [rsp+38h] [rbp-30h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v3);
  memset(v4, 0, sizeof(v4));
  if ( v3 )
  {
    LODWORD(v2) = 0;
    v4[0] = 0x400000020LL;
    v4[2] = *(_QWORD *)v3;
    v4[3] = a1;
    UMPDOBJ::Thunk(v3, v4, 32LL, 0LL, v2);
  }
  XUMPDOBJ::~XUMPDOBJ(&v3);
}
