/*
 * XREFs of ?InitializePrivilegedOperations@ViewEventDispatcher@@UEAAJAEBU_GUID@@PEAUIUnknown@@@Z @ 0x18011FDB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewEventDispatcher::InitializePrivilegedOperations(
        ViewEventDispatcher *this,
        const struct _GUID *a2,
        struct IUnknown *a3)
{
  char *v4; // rbx
  __int64 v5; // rcx
  GUID *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx

  if ( *(_OWORD *)a2 == *(_OWORD *)&GUID_7336b357_60d0_4cbd_8e1b_9cde92a8d287 )
  {
    v4 = (char *)this + 288;
    v5 = *((_QWORD *)this + 36);
    if ( v5 )
    {
      *(_QWORD *)v4 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    v6 = &GUID_7336b357_60d0_4cbd_8e1b_9cde92a8d287;
LABEL_15:
    ((void (__fastcall *)(struct IUnknown *, GUID *, char *))a3->lpVtbl->QueryInterface)(a3, v6, v4);
    return 0LL;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_3dc37409_1289_4110_adb6_a03083c66a7d.Data4 )
  {
    v4 = (char *)this + 296;
    v7 = *((_QWORD *)this + 37);
    if ( v7 )
    {
      *(_QWORD *)v4 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v6 = &GUID_3dc37409_1289_4110_adb6_a03083c66a7d;
    goto LABEL_15;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9efec2ed_66f1_4d7a_95ee_b4bcac203727.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_9efec2ed_66f1_4d7a_95ee_b4bcac203727.Data4 )
  {
    v4 = (char *)this + 304;
    v8 = *((_QWORD *)this + 38);
    if ( v8 )
    {
      *(_QWORD *)v4 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    v6 = &GUID_9efec2ed_66f1_4d7a_95ee_b4bcac203727;
    goto LABEL_15;
  }
  return 0LL;
}
