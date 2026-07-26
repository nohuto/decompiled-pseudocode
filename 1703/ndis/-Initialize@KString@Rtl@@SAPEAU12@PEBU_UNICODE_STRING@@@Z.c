/*
 * XREFs of ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C00B1474
 * Callers:
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBG@Z @ 0x1C00AF13C (-Initialize@KString@Rtl@@SAPEAU12@PEBG@Z.c)
 *     ?QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00B0E30 (-QueryValueString@KRegKey@@QEAAJPEBU_UNICODE_STRING@@AEAV-$unique_ptr@UKString@Rtl@@U-$default_d.c)
 *     ?GetSubkeyName@KRegKey@@QEAAJKAEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C00B12B0 (-GetSubkeyName@KRegKey@@QEAAJKAEAV-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wi.c)
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z @ 0x1C00B24A4 (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N@Z.c)
 * Callees:
 *     memmove @ 0x1C0028840 (memmove.c)
 */

struct Rtl::KString *__fastcall Rtl::KString::Initialize(const struct _UNICODE_STRING *a1)
{
  _WORD *PoolWithTag; // rax
  _WORD *v3; // rbx
  unsigned int MaximumLength; // edx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, a1->MaximumLength + 16LL, 0x7274534Bu);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  *PoolWithTag = a1->Length;
  MaximumLength = a1->MaximumLength;
  PoolWithTag[1] = MaximumLength;
  *((_QWORD *)PoolWithTag + 1) = PoolWithTag + 8;
  memmove(PoolWithTag + 8, a1->Buffer, MaximumLength);
  return (struct Rtl::KString *)v3;
}
