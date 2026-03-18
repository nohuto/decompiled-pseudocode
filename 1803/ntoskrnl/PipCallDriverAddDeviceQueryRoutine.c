/*
 * XREFs of PipCallDriverAddDeviceQueryRoutine @ 0x1405F72F4
 * Callers:
 *     PnpCallDriverQueryServiceHelper @ 0x1405CF254 (PnpCallDriverQueryServiceHelper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     PipSetDevNodeState @ 0x140146914 (PipSetDevNodeState.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x14014BF08 (PnpDiagnosticTraceDeviceOperation.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x1404BA0E0 (RtlFreeAnsiString.c)
 *     PipSetDevNodeProblem @ 0x1405C7484 (PipSetDevNodeProblem.c)
 *     PipSetDevNodeFlags @ 0x1405D1BFC (PipSetDevNodeFlags.c)
 *     IopCallDriverReinitializationRoutines @ 0x1405F6CAC (IopCallDriverReinitializationRoutines.c)
 *     IopReferenceDriverObjectByName @ 0x1405F7614 (IopReferenceDriverObjectByName.c)
 *     IopGetDriverNameFromKeyNode @ 0x1405F76D4 (IopGetDriverNameFromKeyNode.c)
 *     PipOpenServiceEnumKeys @ 0x1405F7868 (PipOpenServiceEnumKeys.c)
 *     PnpIsLegacyDriver @ 0x1405F7C8C (PnpIsLegacyDriver.c)
 *     IopLoadDriver @ 0x1405F7CAC (IopLoadDriver.c)
 *     PnpGetServiceStartType @ 0x14063392C (PnpGetServiceStartType.c)
 *     PnpCheckPossibleBootStartDriver @ 0x1406436A0 (PnpCheckPossibleBootStartDriver.c)
 *     PnpLoadBootFilterDriver @ 0x1408B3768 (PnpLoadBootFilterDriver.c)
 *     PpInitGetGroupOrderIndex @ 0x1408B6C10 (PpInitGetGroupOrderIndex.c)
 */

__int64 __fastcall PipCallDriverAddDeviceQueryRoutine(int a1, const WCHAR *a2, unsigned int a3, __int64 *a4, int a5)
{
  __int64 result; // rax
  const WCHAR *v6; // rbx
  _DWORD *v8; // rsi
  char v9; // r12
  HANDLE v10; // r15
  __int16 v11; // dx
  char v12; // r14
  int v13; // ecx
  int v14; // ebx
  int v15; // eax
  int DriverNameFromKeyNode; // eax
  int ServiceStartType; // eax
  __int64 v18; // rdx
  unsigned int v19; // r14d
  __int64 v20; // rax
  int Driver; // eax
  SIZE_T v22; // rdx
  _QWORD *v23; // rdi
  _QWORD *PoolWithTag; // rax
  int v25; // eax
  void *v26; // rcx
  unsigned __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // ecx
  __int64 v30; // rcx
  int v31; // eax
  int v32; // r8d
  int v33; // edx
  int v34; // [rsp+34h] [rbp-3Ch]
  unsigned int v35; // [rsp+38h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-28h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-18h] BYREF
  char v39; // [rsp+A0h] [rbp+30h]

  result = 0LL;
  v6 = L"\\Driver\\";
  v34 = 0;
  v8 = 0LL;
  v39 = 0;
  Handle = 0LL;
  v9 = 0;
  v10 = 0LL;
  if ( a1 == 1 && a3 > 2 )
  {
    DestinationString.Length = 0;
    RtlInitUnicodeString(&DestinationString, a2);
    v11 = 92;
    v12 = 1;
    v13 = 0;
    do
    {
      if ( DestinationString.Buffer[v13] != v11 )
      {
        v14 = 0;
        v12 = 0;
        goto LABEL_6;
      }
      ++v6;
      ++v13;
      v11 = *v6;
    }
    while ( *v6 );
    v14 = 0;
LABEL_6:
    UnicodeString.Length = 0;
    if ( v12 )
    {
      RtlInitUnicodeString(&UnicodeString, DestinationString.Buffer);
    }
    else
    {
      if ( !*(_WORD *)(*a4 + 56) )
      {
        *(UNICODE_STRING *)(*a4 + 56) = DestinationString;
        *(_QWORD *)(*a4 + 64) = ExAllocatePoolWithTag(PagedPool, DestinationString.MaximumLength, 0x48706E50u);
        v26 = *(void **)(*a4 + 64);
        if ( !v26 )
        {
          *(_WORD *)(*a4 + 58) = 0;
          *(_WORD *)(*a4 + 56) = 0;
          *(_QWORD *)(*a4 + 64) = 0LL;
          return (unsigned int)-1073741823;
        }
        memmove(v26, DestinationString.Buffer, DestinationString.MaximumLength);
      }
      v15 = PipOpenServiceEnumKeys(&DestinationString, 131097LL, &Handle, 0LL, 0);
      v14 = v15;
      if ( v15 < 0 )
      {
        PipSetDevNodeProblem(*a4, 19, v15);
        v10 = Handle;
        goto LABEL_23;
      }
      v10 = Handle;
      DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(Handle, &UnicodeString);
      v14 = DriverNameFromKeyNode;
      if ( DriverNameFromKeyNode < 0 )
      {
        PipSetDevNodeProblem(*a4, 19, DriverNameFromKeyNode);
        goto LABEL_23;
      }
      v39 = 1;
      v14 = 0;
    }
    v8 = (_DWORD *)IopReferenceDriverObjectByName(&UnicodeString);
    Handle = v8;
    if ( v8 )
    {
LABEL_36:
      if ( (v8[4] & 0x10) != 0 )
      {
        if ( (unsigned int)PnpIsLegacyDriver(v8) )
        {
          if ( a5 != 3 )
            goto LABEL_22;
          PipSetDevNodeFlags(*a4, 4096);
          PipSetDevNodeState(*a4, 776);
        }
        else if ( (unsigned int)(*(_DWORD *)(*a4 + 300) - 770) <= 1 )
        {
          v23 = (__int64 *)((char *)&a4[a5] + v22);
          PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(v22 - 15), v22, 0x6E657050u);
          if ( PoolWithTag )
          {
            *PoolWithTag = v8;
            v8 = 0LL;
            PoolWithTag[1] = 0LL;
            while ( *v23 )
              v23 = (_QWORD *)(*v23 + 8LL);
            *v23 = PoolWithTag;
          }
          else
          {
            v14 = -1073741670;
          }
          goto LABEL_22;
        }
      }
      goto LABEL_21;
    }
    if ( !v12 )
    {
      ServiceStartType = PnpGetServiceStartType(DestinationString.Buffer, v10, &v35);
      v19 = v35;
      if ( ServiceStartType < 0 )
        v19 = 4;
      if ( a5 != 3 && !PnPBootDriversInitialized )
      {
        PpInitGetGroupOrderIndex(v10);
        v25 = PnpLoadBootFilterDriver(v10, &UnicodeString);
        v14 = v25;
        if ( v25 < 0 )
        {
          if ( (unsigned int)(v25 + 1073740949) > 1 )
          {
            if ( v19 && !*(_BYTE *)(a4[1] + 4) && !(unsigned __int8)PnpCheckPossibleBootStartDriver(v10, 0LL) )
              *(_BYTE *)(*a4 + 688) = 1;
            v8 = Handle;
            goto LABEL_22;
          }
          v8 = Handle;
        }
        else
        {
          v8 = Handle;
          if ( !Handle )
            goto LABEL_81;
          ObfReferenceObject(Handle);
        }
        goto LABEL_50;
      }
      v20 = a4[1];
      if ( v19 > *(_DWORD *)v20 )
      {
        if ( v19 == 4 && (*(_DWORD *)(*a4 + 396) & 0x6000) == 0 )
          PipSetDevNodeProblem(*a4, 32, 0);
      }
      else
      {
        if ( *(_BYTE *)(v20 + 4) )
        {
          Driver = IopLoadDriver(v10);
          v34 = Driver;
          v14 = Driver;
          v10 = 0LL;
          if ( Driver < 0 && Driver != -1073740955 )
          {
            v27 = (unsigned int)(Driver + 1073740961);
            if ( (unsigned int)v27 > 0x2F || (v28 = 0x800000003001LL, !_bittest64(&v28, v27)) )
            {
              if ( v14 != -1073741218 && v14 != -1073741670 && v14 != -1073740760 )
                v14 = -1073741204;
            }
          }
          if ( PnPInitialized )
            IopCallDriverReinitializationRoutines(0);
          v8 = (_DWORD *)IopReferenceDriverObjectByName(&UnicodeString);
          if ( v8 )
          {
LABEL_35:
            v14 = 0;
            goto LABEL_36;
          }
          if ( !PnpBootMode
            || (unsigned int)(v14 + 1073740961) <= 0xD && (v29 = 12353, _bittest(&v29, v14 + 1073740961))
            || v14 == -1073740760 )
          {
LABEL_81:
            PnpDiagnosticTraceDeviceOperation(
              &KMPnPEvt_DriverLoad_Fail,
              (unsigned __int16 *)(*a4 + 40),
              v14,
              (__int64)&UnicodeString,
              0);
            v30 = *a4;
            if ( (*(_DWORD *)(*a4 + 396) & 0x6000) == 0 )
            {
              if ( v14 > -1073740955 )
              {
                if ( v14 == -1073740949 )
                {
                  PipSetDevNodeProblem(v30, 48, -1073740949);
                  PipSetDevNodeFlags(*a4, 0x100000);
                  goto LABEL_22;
                }
                if ( v14 == -1073740948 )
                {
                  PipSetDevNodeFlags(v30, 0x100000);
                  v14 = 0;
                  goto LABEL_22;
                }
                v32 = -1073740914;
                if ( v14 == -1073740914 )
                {
                  v33 = 38;
                  goto LABEL_94;
                }
                v31 = -1073740760;
                if ( v14 != -1073740760 )
                  goto LABEL_102;
                v33 = 52;
              }
              else
              {
                if ( v14 == -1073740955 )
                {
                  v32 = 0;
                  v33 = 37;
                  goto LABEL_94;
                }
                v31 = -1073741670;
                if ( v14 == -1073741670 )
                {
                  v33 = 3;
                }
                else
                {
                  v32 = -1073741472;
                  if ( v14 == -1073741472 )
                  {
                    v33 = 40;
                    goto LABEL_94;
                  }
                  if ( v14 == -1073741411 )
                    goto LABEL_89;
                  v31 = -1073741218;
                  if ( v14 != -1073741218 )
                  {
                    if ( v14 == -1073741204 )
                    {
LABEL_89:
                      v32 = v34;
                      v33 = 39;
LABEL_94:
                      PipSetDevNodeProblem(v30, v33, v32);
                      goto LABEL_22;
                    }
LABEL_102:
                    v32 = v14;
                    v33 = 31;
                    goto LABEL_94;
                  }
                  v33 = 41;
                }
              }
              v32 = v31;
              goto LABEL_94;
            }
LABEL_22:
            v9 = v39;
LABEL_23:
            if ( v10 )
              ZwClose(v10);
            if ( v9 )
              RtlFreeAnsiString(&UnicodeString);
            if ( v8 )
              ObfDereferenceObject(v8);
            return (unsigned int)v14;
          }
          v14 = -1073741204;
LABEL_50:
          if ( !v8 )
            goto LABEL_81;
          goto LABEL_35;
        }
        if ( v19 && !(unsigned __int8)PnpCheckPossibleBootStartDriver(v10, v18) )
          *(_BYTE *)(*a4 + 688) = 1;
      }
    }
LABEL_21:
    v14 = -1073741823;
    goto LABEL_22;
  }
  return result;
}
