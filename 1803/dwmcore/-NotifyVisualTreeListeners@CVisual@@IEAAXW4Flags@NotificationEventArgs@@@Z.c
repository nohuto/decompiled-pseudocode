/*
 * XREFs of ?NotifyVisualTreeListeners@CVisual@@IEAAXW4Flags@NotificationEventArgs@@@Z @ 0x18004E374
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x18004BFF0 (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     ?NotifyOnChanged@CCompositionLight@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002A680 (-NotifyOnChanged@CCompositionLight@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x1800B963C (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::NotifyVisualTreeListeners(CCompositionSpotLight *a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v5; // rbx
  __int64 v6; // rsi
  CCompositionSpotLight *v7; // rax

  v2 = *((_QWORD *)a1 + 3);
  if ( (v2 & 2) != 0 )
    v2 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    LODWORD(v2) = v2 & 1;
  v5 = 0LL;
  if ( (_DWORD)v2 )
  {
    v6 = (unsigned int)v2;
    do
    {
      v7 = (CCompositionSpotLight *)CPtrArrayBase::operator[]((char *)a1 + 24, v5);
      if ( v7 != *((CCompositionSpotLight **)a1 + 10) )
      {
        if ( *(void (__fastcall **)(CCompositionSpotLight *, unsigned int, CCompositionSpotLight *))(*(_QWORD *)v7 + 64LL) == CCompositionLight::NotifyOnChanged )
          CCompositionLight::NotifyOnChanged(v7, a2, a1);
        else
          (*(void (__fastcall **)(CCompositionSpotLight *, _QWORD, CCompositionSpotLight *))(*(_QWORD *)v7 + 64LL))(
            v7,
            a2,
            a1);
      }
      ++v5;
      --v6;
    }
    while ( v6 );
  }
}
