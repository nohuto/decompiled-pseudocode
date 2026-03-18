/*
 * XREFs of ?SetHandleProcess@DXGVAILOBJECT@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C01E6D64
 * Callers:
 *     ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C01B7CA0 (-SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGVAILOBJECT::SetHandleProcess(DXGVAILOBJECT *this, struct _EPROCESS *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  void *v6; // rcx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (DXGVAILOBJECT *)((char *)this + 32), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  if ( a2 || PsGetCurrentProcess(v5, v4) == *((_QWORD *)this + 10) )
  {
    v6 = (void *)*((_QWORD *)this + 10);
    if ( v6 )
    {
      ObfDereferenceObject(v6);
      *((_QWORD *)this + 10) = 0LL;
    }
    if ( a2 )
    {
      *((_QWORD *)this + 10) = a2;
      ObfReferenceObject(a2);
    }
  }
  if ( v7[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
}
