/*
 * XREFs of EtwTraceSiloTimedEvent @ 0x1402AF354
 * Callers:
 *     PfHardFaultLog @ 0x1400BEC70 (PfHardFaultLog.c)
 * Callees:
 *     EtwTraceTimedEvent @ 0x1400B76E4 (EtwTraceTimedEvent.c)
 *     EtwpLogKernelEvent @ 0x1401080D0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 */

void __fastcall EtwTraceSiloTimedEvent(
        __int64 a1,
        __int16 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v10; // rbx
  unsigned int v11; // edi
  _DWORD *v12; // rax
  __int64 v13; // rax
  __int64 v15; // rcx
  __int64 v16; // [rsp+30h] [rbp-48h] BYREF
  int v17; // [rsp+38h] [rbp-40h]
  int v18; // [rsp+3Ch] [rbp-3Ch]
  __int64 v19; // [rsp+40h] [rbp-38h]
  int v20; // [rsp+48h] [rbp-30h]
  int v21; // [rsp+4Ch] [rbp-2Ch]

  EtwTraceTimedEvent(a2, 0x2000u, a4, 32, 4200450, a7);
  if ( a1 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(a1 + 1256) + 864LL);
    if ( v10 )
    {
      v21 = 0;
      v19 = a4;
      v20 = 32;
      v11 = *(_DWORD *)(v10 + 4188);
      while ( _BitScanForward((unsigned int *)&v15, v11) )
      {
        v11 &= v11 - 1;
        v12 = (_DWORD *)(v10 + 32 * (v15 + 132));
        if ( v12 )
        {
          if ( (*v12 & 0x2000) != 0 )
          {
            v13 = *(unsigned __int8 *)(v10 + 2 * v15 + 4173);
            v18 = 0;
            v17 = 8;
            v16 = a7 - 8 + 8 * v13;
            EtwpLogKernelEvent(
              (__int64)&v16,
              v10,
              *(unsigned __int8 *)(v10 + 2LL * (unsigned int)v15 + 4172),
              2u,
              a2,
              0x401802u);
          }
        }
      }
    }
  }
}
