/*
 * XREFs of ?QueryInterface@VirtualDesktop@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008A960
 * Callers:
 *     ?QueryInterface@VirtualDesktop@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ADA40 (-QueryInterface@VirtualDesktop@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualDesktop@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ADA50 (-QueryInterface@VirtualDesktop@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualDesktop@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ADA60 (-QueryInterface@VirtualDesktop@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@VirtualDesktop@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800ADA70 (-QueryInterface@VirtualDesktop@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x180027D50 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BF10 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualDesktop::QueryInterface(VirtualDesktop *this, struct _GUID *a2, void **a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r10
  _DWORD *v6; // rcx
  _DWORD *v7; // rcx
  void **v8; // r8
  char *v9; // r10
  _DWORD *v10; // rcx
  _DWORD *v11; // r9
  char *v12; // r10
  int CanCastTo; // ebx
  const struct _GUID *v15; // r9

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( InlineIsEqualGUID(v6, &GUID_e62a2edf_0a35_45ae_8951_2893ec19cd86)
    || InlineIsEqualGUID(v7, &GUID_00000038_0000_0000_c000_000000000046) )
  {
    *v8 = v9;
    CanCastTo = 0;
LABEL_11:
    (*(void (__fastcall **)(void *))(*(_QWORD *)*v8 + 8LL))(*v8);
    return (unsigned int)CanCastTo;
  }
  v12 = v9 + 8;
  if ( *v11 == -1049021620
    && v11[1] == *(_DWORD *)&GUID_c179334c_4295_40d3_bea1_c654d965605a.Data2
    && v11[2] == *(_DWORD *)GUID_c179334c_4295_40d3_bea1_c654d965605a.Data4
    && v11[3] == *(_DWORD *)&GUID_c179334c_4295_40d3_bea1_c654d965605a.Data4[4]
    || InlineIsEqualGUID(v10, &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2) )
  {
    *v8 = v12;
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v12 + 8), v15, v8);
    if ( CanCastTo == -2147467262 )
      CanCastTo = -2147467262;
  }
  if ( CanCastTo >= 0 )
    goto LABEL_11;
  return (unsigned int)CanCastTo;
}
