/*
 * XREFs of ??0DMMVIDEOPRESENTTARGET@@QEAA@QEAVDMMVIDEOPRESENTTARGETSET@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@W4_DXGK_CHILD_DEVICE_HPD_AWARENESS@@W4_D3DKMDT_MONITOR_ORIENTATION_AWARENESS@@E@Z @ 0x1C0011D6C
 * Callers:
 *     ?AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C011E580 (-AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESEN.c)
 *     ?CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C01DC278 (-CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@.c)
 * Callees:
 *     ??0?$IndexedSetElement@I@@QEAA@I@Z @ 0x1C000D138 (--0-$IndexedSetElement@I@@QEAA@I@Z.c)
 *     memset @ 0x1C0015700 (memset.c)
 */

DMMVIDEOPRESENTTARGET *__fastcall DMMVIDEOPRESENTTARGET::DMMVIDEOPRESENTTARGET(
        DMMVIDEOPRESENTTARGET *this,
        struct DMMVIDEOPRESENTTARGETSET *const a2,
        __int64 a3,
        __int64 a4,
        enum _DXGK_CHILD_DEVICE_HPD_AWARENESS a5,
        enum _D3DKMDT_MONITOR_ORIENTATION_AWARENESS a6,
        char a7)
{
  int v8; // ebp
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rdx
  DMMVIDEOPRESENTTARGET *result; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  v8 = a4;
  IndexedSetElement<unsigned int>::IndexedSetElement<unsigned int>((__int64)this, (unsigned int)a3, a3, a4);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  v12 = 0xFFFFFFFFLL;
  *((_DWORD *)this + 14) = 1833172996;
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  v13 = 1LL;
  *((_QWORD *)this + 8) = &ReferenceCounted::`vftable';
  *((_DWORD *)this + 18) = 1;
  *((_DWORD *)this + 100) = -1;
  *(_QWORD *)this = &DMMVIDEOPRESENTTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDEOPRESENTTARGET::`vftable'{for `ContainedBy<DMMVIDEOPRESENTTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDEOPRESENTTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDEOPRESENTTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDEOPRESENTTARGET::`vftable'{for `ReferenceCounted'};
  *((_DWORD *)this + 22) = a5;
  *((_DWORD *)this + 23) = a6;
  *((_DWORD *)this + 20) = v8;
  *((_DWORD *)this + 21) = v8;
  *((_BYTE *)this + 96) = a7;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 1;
  *((_DWORD *)this + 29) = -1;
  *((_DWORD *)this + 30) = -1;
  *((_DWORD *)this + 96) = 0;
  *((_BYTE *)this + 388) = 0;
  *((_DWORD *)this + 98) = -1;
  *((_WORD *)this + 198) = 0;
  *((_BYTE *)this + 398) = 0;
  *((_WORD *)this + 202) = 256;
  *((_BYTE *)this + 406) = 0;
  *((_WORD *)this + 204) = 0;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  if ( a7 )
  {
    if ( (unsigned int)(v8 + 1) > 0xF || (v12 = 32797LL, !_bittest((const int *)&v12, v8 + 1)) )
    {
      v15 = WdLogNewEntry5_WdAssertion(v12, 1LL, v10, v11);
      WdLogEvent5_WdAssertion(v15);
    }
  }
  if ( a2 )
  {
    if ( *((_QWORD *)this + 5) )
    {
      v17 = WdLogNewEntry5_WdAssertion(v12, v13, v10, v11);
      WdLogEvent5_WdAssertion(v17);
    }
    *((_QWORD *)this + 5) = a2;
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v12, v13);
    *(_QWORD *)(v16 + 24) = (char *)this + 32;
    *(_QWORD *)(v16 + 32) = *((_QWORD *)this + 5);
    WdLogEvent5_WdError(v16);
  }
  memset((char *)this + 128, 0, 0x100uLL);
  *((_QWORD *)this + 53) = (char *)this + 416;
  *((_QWORD *)this + 52) = (char *)this + 416;
  *((_QWORD *)this + 58) = (char *)this + 456;
  *((_QWORD *)this + 57) = (char *)this + 456;
  result = this;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  return result;
}
