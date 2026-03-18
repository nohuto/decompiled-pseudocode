/*
 * XREFs of DpiGetDxgAdapterSafe @ 0x1C00A29F4
 * Callers:
 *     ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C00A2C70 (-DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z.c)
 * Callees:
 *     DpiDisableD3Requests @ 0x1C0001CAC (DpiDisableD3Requests.c)
 *     DpiEnableD3Requests @ 0x1C0001CC0 (DpiEnableD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0001CD4 (-AcquireMiniportListMutex@@YAXXZ.c)
 */

__int64 __fastcall DpiGetDxgAdapterSafe(struct _DEVICE_OBJECT *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 *v3; // rbx
  unsigned int v6; // r12d
  _QWORD *v7; // rsi
  struct _KMUTANT *v8; // r13
  __int64 *v9; // rdi
  struct _DEVICE_OBJECT *v10; // rcx
  PDEVICE_OBJECT AttachedDeviceReference; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // r8
  _QWORD *i; // rdx
  _QWORD *v15; // rax
  _QWORD *v16; // r8
  _QWORD *j; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v22; // rax
  __int64 v23; // rax

  v3 = 0LL;
  *a2 = 0LL;
  v6 = -1073741811;
  AcquireMiniportListMutex();
  v7 = (_QWORD *)qword_1C007A778;
  if ( (_QWORD *)*v7 != v7 )
  {
    do
    {
      if ( v3 )
        break;
      v8 = (struct _KMUTANT *)(v7 + 9);
      KeWaitForSingleObject(v7 + 9, Executive, 0, 0, 0LL);
      v9 = (__int64 *)v7[7];
      if ( (__int64 *)*v9 != v9 )
      {
        do
        {
          if ( v3 )
            break;
          if ( *((_DWORD *)v9 + 4) == 1953656900 && *((_DWORD *)v9 + 5) == 2 )
          {
            v10 = (struct _DEVICE_OBJECT *)v9[3];
            if ( v10 == a1 || (struct _DEVICE_OBJECT *)v9[19] == a1 )
            {
              v3 = v9;
            }
            else
            {
              AttachedDeviceReference = IoGetAttachedDeviceReference(v10);
              if ( a1 == AttachedDeviceReference )
                v3 = v9;
              ObfDereferenceObject(AttachedDeviceReference);
            }
            if ( v3 )
              goto LABEL_26;
            KeWaitForSingleObject(v9 + 427, Executive, 0, 0, 0LL);
            v12 = (_QWORD *)v9[425];
            v13 = v12;
            for ( i = (_QWORD *)*v12; i != v13; i = (_QWORD *)*i )
            {
              if ( (struct _DEVICE_OBJECT *)v12[3] == a1 )
                v3 = *(__int64 **)(v12[4] + 64LL);
              v12 = i;
            }
            KeReleaseMutex((PRKMUTEX)v9 + 61, 0);
            if ( v3 )
              goto LABEL_26;
            KeEnterCriticalRegion();
            ExAcquireResourceSharedLite((PERESOURCE)(v9 + 396), 1u);
            v15 = (_QWORD *)v9[435];
            v16 = v15;
            for ( j = (_QWORD *)*v15; j != v16; j = (_QWORD *)*j )
            {
              if ( (struct _DEVICE_OBJECT *)v15[3] == a1 )
                v3 = *(__int64 **)(v15[4] + 64LL);
              v15 = j;
            }
            ExReleaseResourceLite((PERESOURCE)(v9 + 396));
            KeLeaveCriticalRegion();
            if ( v3 )
            {
LABEL_26:
              KeEnterCriticalRegion();
              if ( *((_BYTE *)v3 + 483) )
                DpiDisableD3Requests(v3[3]);
              ExAcquireResourceSharedLite((PERESOURCE)v3[21], 1u);
              if ( *((_DWORD *)v3 + 59) == 2 )
              {
                v22 = v3[466];
                if ( v22 )
                {
                  _InterlockedIncrement64((volatile signed __int64 *)(v22 + 24));
                  *a3 = -1LL;
                  v6 = 0;
                  *a2 = v3[466];
                }
              }
              if ( *((_BYTE *)v3 + 483) )
                DpiEnableD3Requests(v3[3]);
              ExReleaseResourceLite((PERESOURCE)v3[21]);
              KeLeaveCriticalRegion();
            }
          }
          v9 = (__int64 *)*v9;
        }
        while ( *v9 != v7[7] );
        v8 = (struct _KMUTANT *)(v7 + 9);
      }
      KeReleaseMutex(v8, 0);
      v7 = (_QWORD *)*v7;
    }
    while ( *v7 != qword_1C007A778 );
  }
  _InterlockedExchange64(&qword_1C007A788, 0LL);
  KeReleaseMutex((PRKMUTEX)Mutex, 0);
  if ( !*a2 )
  {
    v23 = WdLogNewEntry5_WdWarning(v19, v18, v20);
    *(_QWORD *)(v23 + 24) = 0LL;
    WdLogEvent5_WdWarning(v23);
  }
  return v6;
}
