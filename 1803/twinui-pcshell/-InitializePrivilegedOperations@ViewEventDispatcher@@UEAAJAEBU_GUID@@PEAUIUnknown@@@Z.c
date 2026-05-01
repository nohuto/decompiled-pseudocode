/*
 * XREFs of ?InitializePrivilegedOperations@ViewEventDispatcher@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x1801CB9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventDispatcher::InitializePrivilegedOperations(
        ViewEventDispatcher *this,
        const struct _GUID *a2,
        struct IUnknown *a3)
{
  __int64 v4; // rax
  char *v5; // rbx
  GUID *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rax

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_7336b357_60d0_4cbd_8e1b_9cde92a8d287.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_7336b357_60d0_4cbd_8e1b_9cde92a8d287.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_7336b357_60d0_4cbd_8e1b_9cde92a8d287.Data4;
  if ( !v4 )
  {
    v5 = (char *)this + 280;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 35);
    v6 = &GUID_7336b357_60d0_4cbd_8e1b_9cde92a8d287;
LABEL_13:
    ((void (__fastcall *)(struct IUnknown *, GUID *, char *))a3->lpVtbl->QueryInterface)(a3, v6, v5);
    return 0LL;
  }
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data4;
  if ( !v7 )
  {
    v5 = (char *)this + 288;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 36);
    v6 = &GUID_3dc37409_1289_4110_adb6_a03083c66a7d;
    goto LABEL_13;
  }
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c.Data4;
  if ( !v8 )
  {
    v5 = (char *)this + 296;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 37);
    v6 = &GUID_dabc92eb_d18f_4af0_b663_49d5cec7765c;
    goto LABEL_13;
  }
  return 0LL;
}
