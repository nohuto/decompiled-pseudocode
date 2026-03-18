/*
 * XREFs of ?QueryInterface@CResource@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180051710
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004AA70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?AddRef@CResource@@UEAAKXZ @ 0x180051070 (-AddRef@CResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CResource::QueryInterface(CResource *this, const struct _GUID *a2, void **a3)
{
  int v4; // edi
  __int64 v5; // rax
  void (*v6)(void); // rax

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v5 )
    {
      v4 = (*(__int64 (__fastcall **)(CResource *))(*(_QWORD *)this + 32LL))(this);
      if ( v4 < 0 )
      {
        *a3 = 0LL;
        return (unsigned int)v4;
      }
    }
    else
    {
      *a3 = this;
      v4 = 0;
    }
    v6 = *(void (**)(void))(*(_QWORD *)*a3 + 8LL);
    if ( (char *)v6 == (char *)CResource::AddRef )
      CResource::AddRef((CResource *)*a3);
    else
      v6();
  }
  return (unsigned int)v4;
}
