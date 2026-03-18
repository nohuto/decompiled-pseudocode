/*
 * XREFs of ?NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002B2F0
 * Callers:
 *     ?NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002B2F0 (-NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUn.c)
 *     ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18002B720 (-SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?OnChanged@CTransform3D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002B2D0 (-OnChanged@CTransform3D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002B2F0 (-NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUn.c)
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034580 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180088C60 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800BBD88 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800BBE10 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTransform3D::NotifyListenerOfChange(__int64 a1, _DWORD *a2)
{
  unsigned int v4; // eax
  __int64 (__fastcall *v5)(__int64); // rax
  int v6; // eax
  __int64 v7; // rdi
  __int64 result; // rax
  unsigned int Count; // eax
  __int64 v10; // rbp
  __int64 v11; // rdx
  void (__fastcall *v12)(_DWORD *, __int64, __int64, __int64); // rax

  v4 = a2[8] ^ (a2[8] ^ ((a2[8] & 0xFFFFFFFE) + 2)) & 6;
  a2[8] = v4;
  if ( (v4 & 6) == 2 )
  {
    v5 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 128LL);
    if ( (char *)v5 == (char *)CVisual::OnChanged )
      v6 = CVisual::OnChanged(a2, 2LL, a1);
    else
      v6 = v5 == CTransform3D::OnChanged
         ? CTransform3D::OnChanged((__int64)a2)
         : ((__int64 (__fastcall *)(_DWORD *, __int64, __int64))v5)(a2, 2LL, a1);
    v7 = 0LL;
    if ( v6 )
    {
      Count = CPtrArrayBase::GetCount((CPtrArrayBase *)(a2 + 6));
      if ( Count )
      {
        v10 = Count;
        do
        {
          v11 = CPtrArrayBase::operator[](a2 + 6, v7);
          v12 = *(void (__fastcall **)(_DWORD *, __int64, __int64, __int64))(*(_QWORD *)a2 + 64LL);
          if ( (char *)v12 == (char *)CResource::NotifyListenerOfChange )
          {
            CResource::NotifyListenerOfChange(a2, v11, 2LL, a1);
          }
          else if ( (char *)v12 == (char *)CTransform3D::NotifyListenerOfChange )
          {
            CTransform3D::NotifyListenerOfChange(a2, v11, 2LL, a1);
          }
          else
          {
            v12(a2, v11, 2LL, a1);
          }
          ++v7;
          --v10;
        }
        while ( v10 );
      }
    }
  }
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 72LL))(a2);
  result = (a2[8] ^ (2 * (a2[8] >> 1) - 2)) & 6;
  a2[8] ^= result;
  return result;
}
