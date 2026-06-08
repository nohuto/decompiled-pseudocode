/*
 * XREFs of AcpiCStateIdlePrepare @ 0x1C0004A00
 * Callers:
 *     PepIdlePrepare @ 0x1C0009FB0 (PepIdlePrepare.c)
 * Callees:
 *     AcpiCStateLegacySelect @ 0x1C0004884 (AcpiCStateLegacySelect.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AcpiCStateIdlePrepare(__int64 a1)
{
  _DWORD *v1; // rsi
  __int64 result; // rax
  unsigned int v4; // edi
  unsigned int i; // ebp
  __int64 v6; // rcx

  v1 = *(_DWORD **)a1;
  result = AcpiCStateLegacySelect(*(_QWORD *)a1, a1 + 8);
  v4 = v1[3];
  for ( i = v1[4]; v4; v4 = *((unsigned __int8 *)v1 + i + 21) )
  {
    v6 = 22LL * v4;
    result = *(_QWORD *)&v1[v6 + 20];
    if ( !result )
      break;
    result = ((__int64 (__fastcall *)(_DWORD *))result)(&v1[v6 + 24]);
    if ( (int)result >= 0 )
      break;
    result = (unsigned int)(1 << v4);
    *(_DWORD *)(a1 + 80) |= result;
    --i;
  }
  v1[2] = v4;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 72) = -1;
  *(_DWORD *)(a1 + 76) = v4;
  return result;
}
