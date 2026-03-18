/*
 * XREFs of UsbhInternalValidatePlatformCapabilityDescriptor @ 0x1C0053DD0
 * Callers:
 *     UsbhInternalValidateDeviceCapabilityDescriptor @ 0x1C0053BE4 (UsbhInternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     Log @ 0x1C00155F0 (Log.c)
 *     FdoExt @ 0x1C0015670 (FdoExt.c)
 */

char __fastcall UsbhInternalValidatePlatformCapabilityDescriptor(__int64 a1, unsigned __int8 *a2, ULONG **a3)
{
  char v6; // bp
  unsigned __int8 v8; // al
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r9
  int v12; // r8d
  ULONG v13; // r15d
  unsigned int v14; // r11d
  unsigned int v15; // ecx
  unsigned int v16; // edx
  unsigned int *v17; // r10
  unsigned int v18; // r8d
  __int64 v19; // r9
  ULONG *v20; // rbx
  __int64 v21; // r14
  __int64 v22; // rax
  unsigned __int8 v23; // r8
  unsigned __int8 v24; // al

  *a3 = 0LL;
  v6 = 1;
  FdoExt(a1);
  if ( *a2 < 0x14u )
  {
    Log(a1, 256, 1448100913, *a2, 0LL);
    return 0;
  }
  v8 = a2[3];
  if ( v8 )
    Log(a1, 256, 1448100914, v8, 0LL);
  v9 = *(_QWORD *)(a2 + 4) - *(_QWORD *)&GUID_NULL.Data1;
  if ( !v9 )
    v9 = *(_QWORD *)(a2 + 12) - *(_QWORD *)GUID_NULL.Data4;
  if ( !v9 )
  {
    Log(a1, 256, 1448100915, 0LL, 0LL);
    v6 = 0;
  }
  v10 = *(_QWORD *)(a2 + 4) - *(_QWORD *)&GUID_USB_MSOS20_PLATFORM_CAPABILITY_ID.Data1;
  if ( !v10 )
    v10 = *(_QWORD *)(a2 + 12) - *(_QWORD *)GUID_USB_MSOS20_PLATFORM_CAPABILITY_ID.Data4;
  if ( !v10 )
  {
    v11 = *a2;
    if ( *a2 >= 0x1Cu )
    {
      if ( (((_BYTE)v11 - 4) & 7) == 0 )
      {
        v13 = 0;
        v14 = 0;
        v15 = ((unsigned __int64)(v11 - 28) >> 3) + 1;
        if ( (unsigned int)((unsigned __int64)(v11 - 28) >> 3) == -1 )
        {
LABEL_23:
          if ( !v15 )
            goto LABEL_30;
          v20 = (ULONG *)(a2 + 20);
          v21 = v15;
          do
          {
            if ( *v20 > v13 )
            {
              if ( RtlIsNtDdiVersionAvailable(*v20) )
              {
                v13 = *v20;
                *a3 = v20;
              }
            }
            v20 += 2;
            --v21;
          }
          while ( v21 );
          if ( !v13 )
LABEL_30:
            Log(a1, 256, 1146308915, 0LL, 0LL);
          return v6;
        }
        v16 = 1;
        v17 = (unsigned int *)(a2 + 20);
        while ( 1 )
        {
          v18 = v16;
          if ( v16 < v15 )
            break;
LABEL_22:
          ++v14;
          ++v16;
          v17 += 2;
          if ( v14 >= v15 )
            goto LABEL_23;
        }
        v19 = *v17;
        while ( *(_DWORD *)&a2[8 * v18 + 20] != (_DWORD)v19 )
        {
          if ( ++v18 >= v15 )
            goto LABEL_22;
        }
        Log(a1, 256, 1146308913, v19, 0LL);
        return 0;
      }
      v12 = 1297105970;
    }
    else
    {
      v12 = 1297105969;
    }
LABEL_42:
    Log(a1, 256, v12, v11, 0LL);
    return 0;
  }
  v22 = *(_QWORD *)(a2 + 4) - *(_QWORD *)&GUID_USB_PLATFORM_FEATURES.Data1;
  if ( !v22 )
    v22 = *(_QWORD *)(a2 + 12) - *(_QWORD *)GUID_USB_PLATFORM_FEATURES.Data4;
  if ( v22 )
    return v6;
  Log(a1, 256, 1146242608, a2[20], *a2);
  v23 = *a2;
  if ( *a2 < 0x1Au )
  {
    v11 = v23;
    v12 = 1146242609;
    goto LABEL_42;
  }
  v24 = a2[20];
  if ( v24 == 1 )
  {
    if ( v23 != 26 )
    {
      v11 = v23;
      v12 = 1146242610;
      goto LABEL_42;
    }
  }
  else if ( !v24 )
  {
    v11 = v23;
    v12 = 1146242611;
    goto LABEL_42;
  }
  return v6;
}
