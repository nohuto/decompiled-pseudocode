/*
 * XREFs of PspSiloInitializeUserSharedData @ 0x140779C68
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x140779580 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x14006CD90 (PsGetServerSiloGlobals.c)
 *     PsDetachSiloFromCurrentThread @ 0x140073540 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x140073560 (PsAttachSiloToCurrentThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     MmCreateSection @ 0x1404C1C80 (MmCreateSection.c)
 *     MmMapViewInSystemSpace @ 0x14054B620 (MmMapViewInSystemSpace.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x1405F1140 (RtlpGetNtProductTypeFromRegistry.c)
 *     PspSiloInitializeSuiteMask @ 0x140779A78 (PspSiloInitializeSuiteMask.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x140779ADC (PspSiloInitializeSystemRootBuffer.c)
 */

__int64 __fastcall PspSiloInitializeUserSharedData(__int64 a1)
{
  __int64 result; // rax
  int NtProductTypeFromRegistry; // ebx
  _QWORD *ServerSiloGlobals; // rdi
  __int64 v5; // r14
  __int64 v6; // rsi
  PVOID MappedBase; // [rsp+40h] [rbp-10h] BYREF
  ULONG_PTR ViewSize; // [rsp+88h] [rbp+38h] BYREF
  PVOID Section; // [rsp+90h] [rbp+40h] BYREF
  __int64 v10; // [rsp+98h] [rbp+48h] BYREF

  v10 = 584LL;
  result = MmCreateSection((int)&Section, 983071LL, 0, (int)&v10, 4, 0x8000000, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    ViewSize = 0LL;
    NtProductTypeFromRegistry = MmMapViewInSystemSpace(Section, &MappedBase, &ViewSize);
    if ( NtProductTypeFromRegistry >= 0 )
    {
      ServerSiloGlobals = PsGetServerSiloGlobals(a1);
      ServerSiloGlobals[139] = Section;
      ServerSiloGlobals[138] = MappedBase;
      v5 = PsAttachSiloToCurrentThread(a1);
      *(_DWORD *)ServerSiloGlobals[138] = -1;
      NtProductTypeFromRegistry = PspSiloInitializeSystemRootBuffer(a1);
      if ( NtProductTypeFromRegistry >= 0 )
      {
        v6 = ServerSiloGlobals[138];
        NtProductTypeFromRegistry = RtlpGetNtProductTypeFromRegistry(&ViewSize);
        if ( NtProductTypeFromRegistry >= 0 )
        {
          *(_DWORD *)(v6 + 16) = ViewSize;
          NtProductTypeFromRegistry = PspSiloInitializeSuiteMask(ServerSiloGlobals[138]);
          if ( NtProductTypeFromRegistry >= 0 )
          {
            *(_DWORD *)(ServerSiloGlobals[138] + 24LL) = -1;
            NtProductTypeFromRegistry = 0;
          }
        }
      }
      PsDetachSiloFromCurrentThread(v5);
    }
    else
    {
      ObfDereferenceObject(Section);
    }
    return (unsigned int)NtProductTypeFromRegistry;
  }
  return result;
}
