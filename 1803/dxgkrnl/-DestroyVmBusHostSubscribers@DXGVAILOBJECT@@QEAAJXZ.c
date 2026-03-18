/*
 * XREFs of ?DestroyVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C01E687C
 * Callers:
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00D31DC (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ??1DXGVAILOBJECT@@QEAA@XZ @ 0x1C01E5AC4 (--1DXGVAILOBJECT@@QEAA@XZ.c)
 *     NtDxgkVailConnect @ 0x1C01E8CF0 (NtDxgkVailConnect.c)
 *     NtDxgkVailDisconnect @ 0x1C01E8F80 (NtDxgkVailDisconnect.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGVAILOBJECT::DestroyVmBusHostSubscribers(DXGVAILOBJECT *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  unsigned int v4; // ebx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (DXGVAILOBJECT *)((char *)this + 32), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  v2 = *((_QWORD *)this + 14);
  if ( !v2 )
  {
    v3 = *((_QWORD *)this + 15);
    if ( !v3 )
    {
      v4 = -2147483611;
      goto LABEL_7;
    }
    goto LABEL_5;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2);
  v3 = *((_QWORD *)this + 15);
  *((_QWORD *)this + 14) = 0LL;
  if ( v3 )
  {
LABEL_5:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 48LL))(v3);
    *((_QWORD *)this + 15) = 0LL;
  }
  v4 = 0;
LABEL_7:
  if ( v6[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
  return v4;
}
