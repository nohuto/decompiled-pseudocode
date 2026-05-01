/*
 * XREFs of ?IImmersiveApplication_GetNormalDisplayNameWithTitleSafe@@YAJPEAUIImmersiveApplication@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEAPEAG@Z @ 0x18001B724
 * Callers:
 *     _lambda_4dbb30731e1cb4b517ffd4972428404c_::operator() @ 0x180018490 (_lambda_4dbb30731e1cb4b517ffd4972428404c_--operator().c)
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1803058CC (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 * Callees:
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18001D1B4 (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG.c)
 *     ??1?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ @ 0x18001D2D4 (--1-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAA@XZ.c)
 *     ?GetDisplayName@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x180048000 (-GetDisplayName@CImmersiveApp@@UEAAJPEAPEAG@Z.c)
 *     ?GetTitle@CImmersiveApp@@UEAAJPEAPEAG@Z @ 0x18004C4B0 (-GetTitle@CImmersiveApp@@UEAAJPEAPEAG@Z.c)
 *     GetThreadUILanguage_0 @ 0x180099777 (GetThreadUILanguage_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IImmersiveApplication_GetNormalDisplayNameWithTitleSafe(
        struct IImmersiveApplication *this,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a2,
        unsigned __int16 **a3)
{
  __int64 v3; // rax
  __int64 (__fastcall *v6)(CImmersiveApp *__hidden, unsigned __int16 **); // rax
  int DisplayName; // eax
  unsigned int v8; // edi
  __int64 v9; // rax
  int (*v10)(CImmersiveApp *__hidden, unsigned __int16 **); // rax
  int Title; // eax
  unsigned __int16 *v12; // r14
  LANGID ThreadUILanguage_0; // ax
  int v14; // ebx
  const wchar_t *v15; // rdx
  unsigned __int16 *v16; // rax
  unsigned __int16 *v18; // [rsp+20h] [rbp-30h] BYREF
  __int64 v19; // [rsp+28h] [rbp-28h]
  __int64 v20; // [rsp+30h] [rbp-20h]
  unsigned __int16 *v21; // [rsp+38h] [rbp-18h] BYREF
  __int64 v22; // [rsp+40h] [rbp-10h]
  __int64 v23; // [rsp+48h] [rbp-8h]
  struct IImmersiveApplicationManagerSafeForSyncCallouts *LCData; // [rsp+78h] [rbp+28h] BYREF

  LCData = a2;
  *a3 = 0LL;
  v3 = *(_QWORD *)this;
  v21 = 0LL;
  v22 = -1LL;
  v23 = -1LL;
  v6 = *(__int64 (__fastcall **)(CImmersiveApp *__hidden, unsigned __int16 **))(v3 + 376);
  if ( v6 == CImmersiveApp::GetDisplayName )
    DisplayName = CImmersiveApp::GetDisplayName(this, &v21);
  else
    DisplayName = v6(this, &v21);
  v8 = DisplayName;
  if ( DisplayName >= 0 )
  {
    v9 = *(_QWORD *)this;
    v18 = 0LL;
    v19 = -1LL;
    v20 = -1LL;
    v10 = *(int (**)(CImmersiveApp *__hidden, unsigned __int16 **))(v9 + 248);
    if ( v10 == CImmersiveApp::GetTitle )
      Title = CImmersiveApp::GetTitle(this, &v18);
    else
      Title = ((__int64 (__fastcall *)(struct IImmersiveApplication *, unsigned __int16 **))v10)(this, &v18);
    if ( Title < 0 )
      goto LABEL_15;
    v12 = v21;
    ThreadUILanguage_0 = GetThreadUILanguage_0();
    v14 = 0;
    if ( GetLocaleInfoW(ThreadUILanguage_0, 0x20000070u, (LPWSTR)&LCData, 2) > 0 )
      LOBYTE(v14) = (_DWORD)LCData == 1;
    v15 = asc_18035CC00;
    if ( !v14 )
      v15 = asc_18035CC10;
    if ( (int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ConcatFormat(
                &v18,
                v15,
                v12) < 0 )
    {
LABEL_15:
      v16 = v21;
      v21 = 0LL;
      v23 = 0LL;
      v22 = 0LL;
    }
    else
    {
      v16 = v18;
      v18 = 0LL;
      v20 = 0LL;
      v19 = 0LL;
    }
    *a3 = v16;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>(&v18);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::~NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>(&v21);
  return v8;
}
