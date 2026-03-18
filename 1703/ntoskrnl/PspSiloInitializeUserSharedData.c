/*
 * XREFs of PspSiloInitializeUserSharedData @ 0x1406DF654
 * Callers:
 *     PspInitializeServerSiloDeferred @ 0x1406DEF80 (PspInitializeServerSiloDeferred.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x14006F590 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14006F5B0 (PsAttachSiloToCurrentThread.c)
 *     PsGetServerSiloGlobals @ 0x140085368 (PsGetServerSiloGlobals.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     MmCreateSection @ 0x140436B00 (MmCreateSection.c)
 *     MmMapViewInSystemSpace @ 0x1404B0180 (MmMapViewInSystemSpace.c)
 *     PspSiloInitializeSuiteMask @ 0x1406DF468 (PspSiloInitializeSuiteMask.c)
 *     PspSiloInitializeSystemRootBuffer @ 0x1406DF4CC (PspSiloInitializeSystemRootBuffer.c)
 *     RtlpGetNtProductTypeFromRegistry @ 0x1406EBB90 (RtlpGetNtProductTypeFromRegistry.c)
 */

__int64 __fastcall PspSiloInitializeUserSharedData(__int64 a1)
{
  __int64 result; // rax
  PVOID v3; // rbx
  NTSTATUS v4; // edi
  _QWORD *ServerSiloGlobals; // rdi
  __int64 v6; // rbp
  int NtProductTypeFromRegistry; // ebx
  __int64 v8; // rsi
  PVOID MappedBase; // [rsp+40h] [rbp-28h] BYREF
  ULONG_PTR ViewSize; // [rsp+78h] [rbp+10h] BYREF
  __int64 v11; // [rsp+80h] [rbp+18h] BYREF
  PVOID Section; // [rsp+88h] [rbp+20h] BYREF

  v11 = 584LL;
  result = MmCreateSection((int)&Section, 983071LL, 0, (int)&v11, 4, 0x8000000, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    v3 = Section;
    ViewSize = 0LL;
    v4 = MmMapViewInSystemSpace(Section, &MappedBase, &ViewSize);
    if ( v4 >= 0 )
    {
      ServerSiloGlobals = PsGetServerSiloGlobals(a1);
      ServerSiloGlobals[134] = MappedBase;
      ServerSiloGlobals[135] = v3;
      v6 = PsAttachSiloToCurrentThread(a1);
      *(_DWORD *)ServerSiloGlobals[134] = -1;
      NtProductTypeFromRegistry = PspSiloInitializeSystemRootBuffer(a1);
      if ( NtProductTypeFromRegistry >= 0 )
      {
        v8 = ServerSiloGlobals[134];
        NtProductTypeFromRegistry = RtlpGetNtProductTypeFromRegistry(&ViewSize);
        if ( NtProductTypeFromRegistry >= 0 )
        {
          *(_DWORD *)(v8 + 16) = ViewSize;
          NtProductTypeFromRegistry = PspSiloInitializeSuiteMask(ServerSiloGlobals[134]);
          if ( NtProductTypeFromRegistry >= 0 )
          {
            *(_DWORD *)(ServerSiloGlobals[134] + 24LL) = -1;
            NtProductTypeFromRegistry = 0;
          }
        }
      }
      PsDetachSiloFromCurrentThread(v6);
      return (unsigned int)NtProductTypeFromRegistry;
    }
    else
    {
      ObfDereferenceObject(v3);
      return (unsigned int)v4;
    }
  }
  return result;
}
