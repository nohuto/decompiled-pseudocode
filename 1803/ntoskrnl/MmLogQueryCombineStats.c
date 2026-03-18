/*
 * XREFs of MmLogQueryCombineStats @ 0x140756628
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x1405B0640 (PfQuerySuperfetchInformation.c)
 *     EtwpKernelTraceRundown @ 0x140628E98 (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400C1C38 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     EtwTraceSiloDcEvent @ 0x1402AF31C (EtwTraceSiloDcEvent.c)
 */

void __fastcall MmLogQueryCombineStats(__int64 a1, unsigned int *a2, _BYTE *a3)
{
  _BYTE *v4; // r10
  int v5; // ecx
  int v6; // eax
  bool v7; // cc
  unsigned int v8; // r9d
  _BYTE *v9; // [rsp+30h] [rbp-58h] BYREF
  int v10; // [rsp+38h] [rbp-50h]
  int v11; // [rsp+3Ch] [rbp-4Ch]
  _BYTE *v12; // [rsp+40h] [rbp-48h] BYREF
  int v13; // [rsp+48h] [rbp-40h]
  int v14; // [rsp+4Ch] [rbp-3Ch]
  _BYTE v15[32]; // [rsp+50h] [rbp-38h] BYREF

  v4 = v15;
  if ( a3 )
    v4 = a3;
  *(_DWORD *)v4 = *(_DWORD *)v4 & 0xFFFFFFC0 | 1;
  *((_DWORD *)v4 + 1) = dword_1403CF9A0;
  *((_QWORD *)v4 + 1) = qword_1403CF988 + qword_1403CF990;
  *((_QWORD *)v4 + 2) = qword_1403CF998;
  v5 = dword_1403CF9A4;
  *((_DWORD *)v4 + 6) = dword_1403CF9A4;
  v6 = dword_1403CF9A8;
  v7 = v5 <= dword_1403CF9A8;
  *((_DWORD *)v4 + 7) = dword_1403CF9A8;
  if ( !v7 )
    v5 = v6;
  *((_DWORD *)v4 + 6) = v5;
  if ( v4 == v15 )
  {
    if ( a1 && a2 )
    {
      v11 = 0;
      v8 = *a2;
      v9 = v4;
      v10 = 32;
      EtwTraceSiloDcEvent((__int64)&v9, 1u, a1, v8, 0x27Cu, 0x401802u);
    }
    else
    {
      v14 = 0;
      v12 = v4;
      v13 = 32;
      EtwTraceKernelEvent((int)&v12, 1, 0x20080000u, 636, 4200450);
    }
  }
}
