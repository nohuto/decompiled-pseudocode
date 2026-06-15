/*
 * XREFs of ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x18002C55C
 * Callers:
 *     ?GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KK_N4PEAVCAudioSessionManager@@44PEAPEAUISaDeviceProxy@@@Z @ 0x180004BE4 (-GetSaDeviceForSharedStream@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDevi.c)
 *     ??1CProcessSubmixProxy@@MEAA@XZ @ 0x1800080C4 (--1CProcessSubmixProxy@@MEAA@XZ.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBKK@std@@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKK@1@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@@Z @ 0x180009260 (--$_Insert_nohint@AEAU-$pair@$$CBKK@std@@PEAU-$_Tree_node@U-$pair@$$CBKK@std@@PEAX@2@@-$_Tree@V-.c)
 *     ??1CSaDeviceProxy@@MEAA@XZ @ 0x180009890 (--1CSaDeviceProxy@@MEAA@XZ.c)
 *     ??1CBaseStreamGroupProxy@@MEAA@XZ @ 0x18000A568 (--1CBaseStreamGroupProxy@@MEAA@XZ.c)
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K@Z @ 0x18000BFD0 (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K@Z.c)
 *     ?RecalculateVolume@CAudioStream@@UEAAJXZ @ 0x180018220 (-RecalculateVolume@CAudioStream@@UEAAJXZ.c)
 *     ??1CAudioStream@@MEAA@XZ @ 0x180019880 (--1CAudioStream@@MEAA@XZ.c)
 *     ?overflow@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MEAAHH@Z @ 0x18001A3B0 (-overflow@-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@MEAAHH@Z.c)
 *     ?_Tidy@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x18002C630 (-_Tidy@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAXXZ.c)
 *     ?_Change_array@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@AEAAXQEAVWeakRef@WRL@Microsoft@@_K1@Z @ 0x18002C6F0 (-_Change_array@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@.c)
 *     ??$emplace_back@AEBVWeakRef@WRL@Microsoft@@@?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAAXAEBVWeakRef@WRL@Microsoft@@@Z @ 0x18002C754 (--$emplace_back@AEBVWeakRef@WRL@Microsoft@@@-$vector@VWeakRef@WRL@Microsoft@@V-$allocator@VWeakR.c)
 *     std::_Func_impl__lambda_c7c1c81e1b12c5b6da40af71127e61d7__std::allocator_int__bool_ISaDeviceProxy_____ptr64_::_Delete_this @ 0x18002E260 (std--_Func_impl__lambda_c7c1c81e1b12c5b6da40af71127e61d7__std--allocator_int__bool_ISaDeviceProx.c)
 *     ?_Change_array@?$vector@PEAVCVADServer@@V?$allocator@PEAVCVADServer@@@std@@@std@@AEAAXQEAPEAVCVADServer@@_K1@Z @ 0x18002E274 (-_Change_array@-$vector@PEAVCVADServer@@V-$allocator@PEAVCVADServer@@@std@@@std@@AEAAXQEAPEAVCVA.c)
 *     std::_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std::allocator_int__bool_WAVEFORMATEXTENSIBLE_const_____ptr64_::_Delete_this @ 0x1800405E0 (std--_Func_impl__lambda_d46c42d8c87c8b0eef0423a918fcc8ac__std--allocator_int__bool__ea_1800405E0.c)
 *     std::_Func_impl__lambda_8da706c8feaf042eaa6260cdea38ce5d__std::allocator_int__void_::_Delete_this @ 0x180045200 (std--_Func_impl__lambda_8da706c8feaf042eaa6260cdea38ce5d__std--allocator_int__void_--_Delete_thi.c)
 *     std::_Func_impl__lambda_7b5d4040f449a8cdcef3c365c74c67ab__std::allocator_int__void_::_Delete_this @ 0x18004CF20 (std--_Func_impl__lambda_7b5d4040f449a8cdcef3c365c74c67ab__std--allocator_int__void_--_Delete_thi.c)
 *     std::_Func_impl__lambda_667eb01a999704ac1c933d543c16abf4__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Delete_this @ 0x18004CF50 (std--_Func_impl__lambda_667eb01a999704ac1c933d543c16abf4__std--allocator_int__long__ea_18004CF50.c)
 *     std::_Wrap_alloc_std::allocator_std::_Func_impl__lambda_667eb01a999704ac1c933d543c16abf4__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_____::deallocate @ 0x18004D038 (std--_Wrap_alloc_std--allocator_std--_Func_impl__lambda_667eb01a999704ac1c933d543c16abf4__std--a.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_long_unsigned_long_std::less_unsigned_long__std::allocator_std::pair_unsigned_long_const__unsigned_long____0___::_Insert_nohint_std::pair_unsigned_long_const__unsigned_long__&___ptr64_std::_Tree_node_std::pair_unsigned_long_const__unsigned_long__void_____ptr64______ptr64__::_1_::catch$116 @ 0x180059B10 (_std--_Tree_std--_Tmap_traits_unsigned_long_unsigned_long_std--less_unsigned_long__std--allocato.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_unsigned_long_unsigned_long_std::less_unsigned_long__std::allocator_std::pair_unsigned_long_const__unsigned_long____0___::_Buynode0_::_1_::catch$39 @ 0x180059B40 (_std--_Tree_comp_alloc_std--_Tmap_traits_unsigned_long_unsigned_long_std--less_unsigned_long__st.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_unsigned_long_unsigned_long_std::less_unsigned_long__std::allocator_std::pair_unsigned_long_const__unsigned_long____0___::_Buynode_std::pair_unsigned_long_int____::_1_::catch$26 @ 0x180059B69 (_std--_Tree_comp_alloc_std--_Tmap_traits_unsigned_long_unsigned_long_std--less_unsi_ea_180059B69.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_unsigned_long_unsigned_long_std::less_unsigned_long__std::allocator_std::pair_unsigned_long_const__unsigned_long____0___::_Buyheadnode_::_1_::catch$27 @ 0x180059B92 (_std--_Tree_comp_alloc_std--_Tmap_traits_unsigned_long_unsigned_long_std--less_unsi_ea_180059B92.c)
 *     _std::vector_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::emplace_back_Microsoft::WRL::WeakRef_const_&___ptr64__::_1_::catch$106 @ 0x18005BD20 (_std--vector_Microsoft--WRL--WeakRef_std--allocator_Microsoft--WRL--WeakRef___--emplace_back_Mic.c)
 *     _std::vector_Microsoft::WRL::WeakRef_std::allocator_Microsoft::WRL::WeakRef___::emplace_Microsoft::WRL::WeakRef_const_&___ptr64__::_1_::catch$98 @ 0x18005BD73 (_std--vector_Microsoft--WRL--WeakRef_std--allocator_Microsoft--WRL--WeakRef___--emplace_Microsof.c)
 *     _std::vector_CVADServer_____ptr64_std::allocator_CVADServer_____ptr64___::emplace_back_CVADServer_____ptr64_const_&___ptr64__::_1_::catch$72 @ 0x18005BE9A (_std--vector_CVADServer_____ptr64_std--allocator_CVADServer_____ptr64___--emplace_back_CVADServe.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore__std::less_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore______0___::_Buynode0_::_1_::catch$39 @ 0x18005BEE7 (_std--_Tree_comp_alloc_std--_Tmap_traits_std--basic_string_unsigned_short_std--char_traits_unsig.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore__std::less_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore______0___::_Buynode_std::piecewise_construct_t_const_&___ptr64_std::tuple_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____&&___ptr64__std::tuple_____::_1_::catch$64 @ 0x18005BF10 (_std--_Tree_comp_alloc_std--_Tmap_traits_std--basic_string_unsigned_short_std--char_ea_18005BF10.c)
 *     _std::_Tree_comp_alloc_std::_Tmap_traits_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore__std::less_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore______0___::_Buyheadnode_::_1_::catch$27 @ 0x18005C436 (_std--_Tree_comp_alloc_std--_Tmap_traits_std--basic_string_unsigned_short_std--char_ea_18005C436.c)
 *     ?_Tidy_deallocate_only@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x18007AEF8 (-_Tidy_deallocate_only@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18007B0A4 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?_Tidy@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@IEAAXXZ @ 0x18007B664 (-_Tidy@-$basic_stringbuf@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@IEAAXXZ.c)
 *     ??1AudioSrvVolumeTelemetryStreamVolume@@QEAA@XZ @ 0x18007B7C0 (--1AudioSrvVolumeTelemetryStreamVolume@@QEAA@XZ.c)
 *     ??_GCResourcePriorityTracker@@QEAAPEAXI@Z @ 0x18007C978 (--_GCResourcePriorityTracker@@QEAAPEAXI@Z.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBKK@std@@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@AEAU?$pair@$$CBKK@1@1@Z @ 0x18007C9D4 (--$_Insert_at@AEAU-$pair@$$CBKK@std@@PEAU-$_Tree_node@U-$pair@$$CBKK@std@@PEAX@2@@-$_Tree@V-$_Tm.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@Z @ 0x18007CB44 (-_Erase@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@@@.c)
 *     ??1?$vector@PEAVCVADServer@@V?$allocator@PEAVCVADServer@@@std@@@std@@QEAA@XZ @ 0x18007CEE0 (--1-$vector@PEAVCVADServer@@V-$allocator@PEAVCVADServer@@@std@@@std@@QEAA@XZ.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K@Z @ 0x18007FD1C (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K@Z.c)
 *     ??1?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18009FDAC (--1-$vector@V-$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIProcessSubm.c)
 *     _std::vector_Microsoft::WRL::ComPtr_IProcessSubmixProxy__std::allocator_Microsoft::WRL::ComPtr_IProcessSubmixProxy_____::emplace_back_Microsoft::WRL::ComPtr_IProcessSubmixProxy__const_&___ptr64__::_1_::catch$73 @ 0x1800A4BD0 (_std--vector_Microsoft--WRL--ComPtr_IProcessSubmixProxy__std--allocator_Microsoft--WRL--ComPtr_I.c)
 *     _lambda_5aefdb8023b69da3f6b9ebb996369b7f_::operator() @ 0x1800A4DC4 (_lambda_5aefdb8023b69da3f6b9ebb996369b7f_--operator().c)
 *     ??_ECDeviceGraphStore@@UEAAPEAXI@Z @ 0x1800A4FE0 (--_ECDeviceGraphStore@@UEAAPEAXI@Z.c)
 *     std::_Func_impl__lambda_a7a871fc25f557e11998827eb9df152a__std::allocator_int__void_::_Delete_this @ 0x1800A7530 (std--_Func_impl__lambda_a7a871fc25f557e11998827eb9df152a__std--allocator_int__void_--_Delete_thi.c)
 *     std::_Func_impl__lambda_c1574d5d7a8b6f670ac925b0b327d44d__std::allocator_int__void_::_Delete_this @ 0x1800A75A0 (std--_Func_impl__lambda_c1574d5d7a8b6f670ac925b0b327d44d__std--allocator_int__void_--_Delete_thi.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x1800A762C (-_Erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x1800A788C (-erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@_ea_1800A788C.c)
 *     _std::vector_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore__std::allocator_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore_____::emplace_back_Microsoft::WRL::ComPtr_IDeviceGraphObjectsStore__const_&___ptr64__::_1_::catch$73 @ 0x1800A81C1 (_std--vector_Microsoft--WRL--ComPtr_IDeviceGraphObjectsStore__std--allocator_Microsoft--WRL--Com.c)
 *     _std::vector_Microsoft::WRL::ComPtr_IStreamGroupProxy__std::allocator_Microsoft::WRL::ComPtr_IStreamGroupProxy_____::emplace_back_Microsoft::WRL::ComPtr_IStreamGroupProxy__const_&___ptr64__::_1_::catch$73 @ 0x1800A8319 (_std--vector_Microsoft--WRL--ComPtr_IStreamGroupProxy__std--allocator_Microsoft--WRL--ComPtr_ISt.c)
 *     _std::vector_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy__std::allocator_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy_____::emplace_back_wil::com_ptr_t_IProcessSubmixProxy_wil::err_returncode_policy____::_1_::catch$73 @ 0x1800A845B (_std--vector_wil--com_ptr_t_IProcessSubmixProxy_wil--err_returncode_policy__std--allocator_wil--.c)
 *     ??1?$vector@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800A849C (--1-$vector@V-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIDevice.c)
 *     ?GetStreamGroups@CDeviceGraphStore@@UEAAJAEAV?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800A8CC0 (-GetStreamGroups@CDeviceGraphStore@@UEAAJAEAV-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microso.c)
 *     ?GetSubmixesForApplication@CDeviceGraphStore@@UEAAJPEBGKAEAV?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800A8F60 (-GetSubmixesForApplication@CDeviceGraphStore@@UEAAJPEBGKAEAV-$vector@V-$com_ptr_t@UIProcessSubmi.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@_K1@Z @ 0x1800A95E8 (-_Change_array@-$vector@V-$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@V-$allocator@V-$Com.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@_K1@Z @ 0x1800A9684 (-_Change_array@-$vector@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIS.c)
 *     ?_Change_array@?$vector@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXQEAV?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@_K1@Z @ 0x1800A970C (-_Change_array@-$vector@V-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@V-$.c)
 *     std::_Func_impl__lambda_e798b809e8d9f69eca3e844d88789cba__std::allocator_int__bool_ISaDeviceProxy_____ptr64_::_Delete_this @ 0x1800A97E0 (std--_Func_impl__lambda_e798b809e8d9f69eca3e844d88789cba__std--allocator_int__bool__ea_1800A97E0.c)
 *     ?_Destroy_if_not_nil@?$_Tree@V?$_Tmap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$ComPtr@UIDeviceGraphObjectsStore@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x1800A9808 (-_Destroy_if_not_nil@-$_Tree@V-$_Tmap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 *     _lambda_cbe9e4feebe37314cade45d366e33fc3_::operator() @ 0x1800AA1AC (_lambda_cbe9e4feebe37314cade45d366e33fc3_--operator().c)
 *     ??_GCAudioResourceManager@@UEAAPEAXI@Z @ 0x1800AA380 (--_GCAudioResourceManager@@UEAAPEAXI@Z.c)
 *     ?RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@_KKPEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800AC8A4 (-RetryGetSaDeviceForExclusive@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUSaDe.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800ACE74 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUI.c)
 *     ?_Tidy@?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@IEAAXXZ @ 0x1800AD75C (-_Tidy@-$deque@V-$shared_ptr@VWorkItem@CWorkFifo@@@std@@V-$allocator@V-$shared_ptr@VWorkItem@CWo.c)
 *     ??1CPdcActivationClient@@QEAA@XZ @ 0x1800ADED4 (--1CPdcActivationClient@@QEAA@XZ.c)
 *     _std::vector_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient____std::allocator_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient_______::emplace_back_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient______::_1_::catch$99 @ 0x1800AE85F (_std--vector_std--unique_ptr_CAppSubmixClient_std--default_delete_CAppSubmixClient____std--alloc.c)
 *     _std::vector_std::unique_ptr_CAppSubmixContext_std::default_delete_CAppSubmixContext____std::allocator_std::unique_ptr_CAppSubmixContext_std::default_delete_CAppSubmixContext_______::emplace_back_std::unique_ptr_CAppSubmixContext_std::default_delete_CAppSubmixContext______::_1_::catch$99 @ 0x1800AE99F (_std--vector_std--unique_ptr_CAppSubmixContext_std--default_delete_CAppSubmixContext____std--all.c)
 *     _std::vector_std::unique_ptr_CApplicationSubmix_std::default_delete_CApplicationSubmix____std::allocator_std::unique_ptr_CApplicationSubmix_std::default_delete_CApplicationSubmix_______::emplace_back_std::unique_ptr_CApplicationSubmix_std::default_delete_CApplicationSubmix______::_1_::catch$99 @ 0x1800AEADF (_std--vector_std--unique_ptr_CApplicationSubmix_std--default_delete_CApplicationSubmix____std--a.c)
 *     ??1CApplicationSubmix@@QEAA@XZ @ 0x1800AEE30 (--1CApplicationSubmix@@QEAA@XZ.c)
 *     ??1CProcessSubmixManager@@UEAA@XZ @ 0x1800AEF14 (--1CProcessSubmixManager@@UEAA@XZ.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@2@_K1@Z @ 0x1800AF798 (-_Change_array@-$vector@V-$unique_ptr@VCAppSubmixClient@@U-$default_delete@VCAppSubmixClient@@@s.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@2@_K1@Z @ 0x1800AF840 (-_Change_array@-$vector@V-$unique_ptr@VCAppSubmixContext@@U-$default_delete@VCAppSubmixContext@@.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@V?$allocator@V?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCApplicationSubmix@@U?$default_delete@VCApplicationSubmix@@@std@@@2@_K1@Z @ 0x1800AF8E8 (-_Change_array@-$vector@V-$unique_ptr@VCApplicationSubmix@@U-$default_delete@VCApplicationSubmix.c)
 *     asm_GetApplicationSubmixes @ 0x1800AFFE0 (asm_GetApplicationSubmixes.c)
 *     _std::vector_Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription_std::allocator_Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription___::emplace_back_Sarm::CSpatialAudioResourceManager::AppPolicyChangeSubscription__::_1_::catch$73 @ 0x1800C1BE4 (_std--vector_Sarm--CSpatialAudioResourceManager--AppPolicyChangeSubscription_std--allocator_Sarm.c)
 *     ??1?$_Deque_alloc@U?$_Deque_base_types@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@@std@@QEAA@XZ @ 0x1800C1D04 (--1-$_Deque_alloc@U-$_Deque_base_types@V-$shared_ptr@VWorkItem@CWorkFifo@@@std@@V-$allocator@V-$.c)
 *     ??1?$deque@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@V?$allocator@V?$shared_ptr@VWorkItem@CWorkFifo@@@std@@@2@@std@@QEAA@XZ @ 0x1800C1D28 (--1-$deque@V-$shared_ptr@VWorkItem@CWorkFifo@@@std@@V-$allocator@V-$shared_ptr@VWorkItem@CWorkFi.c)
 *     ??1CSpatialAudioResourceManager@Sarm@@UEAA@XZ @ 0x1800C1D6C (--1CSpatialAudioResourceManager@Sarm@@UEAA@XZ.c)
 *     ??1CWorkFifo@@QEAA@XZ @ 0x1800C1F1C (--1CWorkFifo@@QEAA@XZ.c)
 *     ?_Change_array@?$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V?$allocator@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@@std@@@std@@AEAAXQEAUAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@_K1@Z @ 0x1800C4BF8 (-_Change_array@-$vector@UAppPolicyChangeSubscription@CSpatialAudioResourceManager@Sarm@@V-$alloc.c)
 *     std::_Func_impl__lambda_c4f40eb4128b796d78dc595c2797cc70__std::allocator_int__void_::_Delete_this @ 0x1800C4CB0 (std--_Func_impl__lambda_c4f40eb4128b796d78dc595c2797cc70__std--allocator_int__void_--_Delete_thi.c)
 *     ?_Growmap@?$deque@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@@2@@std@@IEAAX_K@Z @ 0x1800C4ED0 (-_Growmap@-$deque@V-$shared_ptr@USaDeviceReevaluationContext@@@std@@V-$allocator@V-$shared_ptr@U.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Deallocate(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  void *v3; // rbx
  HANDLE ProcessHeap; // rax
  unsigned __int64 v5; // rax

  v3 = a1;
  if ( a2 > 0xFFFFFFFFFFFFFFFFuLL / a3 )
  {
    _o__invalid_parameter_noinfo_noreturn(a1);
    JUMPOUT(0x18002C5B3LL);
  }
  if ( a3 * a2 >= 0x1000 )
  {
    if ( ((unsigned __int8)a1 & 0x1F) != 0 )
    {
      _o__invalid_parameter_noinfo_noreturn(a1);
      __debugbreak();
    }
    v5 = *(a1 - 1);
    if ( v5 >= (unsigned __int64)a1 )
    {
      _o__invalid_parameter_noinfo_noreturn(a1);
      JUMPOUT(0x180074FD1LL);
    }
    if ( (unsigned __int64)a1 - v5 < 8 )
    {
      _o__invalid_parameter_noinfo_noreturn(a1);
      JUMPOUT(0x180074FE1LL);
    }
    if ( (unsigned __int64)a1 - v5 > 0x27 )
    {
      _o__invalid_parameter_noinfo_noreturn(a1);
      JUMPOUT(0x180074FEELL);
    }
    v3 = (void *)*(a1 - 1);
  }
  ProcessHeap = GetProcessHeap();
  HeapFree(ProcessHeap, 0, v3);
}
