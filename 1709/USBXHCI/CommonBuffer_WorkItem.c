/*
 * XREFs of CommonBuffer_WorkItem @ 0x1C000FB70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qqd @ 0x1C000FD14 (WPP_RECORDER_SF_qqd.c)
 *     XilCoreCommonBuffer_AcquireBuffers @ 0x1C0040408 (XilCoreCommonBuffer_AcquireBuffers.c)
 *     XilCoreCommonBuffer_PreAllocateBuffers @ 0x1C0040BB0 (XilCoreCommonBuffer_PreAllocateBuffers.c)
 */

void __fastcall CommonBuffer_WorkItem(PVOID IoObject, char *Context, PIO_WORKITEM IoWorkItem)
{
  KIRQL v5; // r9
  char *v6; // r8
  __int64 ***v7; // rcx
  __int64 **v8; // rdx
  _QWORD *v9; // rax
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  __int64 *v13; // rbx
  __int64 *v14; // rax
  unsigned int v15; // eax
  int v16; // [rsp+20h] [rbp-40h]
  __int64 *v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 **v18; // [rsp+48h] [rbp-18h]
  _QWORD v19[2]; // [rsp+50h] [rbp-10h] BYREF
  char v20; // [rsp+78h] [rbp+18h] BYREF

  v20 = 0;
  v18 = &v17;
  v17 = (__int64 *)&v17;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 6);
  v6 = Context + 56;
  while ( *(char **)v6 != v6 )
  {
    v7 = *(__int64 ****)v6;
    if ( *(char **)(*(_QWORD *)v6 + 8LL) != v6 || (v8 = *v7, (*v7)[1] != (__int64 *)v7) )
      __fastfail(3u);
    *(_QWORD *)v6 = v8;
    v8[1] = (__int64 *)v6;
    v9 = v18;
    if ( *v18 != (__int64 *)&v17 )
      __fastfail(3u);
    v7[1] = v18;
    *v7 = &v17;
    *v9 = v7;
    v18 = (__int64 **)v7;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)Context + 6, v5);
  while ( 1 )
  {
    v13 = v17;
    if ( v17 == (__int64 *)&v17 )
      break;
    if ( (__int64 **)v17[1] != &v17 || (v14 = (__int64 *)*v17, *(__int64 **)(*v17 + 8) != v17) )
      __fastfail(3u);
    v17 = (__int64 *)*v17;
    v14[1] = (__int64)&v17;
    v13[1] = (__int64)v13;
    *v13 = (__int64)v13;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qqd(
        *(_QWORD *)(*(_QWORD *)Context + 72LL),
        v10,
        v11,
        v12,
        v16,
        (char)v13,
        v13[2],
        *((_DWORD *)v13 + 6));
    v19[1] = v19;
    v19[0] = v19;
    v15 = XilCoreCommonBuffer_AcquireBuffers(
            (int)Context + 80,
            *((_DWORD *)v13 + 6),
            *((_DWORD *)v13 + 7),
            (unsigned int)v19,
            v13[2],
            *((_DWORD *)v13 + 8),
            (__int64)&v20);
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD *))v13[5])(v13, v15, v19);
  }
  XilCoreCommonBuffer_PreAllocateBuffers(Context + 80);
  IoFreeWorkItem(IoWorkItem);
  KeSetEvent((PRKEVENT)Context + 1, 0, 0);
}
