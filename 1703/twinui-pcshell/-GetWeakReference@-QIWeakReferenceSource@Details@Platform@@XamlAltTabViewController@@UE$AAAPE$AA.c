/*
 * XREFs of ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlAltTabViewController@@UE$AAAPE$AAUIWeakReference@23@XZ @ 0x18013D5DC
 * Callers:
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@?$VectorView@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@3@WDA@E$AAAPE$AAUIWeakReference@23@XZ @ 0x18013D620 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@-$VectorView@PE$AAUISwitchItem@Common.c)
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlAltTabViewController@@WCI@E$AAAPE$AAUIWeakReference@23@XZ @ 0x180143330 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@XamlAltTabViewController@@WCI@E$AAAPE.c)
 *     ?GetWeakReference@?QIWeakReferenceSource@Details@Platform@@XamlSnapAssistViewController@@WIA@E$AAAPE$AAUIWeakReference@23@XZ @ 0x180143550 (-GetWeakReference@-QIWeakReferenceSource@Details@Platform@@XamlSnapAssistViewController@@WIA@E$A.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _GetWeakReference__QIWeakReferenceSource_Details_Platform__XamlAltTabViewController__UE_AAAPE_AAUIWeakReference_23_XZ(
        __int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 104);
  if ( v1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 8LL))(*(_QWORD *)(a1 + 104));
  return v1;
}
