/*
 * XREFs of ?_Query@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJXZ @ 0x1C00F0538
 * Callers:
 *     ?QueryAnchorInfo@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAU_LUID@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x1C00EFFA4 (-QueryAnchorInfo@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAU_LUID@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLO.c)
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C01DFAE4 (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJW4CCD_TOPOLOGY_CLASS@@PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00D7FFC (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_Query(
        BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  struct DXGGLOBAL *Global; // rax
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-40h]
  __int128 v8; // [rsp+30h] [rbp-30h]
  __int128 v9; // [rsp+40h] [rbp-20h]
  int v10; // [rsp+50h] [rbp-10h]

  *((_QWORD *)&v7 + 1) = -1LL;
  *(_QWORD *)&v7 = 0LL;
  *(_QWORD *)&v8 = 0xFFFFFFFEFFFFFFFEuLL;
  *(_OWORD *)this = v7;
  *((_QWORD *)&v8 + 1) = 0xFFFFFFFF00000000uLL;
  *(_QWORD *)&v9 = 0x100000000LL;
  *((_OWORD *)this + 1) = v8;
  WORD4(v9) = 0;
  HIDWORD(v9) = 4;
  LOWORD(v10) = 256;
  *((_OWORD *)this + 2) = v9;
  *((_DWORD *)this + 12) = v10;
  Global = DXGGLOBAL::GetGlobal((__int64)this, a2, a3, a4);
  result = DXGGLOBAL::IterateAdaptersWithCallback(
             (__int64)Global,
             (__int64 (__fastcall *)(_QWORD *, __int64))BtlPreAcquireSharedAccess__BTL_TOPOLOGY_CONSTRUCTOR::_ANCHOR_INFO::_FindAnchorAdaptersCallback_1_,
             (__int64)this,
             1LL);
  if ( (_DWORD)result == -2147483622 )
    result = 0LL;
  if ( (int)result >= 0 && *((_DWORD *)this + 3) == -1 )
    return 3221225473LL;
  return result;
}
