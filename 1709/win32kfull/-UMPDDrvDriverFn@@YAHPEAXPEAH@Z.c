/*
 * XREFs of ?UMPDDrvDriverFn@@YAHPEAXPEAH@Z @ 0x1C010D44C
 * Callers:
 *     ?UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z @ 0x1C010D2C8 (-UMPD_ldevLoadDriver@@YAPEAU_LDEV@@PEAGW4_LDEVTYPE@@@Z.c)
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C00B8E38 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00B8EA4 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00B9504 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall UMPDDrvDriverFn(void *a1, int *a2)
{
  unsigned int v4; // ebx
  size_t Size; // [rsp+20h] [rbp-48h]
  UMPDOBJ *v7; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v8[4]; // [rsp+38h] [rbp-30h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v7);
  memset(v8, 0, sizeof(v8));
  v4 = 0;
  if ( v7 )
  {
    v8[0] = 0x6C00000020LL;
    v8[2] = *(_QWORD *)v7;
    v8[3] = a1;
    LODWORD(Size) = 416;
    LOBYTE(v4) = (unsigned int)UMPDOBJ::Thunk(v7, v8, 32LL, a2, Size) != -1;
  }
  XUMPDOBJ::~XUMPDOBJ(&v7);
  return v4;
}
