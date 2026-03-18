/*
 * XREFs of DrvSetMonitorBrightness @ 0x1C0062550
 * Callers:
 *     PowerDimUndimResend @ 0x1C0062AF0 (PowerDimUndimResend.c)
 *     PowerUnDimMonitor @ 0x1C00656EC (PowerUnDimMonitor.c)
 *     PowerDimMonitor @ 0x1C00D7114 (PowerDimMonitor.c)
 * Callees:
 *     UpdateMonitorDevices @ 0x1C0061520 (UpdateMonitorDevices.c)
 *     GreDeviceIoControlEx @ 0x1C00616F0 (GreDeviceIoControlEx.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvSetMonitorBrightness(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int8 a4,
        _BYTE *a5,
        char a6)
{
  __int64 v7; // r14
  __int64 v9; // rsi
  int v10; // ebx
  __int64 v11; // rax
  unsigned int v12; // r14d
  unsigned int v13; // r15d
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rbx
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // rax
  unsigned int i; // [rsp+40h] [rbp-40h]
  int v24; // [rsp+44h] [rbp-3Ch]
  int InputBuffer; // [rsp+48h] [rbp-38h] BYREF
  _DWORD v26[3]; // [rsp+4Ch] [rbp-34h] BYREF
  _BYTE *v27; // [rsp+58h] [rbp-28h]
  PVOID Object; // [rsp+60h] [rbp-20h] BYREF
  int v29; // [rsp+68h] [rbp-18h]

  v7 = (unsigned int)a2;
  v24 = a2;
  v9 = a1;
  v27 = a5;
  v10 = -1073741823;
  if ( !gProtocolType )
  {
    v11 = WdLogNewEntry5_WdEvent(a1, a2);
    *(_QWORD *)(v11 + 24) = v9;
    *(_QWORD *)(v11 + 32) = v7;
    WdLogEvent5_WdEvent(v11);
    UpdateMonitorDevices();
    if ( a3 != -1 )
    {
      if ( qword_1C018BE98 )
      {
        Object = (PVOID)__PAIR64__(a3, v7);
        v29 = a4;
        v20 = qword_1C018BE98(&Object);
        v21 = v20;
        if ( v20 < 0 )
        {
          v22 = WdLogNewEntry5_WdWarning(a1);
          *(_QWORD *)(v22 + 24) = v21;
          WdLogEvent5_WdWarning(v22);
        }
      }
    }
    *a5 = 0;
    v12 = 0;
    for ( i = 0; v12 < *(_DWORD *)(v9 + 20); i = v12 )
    {
      v13 = 0;
      a1 = 5LL * v12;
      v14 = *(_QWORD *)(*(_QWORD *)(v9 + 40LL * v12 + 32) + 2592LL);
      if ( *(_DWORD *)(v14 + 224) )
      {
        do
        {
          v15 = *(_QWORD *)(v14 + 232);
          if ( (*(_DWORD *)(v15 + 20LL * v13) & 1) != 0
            && (!a6 || *(_BYTE *)(v15 + 20LL * v13 + 16))
            && (int)((__int64 (__fastcall *)(__int64, _QWORD, PVOID *, _DWORD *))qword_1C018BB90)(
                      v15 + 4 * (5LL * v13 + 2),
                      *(unsigned int *)(v15 + 20LL * v13 + 4),
                      &Object,
                      &v26[1]) >= 0 )
          {
            InputBuffer = v24;
            AttachedDeviceReference = IoGetAttachedDeviceReference(*(PDEVICE_OBJECT *)&v26[1]);
            GreDeviceIoControlEx(AttachedDeviceReference, 0x232433u, &InputBuffer, 4u, 0LL, 0, v26, 1u);
            ObfDereferenceObject(AttachedDeviceReference);
            ObfDereferenceObject(Object);
            if ( *(_BYTE *)(*(_QWORD *)(v14 + 232) + 20LL * v13 + 16) )
            {
              *v27 = 1;
              if ( *(_QWORD *)(v14 + 144) )
              {
                if ( (*(_DWORD *)(v14 + 160) & 0x800000) != 0 )
                {
                  a1 = *(_QWORD *)(v14 + 256);
                  if ( a1 )
                  {
                    if ( *(_DWORD *)(v9 + 20) == 1 && *(_DWORD *)(v14 + 224) == 1 || !a4 )
                    {
                      LOBYTE(v19) = a4;
                      ((void (__fastcall *)(__int64, __int64))qword_1C018BC00)(a1, v19);
                    }
                  }
                }
              }
            }
          }
          ++v13;
        }
        while ( v13 < *(_DWORD *)(v14 + 224) );
        v12 = i;
      }
      ++v12;
    }
    v10 = 0;
  }
  v16 = WdLogNewEntry5_WdTrace(a1);
  *(_QWORD *)(v16 + 24) = v10;
  WdLogEvent5_WdTrace(v16);
  return (unsigned int)v10;
}
