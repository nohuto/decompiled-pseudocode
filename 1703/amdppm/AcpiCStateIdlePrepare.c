/*
 * XREFs of AcpiCStateIdlePrepare @ 0x1C0007580
 * Callers:
 *     PepIdlePrepare @ 0x1C0005CA0 (PepIdlePrepare.c)
 * Callees:
 *     AcpiCStateLegacySelect @ 0x1C0007434 (AcpiCStateLegacySelect.c)
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AcpiCStateIdlePrepare(__int64 a1)
{
  _DWORD *v1; // rsi
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 i; // rcx
  int (__fastcall *v6)(__int64); // rax

  v1 = *(_DWORD **)a1;
  AcpiCStateLegacySelect(*(_QWORD *)a1, a1 + 8);
  v3 = (unsigned int)v1[3];
  LODWORD(v4) = v1[4];
  for ( i = (__int64)&v1[22 * v3 + 16]; (_DWORD)v3; i = (__int64)&v1[22 * v3 + 16] )
  {
    v6 = *(int (__fastcall **)(__int64))(i + 16);
    if ( !v6 || v6(i + 32) >= 0 )
      break;
    v4 = (unsigned int)(v4 - 1);
    *(_DWORD *)(a1 + 80) |= 1 << v3;
    v3 = *((unsigned __int8 *)v1 + v4 + 21);
  }
  v1[2] = v3;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 72) = -1;
  *(_DWORD *)(a1 + 76) = v3;
}
