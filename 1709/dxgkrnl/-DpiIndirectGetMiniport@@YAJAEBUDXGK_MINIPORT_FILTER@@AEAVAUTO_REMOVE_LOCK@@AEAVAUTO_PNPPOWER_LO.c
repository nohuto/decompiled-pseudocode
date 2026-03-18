/*
 * XREFs of ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1C01E548C
 * Callers:
 *     ?DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01E5070 (-DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     DxgkHandleIndirectEscape @ 0x1C01E5EA4 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     ?IsMiniportListMutexOwnedByCurrentThread@@YAEXZ @ 0x1C000F1C8 (-IsMiniportListMutexOwnedByCurrentThread@@YAEXZ.c)
 *     ??0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z @ 0x1C000F294 (--0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z.c)
 *     ?Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C000F2C4 (-Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     ?Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ @ 0x1C000F388 (-Acquire@AUTO_REMOVE_LOCK@@QEAAJXZ.c)
 *     ?Release@AUTO_REMOVE_LOCK@@QEAAXXZ @ 0x1C000F3D4 (-Release@AUTO_REMOVE_LOCK@@QEAAXXZ.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C000F49C (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x1C002E310 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 *     DpiGetDeviceInstanceId @ 0x1C01E0ABC (DpiGetDeviceInstanceId.c)
 */

__int64 __fastcall DpiIndirectGetMiniport(
        const struct DXGK_MINIPORT_FILTER *a1,
        PVOID *a2,
        struct AUTO_PNPPOWER_LOCK *a3,
        struct _FDO_CONTEXT **a4)
{
  char v5; // bl
  int DeviceInstanceId; // r15d
  __int64 v7; // r12
  _QWORD *v8; // rdi
  _QWORD *i; // r14
  AUTO_PNPPOWER_LOCK *v10; // rdi
  char v11; // di
  struct _DEVICE_OBJECT *v12; // rcx
  char v14; // [rsp+30h] [rbp-40h]
  char v15; // [rsp+31h] [rbp-3Fh]
  PCWSTR SourceString; // [rsp+38h] [rbp-38h] BYREF
  PVOID v17; // [rsp+40h] [rbp-30h] BYREF
  char v18; // [rsp+48h] [rbp-28h]
  _BYTE v19[16]; // [rsp+50h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF

  v5 = 0;
  DeviceInstanceId = 0;
  v15 = 0;
  if ( !IsMiniportListMutexOwnedByCurrentThread() )
  {
    AcquireMiniportListMutex();
    v5 = 1;
    v15 = 1;
  }
  v7 = qword_1C0060878;
  v14 = 0;
  if ( (__int64 *)qword_1C0060878 == &qword_1C0060878 )
    goto LABEL_33;
  do
  {
    if ( *((_BYTE *)a1 + 4) || *(_BYTE *)(v7 + 134) )
    {
      KeWaitForSingleObject((PVOID)(v7 + 72), Executive, 0, 0, 0LL);
      v8 = (_QWORD *)(v7 + 56);
      for ( i = *(_QWORD **)(v7 + 56); i != v8; i = (_QWORD *)*i )
      {
        if ( i && *((_DWORD *)i + 4) == 1953656900 && *((_DWORD *)i + 5) == 2 )
        {
          v17 = i;
          AUTO_REMOVE_LOCK::Release(a2);
          *a2 = i;
          *((_BYTE *)a2 + 8) = 0;
          v18 = 0;
          AUTO_REMOVE_LOCK::Release(&v17);
          DeviceInstanceId = AUTO_REMOVE_LOCK::Acquire((struct _IO_REMOVE_LOCK **)a2);
          if ( DeviceInstanceId >= 0 )
          {
            v10 = AUTO_PNPPOWER_LOCK::AUTO_PNPPOWER_LOCK((AUTO_PNPPOWER_LOCK *)v19, (struct _COMMON_PNP_CONTEXT *)i);
            AUTO_PNPPOWER_LOCK::Release(a3);
            *(_QWORD *)a3 = *(_QWORD *)v10;
            *((_BYTE *)a3 + 8) = *((_BYTE *)v10 + 8);
            *((_BYTE *)a3 + 9) = *((_BYTE *)v10 + 9);
            *((_BYTE *)a3 + 10) = *((_BYTE *)v10 + 10);
            *((_BYTE *)v10 + 10) = 0;
            AUTO_PNPPOWER_LOCK::Release((AUTO_PNPPOWER_LOCK *)v19);
            if ( *(_DWORD *)a1 == 1 )
            {
              if ( *((_DWORD *)i + 634) == *((_DWORD *)a1 + 2) && *((_DWORD *)i + 635) == *((_DWORD *)a1 + 3) )
              {
                v11 = 1;
                *a4 = (struct _FDO_CONTEXT *)i;
                v14 = 1;
                goto LABEL_27;
              }
            }
            else if ( !*(_DWORD *)a1 )
            {
              v12 = (struct _DEVICE_OBJECT *)i[19];
              SourceString = 0LL;
              DeviceInstanceId = DpiGetDeviceInstanceId(v12, (ULONG_PTR *)&SourceString);
              if ( DeviceInstanceId < 0 )
              {
                AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&SourceString);
                break;
              }
              RtlInitUnicodeString(&DestinationString, SourceString);
              if ( !RtlCompareUnicodeString(&DestinationString, *((PCUNICODE_STRING *)a1 + 1), 1u) )
              {
                v11 = 1;
                *a4 = (struct _FDO_CONTEXT *)i;
                v14 = 1;
                AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&SourceString);
                goto LABEL_27;
              }
              AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&SourceString);
            }
            AUTO_PNPPOWER_LOCK::Release(a3);
            v8 = (_QWORD *)(v7 + 56);
          }
          else
          {
            DeviceInstanceId = 0;
          }
        }
      }
      v11 = v14;
LABEL_27:
      KeReleaseMutex((PRKMUTEX)(v7 + 72), 0);
    }
    else
    {
      v11 = v14;
    }
    if ( DeviceInstanceId < 0 )
      break;
    v7 = *(_QWORD *)v7;
  }
  while ( (__int64 *)v7 != &qword_1C0060878 );
  v5 = v15;
  if ( !v11 && DeviceInstanceId >= 0 )
LABEL_33:
    DeviceInstanceId = -1073741275;
  if ( v5 )
  {
    _InterlockedExchange64(&qword_1C0060888, 0LL);
    KeReleaseMutex(Mutex, 0);
  }
  return (unsigned int)DeviceInstanceId;
}
