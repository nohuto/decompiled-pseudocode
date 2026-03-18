/*
 * XREFs of UMPDEngFreeUserMem @ 0x1C02885B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C00B8E38 (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C00B8EA4 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00B9504 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

_BOOL8 __fastcall UMPDEngFreeUserMem(__int64 a1)
{
  BOOL v2; // ebx
  size_t Size; // [rsp+20h] [rbp-60h]
  int v5; // [rsp+30h] [rbp-50h] BYREF
  UMPDOBJ *v6; // [rsp+38h] [rbp-48h] BYREF
  _OWORD v7[3]; // [rsp+40h] [rbp-40h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v6);
  memset(v7, 0, sizeof(v7));
  v2 = 0;
  if ( v6 )
  {
    if ( *((_DWORD *)v6 + 109) )
    {
      *(_QWORD *)&v7[0] = 0x7800000030LL;
      *(_QWORD *)&v7[1] = *(_QWORD *)v6;
      *((_QWORD *)&v7[1] + 1) = a1;
      v7[2] = 0LL;
      LODWORD(Size) = 4;
      if ( (unsigned int)UMPDOBJ::Thunk(v6, v7, 48LL, &v5, Size) != -1 )
        v2 = v5 != 0;
    }
  }
  XUMPDOBJ::~XUMPDOBJ(&v6);
  return v2;
}
