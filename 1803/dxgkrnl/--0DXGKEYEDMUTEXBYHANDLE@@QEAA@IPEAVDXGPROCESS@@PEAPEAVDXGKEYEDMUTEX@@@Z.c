/*
 * XREFs of ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C00348B8
 * Callers:
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z @ 0x1C01BFC5C (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2@Z.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C01C1570 (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 *     DxgkReleaseKeyedMutex @ 0x1C01C2D10 (DxgkReleaseKeyedMutex.c)
 *     DxgkReleaseKeyedMutex2 @ 0x1C01C2F30 (DxgkReleaseKeyedMutex2.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00152B0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0033374 (-AcquireReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 */

DXGKEYEDMUTEXBYHANDLE *__fastcall DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE(
        DXGKEYEDMUTEXBYHANDLE *this,
        unsigned int a2,
        struct _KTHREAD **a3,
        struct DXGKEYEDMUTEX **a4)
{
  __int64 v8; // rax
  struct _KTHREAD *v9; // r8
  int v10; // ecx
  DXGKEYEDMUTEX *v11; // rax
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v13, a3);
  v8 = (a2 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v8 < *((_DWORD *)a3 + 62)
    && (v9 = a3[29], v10 = *((_DWORD *)v9 + 4 * v8 + 2), ((a2 >> 25) & 0x60) == (*((_BYTE *)v9 + 16 * v8 + 8) & 0x60))
    && (v10 & 0x2000) == 0
    && (v10 & 0x1F) == 9 )
  {
    v11 = (DXGKEYEDMUTEX *)*((_QWORD *)v9 + 2 * (unsigned int)v8);
  }
  else
  {
    v11 = 0LL;
  }
  *(_QWORD *)this = v11;
  if ( v11 )
  {
    DXGKEYEDMUTEX::AcquireReference(v11);
    v11 = *(DXGKEYEDMUTEX **)this;
  }
  *a4 = v11;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
  return this;
}
