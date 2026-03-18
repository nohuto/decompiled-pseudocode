/*
 * XREFs of ?CreateNewTargetInfo@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEAPEAU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C0224050
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireRawDdiEnumeratorCachedTargetInfo@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAPEAU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C0221238 (-AcquireRawDdiEnumeratorCachedTargetInfo@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAPEAU_D3DKMDT_VIDEO_PR.c)
 */

__int64 __fastcall DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL::CreateNewTargetInfo(
        DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDEOPRESENTTARGETSET__ *const a2,
        struct _D3DKMDT_VIDEO_PRESENT_TARGET **a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  DMMVIDEOPRESENTTARGETSET *v9; // rcx
  __int64 v10; // rax
  __int64 result; // rax
  struct _D3DKMDT_VIDEO_PRESENT_TARGET *v12; // [rsp+30h] [rbp+8h] BYREF

  v6 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v6 + 24) = this;
  *(_QWORD *)(v6 + 32) = a2;
  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    WdLogEvent5_WdAssertion(v8);
  }
  *(_QWORD *)a2 = 0LL;
  if ( this && *((_DWORD *)this + 26) == 1833172994 )
    v9 = this;
  else
    v9 = 0LL;
  if ( v9 )
  {
    v12 = 0LL;
    result = DMMVIDEOPRESENTTARGETSET::AcquireRawDdiEnumeratorCachedTargetInfo(v9, &v12);
    if ( (int)result >= 0 )
    {
      *(_QWORD *)a2 = v12;
      return 0LL;
    }
    else if ( (_DWORD)result == -1071774971 )
    {
      return 3221225495LL;
    }
  }
  else
  {
    v10 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v10 + 24) = this;
    WdLogEvent5_WdError(v10);
    return 3223192342LL;
  }
  return result;
}
