/*
 * XREFs of ??0ComLock@XWinRT@@QEAA@_N@Z @ 0x1800FA530
 * Callers:
 *     ??0?$Vector@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@1234@Upermission@01234@@Z @ 0x180239648 (--0-$Vector@PEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@U-$DefaultEqualityPre.c)
 *     ??0?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@1234@Upermission@01234@@Z @ 0x180247008 (--0-$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U-$DefaultEqualityPredica.c)
 *     ??0?$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@U?$DefaultVectorOptions@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@4785@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@1234@Upermission@01234@@Z @ 0x18025CA08 (--0-$Vector@PEAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@U-$DefaultEqualit.c)
 *     ??0?$Vector@IU?$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@I@2345@U?$DefaultVectorOptions@I@2345@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@I@1234@Upermission@01234@@Z @ 0x180300404 (--0-$Vector@IU-$DefaultEqualityPredicate@I@Internal@Collections@Foundation@Windows@@U-$DefaultLi.c)
 * Callees:
 *     <none>
 */

XWinRT::ComLock *__fastcall XWinRT::ComLock::ComLock(XWinRT::ComLock *this, char a2)
{
  HRESULT ApartmentType; // eax
  APTTYPE v4; // ecx
  APTTYPEQUALIFIER pAptQualifier; // [rsp+30h] [rbp+8h] BYREF
  APTTYPE pAptType; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(pAptType) = a2;
  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  v4 = pAptType;
  if ( ApartmentType < 0 )
    v4 = APTTYPE_MTA;
  pAptType = v4;
  if ( v4 == APTTYPE_MAINSTA || v4 == APTTYPE_STA )
  {
    *(_DWORD *)this = 1;
    *((_DWORD *)this + 2) = 0;
  }
  else
  {
    *(_DWORD *)this = 0;
    InitializeSRWLock((PSRWLOCK)this + 1);
  }
  return this;
}
