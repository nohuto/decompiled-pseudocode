/*
 * XREFs of ?UMPDDrvDestroyFont@@YAXPEAU_FONTOBJ@@@Z @ 0x1C0284D80
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C00B8E38 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00B8EA4 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00B9504 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z @ 0x1C00B9904 (-ThunkDDIOBJ@UMPDOBJ@@AEAAHPEAU_DDIOBJMAP@@PEAPEAXK@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

void __fastcall UMPDDrvDestroyFont(struct _FONTOBJ *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  UMPDOBJ *v4; // rbx
  size_t Size; // [rsp+20h] [rbp-50h]
  __int64 v6; // [rsp+30h] [rbp-40h] BYREF
  UMPDOBJ *v7; // [rsp+38h] [rbp-38h] BYREF
  _QWORD v8[5]; // [rsp+40h] [rbp-30h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v7);
  memset(v8, 0, sizeof(v8));
  v4 = v7;
  if ( v7 )
  {
    if ( a1 )
    {
      v8[0] = 0x2B00000028LL;
      v8[2] = *(_QWORD *)v7;
      v8[3] = *(_QWORD *)&a1[1].ulStyleSize;
      v8[4] = a1;
      if ( (unsigned int)UMPDOBJ::ThunkDDIOBJ(v7, (UMPDOBJ *)((char *)v7 + 176), (const void **)&v8[4], 64LL) )
      {
        LODWORD(Size) = 4;
        UMPDOBJ::Thunk(v4, v8, 40LL, &v6, Size);
      }
    }
  }
  v6 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v6, v2, v3);
  XUMPDOBJ::~XUMPDOBJ(&v7);
}
