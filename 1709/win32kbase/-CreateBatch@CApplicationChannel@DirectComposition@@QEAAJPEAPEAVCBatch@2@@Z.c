/*
 * XREFs of ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1C0031C44
 * Callers:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C0031CBC (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C00322E4 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0025A50 (Win32AllocPoolZInit.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0026FA0 (Win32AllocPoolWithQuotaZInit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::CreateBatch(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2)
{
  struct DirectComposition::CBatch *v4; // rax
  struct DirectComposition::CBatch *v5; // rcx
  __int64 result; // rax

  if ( (*(unsigned int (__fastcall **)(DirectComposition::CApplicationChannel *))(*(_QWORD *)this + 8LL))(this) == 3 )
    v4 = (struct DirectComposition::CBatch *)Win32AllocPoolZInit(0x90uLL, 1633829700LL);
  else
    v4 = (struct DirectComposition::CBatch *)Win32AllocPoolWithQuotaZInit(0x90uLL, 0x61624344u);
  v5 = v4;
  if ( v4 )
  {
    *((_QWORD *)v4 + 1) = this;
    *((_DWORD *)v4 + 5) = 7;
  }
  result = v4 == 0LL ? 0xC0000017 : 0;
  if ( v5 )
    *a2 = v5;
  return result;
}
