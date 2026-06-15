/*
 * XREFs of ??0?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@QEAA@AEBV01@@Z @ 0x18003D098
 * Callers:
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@@Z @ 0x18003DD18 (-SetSpatialAudioSettings@CSpatialProperties@@QEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEBUtWAVE.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropertyStore@@PEAUIPolicyConfig@@PEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAH@Z @ 0x18003DF68 (-ProcessPropertyChange@CSpatialProperties@@QEAAXAEBU_tagpropertykey@@PEAUIMMDevice@@PEAUIPropert.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@PEAGPEBUtWAVEFORMATEX@@V?$function@$$A6A_NPEBUWAVEFORMATEXTENSIBLE@@@Z@std@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x18003F190 (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAX_NPEAUIMMDevice@@PEAUIPropertyStore@@P.c)
 * Callees:
 *     std::_Func_impl__lambda_a6a881e12778e3952f42054a91b627a8__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Move @ 0x180040600 (std--_Func_impl__lambda_a6a881e12778e3952f42054a91b627a8__std--allocator_int__bool__ea_180040600.c)
 *     std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Move @ 0x180040640 (std--_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std--allocator_int__bool__ea_180040640.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::function<bool (WAVEFORMATEXTENSIBLE const *)>::function<bool (WAVEFORMATEXTENSIBLE const *)>(
        __int64 a1,
        __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, __int64); // rcx
  __int64 (__fastcall *v4)(_QWORD, __int64); // rax
  __int64 v5; // rax

  *(_QWORD *)(a1 + 56) = 0LL;
  v3 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 56);
  if ( v3 )
  {
    v4 = **v3;
    if ( v4 == std::_Func_impl__lambda_a6a881e12778e3952f42054a91b627a8__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Move )
    {
      v5 = std::_Func_impl__lambda_a6a881e12778e3952f42054a91b627a8__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Move(
             v3,
             a1);
    }
    else if ( v4 == std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Move )
    {
      v5 = std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Move(
             v3,
             a1);
    }
    else
    {
      v5 = v4(v3, a1);
    }
    *(_QWORD *)(a1 + 56) = v5;
  }
  return a1;
}
