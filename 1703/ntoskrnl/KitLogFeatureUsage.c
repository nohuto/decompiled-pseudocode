/*
 * XREFs of KitLogFeatureUsage @ 0x14025EA90
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x140047810 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     RtlPcToFileName @ 0x140165994 (RtlPcToFileName.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     RtlPcToFilePath @ 0x1406EECDC (RtlPcToFilePath.c)
 */

NTSTATUS __fastcall KitLogFeatureUsage(ULONGLONG a1, unsigned __int64 a2, int a3)
{
  REGHANDLE v3; // rsi
  int v7; // ebx
  int v8; // eax
  __int16 v10; // [rsp+48h] [rbp-C0h] BYREF
  int v11; // [rsp+4Ch] [rbp-BCh] BYREF
  UNICODE_STRING v12; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-A0h] BYREF
  int *v14; // [rsp+78h] [rbp-90h]
  __int64 v15; // [rsp+80h] [rbp-88h]
  __int16 *v16; // [rsp+88h] [rbp-80h]
  __int64 v17; // [rsp+90h] [rbp-78h]
  wchar_t *Buffer; // [rsp+98h] [rbp-70h]
  int Length; // [rsp+A0h] [rbp-68h]
  int v20; // [rsp+A4h] [rbp-64h]
  _BYTE v21[512]; // [rsp+B8h] [rbp-50h] BYREF

  v3 = KitEtwHandle;
  *(_QWORD *)&v12.Length = 0LL;
  v12.Buffer = 0LL;
  v11 = a3;
  if ( KitEtwHandle && EtwEventEnabled(KitEtwHandle, &KitFeatureIdUsedEvent) )
  {
    if ( a3 )
    {
      v7 = a3 - 1;
      if ( v7 )
      {
        if ( v7 != 1 || (a2 = *(_QWORD *)(a2 + 8)) == 0 )
        {
LABEL_13:
          v11 = 3;
          v12 = (UNICODE_STRING)NoCallerIdString;
LABEL_14:
          UserData.Ptr = a1;
          v14 = &v11;
          v10 = v12.Length >> 1;
          v15 = 4LL;
          v16 = &v10;
          Buffer = v12.Buffer;
          Length = v12.Length;
          *(_QWORD *)&UserData.Size = 16LL;
          v17 = 2LL;
          v20 = 0;
          return EtwWriteEx(v3, &KitFeatureIdUsedEvent, 0LL, 0, 0LL, 0LL, 4u, &UserData);
        }
      }
      a2 = *(_QWORD *)(a2 + 24);
    }
    if ( a2 )
    {
      memset(v21, 0, 0x1FEuLL);
      *(_DWORD *)&v12.Length = 33423360;
      v12.Buffer = (wchar_t *)v21;
      v8 = KeGetCurrentIrql() > 1u ? RtlPcToFileName(a2, &v12) : RtlPcToFilePath(a2, &v12);
      v3 = KitEtwHandle;
      if ( v8 >= 0 )
        goto LABEL_14;
    }
    goto LABEL_13;
  }
  return 0;
}
