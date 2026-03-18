/*
 * XREFs of ?OpenHapticsDevice@SimpleHapticsController@@IEAAJXZ @ 0x1C02231A4
 * Callers:
 *     ?HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z @ 0x1C0222410 (-HapticsDeviceNotify@SimpleHapticsController@@KAJPEAU_PLUGPLAY_NOTIFY_HDR@@PEAX@Z.c)
 *     ?Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C0222720 (-Initialize@SimpleHapticsController@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z @ 0x1C022215C (-CloseHapticsWriteDevice@SimpleHapticsController@@IEAAJH@Z.c)
 */

__int64 __fastcall SimpleHapticsController::OpenHapticsDevice(SimpleHapticsController *this)
{
  NTSTATUS v1; // ebx
  void **v2; // rdi
  PVOID *v4; // r14
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  NTSTATUS v7; // eax
  PVOID v8; // r8
  LPCGUID v9; // r8
  LPCGUID v10; // r9
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  PVOID Object; // [rsp+60h] [rbp-59h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+C0h] [rbp+7h] BYREF
  PVOID *p_Object; // [rsp+D0h] [rbp+17h]
  int v19; // [rsp+D8h] [rbp+1Fh]
  int v20; // [rsp+DCh] [rbp+23h]

  v1 = 0;
  v2 = (void **)((char *)this + 24);
  if ( !*((_QWORD *)this + 3) && !*((_QWORD *)this + 7) )
  {
    v4 = (PVOID *)((char *)this + 32);
    if ( !*((_QWORD *)this + 4) )
    {
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)this;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 512;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v1 = ZwCreateFile(
             v2,
             2u,
             &ObjectAttributes,
             (PIO_STATUS_BLOCK)((char *)this + 40),
             0LL,
             0x80u,
             3u,
             3u,
             0x40000000u,
             0LL,
             0);
      if ( v1 < 0 )
      {
        if ( (unsigned int)dword_1C0324150 > 2 )
        {
          TlgCreateSz(&pDesc, "Function failed.");
          v20 = 0;
          p_Object = &Object;
          v19 = 4;
          LODWORD(Object) = v1;
          TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECD12, v5, v6, 4u, &pData);
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::OpenHapticsDevice",
          "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          683,
          v1,
          "Function failed.");
LABEL_16:
        SimpleHapticsController::CloseHapticsWriteDevice(this, 1);
        return (unsigned int)v1;
      }
      v7 = ObReferenceObjectByHandle(*v2, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
      v8 = Object;
      v1 = v7;
      *((_QWORD *)this + 7) = Object;
      if ( v7 < 0 )
      {
        if ( (unsigned int)dword_1C0324150 > 2 )
        {
          TlgCreateSz(&pDesc, "Function failed.");
          v20 = 0;
          p_Object = &Object;
          v19 = 4;
          LODWORD(Object) = v1;
          TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECD12, v9, v10, 4u, &pData);
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::OpenHapticsDevice",
          "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          691,
          v1,
          "Function failed.");
        goto LABEL_16;
      }
      v1 = IoRegisterPlugPlayNotification(
             EventCategoryTargetDeviceChange,
             0,
             v8,
             gpWin32kDriverObject,
             (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)SimpleHapticsController::HapticsDeviceNotify,
             this,
             v4);
      if ( v1 < 0 )
      {
        if ( (unsigned int)dword_1C0324150 > 2 )
        {
          TlgCreateSz(&pDesc, "Function failed.");
          v20 = 0;
          p_Object = &Object;
          v19 = 4;
          LODWORD(Object) = v1;
          TlgWrite((TraceLoggingHProvider)&dword_1C0324150, &unk_1C02ECD12, v11, v12, 4u, &pData);
        }
        DbgPrintEx(
          0x4Du,
          0,
          "HapticsCtrl: (%s, %s:%d) ERROR: 0x%x, %s\n",
          "SimpleHapticsController::OpenHapticsDevice",
          "windows\\core\\ntuser\\kernel\\windows\\simplehapticsctrl.cxx",
          699,
          v1,
          "Function failed.");
        goto LABEL_16;
      }
    }
  }
  return (unsigned int)v1;
}
