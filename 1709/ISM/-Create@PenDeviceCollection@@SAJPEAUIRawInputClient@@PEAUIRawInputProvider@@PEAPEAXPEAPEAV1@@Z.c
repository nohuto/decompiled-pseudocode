/*
 * XREFs of ?Create@PenDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x18008B594
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x180087C18 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x18009C714 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 *     ?Initialize@HIDDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x18009C7E0 (-Initialize@HIDDeviceCollection@@UEAAJKKPEAPEAX@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PenDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        void **a3,
        struct PenDeviceCollection **a4)
{
  HIDDeviceCollection *v8; // rax
  HIDDeviceCollection *v9; // rbx
  _DWORD *v10; // rax
  int v11; // edi
  int v12; // r9d
  __int64 v13; // rcx
  char v14; // al

  if ( !a1 || !a3 || !a4 )
  {
    v11 = -2147024809;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return (unsigned int)v11;
    v12 = 29;
    goto LABEL_22;
  }
  v8 = (HIDDeviceCollection *)malloc(0xAE0uLL);
  v9 = v8;
  if ( v8 )
    memset(v8, 0, 0xAE0uLL);
  if ( !v9 )
  {
    v11 = -2147024882;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return (unsigned int)v11;
    v12 = 35;
LABEL_22:
    McTemplateU0qqq((__int64)a1, &MinInput_Warning_CheckResult, 0, v12, v11);
    return (unsigned int)v11;
  }
  HIDDeviceCollection::HIDDeviceCollection(v9, a1);
  *(_QWORD *)v9 = &PenDeviceCollection::`vftable';
  *((_DWORD *)v9 + 694) = 0xFFFF;
  v10 = operator new[](0x10uLL);
  *((_QWORD *)v9 + 345) = v10;
  *v10 = *((_DWORD *)v9 + 694);
  *((_DWORD *)v9 + 692) = 1;
  *((_DWORD *)v9 + 693) = 0;
  *((_QWORD *)v9 + 3) = a2;
  v11 = HIDDeviceCollection::Initialize(v9, 4u, 0x108u, a3);
  if ( v11 >= 0 )
    goto LABEL_13;
  v14 = Microsoft_OneCore_MinInputEnableBits;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    McTemplateU0qqq(v13, &MinInput_Warning_CheckResult, 0, 84, v11);
LABEL_13:
    v14 = Microsoft_OneCore_MinInputEnableBits;
  }
  if ( v11 >= 0 )
  {
    *a4 = v9;
  }
  else if ( (v14 & 2) != 0 )
  {
    McTemplateU0qqq(v13, &MinInput_Warning_CheckResult, 0, 38, v11);
  }
  if ( v11 < 0 )
    (*(void (__fastcall **)(HIDDeviceCollection *, __int64))(*(_QWORD *)v9 + 24LL))(v9, 1LL);
  return (unsigned int)v11;
}
