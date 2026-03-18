/*
 * XREFs of ?DpiIndirectGetMiniport@@YAJAEBUDXGK_MINIPORT_FILTER@@AEAVAUTO_REMOVE_LOCK@@AEAVAUTO_PNPPOWER_LOCK@@PEAPEAU_FDO_CONTEXT@@@Z @ 0x1C01CB080
 * Callers:
 *     ?DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C01CACA0 (-DpiIndirectCbDisableRenderD3RequestsWorker@@YAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z.c)
 *     DxgkHandleIndirectEscape @ 0x1C01CBAC4 (DxgkHandleIndirectEscape.c)
 * Callees:
 *     ?IsMiniportListMutexOwnedByCurrentThread@@YAEXZ @ 0x1C0001230 (-IsMiniportListMutexOwnedByCurrentThread@@YAEXZ.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C00013AC (-AcquireMiniportListMutex@@YAXXZ.c)
 *     ??0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z @ 0x1C0042074 (--0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z.c)
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x1C0042224 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 *     ?Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ @ 0x1C0042250 (-Release@AUTO_PNPPOWER_LOCK@@QEAAXXZ.c)
 *     ?Release@AUTO_REMOVE_LOCK@@QEAAXXZ @ 0x1C00422A0 (-Release@AUTO_REMOVE_LOCK@@QEAAXXZ.c)
 *     DpiGetDeviceInstanceId @ 0x1C01C699C (DpiGetDeviceInstanceId.c)
 */

__int64 __fastcall DpiIndirectGetMiniport(
        const struct DXGK_MINIPORT_FILTER *a1,
        PVOID *a2,
        struct AUTO_PNPPOWER_LOCK *a3,
        struct _FDO_CONTEXT **a4)
{
  char v5; // bl
  const struct DXGK_MINIPORT_FILTER *v6; // rdi
  int DeviceInstanceId; // r15d
  __int64 v8; // r12
  _QWORD *v9; // rax
  _QWORD *i; // r14
  AUTO_PNPPOWER_LOCK *v11; // rdi
  char v12; // r14
  struct _DEVICE_OBJECT *v13; // rcx
  char v15; // [rsp+30h] [rbp-40h]
  char v16; // [rsp+31h] [rbp-3Fh]
  PCWSTR SourceString; // [rsp+38h] [rbp-38h] BYREF
  PVOID v18; // [rsp+40h] [rbp-30h] BYREF
  char v19; // [rsp+48h] [rbp-28h]
  _BYTE v20[16]; // [rsp+50h] [rbp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-10h] BYREF

  v5 = 0;
  v6 = a1;
  v16 = 0;
  DeviceInstanceId = 0;
  if ( !IsMiniportListMutexOwnedByCurrentThread() )
  {
    AcquireMiniportListMutex();
    v5 = 1;
    v16 = 1;
  }
  v8 = qword_1C006F9F8;
  v15 = 0;
  if ( (__int64 *)qword_1C006F9F8 == &qword_1C006F9F8 )
    goto LABEL_38;
  do
  {
    if ( *((_BYTE *)v6 + 4) || *(_BYTE *)(v8 + 134) )
    {
      KeWaitForSingleObject((PVOID)(v8 + 72), Executive, 0, 0, 0LL);
      v9 = (_QWORD *)(v8 + 56);
      for ( i = *(_QWORD **)(v8 + 56); i != v9; i = (_QWORD *)*i )
      {
        if ( i && *((_DWORD *)i + 4) == 1953656900 && *((_DWORD *)i + 5) == 2 )
        {
          v18 = i;
          AUTO_REMOVE_LOCK::Release(a2);
          *a2 = i;
          *((_BYTE *)a2 + 8) = 0;
          v19 = 0;
          AUTO_REMOVE_LOCK::Release(&v18);
          if ( *((_BYTE *)a2 + 8) )
          {
            DeviceInstanceId = 0;
          }
          else
          {
            DeviceInstanceId = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)*a2 + 2, *a2, File, 1u, 0x20u);
            if ( DeviceInstanceId >= 0 )
              *((_BYTE *)a2 + 8) = 1;
          }
          if ( DeviceInstanceId >= 0 )
          {
            v11 = AUTO_PNPPOWER_LOCK::AUTO_PNPPOWER_LOCK((AUTO_PNPPOWER_LOCK *)v20, (struct _COMMON_PNP_CONTEXT *)i);
            AUTO_PNPPOWER_LOCK::Release(a3);
            *(_QWORD *)a3 = *(_QWORD *)v11;
            *((_BYTE *)a3 + 8) = *((_BYTE *)v11 + 8);
            *((_BYTE *)a3 + 9) = *((_BYTE *)v11 + 9);
            *((_BYTE *)a3 + 10) = *((_BYTE *)v11 + 10);
            *((_BYTE *)v11 + 10) = 0;
            AUTO_PNPPOWER_LOCK::Release((AUTO_PNPPOWER_LOCK *)v20);
            v6 = a1;
            if ( *(_DWORD *)a1 == 1 )
            {
              if ( *((_DWORD *)i + 634) == *((_DWORD *)a1 + 2) && *((_DWORD *)i + 635) == *((_DWORD *)a1 + 3) )
              {
                *a4 = (struct _FDO_CONTEXT *)i;
                v12 = 1;
                v15 = 1;
                goto LABEL_32;
              }
            }
            else if ( !*(_DWORD *)a1 )
            {
              v13 = (struct _DEVICE_OBJECT *)i[19];
              SourceString = 0LL;
              DeviceInstanceId = DpiGetDeviceInstanceId(v13, (ULONG_PTR *)&SourceString);
              if ( DeviceInstanceId < 0 )
              {
                AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&SourceString);
                break;
              }
              RtlInitUnicodeString(&DestinationString, SourceString);
              if ( !RtlCompareUnicodeString(&DestinationString, *((PCUNICODE_STRING *)a1 + 1), 1u) )
              {
                *a4 = (struct _FDO_CONTEXT *)i;
                v12 = 1;
                v15 = 1;
                AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&SourceString);
                goto LABEL_32;
              }
              AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free((void **)&SourceString);
            }
            AUTO_PNPPOWER_LOCK::Release(a3);
          }
          else
          {
            DeviceInstanceId = 0;
          }
          v9 = (_QWORD *)(v8 + 56);
        }
      }
      v12 = v15;
LABEL_32:
      KeReleaseMutex((PRKMUTEX)(v8 + 72), 0);
    }
    else
    {
      v12 = v15;
    }
    if ( DeviceInstanceId < 0 )
      break;
    v8 = *(_QWORD *)v8;
  }
  while ( (__int64 *)v8 != &qword_1C006F9F8 );
  v5 = v16;
  if ( !v12 && DeviceInstanceId >= 0 )
LABEL_38:
    DeviceInstanceId = -1073741275;
  if ( v5 )
  {
    _InterlockedExchange64(&qword_1C006FA08, 0LL);
    KeReleaseMutex(Mutex, 0);
  }
  return (unsigned int)DeviceInstanceId;
}
