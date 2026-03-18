/*
 * XREFs of UsbhInternalValidatePlatformCapabilityDescriptor @ 0x1C0053BD0
 * Callers:
 *     UsbhInternalValidateDeviceCapabilityDescriptor @ 0x1C00539C8 (UsbhInternalValidateDeviceCapabilityDescriptor.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
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
  unsigned int v14; // r10d
  unsigned int v15; // ecx
  unsigned int v16; // r8d
  _DWORD *v17; // rdx
  unsigned int v18; // r9d
  ULONG *v19; // rbx
  __int64 v20; // r14
  __int64 v21; // rax
  unsigned __int8 v22; // r8
  unsigned __int8 v23; // al

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
LABEL_22:
          if ( !v15 )
            goto LABEL_29;
          v19 = (ULONG *)(a2 + 20);
          v20 = v15;
          do
          {
            if ( *v19 > v13 )
            {
              if ( RtlIsNtDdiVersionAvailable(*v19) )
              {
                v13 = *v19;
                *a3 = v19;
              }
            }
            v19 += 2;
            --v20;
          }
          while ( v20 );
          if ( !v13 )
LABEL_29:
            Log(a1, 256, 1146308915, 0LL, 0LL);
          return v6;
        }
        v16 = 1;
        v17 = a2 + 20;
        while ( 1 )
        {
          v18 = v16;
          if ( v16 < v15 )
            break;
LABEL_21:
          ++v14;
          ++v16;
          v17 += 2;
          if ( v14 >= v15 )
            goto LABEL_22;
        }
        while ( *(_DWORD *)&a2[8 * v18 + 20] != *v17 )
        {
          if ( ++v18 >= v15 )
            goto LABEL_21;
        }
        Log(a1, 256, 1146308913, (unsigned int)*v17, 0LL);
        return 0;
      }
      v12 = 1297105970;
    }
    else
    {
      v12 = 1297105969;
    }
LABEL_41:
    Log(a1, 256, v12, v11, 0LL);
    return 0;
  }
  v21 = *(_QWORD *)(a2 + 4) - *(_QWORD *)&GUID_USB_PLATFORM_FEATURES.Data1;
  if ( !v21 )
    v21 = *(_QWORD *)(a2 + 12) - *(_QWORD *)GUID_USB_PLATFORM_FEATURES.Data4;
  if ( v21 )
    return v6;
  Log(a1, 256, 1146242608, a2[20], *a2);
  v22 = *a2;
  if ( *a2 < 0x1Au )
  {
    v11 = v22;
    v12 = 1146242609;
    goto LABEL_41;
  }
  v23 = a2[20];
  if ( v23 == 1 )
  {
    if ( v22 != 26 )
    {
      v11 = v22;
      v12 = 1146242610;
      goto LABEL_41;
    }
  }
  else if ( !v23 )
  {
    v11 = v22;
    v12 = 1146242611;
    goto LABEL_41;
  }
  return v6;
}
