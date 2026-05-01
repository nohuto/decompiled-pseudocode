/*
 * XREFs of ?IImmersiveApplication_GetNormalDisplayNameWithTitle@@YAJPEAUIImmersiveApplication@@PEAPEAG@Z @ 0x1801C97D8
 * Callers:
 *     _lambda_4dbb30731e1cb4b517ffd4972428404c_::operator() @ 0x18006A540 (_lambda_4dbb30731e1cb4b517ffd4972428404c_--operator().c)
 *     ?GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z @ 0x1801CD710 (-GetViewTitle@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAG@Z.c)
 * Callees:
 *     ?ConcatFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1801C9904 (-ConcatFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBG.c)
 *     GetThreadUILanguage_0 @ 0x1801E342F (GetThreadUILanguage_0.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IImmersiveApplication_GetNormalDisplayNameWithTitle(struct IImmersiveApplication *a1, LPVOID *a2)
{
  __int64 v3; // rax
  int v5; // esi
  __int64 v6; // rcx
  LPVOID v7; // r14
  LANGID ThreadUILanguage_0; // ax
  int v9; // ebx
  const wchar_t *v10; // rdx
  unsigned __int16 *v11; // rax
  void *v12; // rcx
  LPVOID pv; // [rsp+20h] [rbp-30h] BYREF
  __int64 v15; // [rsp+28h] [rbp-28h]
  __int64 v16; // [rsp+30h] [rbp-20h]
  LPVOID v17; // [rsp+38h] [rbp-18h] BYREF
  __int64 v18; // [rsp+40h] [rbp-10h]
  __int64 v19; // [rsp+48h] [rbp-8h]
  int LCData; // [rsp+70h] [rbp+20h] BYREF

  *a2 = 0LL;
  v3 = *(_QWORD *)a1;
  v17 = 0LL;
  v18 = -1LL;
  v19 = -1LL;
  v5 = (*(__int64 (__fastcall **)(struct IImmersiveApplication *, LPVOID *))(v3 + 376))(a1, &v17);
  if ( v5 >= 0 )
  {
    v6 = *(_QWORD *)a1;
    pv = 0LL;
    v15 = -1LL;
    v16 = -1LL;
    if ( (*(int (__fastcall **)(struct IImmersiveApplication *, LPVOID *))(v6 + 248))(a1, &pv) < 0 )
      goto LABEL_9;
    v7 = v17;
    ThreadUILanguage_0 = GetThreadUILanguage_0();
    v9 = 0;
    if ( GetLocaleInfoW(ThreadUILanguage_0, 0x20000070u, (LPWSTR)&LCData, 2) > 0 )
      LOBYTE(v9) = LCData == 1;
    v10 = asc_18023CB30;
    if ( v9 )
      v10 = asc_18023CB40;
    if ( (int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::ConcatFormat(
                &pv,
                v10,
                v7) < 0 )
    {
LABEL_9:
      v11 = (unsigned __int16 *)v17;
      v17 = 0LL;
      v19 = 0LL;
      v18 = 0LL;
      v12 = pv;
      *a2 = v11;
      if ( !v12 )
      {
LABEL_12:
        v15 = 0LL;
        v16 = 0LL;
        goto LABEL_13;
      }
      CoTaskMemFree(v12);
    }
    else
    {
      *a2 = pv;
    }
    pv = 0LL;
    goto LABEL_12;
  }
LABEL_13:
  if ( v17 )
    CoTaskMemFree(v17);
  return (unsigned int)v5;
}
