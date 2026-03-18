/*
 * XREFs of ??0OUTPUTDUPL_MGR_INDIRECT@@QEAA@U_LUID@@0I@Z @ 0x1C0035948
 * Callers:
 *     ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C01C88D4 (-CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0OUTPUTDUPL_MGR@@QEAA@PEAVADAPTER_DISPLAY@@I@Z @ 0x1C01C7EB4 (--0OUTPUTDUPL_MGR@@QEAA@PEAVADAPTER_DISPLAY@@I@Z.c)
 */

OUTPUTDUPL_MGR_INDIRECT *__fastcall OUTPUTDUPL_MGR_INDIRECT::OUTPUTDUPL_MGR_INDIRECT(
        OUTPUTDUPL_MGR_INDIRECT *this,
        struct _LUID a2,
        struct _LUID a3,
        unsigned int a4)
{
  OUTPUTDUPL_MGR_INDIRECT *result; // rax

  *((_QWORD *)this + 2) = DXGGLOBAL::GetGlobal((__int64)this);
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  OUTPUTDUPL_MGR::OUTPUTDUPL_MGR((OUTPUTDUPL_MGR_INDIRECT *)((char *)this + 24), 0LL, a4);
  result = this;
  *((struct _LUID *)this + 13) = a2;
  *((struct _LUID *)this + 14) = a3;
  *((_BYTE *)this + 96) = 1;
  return result;
}
