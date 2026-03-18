/*
 * XREFs of PoStoreRequester @ 0x1400718B4
 * Callers:
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1400717EC (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PoStoreDiagnosticContext @ 0x140227060 (PoStoreDiagnosticContext.c)
 *     PopDiagTracePowerRequestCreate @ 0x1404C633C (PopDiagTracePowerRequestCreate.c)
 * Callees:
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140071FE0 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     RtlStringCbCopyUnicodeString @ 0x140072A98 (RtlStringCbCopyUnicodeString.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     IoGetDeviceProperty @ 0x14055AE70 (IoGetDeviceProperty.c)
 */

__int64 __fastcall PoStoreRequester(__int64 a1, __int64 a2, unsigned __int64 *a3, char a4)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v6; // rsi
  char v7; // r13
  unsigned __int16 *v8; // r12
  char *v9; // r14
  char v10; // bl
  __int64 v11; // rcx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRefWithTag; // rax
  struct _DEVICE_OBJECT *v13; // rbp
  NTSTATUS DeviceProperty; // eax
  const UNICODE_STRING *p_DriverName; // r8
  __int64 v16; // rcx
  unsigned __int16 *v17; // rcx
  __int64 v18; // r8
  char *v19; // rdx
  char *v20; // rcx
  char *v21; // rcx
  unsigned __int64 v22; // rbp
  unsigned __int16 *DeviceNode; // rcx
  size_t v25; // rdx
  ULONG ResultLength; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 *v27; // [rsp+80h] [rbp+18h]

  v27 = a3;
  v4 = *a3;
  ResultLength = 0;
  v6 = 40LL;
  v7 = 0;
  v8 = 0LL;
  v9 = 0LL;
  if ( a2 && v4 >= 0x28 )
  {
    v9 = (char *)(a2 + 40);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)a1;
    v10 = 1;
  }
  else
  {
    v10 = 0;
  }
  if ( !*(_DWORD *)a1 )
  {
    v11 = *(_QWORD *)(a1 + 8);
    if ( !v11 )
      goto LABEL_26;
    DeviceAttachmentBaseRefWithTag = (struct _DEVICE_OBJECT *)IoGetDeviceAttachmentBaseRefWithTag(v11, 1953261124LL);
    v13 = DeviceAttachmentBaseRefWithTag;
    if ( !DeviceAttachmentBaseRefWithTag )
      goto LABEL_26;
    if ( DeviceAttachmentBaseRefWithTag->DeviceObjectExtension->DeviceNode )
    {
      if ( v10 )
      {
        DeviceProperty = IoGetDeviceProperty(
                           DeviceAttachmentBaseRefWithTag,
                           DevicePropertyDeviceDescription,
                           v4 - 40,
                           v9,
                           &ResultLength);
      }
      else
      {
        DeviceProperty = IoGetDeviceProperty(
                           DeviceAttachmentBaseRefWithTag,
                           DevicePropertyDeviceDescription,
                           0,
                           0LL,
                           &ResultLength);
        if ( DeviceProperty == -1073741789 )
          DeviceProperty = 0;
      }
    }
    else
    {
      DeviceProperty = -1073741808;
    }
    if ( DeviceProperty < 0 )
    {
      p_DriverName = &v13->DriverObject->DriverName;
      v16 = (unsigned int)p_DriverName->Length + 2;
      ResultLength = p_DriverName->Length + 2;
      if ( !v10 || v4 < v16 + 40 )
      {
        v10 = 0;
LABEL_37:
        v6 = (unsigned int)v16 + 40LL;
        if ( v10 )
        {
          v7 = 1;
          *(_QWORD *)(a2 + 16) = &v9[-a2];
          v9 += (unsigned int)v16;
        }
        DeviceNode = (unsigned __int16 *)v13->DeviceObjectExtension->DeviceNode;
        if ( DeviceNode )
        {
          v8 = DeviceNode + 20;
          v25 = (unsigned int)DeviceNode[20] + 2;
          v6 += v25;
          ResultLength = DeviceNode[20] + 2;
          if ( v10 && v4 >= v6 )
          {
            v10 = 1;
            RtlStringCbCopyUnicodeString((NTSTRSAFE_PWSTR)v9, v25, (PCUNICODE_STRING)(DeviceNode + 20));
            *(_QWORD *)(a2 + 24) = &v9[-a2];
          }
          else
          {
            v10 = 0;
          }
        }
        ObfDereferenceObject(v13);
        goto LABEL_26;
      }
      v10 = 1;
      RtlStringCbCopyUnicodeString((NTSTRSAFE_PWSTR)v9, (unsigned int)v16, p_DriverName);
    }
    LODWORD(v16) = ResultLength;
    goto LABEL_37;
  }
  if ( v10 )
  {
    *(_DWORD *)(a2 + 24) = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 736LL);
    *(_DWORD *)(a2 + 28) = *(_DWORD *)(a1 + 16);
  }
  v17 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 8) + 1128LL);
  v18 = *v17;
  v19 = (char *)*((_QWORD *)v17 + 1);
  ResultLength = *v17;
  if ( a4 )
  {
    v20 = &v19[2 * ((unsigned __int64)(unsigned int)v18 >> 1)];
    if ( v20 != v19 )
    {
      do
      {
        if ( *(_WORD *)v20 == 92 )
          break;
        v20 -= 2;
      }
      while ( v20 != v19 );
      if ( v20 != v19 )
      {
        v21 = v20 + 2;
        v18 = (unsigned int)((_DWORD)v19 - (_DWORD)v21 + v18);
        v19 = v21;
        ResultLength = v18;
      }
    }
  }
  v22 = (unsigned int)v18;
  v6 = v18 + 42;
  if ( v10 && v4 >= v6 )
  {
    v10 = 1;
    memmove(v9, v19, (unsigned int)v18);
    *(_WORD *)&v9[2 * (v22 >> 1)] = 0;
    *(_QWORD *)(a2 + 16) = &v9[-a2];
  }
  else
  {
    v10 = 0;
  }
LABEL_26:
  *v27 = v6;
  if ( !v10 )
    return 3221225507LL;
  if ( !*(_DWORD *)(a2 + 8) )
  {
    if ( !v7 )
      *(_QWORD *)(a2 + 16) = 0LL;
    if ( !v8 )
      *(_QWORD *)(a2 + 24) = 0LL;
  }
  return 0LL;
}
