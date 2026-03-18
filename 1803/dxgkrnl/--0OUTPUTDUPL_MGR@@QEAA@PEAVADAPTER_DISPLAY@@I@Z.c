/*
 * XREFs of ??0OUTPUTDUPL_MGR@@QEAA@PEAVADAPTER_DISPLAY@@I@Z @ 0x1C01C7EB4
 * Callers:
 *     ??0OUTPUTDUPL_MGR_INDIRECT@@QEAA@U_LUID@@0I@Z @ 0x1C0035948 (--0OUTPUTDUPL_MGR_INDIRECT@@QEAA@U_LUID@@0I@Z.c)
 * Callees:
 *     <none>
 */

OUTPUTDUPL_MGR *__fastcall OUTPUTDUPL_MGR::OUTPUTDUPL_MGR(OUTPUTDUPL_MGR *this, struct ADAPTER_DISPLAY *a2, int a3)
{
  *(_QWORD *)this = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_BYTE *)this + 72) = 0;
  *((_DWORD *)this + 12) = 1;
  *((_DWORD *)this + 13) = a3;
  *((_QWORD *)this + 5) = (char *)this + 32;
  *((_QWORD *)this + 4) = (char *)this + 32;
  return this;
}
