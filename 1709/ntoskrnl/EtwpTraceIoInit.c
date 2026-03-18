/*
 * XREFs of EtwpTraceIoInit @ 0x14027D4D0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 */

void __fastcall EtwpTraceIoInit(__int64 a1)
{
  char v1; // dl
  unsigned __int16 v2; // ax
  __int64 v3; // rdx
  int v4; // ecx
  __int64 v5; // [rsp+30h] [rbp-38h] BYREF
  int v6; // [rsp+38h] [rbp-30h]
  __int64 *v7; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+4Ch] [rbp-1Ch]

  v1 = **(_BYTE **)(a1 + 184);
  if ( v1 == 3 )
  {
    v2 = 268;
  }
  else
  {
    v2 = 271;
    if ( v1 != 9 )
      v2 = 269;
  }
  v3 = *(_QWORD *)(a1 + 152);
  v5 = a1;
  if ( v3 )
    v4 = *(_DWORD *)(v3 + 1600);
  else
    v4 = -1;
  v9 = 0;
  v6 = v4;
  v8 = 12;
  v7 = &v5;
  EtwTraceKernelEvent((__int64)&v7, 1u, 0x400u, v2, 0x1501903u);
}
