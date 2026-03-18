/*
 * XREFs of ?NotifyListenerOfChange@CSurfaceBrush@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800390D0
 * Callers:
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034580 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ @ 0x18008D4C4 (-ReleasePrimitiveCaches@CSpriteVisualContent@@IEAAXXZ.c)
 * Callees:
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034580 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180034990 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180088C60 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CSpriteVisualContent@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008D4B0 (-OnChanged@CSpriteVisualContent@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::NotifyListenerOfChange(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v8; // eax
  __int64 (__fastcall *v9)(__int64, _QWORD, __int64); // rax
  int v10; // eax
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  _DWORD *v17; // rdx
  __int64 (__fastcall *v18)(__int64, _DWORD *, unsigned int, __int64); // rax
  __int64 result; // rax

  if ( a3 == 6 || a4 == *(_QWORD *)(a1 + 112) )
  {
    CResource::NotifyOnChanged((_DWORD *)a2, 0LL, a4);
    *(_QWORD *)(a1 + 72) = 0LL;
    return CResource::NotifyOnChanged((_DWORD *)a2, 5LL, 0LL);
  }
  else
  {
    v8 = *(_DWORD *)(a2 + 32) ^ (*(_DWORD *)(a2 + 32) ^ ((*(_DWORD *)(a2 + 32) & 0xFFFFFFFE) + 2)) & 6;
    *(_DWORD *)(a2 + 32) = v8;
    if ( (v8 & 6) == 2 )
    {
      v9 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a2 + 128LL);
      if ( v9 == CSpriteVisualContent::OnChanged )
        v10 = CSpriteVisualContent::OnChanged(a2, a3, a4);
      else
        v10 = v9 == CVisual::OnChanged ? CVisual::OnChanged(a2, a3, a4) : v9(a2, a3, a4);
      if ( v10 )
      {
        v11 = *(_QWORD *)(a2 + 24);
        if ( (v11 & 2) != 0 )
          v11 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          LODWORD(v11) = v11 & 1;
        if ( (_DWORD)v11 )
        {
          v12 = 0LL;
          v13 = (unsigned int)v11;
          v14 = 4LL;
          do
          {
            v15 = *(_QWORD *)(a2 + 24);
            if ( (v15 & 2) != 0 )
              v16 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFFCuLL);
            else
              v16 = *(_QWORD *)(a2 + 24) & 1LL;
            if ( v12 >= v16 )
            {
              v17 = 0LL;
            }
            else
            {
              v17 = (_DWORD *)(v15 & 0xFFFFFFFFFFFFFFFCuLL);
              if ( v16 != 1 )
                v17 = *(_DWORD **)&v17[v14];
            }
            v18 = *(__int64 (__fastcall **)(__int64, _DWORD *, unsigned int, __int64))(*(_QWORD *)a2 + 64LL);
            if ( v18 == CResource::NotifyListenerOfChange )
              CResource::NotifyListenerOfChange(a2, v17, a3, a4);
            else
              v18(a2, v17, a3, a4);
            ++v12;
            v14 += 2LL;
            --v13;
          }
          while ( v13 );
        }
      }
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
    result = (*(_DWORD *)(a2 + 32) ^ (2 * (*(_DWORD *)(a2 + 32) >> 1) - 2)) & 6;
    *(_DWORD *)(a2 + 32) ^= result;
  }
  return result;
}
