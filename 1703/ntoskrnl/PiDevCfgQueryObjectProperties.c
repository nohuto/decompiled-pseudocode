/*
 * XREFs of PiDevCfgQueryObjectProperties @ 0x1405C7908
 * Callers:
 *     PiDevCfgInitDeviceContext @ 0x14058EA58 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgResolveDriverDependencies @ 0x14058EB78 (PiDevCfgResolveDriverDependencies.c)
 *     PiDevCfgQueryDriverNode @ 0x14058F3B8 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgGetDriverPackageId @ 0x14058FA6C (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x14058FD34 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgProcessDevice @ 0x14059040C (PiDevCfgProcessDevice.c)
 *     PiDevCfgConfigureDevice @ 0x140590890 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgLogDeviceStarted @ 0x140591B34 (PiDevCfgLogDeviceStarted.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140591DE0 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140698E74 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140699B70 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgResolveDeviceDependencies @ 0x14069C020 (PiDevCfgResolveDeviceDependencies.c)
 *     PpDevCfgProcessDeviceClass @ 0x14069E850 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14069EB7C (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x14069F1F4 (PpDevCfgProcessDeviceReset.c)
 *     PpDevCfgInit @ 0x14081D8E4 (PpDevCfgInit.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     PnpValidateMultiSzData @ 0x14014FC5C (PnpValidateMultiSzData.c)
 *     PnpValidateStringData @ 0x14014FF38 (PnpValidateStringData.c)
 *     ZwClose @ 0x14017E120 (ZwClose.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     _PnpGetObjectProperty @ 0x140484E40 (_PnpGetObjectProperty.c)
 *     _PnpOpenObjectRegKey @ 0x140487A28 (_PnpOpenObjectRegKey.c)
 *     ExpAllocateStringRoutine @ 0x1404C1D30 (ExpAllocateStringRoutine.c)
 */

__int64 __fastcall PiDevCfgQueryObjectProperties(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        void *a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v6; // r10
  int ObjectProperty; // ebx
  wchar_t *v8; // r14
  unsigned int v9; // r13d
  __int64 v10; // rdi
  int v11; // eax
  UNICODE_STRING *v12; // rsi
  wchar_t *Buffer; // r15
  unsigned int MaximumLength; // r12d
  wchar_t *PoolWithTag; // rax
  HANDLE v16; // r9
  SIZE_T v18; // rdx
  wchar_t *StringRoutine; // rax
  wchar_t *v20; // rdx
  int v21; // eax
  wchar_t *v22; // rax
  int v23; // [rsp+68h] [rbp-19h] BYREF
  int v24; // [rsp+6Ch] [rbp-15h]
  HANDLE Handle; // [rsp+70h] [rbp-11h] BYREF
  __int64 v26; // [rsp+78h] [rbp-9h]
  unsigned int Size; // [rsp+D8h] [rbp+57h] BYREF
  int Size_4; // [rsp+DCh] [rbp+5Bh]
  __int64 v29; // [rsp+E0h] [rbp+5Fh]
  unsigned int v30; // [rsp+E8h] [rbp+67h]
  void *v31; // [rsp+F0h] [rbp+6Fh]

  v31 = a4;
  v30 = a3;
  v29 = a2;
  Size_4 = HIDWORD(a1);
  v6 = 0LL;
  v26 = *(_QWORD *)&PiPnpRtlCtx;
  ObjectProperty = 0;
  Handle = 0LL;
  v8 = 0LL;
  v23 = 1;
  v9 = 0;
  Size = 0;
  if ( !a4 )
  {
    v21 = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, a2, a3, 33554433, 0, (__int64)&Handle, 0LL, 0);
    v6 = 0LL;
    ObjectProperty = v21;
    if ( v21 < 0 )
      goto LABEL_24;
  }
  v24 = 0;
  if ( !a6 )
    goto LABEL_24;
  v10 = a5 + 8;
  while ( 2 )
  {
    v11 = *(_DWORD *)(v10 + 20);
    if ( (v11 & 4) != 0 )
    {
      v12 = *(UNICODE_STRING **)(v10 + 8);
      Buffer = v12->Buffer;
      MaximumLength = v12->MaximumLength;
    }
    else
    {
      Buffer = *(wchar_t **)(v10 + 8);
      v12 = (UNICODE_STRING *)v6;
      MaximumLength = *(_DWORD *)(v10 + 16);
    }
    if ( (v11 & 2) != 0 )
    {
      if ( v8
        || (v9 = 260,
            PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x104uLL, 0x63647050u),
            v6 = 0LL,
            (v8 = PoolWithTag) != 0LL) )
      {
        Buffer = v8;
        goto LABEL_10;
      }
      ObjectProperty = -1073741670;
      goto LABEL_24;
    }
    while ( 1 )
    {
      v16 = Handle;
      if ( v31 )
        v16 = v31;
      ObjectProperty = PnpGetObjectProperty(
                         v26,
                         v29,
                         v30,
                         (__int64)v16,
                         v6,
                         *(_QWORD *)(v10 - 8),
                         (__int64)&v23,
                         (__int64)Buffer,
                         MaximumLength,
                         (__int64)&Size,
                         v6);
      if ( ObjectProperty != -1073741789 )
      {
        v6 = 0LL;
        goto LABEL_15;
      }
      if ( (*(_DWORD *)(v10 + 20) & 2) == 0 )
        goto LABEL_67;
      if ( Size <= MaximumLength )
      {
        ObjectProperty = -1073741595;
LABEL_67:
        v6 = 0LL;
        goto LABEL_17;
      }
      ExFreePoolWithTag(v8, 0);
      v9 = Size;
      v22 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, Size, 0x63647050u);
      v6 = 0LL;
      v8 = v22;
      if ( !v22 )
        break;
      Buffer = v22;
LABEL_10:
      MaximumLength = v9;
    }
    ObjectProperty = -1073741670;
LABEL_15:
    if ( ObjectProperty == -1073741670 )
      break;
    if ( ObjectProperty >= 0 )
    {
      v18 = Size;
      if ( v23 )
      {
        if ( v23 != *(_DWORD *)v10 )
        {
          ObjectProperty = -1073741823;
          goto LABEL_17;
        }
        if ( v23 == 18 || v23 == 20 || v23 == 25 )
        {
          if ( !PnpValidateStringData((__int64)Buffer, Size) )
            ObjectProperty = -1073741823;
        }
        else if ( v23 == 8210 && !(unsigned __int8)PnpValidateMultiSzData(Buffer, Size) )
        {
          ObjectProperty = -1073741823;
        }
      }
      else
      {
        *(_DWORD *)v10 = 0;
      }
      if ( ObjectProperty >= 0 )
      {
        if ( v12 && (unsigned int)v18 > 0xFFFE )
          ObjectProperty = -2147483643;
        if ( ObjectProperty >= 0 )
        {
          if ( (*(_DWORD *)(v10 + 20) & 2) == 0 )
            goto LABEL_38;
          if ( v12 )
          {
            StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v18);
            v12->Buffer = StringRoutine;
            if ( StringRoutine )
            {
              v12->MaximumLength = Size;
LABEL_48:
              memmove(StringRoutine, v8, Size);
              LODWORD(v18) = Size;
              v6 = 0LL;
LABEL_38:
              if ( v12 )
              {
                v12->Length = v18;
                if ( v23 != 8210 )
                {
                  v20 = v12->Buffer;
                  if ( v20 )
                  {
                    if ( (unsigned __int16)Size >= 2u
                      && v20[((unsigned __int64)(unsigned __int16)Size >> 1) - 1] == (_WORD)v6 )
                    {
                      v12->Length = Size - 2;
                    }
                  }
                }
              }
              else
              {
                if ( (*(_DWORD *)(v10 + 20) & 2) != 0 )
                {
                  **(_QWORD **)(v10 + 8) = Buffer;
                  LODWORD(v18) = Size;
                }
                *(_DWORD *)(v10 + 16) = v18;
              }
              goto LABEL_17;
            }
          }
          else
          {
            StringRoutine = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v18, 0x63647050u);
            Buffer = StringRoutine;
            if ( StringRoutine )
              goto LABEL_48;
          }
          ObjectProperty = -1073741670;
          break;
        }
      }
    }
LABEL_17:
    *(_DWORD *)(v10 + 24) = ObjectProperty;
    if ( ObjectProperty < 0 )
    {
      if ( (*(_DWORD *)(v10 + 20) & 8) == 0 )
      {
LABEL_19:
        if ( (*(_DWORD *)(v10 + 20) & 1) != 0 )
          break;
        ObjectProperty = v6;
        goto LABEL_21;
      }
      if ( v12 )
      {
        RtlInitUnicodeString(v12, 0LL);
      }
      else
      {
        if ( !Buffer )
          goto LABEL_19;
        memset(Buffer, 0, MaximumLength);
      }
      v6 = 0LL;
      goto LABEL_19;
    }
LABEL_21:
    v10 += 40LL;
    if ( ++v24 < a6 )
      continue;
    break;
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_24:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)ObjectProperty;
}
