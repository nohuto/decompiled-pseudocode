/*
 * XREFs of _PnpGetMappedPropertyDispatch @ 0x140485E28
 * Callers:
 *     _PnpGetObjectPropertyWorker @ 0x140485C8C (_PnpGetObjectPropertyWorker.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall PnpGetMappedPropertyDispatch(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9,
        __int64 a10,
        int a11)
{
  __int64 v11; // rdi
  unsigned int (__fastcall *v14)(__int64, __int64, _QWORD, __int64, _QWORD *); // rbx
  int v16; // r10d
  _QWORD v18[8]; // [rsp+30h] [rbp-48h] BYREF

  v11 = a3;
  v14 = 0LL;
  memset(v18, 0, sizeof(v18));
  v16 = 0;
  if ( (unsigned int)(v11 - 1) > 9 )
    v16 = -1073741811;
  else
    v14 = *(unsigned int (__fastcall **)(__int64, __int64, _QWORD, __int64, _QWORD *))(a1 + 8 * v11 + 136);
  if ( v16 >= 0 )
  {
    if ( v14 )
    {
      v18[1] = a5;
      v18[2] = a6;
      v18[3] = a7;
      LODWORD(v18[5]) = a9;
      v18[4] = a8;
      v18[6] = a10;
      LODWORD(v18[7]) = a11;
      v18[0] = a4;
      return v14(a1, a2, (unsigned int)v11, 8LL, v18);
    }
    else
    {
      return (unsigned int)-1073741822;
    }
  }
  return (unsigned int)v16;
}
