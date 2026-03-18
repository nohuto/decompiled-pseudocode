/*
 * XREFs of ?QueryInterface@CPrimitiveGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004C9B0
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180088C60 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?QueryInterface@CPrimitiveGroup@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D5880 (-QueryInterface@CPrimitiveGroup@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?HrFindInterface@CPrimitiveGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004CA90 (-HrFindInterface@CPrimitiveGroup@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::QueryInterface(CPrimitiveGroup *this, const struct _GUID *a2, void **a3)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  void (*v6)(void); // rax
  __int64 (*v8)(void); // rax
  int Interface; // eax

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v5 )
    {
      v8 = *(__int64 (**)(void))(*(_QWORD *)this + 32LL);
      if ( (char *)v8 == (char *)CPrimitiveGroup::HrFindInterface )
        Interface = CPrimitiveGroup::HrFindInterface(this, a2, a3);
      else
        Interface = v8();
      v4 = Interface;
      if ( Interface < 0 )
      {
        *a3 = 0LL;
        return v4;
      }
    }
    else
    {
      *a3 = this;
      v4 = 0;
    }
    v6 = *(void (**)(void))(*(_QWORD *)*a3 + 8LL);
    if ( (char *)v6 == (char *)CBitmapOfDeviceBitmaps::AddRef )
      CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)*a3);
    else
      v6();
  }
  return v4;
}
