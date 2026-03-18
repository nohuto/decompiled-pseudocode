/*
 * XREFs of ??0?$TValueResource@U_MilMatrix3x2D@@UMILCMD_MATRIXRESOURCE@@$0DI@@@IEAA@PEAVCComposition@@@Z @ 0x180152F30
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18005A0F8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall TValueResource<_MilMatrix3x2D,MILCMD_MATRIXRESOURCE,56>::TValueResource<_MilMatrix3x2D,MILCMD_MATRIXRESOURCE,56>(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  _OWORD v6[3]; // [rsp+20h] [rbp-38h] BYREF

  *(_QWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 32) = 0;
  *(_QWORD *)a1 = &TValueResource<_MilMatrix3x2D,MILCMD_MATRIXRESOURCE,56>::`vftable';
  *(_QWORD *)&v6[0] = 0LL;
  memset_0((char *)v6 + 8, 0, 0x28uLL);
  result = a1;
  v4 = v6[1];
  *(_OWORD *)(a1 + 56) = v6[0];
  v5 = v6[2];
  *(_OWORD *)(a1 + 72) = v4;
  *(_OWORD *)(a1 + 88) = v5;
  return result;
}
