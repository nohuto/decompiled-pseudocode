/*
 * XREFs of ?GetProviderId@TelephonyController@@AEAAJPEAUIKsControl@@PEAI@Z @ 0x1800ED75C
 * Callers:
 *     ?Initialize@TelephonyController@@IEAAJXZ @ 0x1800EDC74 (-Initialize@TelephonyController@@IEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TelephonyController::GetProviderId(
        TelephonyController *this,
        struct IKsControl *a2,
        unsigned int *a3)
{
  unsigned int v3; // ebx
  struct IKsControlVtbl *lpVtbl; // rax
  HRESULT (__stdcall *KsProperty)(IKsControl *, PKSPROPERTY, ULONG, void *, ULONG, ULONG *); // rax
  int v7; // eax
  GUID v9; // [rsp+40h] [rbp-28h] BYREF
  int v10; // [rsp+50h] [rbp-18h]
  int v11; // [rsp+54h] [rbp-14h]
  unsigned int v12; // [rsp+70h] [rbp+8h] BYREF
  int v13; // [rsp+74h] [rbp+Ch]
  char v14; // [rsp+78h] [rbp+10h] BYREF

  v13 = HIDWORD(this);
  v3 = 0;
  v12 = 0;
  if ( a2 && a3 )
  {
    lpVtbl = a2->lpVtbl;
    v10 = 0;
    KsProperty = lpVtbl->KsProperty;
    v11 = 1;
    v9 = GUID_b6df7eb1_d099_489f_a6a0_c0106f0887a7;
    v7 = ((__int64 (__fastcall *)(struct IKsControl *, GUID *, __int64, unsigned int *, int, char *))KsProperty)(
           a2,
           &v9,
           24LL,
           &v12,
           4,
           &v14);
    if ( v7 >= 0 )
      *a3 = v12;
    else
      return (unsigned int)v7;
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}
