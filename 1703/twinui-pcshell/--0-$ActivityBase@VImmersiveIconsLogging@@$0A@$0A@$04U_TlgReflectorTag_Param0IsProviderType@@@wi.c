/*
 * XREFs of ??0?$ActivityBase@VImmersiveIconsLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18017F004
 * Callers:
 *     ?LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00I_NPEBGPEAPEAUHBITMAP__@@@Z @ 0x18017EA78 (-LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00I_NPEBGPEAPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     ??0StoredFailureInfo@wil@@QEAA@XZ @ 0x18001D37C (--0StoredFailureInfo@wil@@QEAA@XZ.c)
 */

__int64 __fastcall wil::ActivityBase<ImmersiveIconsLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ImmersiveIconsLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = a1 + 56;
  *(_QWORD *)a1 = &wil::ActivityBase<ImmersiveIconsLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = a1 + 96;
  *(_QWORD *)(a1 + 16) = a1;
  *(_QWORD *)(a1 + 48) = a1 + 56;
  *(_DWORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_BYTE *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 104) = "LoadIconW";
  *(_DWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 128) = 1;
  wil::StoredFailureInfo::StoredFailureInfo((wil::StoredFailureInfo *)(a1 + 136));
  *(_QWORD *)(v1 + 240) = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 304) = 0LL;
  return result;
}
