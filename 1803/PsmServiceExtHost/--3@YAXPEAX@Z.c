/*
 * XREFs of ??3@YAXPEAX@Z @ 0x18003E448
 * Callers:
 *     ??_GExternalResourceSet@ExecutionModel@@EEAAPEAXI@Z @ 0x180003320 (--_GExternalResourceSet@ExecutionModel@@EEAAPEAXI@Z.c)
 *     ?NotificationWorkCallback@ModernResourceEnforcer@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180014E00 (-NotificationWorkCallback@ModernResourceEnforcer@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK.c)
 *     ?UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z @ 0x18001C5F4 (-UpdateMemoryUsageEstimates@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@PEA_K@Z.c)
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@6PEAPEAV82@@Z @ 0x18001DAC0 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ??_GResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x180020710 (--_GResourceSet@ExecutionModel@@UEAAPEAXI@Z.c)
 *     ?Release@HAM_ACTIVITY_RM_CONTEXT@@UEAAKXZ @ 0x180022DF0 (-Release@HAM_ACTIVITY_RM_CONTEXT@@UEAAKXZ.c)
 *     ?Release@ResourceSetCallbackThunk@@UEAAKXZ @ 0x180027560 (-Release@ResourceSetCallbackThunk@@UEAAKXZ.c)
 *     ??_G?$_Func_impl@U?$_Callable_obj@V_lambda_2f784ef15c303f2c8d3bec493a729414_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@_NPEAX_KPEAX_KIU_Nil@wistd@@U12@@wistd@@@details@2@_NPEAX_KPEAX_KIU_Nil@2@U52@@wistd@@UEAAPEAXI@Z @ 0x180030480 (--_G-$_Func_impl@U-$_Callable_obj@V_lambda_2f784ef15c303f2c8d3bec493a729414_@@$0A@@wistd@@V-$fun.c)
 *     ??_GCBackgroundAccessStateChangedListener@@UEAAPEAXI@Z @ 0x1800353C0 (--_GCBackgroundAccessStateChangedListener@@UEAAPEAXI@Z.c)
 *     ?Release@RmpRpExtResourceManagerThunk@@UEAAKXZ @ 0x1800390A0 (-Release@RmpRpExtResourceManagerThunk@@UEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F5A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z @ 0x18004CBD4 (--_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z.c)
 *     ?Release@RmpRpExtResourceSetThunk@@UEAAKXZ @ 0x18004D940 (-Release@RmpRpExtResourceSetThunk@@UEAAKXZ.c)
 *     ?Release@RmpRpsResourceSetCallback@@UEAAKXZ @ 0x18004D970 (-Release@RmpRpsResourceSetCallback@@UEAAKXZ.c)
 *     ??_EResourceManagerServerProxy@@MEAAPEAXI@Z @ 0x18004DBB0 (--_EResourceManagerServerProxy@@MEAAPEAXI@Z.c)
 *     ?Release@ResourceSetCallback@@UEAAKXZ @ 0x18004DF40 (-Release@ResourceSetCallback@@UEAAKXZ.c)
 *     ??_EModernResourceEnforcer@@MEAAPEAXI@Z @ 0x18004E0F0 (--_EModernResourceEnforcer@@MEAAPEAXI@Z.c)
 *     ?Release@ResourceManager@ExecutionModel@@UEAAKXZ @ 0x18004EF00 (-Release@ResourceManager@ExecutionModel@@UEAAKXZ.c)
 *     ?CreateTerminalResourceSet@ResourceSet@ExecutionModel@@QEBAJPEAPEAV12@@Z @ 0x18005A9D4 (-CreateTerminalResourceSet@ResourceSet@ExecutionModel@@QEBAJPEAPEAV12@@Z.c)
 *     ??_EBaseResourceSet@ExecutionModel@@UEAAPEAXI@Z @ 0x18005C890 (--_EBaseResourceSet@ExecutionModel@@UEAAPEAXI@Z.c)
 *     ?Release@TerminalResourceSetCallback@ExecutionModel@@UEAAKXZ @ 0x18005CA30 (-Release@TerminalResourceSetCallback@ExecutionModel@@UEAAKXZ.c)
 *     ??_E?$_Func_base@_NPEAX_KPEAX_KIU_Nil@wistd@@U12@@wistd@@UEAAPEAXI@Z @ 0x18005F670 (--_E-$_Func_base@_NPEAX_KPEAX_KIU_Nil@wistd@@U12@@wistd@@UEAAPEAXI@Z.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIWeakReference@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180067A40 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIWeakReference@@@WRL@Microsoft@@UEAA.c)
 *     ??_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180067A70 (--_EWeakReferenceImpl@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl operator delete(void *Block)
{
  free_0(Block);
}
