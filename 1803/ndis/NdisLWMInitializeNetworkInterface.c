/*
 * XREFs of NdisLWMInitializeNetworkInterface @ 0x1C00EB720
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     ndisBugCheckEx @ 0x1C004FB0C (ndisBugCheckEx.c)
 *     WPP_SF_qq_guid_ @ 0x1C0062598 (WPP_SF_qq_guid_.c)
 *     WPP_SF_qq_guid_qd @ 0x1C00625F8 (WPP_SF_qq_guid_qd.c)
 *     ndisReferencePackage @ 0x1C00ADB10 (ndisReferencePackage.c)
 *     ndisLWMCreateMiniport @ 0x1C00EC7B8 (ndisLWMCreateMiniport.c)
 */

__int64 __fastcall NdisLWMInitializeNetworkInterface(ULONG_PTR BugCheckParameter3, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v8; // edi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq_guid_(BugCheckParameter3, a2, BugCheckParameter3, a2, a3);
  *a4 = 0LL;
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( *(char *)(BugCheckParameter3 + 26) >= 0 )
    ndisBugCheckEx(0x29uLL, 2uLL, BugCheckParameter3, 0LL);
  v8 = ndisLWMCreateMiniport(BugCheckParameter3, a3, &v13);
  if ( v8 )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_(0x8Eu, &WPP_35a75e136a693dcd7e4be129c414b9c6_Traceguids);
  }
  else
  {
    v9 = v13;
    *(_QWORD *)(v13 + 24) = a2;
    *a4 = v9;
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq_guid_qd(v11, v10, BugCheckParameter3, a2, a3, *a4, v8);
  return v8;
}
