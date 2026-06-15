/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002DBA0
 * Callers:
 *     ?Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x18001B680 (-Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     _lambda_530575f8b419a08780554bb070101504_::operator() @ 0x18001C2D0 (_lambda_530575f8b419a08780554bb070101504_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_::_Do_call @ 0x180045B60 (std--_Func_impl_no_alloc__lambda_1c8fa1ed992c83f4cd0c938a01586d8b__void_--_Do_call.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180065CF0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180065CF0.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@WBAA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180065D00 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180065D00.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@WPI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180065D10 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_180065D10.c)
 * Callees:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002DC90 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupPr.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18002DEE0 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  const struct _GUID *v4; // rcx
  _QWORD *v5; // r8
  _DWORD *v6; // r9
  __int64 v7; // r10
  const struct _GUID *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r10
  const struct _GUID *v11; // rcx
  __int64 v12; // r10
  const struct _GUID *v13; // rcx
  void (*v14)(void); // rax
  int v16; // eax
  __int64 v17; // r10

  v3 = 0;
  *a3 = 0LL;
  if ( !(unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    && (*v6 != -1350114592
     || v6[1] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data2
     || v6[2] != *(_DWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4
     || v6[3] != *(_DWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4[4]) )
  {
    if ( !(unsigned int)InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      if ( (unsigned int)InlineIsEqualGUID(v8, &GUID_c446cb63_cad4_4ab8_a433_adf8cea5b8a8) )
      {
        *(_QWORD *)v9 = v12;
        v16 = 0;
      }
      else
      {
        if ( (unsigned int)InlineIsEqualGUID(v11, &GUID_00000038_0000_0000_c000_000000000046) )
          goto LABEL_6;
        if ( (unsigned int)InlineIsEqualGUID(v13, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
        {
          *(_QWORD *)v9 = v17 + 8;
          v16 = 0;
        }
        else
        {
          v16 = -2147467262;
        }
      }
      v3 = v16;
      if ( v16 < 0 )
        return v3;
      goto LABEL_7;
    }
LABEL_6:
    *(_QWORD *)v9 = v10;
LABEL_7:
    v14 = *(void (**)(void))(**(_QWORD **)v9 + 8LL);
LABEL_8:
    v14();
    return v3;
  }
  *v5 = v7;
  v14 = *(void (**)(void))(*(_QWORD *)v7 + 8LL);
  if ( (char *)v14 != (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>::AddRef )
    goto LABEL_8;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CBaseStreamGroupProxy,IInspectable>::AddRef(v7);
  return 0LL;
}
