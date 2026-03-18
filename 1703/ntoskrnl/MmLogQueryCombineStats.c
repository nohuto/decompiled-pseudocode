/*
 * XREFs of MmLogQueryCombineStats @ 0x1406BF734
 * Callers:
 *     EtwpKernelTraceRundown @ 0x140434EC0 (EtwpKernelTraceRundown.c)
 *     PfQuerySuperfetchInformation @ 0x14052B3F0 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x14008B840 (EtwTraceKernelEvent.c)
 *     EtwpLogKernelEvent @ 0x1400F22E0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

void __fastcall MmLogQueryCombineStats(unsigned int *a1, _BYTE *a2)
{
  _BYTE *v2; // r10
  int v4; // eax
  int v5; // ecx
  bool v6; // cc
  unsigned int v7; // r8d
  _BYTE *v8; // [rsp+30h] [rbp-58h] BYREF
  int v9; // [rsp+38h] [rbp-50h]
  int v10; // [rsp+3Ch] [rbp-4Ch]
  _BYTE *v11; // [rsp+40h] [rbp-48h] BYREF
  int v12; // [rsp+48h] [rbp-40h]
  int v13; // [rsp+4Ch] [rbp-3Ch]
  _BYTE v14[32]; // [rsp+50h] [rbp-38h] BYREF

  v2 = v14;
  if ( a2 )
    v2 = a2;
  *(_DWORD *)v2 = *(_DWORD *)v2 & 0xFFFFFFC0 | 1;
  *((_DWORD *)v2 + 1) = dword_140381798;
  *((_QWORD *)v2 + 1) = qword_140381780 + qword_140381788;
  *((_QWORD *)v2 + 2) = qword_140381790;
  v4 = dword_14038179C;
  *((_DWORD *)v2 + 6) = dword_14038179C;
  v5 = dword_1403817A0;
  v6 = v4 <= dword_1403817A0;
  *((_DWORD *)v2 + 7) = dword_1403817A0;
  if ( !v6 )
    v4 = v5;
  *((_DWORD *)v2 + 6) = v4;
  if ( v2 == v14 )
  {
    if ( a1 )
    {
      v7 = *a1;
      v8 = v2;
      v10 = 0;
      v9 = 32;
      EtwpLogKernelEvent((__int64)&v8, EtwpHostSiloState, v7, 1u, 0x27Cu, 0x401802u);
    }
    else
    {
      v13 = 0;
      v11 = v2;
      v12 = 32;
      EtwTraceKernelEvent((int)&v11, 1, 0x20080000u, 636, 4200450);
    }
  }
}
