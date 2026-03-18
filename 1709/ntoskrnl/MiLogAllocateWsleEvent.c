/*
 * XREFs of MiLogAllocateWsleEvent @ 0x1402157B8
 * Callers:
 *     MiAllocateWsle @ 0x140047A60 (MiAllocateWsle.c)
 * Callees:
 *     MiIdentifyPfnWrapper @ 0x1400011F0 (MiIdentifyPfnWrapper.c)
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     MiFillPageExtraInfo @ 0x140215790 (MiFillPageExtraInfo.c)
 */

void __fastcall MiLogAllocateWsleEvent(__int64 a1, int a2, __int64 a3)
{
  int v6; // edi
  unsigned __int16 v7; // ax
  unsigned __int64 v8[4]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 *v9; // [rsp+50h] [rbp-28h] BYREF
  int v10; // [rsp+58h] [rbp-20h]
  int v11; // [rsp+5Ch] [rbp-1Ch]

  v6 = 32;
  memset(v8, 0, sizeof(v8));
  MiIdentifyPfnWrapper(a1, (__int64)v8);
  if ( (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) != 0 )
  {
    MiFillPageExtraInfo(&v8[3], a2, a3);
    v7 = 642;
  }
  else
  {
    v7 = 630;
    v6 = 24;
  }
  v11 = 0;
  v9 = v8;
  v10 = v6;
  EtwTraceKernelEvent((__int64)&v9, 1u, 0x28000001u, v7, 0x11401B02u);
}
