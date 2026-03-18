/*
 * XREFs of DpiMiracastFindDisplayAdapterFdo @ 0x1C01C7500
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C004025C (DxgkMiracastStartMiracastSession.c)
 * Callees:
 *     ?IsMiniportListMutexOwnedByCurrentThread@@YAEXZ @ 0x1C0001230 (-IsMiniportListMutexOwnedByCurrentThread@@YAEXZ.c)
 *     DpiEnableD3Requests @ 0x1C0001278 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C00012A0 (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00013AC (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C008C2A0 (DxgkMiracastQueryMiracastSupportInternal.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x1C008C4E0 (DpiMiracastFindDisplayAdapterFdoIhv.c)
 */

__int64 __fastcall DpiMiracastFindDisplayAdapterFdo(struct _DEVICE_OBJECT *a1, __int64 *a2, _BYTE *a3)
{
  char v4; // bl
  __int64 *v5; // r12
  __int64 v6; // r14
  int MiracastSupportInternal; // r15d
  char v8; // al
  int DisplayAdapterFdoIhv; // eax
  __int64 v10; // r13
  __int64 v11; // rsi
  bool i; // zf
  int v13; // ecx
  PDEVICE_OBJECT LowerDeviceObject; // r12
  __int64 v16; // [rsp+30h] [rbp-30h] BYREF
  PVOID v17; // [rsp+38h] [rbp-28h]
  __int64 v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h]
  int v20; // [rsp+50h] [rbp-10h]

  v4 = 0;
  v5 = a2;
  if ( !IsMiniportListMutexOwnedByCurrentThread() )
  {
    AcquireMiniportListMutex();
    v4 = 1;
  }
  v16 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v6 = 0LL;
  v20 = 0;
  MiracastSupportInternal = DxgkMiracastQueryMiracastSupportInternal((__int64)&v18);
  if ( MiracastSupportInternal >= 0 )
  {
    v8 = v19;
    if ( a3 )
      *a3 = v19;
    if ( v8 )
    {
      DisplayAdapterFdoIhv = DpiMiracastFindDisplayAdapterFdoIhv(&v16);
      v6 = v16;
      MiracastSupportInternal = DisplayAdapterFdoIhv;
LABEL_40:
      if ( MiracastSupportInternal < 0 )
      {
        if ( v6 )
        {
          if ( *(_BYTE *)(v6 + 483) )
            DpiEnableD3Requests(*(_QWORD *)(v6 + 24));
          ExReleaseResourceLite(*(PERESOURCE *)(v6 + 168));
          KeLeaveCriticalRegion();
        }
        goto LABEL_45;
      }
    }
    else
    {
      v10 = qword_1C006F9F8;
      MiracastSupportInternal = -1073741275;
      if ( *(_QWORD *)v10 == v10 )
      {
LABEL_45:
        *v5 = 0LL;
        goto LABEL_46;
      }
      while ( MiracastSupportInternal < 0 )
      {
        KeWaitForSingleObject((PVOID)(v10 + 72), Executive, 0, 0, 0LL);
        v11 = *(_QWORD *)(v10 + 56);
        for ( i = *(_QWORD *)v11 == v11; !i && MiracastSupportInternal < 0LL; i = *(_QWORD *)v11 == *(_QWORD *)(v10 + 56) )
        {
          i = *(_DWORD *)(v11 + 16) == 1953656900;
          v6 = v11;
          v16 = v11;
          if ( i && *(_DWORD *)(v11 + 20) == 2 )
          {
            KeEnterCriticalRegion();
            if ( *(_BYTE *)(v11 + 483) )
              DpiCheckForOutstandingD3Requests(v11);
            ExAcquireResourceSharedLite(*(PERESOURCE *)(v11 + 168), 1u);
            v13 = *(_DWORD *)(v11 + 236);
            if ( (v13 == 2 || *(_DWORD *)(v11 + 240) == 2 && ((v13 - 3) & 0xFFFFFFFC) == 0 && v13 != 4)
              && *(_DWORD *)(v11 + 3064) != -1
              && *(_DWORD *)(v11 + 3784) != 1
              && *(_DWORD *)(v11 + 284) == 1
              && *(_QWORD *)(v11 + 4552) )
            {
              LowerDeviceObject = a1;
              ObfReferenceObject(a1);
              if ( a1 )
              {
                do
                {
                  if ( LowerDeviceObject == *(PDEVICE_OBJECT *)(v11 + 24) )
                    break;
                  v17 = LowerDeviceObject;
                  LowerDeviceObject = IoGetLowerDeviceObject(LowerDeviceObject);
                  ObfDereferenceObject(v17);
                }
                while ( LowerDeviceObject );
                if ( LowerDeviceObject )
                  ObfDereferenceObject(LowerDeviceObject);
              }
              if ( LowerDeviceObject == *(PDEVICE_OBJECT *)(v11 + 24) )
              {
                MiracastSupportInternal = 0;
                break;
              }
            }
            if ( *(_BYTE *)(v11 + 483) )
              DpiEnableD3Requests(*(_QWORD *)(v11 + 24));
            ExReleaseResourceLite(*(PERESOURCE *)(v11 + 168));
            KeLeaveCriticalRegion();
            v6 = 0LL;
            v16 = 0LL;
          }
          v11 = *(_QWORD *)v11;
        }
        KeReleaseMutex((PRKMUTEX)(v10 + 72), 0);
        v10 = *(_QWORD *)v10;
        if ( *(_QWORD *)v10 == qword_1C006F9F8 )
        {
          v5 = a2;
          goto LABEL_40;
        }
      }
      v5 = a2;
    }
    *v5 = v6;
    MiracastSupportInternal = 0;
  }
LABEL_46:
  if ( v4 )
  {
    _InterlockedExchange64(&qword_1C006FA08, 0LL);
    KeReleaseMutex(Mutex, 0);
  }
  return (unsigned int)MiracastSupportInternal;
}
