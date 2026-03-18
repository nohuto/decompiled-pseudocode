/*
 * XREFs of ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1C00175D8
 * Callers:
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C000BC94 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C0017660 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0019270 (Win32AllocPoolWithQuotaZInit.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateBatch(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2)
{
  __int64 v4; // rax
  struct DirectComposition::CBatch *v5; // rcx
  __int64 result; // rax

  if ( (*(unsigned int (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 8LL))(this) == 3 )
    v4 = Win32AllocPoolZInit(0xA0uLL);
  else
    v4 = Win32AllocPoolWithQuotaZInit(0xA0uLL);
  v5 = (struct DirectComposition::CBatch *)v4;
  if ( v4 )
  {
    *(_QWORD *)(v4 + 8) = this;
    *(_DWORD *)(v4 + 20) = 7;
    *(_QWORD *)(v4 + 120) = &DirectComposition::CBatch::CBatchListProxy::`vftable';
    *(_QWORD *)(v4 + 128) = v4;
  }
  result = v4 == 0 ? 0xC0000017 : 0;
  if ( v5 )
    *a2 = v5;
  return result;
}
