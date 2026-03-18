/*
 * XREFs of PnpGetDevicePropertyData @ 0x140587428
 * Callers:
 *     IoGetDevicePropertyData @ 0x140587390 (IoGetDevicePropertyData.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x140102980 (ExReleaseResourceLite.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     _PnpGetObjectProperty @ 0x140506D2C (_PnpGetObjectProperty.c)
 *     PnpCompareInterruptInformation @ 0x140612D04 (PnpCompareInterruptInformation.c)
 *     RtlLCIDToCultureName @ 0x140787510 (RtlLCIDToCultureName.c)
 */

__int64 __fastcall PnpGetDevicePropertyData(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        void *a6,
        unsigned int *a7,
        __int64 a8)
{
  __int64 v11; // rbx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int ObjectProperty; // ebx
  __int64 v15; // rax
  unsigned int *v16; // rdx
  char v17[8]; // [rsp+60h] [rbp-108h] BYREF
  _BYTE *v18; // [rsp+68h] [rbp-100h]
  _BYTE v19[176]; // [rsp+70h] [rbp-F8h] BYREF

  memset(v19, 0, 0xAAuLL);
  if ( a1 )
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v11 = 0LL;
  if ( !v11 || !*(_QWORD *)(v11 + 48) )
    return (unsigned int)-1073741808;
  if ( a3 )
  {
    v18 = v19;
    if ( !(unsigned __int8)RtlLCIDToCultureName(a3, v17) )
      return (unsigned int)-1073741823;
  }
  else
  {
    v18 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpDevicePropertyLock, 1u);
  ObjectProperty = PnpGetObjectProperty(
                     *(__int64 *)&PiPnpRtlCtx,
                     *(_QWORD *)(v11 + 48),
                     1u,
                     0LL,
                     (__int64)v18,
                     a2,
                     a8,
                     (__int64)a6,
                     a5,
                     (__int64)a7,
                     0);
  if ( *(_DWORD *)(a2 + 16) == 2 )
  {
    v15 = *(_QWORD *)a2 - *(_QWORD *)&INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data1;
    if ( *(_QWORD *)a2 == *(_QWORD *)&INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data1 )
      v15 = *(_QWORD *)(a2 + 8) - *(_QWORD *)INTERRUPT_CONNECTION_DATA_PKEY.fmtid.Data4;
    if ( !v15 )
    {
      if ( ObjectProperty == -1073741772 || ObjectProperty == -1073741275 )
      {
        v16 = *(unsigned int **)(*(_QWORD *)(a1 + 312) + 88LL);
        if ( v16 )
        {
          if ( a7 )
            *a7 = *v16;
          if ( a5 >= *v16 )
          {
            memmove(a6, v16 + 1, *v16);
            ObjectProperty = 0;
          }
          else
          {
            ObjectProperty = -1073741789;
          }
        }
        else
        {
          ObjectProperty = -1073741772;
        }
      }
      else if ( !ObjectProperty )
      {
        PnpCompareInterruptInformation(a1, a6, *a7);
      }
    }
  }
  ExReleaseResourceLite(&PnpDevicePropertyLock);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( ObjectProperty == -1073741275 )
    return (unsigned int)-1073741772;
  return ObjectProperty;
}
