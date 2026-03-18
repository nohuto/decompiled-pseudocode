/*
 * XREFs of PipCallDriverAddDeviceQueryRoutine @ 0x14051A720
 * Callers:
 *     PnpCallDriverQueryServiceHelper @ 0x14051B03C (PnpCallDriverQueryServiceHelper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     PipSetDevNodeState @ 0x1400E0004 (PipSetDevNodeState.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x1400FCC30 (PnpDiagnosticTraceDeviceOperation.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     IopCallDriverReinitializationRoutines @ 0x14046F300 (IopCallDriverReinitializationRoutines.c)
 *     PnpIsLegacyDriver @ 0x140517478 (PnpIsLegacyDriver.c)
 *     IopLoadDriver @ 0x140517490 (IopLoadDriver.c)
 *     PnpGetServiceStartType @ 0x140519C14 (PnpGetServiceStartType.c)
 *     PipOpenServiceEnumKeys @ 0x14051A2F0 (PipOpenServiceEnumKeys.c)
 *     IopGetDriverNameFromKeyNode @ 0x14051A450 (IopGetDriverNameFromKeyNode.c)
 *     IopReferenceDriverObjectByName @ 0x14051AA48 (IopReferenceDriverObjectByName.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     PipSetDevNodeFlags @ 0x140553748 (PipSetDevNodeFlags.c)
 *     PipSetDevNodeProblem @ 0x14055DCFC (PipSetDevNodeProblem.c)
 *     PnpCheckPossibleBootStartDriver @ 0x1405D8FD8 (PnpCheckPossibleBootStartDriver.c)
 *     PpInitGetGroupOrderIndex @ 0x140846D6C (PpInitGetGroupOrderIndex.c)
 *     PnpLoadBootFilterDriver @ 0x14084E29C (PnpLoadBootFilterDriver.c)
 */

__int64 __fastcall PipCallDriverAddDeviceQueryRoutine(int a1, const WCHAR *a2, unsigned int a3, __int64 *a4, int a5)
{
  __int64 result; // rax
  const WCHAR *v6; // rbx
  _DWORD *v8; // rsi
  unsigned int v9; // r13d
  char v10; // r12
  HANDLE v11; // r15
  __int16 v12; // dx
  char v13; // r14
  int v14; // ecx
  int v15; // ebx
  NTSTATUS v16; // eax
  int DriverNameFromKeyNode; // eax
  int ServiceStartType; // eax
  __int64 v19; // rdx
  unsigned int v20; // r14d
  __int64 v21; // rax
  int Driver; // eax
  SIZE_T v23; // rdx
  _QWORD *v24; // rdi
  _QWORD *PoolWithTag; // rax
  int v26; // eax
  void *v27; // rcx
  unsigned __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // ecx
  __int64 v31; // rcx
  unsigned int v32; // eax
  __int64 v33; // r8
  __int64 v34; // rdx
  unsigned int v35; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v36; // [rsp+34h] [rbp-2Ch] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-10h] BYREF
  char v40; // [rsp+90h] [rbp+30h]

  result = 0LL;
  v6 = L"\\Driver\\";
  v35 = 0;
  v40 = 0;
  v8 = 0LL;
  Handle = 0LL;
  v9 = 0;
  v10 = 0;
  v11 = 0LL;
  if ( a1 == 1 && a3 > 2 )
  {
    DestinationString.Length = 0;
    RtlInitUnicodeString(&DestinationString, a2);
    v12 = 92;
    v13 = 1;
    v14 = 0;
    do
    {
      if ( DestinationString.Buffer[v14] != v12 )
      {
        v15 = 0;
        v13 = 0;
        goto LABEL_6;
      }
      ++v6;
      ++v14;
      v12 = *v6;
    }
    while ( *v6 );
    v15 = 0;
LABEL_6:
    UnicodeString.Length = 0;
    if ( v13 )
    {
      RtlInitUnicodeString(&UnicodeString, DestinationString.Buffer);
    }
    else
    {
      if ( !*(_WORD *)(*a4 + 56) )
      {
        *(UNICODE_STRING *)(*a4 + 56) = DestinationString;
        *(_QWORD *)(*a4 + 64) = ExAllocatePoolWithTag(PagedPool, DestinationString.MaximumLength, 0x48706E50u);
        v27 = *(void **)(*a4 + 64);
        if ( !v27 )
        {
          *(_WORD *)(*a4 + 58) = 0;
          *(_WORD *)(*a4 + 56) = 0;
          *(_QWORD *)(*a4 + 64) = 0LL;
          return (unsigned int)-1073741823;
        }
        memmove(v27, DestinationString.Buffer, DestinationString.MaximumLength);
      }
      v16 = PipOpenServiceEnumKeys(&DestinationString, 0x20019u, &Handle, 0LL, 0);
      v15 = v16;
      if ( v16 < 0 )
      {
        PipSetDevNodeProblem(*a4, 19LL, (unsigned int)v16);
        v11 = Handle;
        goto LABEL_23;
      }
      v11 = Handle;
      DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(Handle, &UnicodeString);
      v15 = DriverNameFromKeyNode;
      if ( DriverNameFromKeyNode < 0 )
      {
        PipSetDevNodeProblem(*a4, 19LL, (unsigned int)DriverNameFromKeyNode);
        goto LABEL_23;
      }
      v40 = 1;
      v15 = 0;
    }
    v8 = (_DWORD *)IopReferenceDriverObjectByName(&UnicodeString);
    Handle = v8;
    if ( v8 )
    {
LABEL_36:
      if ( (v8[4] & 0x10) != 0 )
      {
        if ( (unsigned int)PnpIsLegacyDriver((__int64)v8) )
        {
          if ( a5 != 3 )
            goto LABEL_22;
          PipSetDevNodeFlags(*a4, 4096LL);
          PipSetDevNodeState(*a4, 776);
        }
        else if ( (unsigned int)(*(_DWORD *)(*a4 + 300) - 770) <= 1 )
        {
          v24 = (__int64 *)((char *)&a4[a5] + v23);
          PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)(v23 - 15), v23, 0x6E657050u);
          if ( PoolWithTag )
          {
            *PoolWithTag = v8;
            v8 = 0LL;
            PoolWithTag[1] = 0LL;
            while ( *v24 )
              v24 = (_QWORD *)(*v24 + 8LL);
            *v24 = PoolWithTag;
          }
          else
          {
            v15 = -1073741670;
          }
          goto LABEL_22;
        }
      }
      goto LABEL_21;
    }
    if ( !v13 )
    {
      ServiceStartType = PnpGetServiceStartType((int)DestinationString.Buffer, v11, &v36);
      v20 = v36;
      if ( ServiceStartType < 0 )
        v20 = 4;
      if ( a5 != 3 && !PnPBootDriversInitialized )
      {
        PpInitGetGroupOrderIndex(v11);
        v26 = PnpLoadBootFilterDriver(v11, &UnicodeString);
        v15 = v26;
        if ( v26 >= 0 )
        {
          v8 = Handle;
          if ( !Handle )
            goto LABEL_82;
          ObfReferenceObject(Handle);
        }
        else
        {
          if ( (unsigned int)(v26 + 1073740949) > 1 )
          {
            if ( v20 && !*(_BYTE *)(a4[1] + 4) && !(unsigned __int8)PnpCheckPossibleBootStartDriver(v11, 0LL) )
              *(_BYTE *)(*a4 + 688) = 1;
            v8 = Handle;
            goto LABEL_22;
          }
          v8 = Handle;
        }
        goto LABEL_53;
      }
      v21 = a4[1];
      if ( v20 > *(_DWORD *)v21 )
      {
        if ( v20 == 4 && (*(_DWORD *)(*a4 + 396) & 0x6000) == 0 )
          PipSetDevNodeProblem(*a4, 32LL, 0LL);
      }
      else
      {
        if ( *(_BYTE *)(v21 + 4) )
        {
          Driver = IopLoadDriver(v11, 0, a5 != 3, (int *)&v35);
          v15 = Driver;
          v11 = 0LL;
          v9 = Driver;
          if ( Driver < 0 )
          {
            if ( Driver == -1073740955 )
            {
              if ( v35 == -1073741670 )
                v15 = -1073741670;
            }
            else
            {
              v28 = (unsigned int)(Driver + 1073740961);
              if ( (unsigned int)v28 > 0x2F || (v29 = 0x800000003001LL, !_bittest64(&v29, v28)) )
              {
                if ( v15 != -1073741218 && v15 != -1073741670 && v15 != -1073740760 )
                  v15 = -1073741204;
              }
            }
          }
          if ( PnPInitialized )
            IopCallDriverReinitializationRoutines(0);
          v8 = (_DWORD *)IopReferenceDriverObjectByName(&UnicodeString);
          if ( v8 )
          {
LABEL_35:
            v15 = 0;
            goto LABEL_36;
          }
          if ( !PnpBootMode
            || (unsigned int)(v15 + 1073740961) <= 0xD && (v30 = 12353, _bittest(&v30, v15 + 1073740961))
            || v15 == -1073740760 )
          {
LABEL_82:
            PnpDiagnosticTraceDeviceOperation(
              &KMPnPEvt_DriverLoad_Fail,
              (unsigned __int16 *)(*a4 + 40),
              v15,
              (__int64)&UnicodeString,
              0);
            v31 = *a4;
            if ( (*(_DWORD *)(*a4 + 396) & 0x6000) == 0 )
            {
              if ( v15 > -1073740955 )
              {
                if ( v15 == -1073740949 )
                {
                  PipSetDevNodeProblem(v31, 48LL, 3221226347LL);
                  PipSetDevNodeFlags(*a4, 0x100000LL);
                  goto LABEL_22;
                }
                if ( v15 == -1073740948 )
                {
                  PipSetDevNodeFlags(v31, 0x100000LL);
                  v15 = 0;
                  goto LABEL_22;
                }
                v33 = 3221226382LL;
                if ( v15 == -1073740914 )
                {
                  v34 = 38LL;
                  goto LABEL_95;
                }
                v32 = -1073740760;
                if ( v15 != -1073740760 )
                  goto LABEL_103;
                v34 = 52LL;
              }
              else
              {
                if ( v15 == -1073740955 )
                {
                  v33 = v35;
                  v34 = 37LL;
                  goto LABEL_95;
                }
                v32 = -1073741670;
                if ( v15 == -1073741670 )
                {
                  v34 = 3LL;
                }
                else
                {
                  v33 = 3221225824LL;
                  if ( v15 == -1073741472 )
                  {
                    v34 = 40LL;
                    goto LABEL_95;
                  }
                  if ( v15 == -1073741411 )
                    goto LABEL_90;
                  v32 = -1073741218;
                  if ( v15 != -1073741218 )
                  {
                    if ( v15 == -1073741204 )
                    {
LABEL_90:
                      v33 = v9;
                      v34 = 39LL;
LABEL_95:
                      PipSetDevNodeProblem(v31, v34, v33);
                      goto LABEL_22;
                    }
LABEL_103:
                    v33 = (unsigned int)v15;
                    v34 = 31LL;
                    goto LABEL_95;
                  }
                  v34 = 41LL;
                }
              }
              v33 = v32;
              goto LABEL_95;
            }
LABEL_22:
            v10 = v40;
LABEL_23:
            if ( v11 )
              ZwClose(v11);
            if ( v10 )
              RtlFreeUnicodeString(&UnicodeString);
            if ( v8 )
              ObfDereferenceObject(v8);
            return (unsigned int)v15;
          }
          v15 = -1073741204;
LABEL_53:
          if ( !v8 )
            goto LABEL_82;
          goto LABEL_35;
        }
        if ( v20 && !(unsigned __int8)PnpCheckPossibleBootStartDriver(v11, v19) )
          *(_BYTE *)(*a4 + 688) = 1;
      }
    }
LABEL_21:
    v15 = -1073741823;
    goto LABEL_22;
  }
  return result;
}
