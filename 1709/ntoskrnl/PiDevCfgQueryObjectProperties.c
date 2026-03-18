/*
 * XREFs of PiDevCfgQueryObjectProperties @ 0x14058ABD0
 * Callers:
 *     PpDevCfgProcessDeviceClass @ 0x14044EB08 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14044EE8C (PpDevCfgProcessDeviceReset.c)
 *     PiDevCfgInitDeviceContext @ 0x14058AA6C (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgProcessDevice @ 0x1405A0E30 (PiDevCfgProcessDevice.c)
 *     PiDevCfgQueryDriverNode @ 0x1405A1890 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgGetDriverPackageId @ 0x1405A1FC8 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1405A20B0 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgConfigureDevice @ 0x1405A296C (PiDevCfgConfigureDevice.c)
 *     PiDevCfgLogDeviceStarted @ 0x1405A3B98 (PiDevCfgLogDeviceStarted.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1405A3E50 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x1406C4CA0 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1406C56F8 (PiDevCfgFindDeviceMigrationNode.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1406C9D50 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgInit @ 0x14083EBC0 (PpDevCfgInit.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     PnpValidateMultiSzData @ 0x1401280D4 (PnpValidateMultiSzData.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ExpAllocateStringRoutine @ 0x1404DF9E0 (ExpAllocateStringRoutine.c)
 *     _PnpGetObjectProperty @ 0x140523128 (_PnpGetObjectProperty.c)
 *     _PnpOpenObjectRegKey @ 0x1405264F8 (_PnpOpenObjectRegKey.c)
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
  HANDLE v15; // r9
  SIZE_T v17; // rdx
  wchar_t *PoolWithTag; // rax
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
      goto LABEL_23;
  }
  v24 = 0;
  if ( !a6 )
    goto LABEL_23;
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
        goto LABEL_9;
      }
      ObjectProperty = -1073741670;
      goto LABEL_23;
    }
    while ( 1 )
    {
      v15 = Handle;
      if ( v31 )
        v15 = v31;
      ObjectProperty = PnpGetObjectProperty(
                         v26,
                         v29,
                         v30,
                         (__int64)v15,
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
        goto LABEL_14;
      }
      if ( (*(_DWORD *)(v10 + 20) & 2) == 0 )
        goto LABEL_66;
      if ( Size <= MaximumLength )
        break;
      ExFreePoolWithTag(v8, 0);
      v9 = Size;
      v22 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, Size, 0x63647050u);
      v6 = 0LL;
      v8 = v22;
      if ( !v22 )
      {
        ObjectProperty = -1073741670;
LABEL_14:
        if ( ObjectProperty == -1073741670 )
          goto LABEL_21;
        if ( ObjectProperty < 0 )
          goto LABEL_16;
        v17 = Size;
        if ( v23 )
        {
          if ( v23 != *(_DWORD *)v10 )
          {
            ObjectProperty = -1073741823;
            goto LABEL_16;
          }
          if ( v23 == 18 || v23 == 20 || v23 == 25 )
          {
            if ( Size >= 2 && !Buffer[((unsigned __int64)Size >> 1) - 1] )
              goto LABEL_32;
          }
          else if ( v23 != 8210 || PnpValidateMultiSzData(Buffer, Size) )
          {
            goto LABEL_32;
          }
          ObjectProperty = -1073741823;
        }
        else
        {
          *(_DWORD *)v10 = 0;
        }
LABEL_32:
        if ( ObjectProperty < 0 )
          goto LABEL_16;
        if ( v12 && (unsigned int)v17 > 0xFFFE )
          ObjectProperty = -2147483643;
        if ( ObjectProperty < 0 )
          goto LABEL_16;
        if ( (*(_DWORD *)(v10 + 20) & 2) == 0 )
        {
LABEL_36:
          if ( v12 )
          {
            v12->Length = v17;
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
              LODWORD(v17) = Size;
            }
            *(_DWORD *)(v10 + 16) = v17;
          }
          goto LABEL_16;
        }
        if ( v12 )
        {
          StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v17);
          v12->Buffer = StringRoutine;
          if ( StringRoutine )
          {
            v12->MaximumLength = Size;
LABEL_49:
            memmove(StringRoutine, v8, Size);
            LODWORD(v17) = Size;
            v6 = 0LL;
            goto LABEL_36;
          }
        }
        else
        {
          StringRoutine = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v17, 0x63647050u);
          Buffer = StringRoutine;
          if ( StringRoutine )
            goto LABEL_49;
        }
        ObjectProperty = -1073741670;
        goto LABEL_21;
      }
      Buffer = v22;
LABEL_9:
      MaximumLength = v9;
    }
    ObjectProperty = -1073741595;
LABEL_66:
    v6 = 0LL;
LABEL_16:
    *(_DWORD *)(v10 + 24) = ObjectProperty;
    if ( ObjectProperty < 0 )
    {
      if ( (*(_DWORD *)(v10 + 20) & 8) == 0 )
        goto LABEL_18;
      if ( v12 )
      {
        RtlInitUnicodeString(v12, 0LL);
        goto LABEL_78;
      }
      if ( Buffer )
      {
        memset(Buffer, 0, MaximumLength);
LABEL_78:
        v6 = 0LL;
      }
LABEL_18:
      if ( (*(_DWORD *)(v10 + 20) & 1) != 0 )
        break;
      ObjectProperty = v6;
    }
    v10 += 40LL;
    if ( ++v24 < a6 )
      continue;
    break;
  }
LABEL_21:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_23:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)ObjectProperty;
}
