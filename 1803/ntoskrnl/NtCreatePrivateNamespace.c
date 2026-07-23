/*
 * XREFs of NtCreatePrivateNamespace @ 0x1405400D0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1400A5690 (PsGetCurrentServerSiloGlobals.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ObCreateObjectEx @ 0x1404C3B90 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404C3DD0 (ObInsertObjectEx.c)
 *     ObpRegisterPrivateNamespace @ 0x14054031C (ObpRegisterPrivateNamespace.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140540474 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140540674 (ObpCaptureBoundaryDescriptor.c)
 */

NTSTATUS __cdecl NtCreatePrivateNamespace(
        PHANDLE NamespaceHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor)
{
  int v4; // r14d
  char PreviousMode; // si
  __int64 v8; // rcx
  NTSTATUS result; // eax
  _QWORD *v10; // rdi
  NTSTATUS v11; // ebx
  unsigned __int64 v12; // rbx
  int v13; // eax
  _QWORD *v14; // r14
  unsigned __int64 v15; // rbx
  size_t v16; // r8
  __int64 v17; // rcx
  NTSTATUS inserted; // edi
  _DWORD *CurrentServerSiloGlobals; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  __int64 v26; // rdx
  _QWORD *v27; // rax
  __int64 v28; // [rsp+20h] [rbp-68h]
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  PVOID P; // [rsp+60h] [rbp-28h]
  __int64 v31; // [rsp+68h] [rbp-20h] BYREF

  v4 = (int)ObjectAttributes;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)NamespaceHandle < 0x7FFFFFFF0000LL )
      v8 = (__int64)NamespaceHandle;
    *(_QWORD *)v8 = *(_QWORD *)v8;
  }
  result = ObpCaptureBoundaryDescriptor(BoundaryDescriptor);
  if ( result >= 0 )
  {
    v10 = P;
    v11 = ObpVerifyCreatorAccessCheck((char *)P + 48);
    if ( v11 >= 0 )
    {
      v12 = (unsigned int)(*((_DWORD *)P + 6) + 392);
      if ( v12 < *((_QWORD *)P + 3) )
      {
        v11 = -1073741811;
      }
      else
      {
        v13 = ObCreateObjectEx(
                PreviousMode,
                ObpDirectoryObjectType,
                v4,
                PreviousMode,
                v28,
                *((_DWORD *)P + 6) + 392,
                0,
                0,
                &Object,
                0LL);
        if ( v13 >= 0 )
        {
          v14 = Object;
          memset(Object, 0, (unsigned int)v12);
          v15 = ((unsigned __int64)v14 + 351) & 0xFFFFFFFFFFFFFFF8uLL;
          *(_QWORD *)(v15 + 8) = v15;
          *(_QWORD *)v15 = v15;
          v16 = v10[3];
          *(_QWORD *)(v15 + 24) = v16;
          *(_QWORD *)(v15 + 16) = 0LL;
          *(_BYTE *)(v15 + 40) = *((_BYTE *)v10 + 40);
          memmove((void *)(v15 + 48), v10 + 6, v16);
          ExFreePoolWithTag(v10, 0x534E624Fu);
          v14[37] = 0LL;
          *((_DWORD *)v14 + 85) = -1;
          *((_DWORD *)v14 + 84) = 1;
          if ( (*((_BYTE *)v14 - 22) & 2) != 0 )
            v17 = (__int64)v14 - ObpInfoMaskToOffset[*((_BYTE *)v14 - 22) & 3] - 48;
          else
            v17 = 0LL;
          if ( v17 )
          {
            inserted = -1073741773;
          }
          else
          {
            inserted = ObpRegisterPrivateNamespace(((unsigned __int64)v14 + 351) & 0xFFFFFFFFFFFFFFF8uLL);
            if ( inserted >= 0 )
            {
              ObfReferenceObject(v14);
              inserted = ObInsertObjectEx(v14, 0LL, DesiredAccess, 0, 0, 0LL, &v31);
              CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              ExAcquirePushLockExclusiveEx((ULONG_PTR)(CurrentServerSiloGlobals + 180), 0LL);
              if ( inserted < 0 )
              {
                v24 = *(_QWORD *)v15;
                v25 = *(_QWORD **)(v15 + 8);
                if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) != v15 || *v25 != v15 )
                  __fastfail(3u);
                *v25 = v24;
                *(_QWORD *)(v24 + 8) = v25;
              }
              else
              {
                if ( (v14[42] & 2) == 0 )
                {
                  v23 = Object;
                  *(_QWORD *)(v15 + 16) = Object;
                  v23[40] = v15;
                  goto LABEL_16;
                }
                v26 = *(_QWORD *)v15;
                v27 = *(_QWORD **)(v15 + 8);
                if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) != v15 || *v27 != v15 )
                  __fastfail(3u);
                *v27 = v26;
                *(_QWORD *)(v26 + 8) = v27;
              }
              --CurrentServerSiloGlobals[182];
              ObfDereferenceObject(Object);
LABEL_16:
              ExReleasePushLockEx((ULONG_PTR)(CurrentServerSiloGlobals + 180), 0LL, v21, v22);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              if ( inserted >= 0 )
                *NamespaceHandle = (HANDLE)v31;
              return inserted;
            }
          }
          ObfDereferenceObject(v14);
          return inserted;
        }
        v11 = v13;
      }
    }
    ExFreePoolWithTag(v10, 0x534E624Fu);
    return v11;
  }
  return result;
}
