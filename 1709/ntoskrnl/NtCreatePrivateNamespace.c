/*
 * XREFs of NtCreatePrivateNamespace @ 0x140548D34
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1400D2E30 (PsGetCurrentServerSiloGlobals.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1404893EC (ObpCaptureBoundaryDescriptor.c)
 *     ObCreateObjectEx @ 0x1404BB6D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1404BC710 (ObInsertObjectEx.c)
 *     ObpRegisterPrivateNamespace @ 0x140548F80 (ObpRegisterPrivateNamespace.c)
 *     ObpVerifyCreatorAccessCheck @ 0x14054903C (ObpVerifyCreatorAccessCheck.c)
 */

NTSTATUS __cdecl NtCreatePrivateNamespace(
        PHANDLE NamespaceHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor)
{
  char PreviousMode; // si
  __int64 v8; // rcx
  NTSTATUS result; // eax
  char *v10; // rdi
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
  _QWORD *v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // [rsp+20h] [rbp-68h]
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  PVOID P; // [rsp+60h] [rbp-28h] BYREF
  __int64 v29; // [rsp+68h] [rbp-20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)NamespaceHandle < 0x7FFFFFFF0000LL )
      v8 = (__int64)NamespaceHandle;
    *(_QWORD *)v8 = *(_QWORD *)v8;
  }
  result = ObpCaptureBoundaryDescriptor((__m128i *)BoundaryDescriptor, (char **)&P);
  if ( result >= 0 )
  {
    v10 = (char *)P;
    v11 = ObpVerifyCreatorAccessCheck((char *)P + 48);
    if ( v11 >= 0 )
    {
      v12 = (unsigned int)(*((_DWORD *)v10 + 6) + 392);
      if ( v12 < *((_QWORD *)v10 + 3) )
      {
        v11 = -1073741811;
      }
      else
      {
        v13 = ObCreateObjectEx(
                PreviousMode,
                ObpDirectoryObjectType,
                (__int64)ObjectAttributes,
                PreviousMode,
                v26,
                *((_DWORD *)v10 + 6) + 392,
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
          v16 = *((_QWORD *)v10 + 3);
          *(_QWORD *)(v15 + 24) = v16;
          *(_QWORD *)(v15 + 16) = 0LL;
          *(_BYTE *)(v15 + 40) = v10[40];
          memmove((void *)(v15 + 48), v10 + 48, v16);
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
              inserted = ObInsertObjectEx(v14, 0LL, DesiredAccess, 0, 0, 0LL, (unsigned __int64 *)&v29);
              CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
              CurrentThread = KeGetCurrentThread();
              --CurrentThread->KernelApcDisable;
              ExAcquirePushLockExclusiveEx((ULONG_PTR)(CurrentServerSiloGlobals + 180), 0LL);
              if ( inserted < 0 )
              {
                v22 = *(_QWORD *)v15;
                v23 = *(_QWORD **)(v15 + 8);
                if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) != v15 || *v23 != v15 )
                  __fastfail(3u);
                *v23 = v22;
                *(_QWORD *)(v22 + 8) = v23;
              }
              else
              {
                if ( (v14[42] & 2) == 0 )
                {
                  v21 = Object;
                  *(_QWORD *)(v15 + 16) = Object;
                  v21[40] = v15;
                  goto LABEL_16;
                }
                v24 = *(_QWORD *)v15;
                v25 = *(_QWORD **)(v15 + 8);
                if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) != v15 || *v25 != v15 )
                  __fastfail(3u);
                *v25 = v24;
                *(_QWORD *)(v24 + 8) = v25;
              }
              --CurrentServerSiloGlobals[182];
              ObfDereferenceObject(Object);
LABEL_16:
              ExReleasePushLockEx((ULONG_PTR)(CurrentServerSiloGlobals + 180), 0LL);
              KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
              if ( inserted >= 0 )
                *NamespaceHandle = (HANDLE)v29;
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
