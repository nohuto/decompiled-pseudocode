/*
 * XREFs of AcpiCStateIdlePrepare @ 0x1C00078D0
 * Callers:
 *     PepIdlePrepare @ 0x1C0005F00 (PepIdlePrepare.c)
 * Callees:
 *     AcpiCStateLegacySelect @ 0x1C0007780 (AcpiCStateLegacySelect.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AcpiCStateIdlePrepare(__int64 a1)
{
  _DWORD *v1; // rsi
  unsigned int v3; // edi
  unsigned int i; // ebp
  __int64 v5; // rcx
  int (__fastcall *v6)(_DWORD *); // rax

  v1 = *(_DWORD **)a1;
  AcpiCStateLegacySelect(*(_QWORD *)a1, a1 + 8);
  v3 = v1[3];
  for ( i = v1[4]; v3; v3 = *((unsigned __int8 *)v1 + i + 21) )
  {
    v5 = 22LL * v3;
    v6 = *(int (__fastcall **)(_DWORD *))&v1[v5 + 20];
    if ( !v6 || v6(&v1[v5 + 24]) >= 0 )
      break;
    *(_DWORD *)(a1 + 80) |= 1 << v3;
    --i;
  }
  v1[2] = v3;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 72) = -1;
  *(_DWORD *)(a1 + 76) = v3;
}
