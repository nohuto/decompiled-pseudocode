/*
 * XREFs of PnpCallDriverQueryServiceHelper @ 0x14051B03C
 * Callers:
 *     PipCallDriverAddDevice @ 0x14051DC78 (PipCallDriverAddDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14051A720 (PipCallDriverAddDeviceQueryRoutine.c)
 *     _CmGetInstallerClassRegProp @ 0x14051D640 (_CmGetInstallerClassRegProp.c)
 *     _CmGetDeviceRegProp @ 0x140520DD0 (_CmGetDeviceRegProp.c)
 *     _PnpGetObjectProperty @ 0x140523128 (_PnpGetObjectProperty.c)
 */

__int64 __fastcall PnpCallDriverQueryServiceHelper(
        __int64 *a1,
        int *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        int a8,
        __int64 *a9)
{
  char v9; // r15
  int v10; // esi
  int v11; // r14d
  int v14; // ecx
  int v16; // r13d
  int ObjectProperty; // eax
  int v18; // ecx
  int v19; // r10d
  unsigned int v21; // edx
  const WCHAR *v22; // rdi
  int v23; // esi
  __int64 v24; // rbx
  __int64 v25; // rbx
  unsigned int v26; // r8d
  SIZE_T v27; // rdx
  PVOID PoolWithTag; // rax
  int InstallerClassRegProp; // eax
  int v30; // [rsp+60h] [rbp-10h] BYREF
  _DWORD v31[3]; // [rsp+64h] [rbp-Ch] BYREF
  SIZE_T NumberOfBytes; // [rsp+C8h] [rbp+58h] BYREF

  v9 = a7;
  v10 = a6;
  v11 = a5;
  v30 = 0;
  v14 = *a2;
  LODWORD(NumberOfBytes) = *a2;
  v16 = 0;
  v31[0] = 0;
  if ( a4 )
  {
    v16 = (a7 != 0) + 1;
    ObjectProperty = PnpGetObjectProperty(
                       PiPnpRtlCtx,
                       a5,
                       v16,
                       a6,
                       0LL,
                       a4,
                       (__int64)v31,
                       *a1,
                       v14,
                       (__int64)&NumberOfBytes,
                       0);
  }
  else if ( a7 )
  {
    ObjectProperty = CmGetInstallerClassRegProp(PiPnpRtlCtx, a5, a6, a3, (__int64)&v30, *a1, (__int64)&NumberOfBytes);
  }
  else
  {
    ObjectProperty = CmGetDeviceRegProp(PiPnpRtlCtx, a5, a6, a3, (__int64)&v30, *a1, (__int64)&NumberOfBytes, 0);
  }
  v18 = ObjectProperty;
  if ( ObjectProperty == -1073741789 )
  {
    ExFreePoolWithTag((PVOID)*a1, 0);
    v27 = (unsigned int)NumberOfBytes;
    *a2 = NumberOfBytes;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v27, 0x6E657050u);
    *a1 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    if ( a4 )
    {
      InstallerClassRegProp = PnpGetObjectProperty(
                                PiPnpRtlCtx,
                                v11,
                                v16,
                                v10,
                                0LL,
                                a4,
                                (__int64)v31,
                                (__int64)PoolWithTag,
                                NumberOfBytes,
                                (__int64)&NumberOfBytes,
                                0);
    }
    else if ( v9 )
    {
      InstallerClassRegProp = CmGetInstallerClassRegProp(
                                PiPnpRtlCtx,
                                v11,
                                v10,
                                a3,
                                (__int64)&v30,
                                (__int64)PoolWithTag,
                                (__int64)&NumberOfBytes);
    }
    else
    {
      InstallerClassRegProp = CmGetDeviceRegProp(
                                PiPnpRtlCtx,
                                v11,
                                v10,
                                a3,
                                (__int64)&v30,
                                (__int64)PoolWithTag,
                                (__int64)&NumberOfBytes,
                                0);
    }
    v18 = InstallerClassRegProp;
  }
  if ( v18 >= 0 )
  {
    if ( a4 )
    {
      if ( v31[0] != 18 )
      {
        if ( v31[0] != 8210 )
        {
          v19 = 0;
          v30 = 0;
          return (unsigned int)PipCallDriverAddDeviceQueryRoutine(v19, (const WCHAR *)*a1, NumberOfBytes, a9, a8);
        }
        v30 = 7;
        goto LABEL_12;
      }
      v19 = 1;
      v30 = 1;
    }
    else
    {
      v19 = v30;
    }
    if ( v19 != 7 )
      return (unsigned int)PipCallDriverAddDeviceQueryRoutine(v19, (const WCHAR *)*a1, NumberOfBytes, a9, a8);
LABEL_12:
    if ( (unsigned int)*a2 < 2 )
      return (unsigned int)-1073741823;
    v21 = NumberOfBytes;
    if ( (unsigned int)NumberOfBytes < 2 )
    {
      return (unsigned int)-1073741823;
    }
    else
    {
      v22 = (const WCHAR *)*a1;
      if ( *(_WORD *)*a1 )
      {
        v23 = a8;
        while ( 1 )
        {
          v24 = -1LL;
          do
            ++v24;
          while ( v22[v24] );
          v25 = (unsigned int)(v24 + 1);
          v26 = 2 * v25;
          if ( v21 < 2 * (int)v25 )
            break;
          LODWORD(NumberOfBytes) = v21 - v26;
          v18 = PipCallDriverAddDeviceQueryRoutine(1, v22, v26, a9, v23);
          if ( v18 >= 0 )
          {
            v21 = NumberOfBytes;
            if ( (unsigned int)NumberOfBytes >= 2 )
            {
              v22 += v25;
              if ( *v22 )
                continue;
            }
          }
          return (unsigned int)v18;
        }
        return 0;
      }
    }
  }
  return (unsigned int)v18;
}
