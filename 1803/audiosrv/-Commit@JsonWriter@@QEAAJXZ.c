/*
 * XREFs of ?Commit@JsonWriter@@QEAAJXZ @ 0x180116144
 * Callers:
 *     _lambda_d712340aea87d10847fb2ae459792740_::operator() @ 0x1800DB2AC (_lambda_d712340aea87d10847fb2ae459792740_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?_InsideArray@JsonWriter@@AEAAHXZ @ 0x180116568 (-_InsideArray@JsonWriter@@AEAAHXZ.c)
 */

__int64 __fastcall JsonWriter::Commit(JsonWriter *this)
{
  int v2; // eax
  __int64 v3; // r10
  __int64 v4; // r11
  const char *v5; // rdx
  __int64 result; // rax

  v2 = JsonWriter::_InsideArray(this);
  v5 = "]";
  if ( !v2 )
    v5 = "}";
  result = (*(__int64 (__fastcall **)(__int64, const char *, __int64))(v3 + 32))(v4, v5, 1LL);
  if ( (int)result >= 0 )
    --*((_DWORD *)this + 34);
  return result;
}
