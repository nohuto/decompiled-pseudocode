/*
 * XREFs of ?IsMicArray@@YA_NPEAUIPropertyStore@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180038AF0
 * Callers:
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x180038FC0 (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@.c)
 * Callees:
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall IsMicArray(struct IPropertyStore *a1, struct _AEC_POLICY_RESULTS *a2)
{
  struct IPropertyStoreVtbl *lpVtbl; // rax
  __int64 v4; // rax
  int v5; // eax
  PROPVARIANT pvar; // [rsp+20h] [rbp-38h] BYREF
  LPCOLESTR lpsz; // [rsp+28h] [rbp-30h]
  __int64 v9; // [rsp+30h] [rbp-28h]
  GUID iid; // [rsp+38h] [rbp-20h] BYREF

  pvar = 0LL;
  lpsz = 0LL;
  v9 = 0LL;
  lpVtbl = a1->lpVtbl;
  iid = GUID_00000000_0000_0000_0000_000000000000;
  if ( ((int (__fastcall *)(struct IPropertyStore *, const PROPERTYKEY *, PROPVARIANT *))lpVtbl->GetValue)(
         a1,
         &PKEY_AudioEndpoint_JackSubType,
         &pvar) < 0
    || (_WORD)pvar != 31
    || IIDFromString(lpsz, &iid) < 0 )
  {
    goto LABEL_9;
  }
  v4 = *(_QWORD *)&iid.Data1 - *(_QWORD *)&GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data1;
  if ( *(_QWORD *)&iid.Data1 == *(_QWORD *)&GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data1 )
    v4 = *(_QWORD *)iid.Data4 - *(_QWORD *)GUID_dff21be5_f70f_11d0_b917_00a0c9223196.Data4;
  if ( v4 )
LABEL_9:
    v5 = 0;
  else
    v5 = 1;
  *((_DWORD *)a2 + 5) = v5;
  PropVariantClear(&pvar);
  return *((_DWORD *)a2 + 5) != 0;
}
