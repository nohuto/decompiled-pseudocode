/*
 * XREFs of ?v_CreateSplashScreen@CImmersiveWindowFactory@@EEAAJW4SPLASHSCREEN_FLAGS@@PEAPEAUISplashScreen@@@Z @ 0x180191EB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveWindowFactory::v_CreateSplashScreen(__int64 a1, unsigned int a2, IUnknown **a3)
{
  HRESULT v6; // edi
  IUnknown *v7; // rbx
  __int64 v8; // rax
  LPVOID v9; // rcx
  LPVOID ppv; // [rsp+50h] [rbp+8h] BYREF

  *a3 = 0LL;
  v6 = -2147024891;
  if ( !*(_BYTE *)(a1 + 72) )
    return (unsigned int)v6;
  v7 = 0LL;
  ppv = 0LL;
  if ( !*(_QWORD *)(a1 + 128) )
  {
    v6 = CoCreateInstance(
           &GUID_329b80ec_2230_47b8_905d_a2dcf5171c6f,
           0LL,
           4u,
           &GUID_0e0da070_2224_4934_8090_041f7ff223eb,
           &ppv);
    if ( v6 < 0 )
      goto LABEL_13;
    v6 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64))(*(_QWORD *)ppv + 24LL))(
           ppv,
           *(_QWORD *)(a1 + 104),
           a1 + 84);
    if ( v6 < 0 )
      goto LABEL_13;
    goto LABEL_8;
  }
  v8 = *(_QWORD *)(a1 + 128);
  if ( v8 )
  {
    v7 = *(IUnknown **)(a1 + 128);
    (*(void (__fastcall **)(IUnknown *))(*(_QWORD *)v8 + 8LL))(v7);
    v9 = ppv;
    ppv = v7;
    if ( !v9 )
      goto LABEL_9;
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v9 + 16LL))(v9);
LABEL_8:
    v7 = (IUnknown *)ppv;
LABEL_9:
    if ( v7 )
    {
      ((void (__fastcall *)(IUnknown *))v7->lpVtbl->AddRef)(v7);
      v7 = (IUnknown *)ppv;
    }
  }
  v6 = 0;
  *a3 = v7;
  if ( (~(a2 >> 5) & 1) == 0 )
    goto LABEL_14;
  CoAllowSetForegroundWindow(v7, 0LL);
LABEL_13:
  v7 = (IUnknown *)ppv;
LABEL_14:
  if ( v7 )
  {
    ppv = 0LL;
    ((void (__fastcall *)(IUnknown *))v7->lpVtbl->Release)(v7);
  }
  return (unsigned int)v6;
}
