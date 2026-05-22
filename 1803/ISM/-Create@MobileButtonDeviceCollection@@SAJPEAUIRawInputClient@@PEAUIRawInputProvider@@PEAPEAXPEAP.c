/*
 * XREFs of ?Create@MobileButtonDeviceCollection@@SAJPEAUIRawInputClient@@PEAUIRawInputProvider@@PEAPEAXPEAPEAV1@@Z @ 0x1800727E4
 * Callers:
 *     ?Initialize@RIMRawInputProvider@@IEAAJK@Z @ 0x18006C364 (-Initialize@RIMRawInputProvider@@IEAAJK@Z.c)
 * Callees:
 *     ??0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z @ 0x180074D04 (--0HIDDeviceCollection@@QEAA@PEAUIRawInputClient@@@Z.c)
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180074E7C (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MobileButtonDeviceCollection::Create(
        struct IRawInputClient *a1,
        struct IRawInputProvider *a2,
        void **a3,
        struct MobileButtonDeviceCollection **a4)
{
  _DWORD *v8; // rax
  unsigned int v9; // edx
  unsigned int v10; // r9d
  _DWORD *v11; // rbx
  _DWORD *v12; // rdi
  __int64 v13; // rcx
  int v14; // edi
  int v16; // [rsp+60h] [rbp+8h] BYREF

  if ( a1 && a3 && a4 )
  {
    v8 = malloc(0x22D0uLL);
    v11 = v8;
    if ( v8 )
      memset_0(v8, 0, 0x22D0uLL);
    if ( v11 )
    {
      HIDDeviceCollection::HIDDeviceCollection((HIDDeviceCollection *)v11, a1);
      v12 = v11 + 690;
      *(_QWORD *)v11 = &MobileButtonDeviceCollection::`vftable';
      v11[2226] = 0;
      memset_0(v11 + 690, 0, 0x1800uLL);
      v13 = 256LL;
      do
      {
        *v12 = v11[2226];
        v12 += 6;
        --v13;
      }
      while ( v13 );
      *((_QWORD *)v11 + 3) = a2;
    }
    if ( v11 )
    {
      v16 = 65774;
      v14 = HIDDeviceCollection::Initialize(
              (HIDDeviceCollection *)v11,
              v9,
              (struct _RIM_USAGE_ANDPAGE *const)&v16,
              v10,
              0x28u,
              a3);
      if ( v14 < 0 )
        (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v11 + 24LL))(v11, 1LL);
      else
        *a4 = (struct MobileButtonDeviceCollection *)v11;
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
  return (unsigned int)v14;
}
