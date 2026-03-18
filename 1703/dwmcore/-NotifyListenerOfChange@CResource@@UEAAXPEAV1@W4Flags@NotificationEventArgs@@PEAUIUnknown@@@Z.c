/*
 * XREFs of ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034580
 * Callers:
 *     ?NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002B2F0 (-NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUn.c)
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034580 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CSurfaceBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800390D0 (-NotifyListenerOfChange@CSurfaceBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIU.c)
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x18008D4C4 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 * Callees:
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034580 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CSurfaceBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800390D0 (-NotifyListenerOfChange@CSurfaceBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIU.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180088C60 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CSpriteVisualContent@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008D4B0 (-OnChanged@CSpriteVisualContent@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CAtlasedRectsGroup@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800AEFB0 (-OnChanged@CAtlasedRectsGroup@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800BBD88 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CResource::NotifyListenerOfChange(__int64 a1, _DWORD *a2, unsigned int a3, __int64 a4)
{
  int v7; // ecx
  __int64 (__fastcall *v8)(_DWORD *, _QWORD, __int64); // rax
  int v9; // eax
  __int64 result; // rax
  __int64 v11; // rax
  unsigned __int64 Count; // rax
  unsigned __int64 v13; // rdx
  void (__fastcall *v14)(_DWORD *, unsigned __int64, _QWORD, __int64); // rax
  __int64 v15; // [rsp+30h] [rbp-18h]
  __int64 v16; // [rsp+38h] [rbp-10h]
  unsigned __int64 v17; // [rsp+58h] [rbp+10h]

  v7 = a2[8] ^ ((unsigned __int8)a2[8] ^ (unsigned __int8)((a2[8] & 0xFE) + 2)) & 6;
  a2[8] = v7;
  if ( (v7 & 6) == 2 )
  {
    v8 = *(__int64 (__fastcall **)(_DWORD *, _QWORD, __int64))(*(_QWORD *)a2 + 128LL);
    if ( (char *)v8 == (char *)CVisual::OnChanged )
    {
      v9 = CVisual::OnChanged(a2, a3, a4);
    }
    else if ( (char *)v8 == (char *)CSpriteVisualContent::OnChanged )
    {
      v9 = CSpriteVisualContent::OnChanged(a2, a3, a4);
    }
    else
    {
      v9 = (char *)v8 == (char *)CAtlasedRectsGroup::OnChanged
         ? CAtlasedRectsGroup::OnChanged(a2, a3, a4)
         : v8(a2, a3, a4);
    }
    if ( v9 )
    {
      v11 = *((_QWORD *)a2 + 3);
      if ( (v11 & 2) != 0 )
        v11 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v11) = v11 & 1;
      if ( (_DWORD)v11 )
      {
        v16 = (unsigned int)v11;
        v17 = 0LL;
        v15 = 16LL;
        do
        {
          Count = CPtrArrayBase::GetCount((CPtrArrayBase *)(a2 + 6));
          if ( v17 >= Count )
          {
            v13 = 0LL;
          }
          else if ( Count == 1 )
          {
            v13 = *((_QWORD *)a2 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
          }
          else
          {
            v13 = *(_QWORD *)((*((_QWORD *)a2 + 3) & 0xFFFFFFFFFFFFFFFCuLL) + v15);
          }
          v14 = *(void (__fastcall **)(_DWORD *, unsigned __int64, _QWORD, __int64))(*(_QWORD *)a2 + 64LL);
          if ( (char *)v14 == (char *)CSurfaceBrush::NotifyListenerOfChange )
          {
            CSurfaceBrush::NotifyListenerOfChange(a2, v13, a3, a4);
          }
          else if ( (char *)v14 == (char *)CResource::NotifyListenerOfChange )
          {
            CResource::NotifyListenerOfChange(a2, v13, a3, a4);
          }
          else
          {
            v14(a2, v13, a3, a4);
          }
          ++v17;
          v15 += 8LL;
          --v16;
        }
        while ( v16 );
      }
    }
  }
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 72LL))(a2);
  result = a2[8] ^ ((unsigned __int8)a2[8] ^ (unsigned __int8)(2 * (a2[8] >> 1) - 2)) & 6u;
  a2[8] = result;
  return result;
}
