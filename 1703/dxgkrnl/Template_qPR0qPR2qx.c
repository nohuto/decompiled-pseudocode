/*
 * XREFs of Template_qPR0qPR2qx @ 0x1C0039748
 * Callers:
 *     ?SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPROCESS@@_N6@Z @ 0x1C00D38B0 (-SignalSynchronizationObjectInternal@@YAJIPEBIU_D3DDDICB_SIGNALFLAGS@@K0PEB_K_KPEBQEAXPEAVDXGPRO.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qPR0qPR2qx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        char a8,
        char a9)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-51h] BYREF
  __int64 v11; // [rsp+40h] [rbp-41h]
  int v12; // [rsp+48h] [rbp-39h]
  int v13; // [rsp+4Ch] [rbp-35h]
  int *v14; // [rsp+50h] [rbp-31h]
  __int64 v15; // [rsp+58h] [rbp-29h]
  __int64 v16; // [rsp+60h] [rbp-21h]
  int v17; // [rsp+68h] [rbp-19h]
  int v18; // [rsp+6Ch] [rbp-15h]
  char *v19; // [rsp+70h] [rbp-11h]
  __int64 v20; // [rsp+78h] [rbp-9h]
  char *v21; // [rsp+80h] [rbp-1h]
  __int64 v22; // [rsp+88h] [rbp+7h]
  int v23; // [rsp+D8h] [rbp+57h] BYREF

  v23 = a4;
  UserData.Ptr = (ULONGLONG)&v23;
  v11 = a5;
  v12 = 8 * a4;
  v14 = &a6;
  v16 = a7;
  v17 = 8 * a6;
  v19 = &a8;
  v21 = &a9;
  *(_QWORD *)&UserData.Size = 4LL;
  v13 = 0;
  v15 = 4LL;
  v18 = 0;
  v20 = 4LL;
  v22 = 8LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &EventSignalSynchronizationObject2, 0LL, 6u, &UserData);
}
