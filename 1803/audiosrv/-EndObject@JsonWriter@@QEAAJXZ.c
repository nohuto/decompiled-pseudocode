/*
 * XREFs of ?EndObject@JsonWriter@@QEAAJXZ @ 0x1801161E4
 * Callers:
 *     _lambda_d712340aea87d10847fb2ae459792740_::operator() @ 0x1800DB2AC (_lambda_d712340aea87d10847fb2ae459792740_--operator().c)
 *     ?AddStreamInfoToJson@AudioJournal@@AEAAJPEAUStreamInfo@1@HPEAVJsonWriter@@@Z @ 0x1800DB6A8 (-AddStreamInfoToJson@AudioJournal@@AEAAJPEAUStreamInfo@1@HPEAVJsonWriter@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall JsonWriter::EndObject(JsonWriter *this)
{
  __int64 result; // rax

  if ( *((_DWORD *)this + *((_DWORD *)this + 34) + 1) )
    return 2147758082LL;
  result = (*(__int64 (__fastcall **)(_QWORD, const char *, __int64))(**(_QWORD **)this + 32LL))(
             *(_QWORD *)this,
             "}",
             1LL);
  if ( (int)result >= 0 )
  {
    --*((_DWORD *)this + 34);
    *((_DWORD *)this + 35) = 1;
  }
  return result;
}
