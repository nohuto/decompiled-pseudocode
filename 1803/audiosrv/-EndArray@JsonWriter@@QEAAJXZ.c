/*
 * XREFs of ?EndArray@JsonWriter@@QEAAJXZ @ 0x180116190
 * Callers:
 *     _lambda_d712340aea87d10847fb2ae459792740_::operator() @ 0x1800DB2AC (_lambda_d712340aea87d10847fb2ae459792740_--operator().c)
 *     ?AddStreamInfoToJson@AudioJournal@@AEAAJPEAUStreamInfo@1@HPEAVJsonWriter@@@Z @ 0x1800DB6A8 (-AddStreamInfoToJson@AudioJournal@@AEAAJPEAUStreamInfo@1@HPEAVJsonWriter@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?_InsideArray@JsonWriter@@AEAAHXZ @ 0x180116568 (-_InsideArray@JsonWriter@@AEAAHXZ.c)
 */

__int64 __fastcall JsonWriter::EndArray(JsonWriter *this)
{
  _QWORD *v2; // rcx
  __int64 result; // rax

  if ( !(unsigned int)JsonWriter::_InsideArray(this) )
    return 2147758081LL;
  result = (*(__int64 (__fastcall **)(_QWORD, const char *, __int64))(*(_QWORD *)*v2 + 32LL))(*v2, "]", 1LL);
  if ( (int)result >= 0 )
  {
    --*((_DWORD *)this + 34);
    *((_DWORD *)this + 35) = 1;
  }
  return result;
}
