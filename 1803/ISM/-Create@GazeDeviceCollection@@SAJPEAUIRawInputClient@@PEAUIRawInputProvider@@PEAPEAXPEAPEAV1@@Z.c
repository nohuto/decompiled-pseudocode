/*
 * XREFs of ?Create@GazeDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x180073D74
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18006C364 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x180074D04 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180074E7C (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GazeDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        void **a3,
        struct GazeDeviceCollection **a4)
{
  HIDDeviceCollection *v8; // rax
  HIDDeviceCollection *v9; // rbx
  unsigned int v10; // edx
  unsigned int v11; // r9d
  int v12; // edi
  int v14; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 && a3 && a4 )
  {
    v8 = (HIDDeviceCollection *)malloc(0xAC8uLL);
    v9 = v8;
    if ( v8 )
      memset_0(v8, 0, 0xAC8uLL);
    if ( v9 )
    {
      HIDDeviceCollection::HIDDeviceCollection(v9, a1);
      *((_QWORD *)v9 + 3) = a2;
      *(_QWORD *)v9 = &GazeDeviceCollection::`vftable';
      v14 = 1179649;
      v12 = HIDDeviceCollection::Initialize(v9, v10, (struct _RIM_USAGE_ANDPAGE *const)&v14, v11, 0x40u, a3);
      if ( v12 < 0 )
        (*(void (__fastcall **)(HIDDeviceCollection *, __int64))(*(_QWORD *)v9 + 24LL))(v9, 1LL);
      else
        *a4 = v9;
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v12;
}
