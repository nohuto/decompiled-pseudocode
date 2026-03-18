/*
 * XREFs of ?UMPDAllocUserMem@UMPDOBJ@@QEAAPEAXK@Z @ 0x1C0284980
 * Callers:
 *     ?bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z @ 0x1C02881A0 (-bSendLargeBitmap@UMPDOBJ@@QEAAHPEAU_SURFOBJ@@PEAH@Z.c)
 * Callees:
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C00B9504 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     ?ResetHeap@UMPDOBJ@@QEAAXXZ @ 0x1C01430D8 (-ResetHeap@UMPDOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

void *__fastcall UMPDOBJ::UMPDAllocUserMem(UMPDOBJ *this, unsigned int a2)
{
  __int64 v2; // rdi
  size_t Size; // [rsp+20h] [rbp-58h]
  _QWORD v6[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v7[4]; // [rsp+40h] [rbp-38h] BYREF

  v2 = a2;
  v6[1] = this;
  v6[0] = 0LL;
  memset(v7, 0, sizeof(v7));
  v7[0] = 0x7500000020LL;
  v7[2] = *(_QWORD *)this;
  LODWORD(v7[3]) = v2;
  LODWORD(Size) = 8;
  UMPDOBJ::Thunk(this, v7, 32LL, v6, Size);
  if ( (_DWORD)v2 && (v6[0] + v2 > MmUserProbeAddress || (unsigned __int64)(v6[0] + v2) < v6[0]) )
    *(_BYTE *)MmUserProbeAddress = 0;
  UMPDOBJ::ResetHeap(this);
  return (void *)v6[0];
}
