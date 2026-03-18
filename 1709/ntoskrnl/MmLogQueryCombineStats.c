/*
 * XREFs of MmLogQueryCombineStats @ 0x1406ED1E0
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x1404C4070 (PfQuerySuperfetchInformation.c)
 *     EtwpKernelTraceRundown @ 0x14074CFD4 (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400AE1E4 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     EtwTraceSiloDcEvent @ 0x14027B96C (EtwTraceSiloDcEvent.c)
 */

void __fastcall MmLogQueryCombineStats(__int64 a1, unsigned int *a2, _BYTE *a3)
{
  _BYTE *v3; // r10
  int v5; // eax
  int v6; // ecx
  bool v7; // cc
  unsigned int v8; // r9d
  _BYTE *v9; // [rsp+30h] [rbp-58h] BYREF
  int v10; // [rsp+38h] [rbp-50h]
  int v11; // [rsp+3Ch] [rbp-4Ch]
  _BYTE *v12; // [rsp+40h] [rbp-48h] BYREF
  int v13; // [rsp+48h] [rbp-40h]
  int v14; // [rsp+4Ch] [rbp-3Ch]
  _BYTE v15[32]; // [rsp+50h] [rbp-38h] BYREF

  v3 = v15;
  if ( a3 )
    v3 = a3;
  *(_DWORD *)v3 = *(_DWORD *)v3 & 0xFFFFFFC0 | 1;
  *((_DWORD *)v3 + 1) = dword_14038B6E0;
  *((_QWORD *)v3 + 1) = qword_14038B6C8 + qword_14038B6D0;
  *((_QWORD *)v3 + 2) = qword_14038B6D8;
  v5 = dword_14038B6E4;
  *((_DWORD *)v3 + 6) = dword_14038B6E4;
  v6 = dword_14038B6E8;
  v7 = v5 <= dword_14038B6E8;
  *((_DWORD *)v3 + 7) = dword_14038B6E8;
  if ( !v7 )
    v5 = v6;
  *((_DWORD *)v3 + 6) = v5;
  if ( v3 == v15 )
  {
    if ( a1 && a2 )
    {
      v11 = 0;
      v8 = *a2;
      v9 = v3;
      v10 = 32;
      EtwTraceSiloDcEvent((__int64)&v9, 1u, a1, v8, 0x27Cu, 0x401802u);
    }
    else
    {
      v14 = 0;
      v12 = v3;
      v13 = 32;
      EtwTraceKernelEvent((__int64)&v12, 1u, 0x20080000u, 0x27Cu, 0x401802u);
    }
  }
}
