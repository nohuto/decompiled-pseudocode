/*
 * XREFs of ?Initialize@HIDDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x18009C7E0
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x180087C18 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 *     ?Create@TouchDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18008ADF4 (-Create@TouchDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 *     ?Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18008B594 (-Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x1800891B0 (-Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z.c)
 */

__int64 __fastcall HIDDeviceCollection::Initialize(HIDDeviceCollection *this, char a2, unsigned int a3, void **a4)
{
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rcx

  if ( (a2 & 0x10) != 0 || (a2 & 8) != 0 || (a2 & 4) != 0 )
  {
    v5 = RIMDeviceCollection::Initialize(this, a2, a3, a4);
    v4 = v5;
    if ( v5 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v6, &MinInput_Warning_CheckResult, 0, 58, v5);
  }
  else
  {
    v4 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq((__int64)this, &MinInput_Warning_CheckResult, 0, 52, 87);
  }
  return v4;
}
