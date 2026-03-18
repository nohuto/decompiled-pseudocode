/*
 * XREFs of MiLogAllocateWsleEvent @ 0x14020E098
 * Callers:
 *     MiAllocateWsle @ 0x1400BCCF0 (MiAllocateWsle.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     MiIdentifyPfnWrapper @ 0x1400DBBE0 (MiIdentifyPfnWrapper.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiFillPageExtraInfo @ 0x14020E060 (MiFillPageExtraInfo.c)
 */

void *__fastcall MiLogAllocateWsleEvent(__int64 a1, int a2, __int64 a3)
{
  int v6; // edi
  __int16 v7; // ax
  unsigned __int64 v9[4]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 *v10; // [rsp+50h] [rbp-28h] BYREF
  int v11; // [rsp+58h] [rbp-20h]
  int v12; // [rsp+5Ch] [rbp-1Ch]

  v6 = 32;
  memset(v9, 0, sizeof(v9));
  MiIdentifyPfnWrapper(a1, (__int64)v9);
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
  {
    MiFillPageExtraInfo(&v9[3], a2, a3);
    v7 = 642;
  }
  else
  {
    v7 = 630;
    v6 = 24;
  }
  v12 = 0;
  v10 = v9;
  v11 = v6;
  return EtwTraceKernelEvent((int)&v10, 1, 0x28000001u, v7, 289413890);
}
