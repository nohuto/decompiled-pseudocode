/*
 * XREFs of NtCreatePrivateNamespace @ 0x1404692F4
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14000D920 (PsGetCurrentServerSiloGlobals.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140469540 (ObpVerifyCreatorAccessCheck.c)
 *     ObpRegisterPrivateNamespace @ 0x1404696DC (ObpRegisterPrivateNamespace.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1404699E4 (ObpCaptureBoundaryDescriptor.c)
 *     ObCreateObjectEx @ 0x14050DA70 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14050DCA0 (ObInsertObjectEx.c)
 */

NTSTATUS __cdecl NtCreatePrivateNamespace(
        PHANDLE NamespaceHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        POBJECT_BOUNDARY_DESCRIPTOR BoundaryDescriptor)
{
  int v4; // r14d
  PHANDLE v5; // r15
  char PreviousMode; // si
  NTSTATUS result; // eax
  _QWORD *v8; // rdi
  NTSTATUS v9; // ebx
  int v10; // r9d
  unsigned __int64 v11; // rbx
  PVOID *p_Object; // rcx
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
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  PVOID P; // [rsp+60h] [rbp-28h]
  __int64 v28; // [rsp+68h] [rbp-20h] BYREF

  v4 = (int)ObjectAttributes;
  v5 = NamespaceHandle;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)NamespaceHandle >= 0x7FFFFFFF0000LL )
      NamespaceHandle = (PHANDLE)0x7FFFFFFF0000LL;
    *NamespaceHandle = *NamespaceHandle;
  }
  result = ObpCaptureBoundaryDescriptor(BoundaryDescriptor);
  if ( result >= 0 )
  {
    v8 = P;
    v9 = ObpVerifyCreatorAccessCheck((char *)P + 48);
    if ( v9 >= 0 )
    {
      v11 = (unsigned int)(*((_DWORD *)P + 6) + 392);
      if ( v11 < *((_QWORD *)P + 3) )
      {
        v9 = -1073741811;
      }
      else
      {
        p_Object = &Object;
        LOBYTE(v10) = PreviousMode;
        LOBYTE(p_Object) = PreviousMode;
        v13 = ObCreateObjectEx((_DWORD)p_Object, (_DWORD)ObpDirectoryObjectType, v4, v10);
        if ( v13 >= 0 )
        {
          v14 = Object;
          memset(Object, 0, (unsigned int)v11);
          v15 = ((unsigned __int64)v14 + 351) & 0xFFFFFFFFFFFFFFF8uLL;
          *(_QWORD *)(v15 + 8) = v15;
          *(_QWORD *)v15 = v15;
          v16 = v8[3];
          *(_QWORD *)(v15 + 24) = v16;
          *(_QWORD *)(v15 + 16) = 0LL;
          *(_BYTE *)(v15 + 40) = *((_BYTE *)v8 + 40);
          memmove((void *)(v15 + 48), v8 + 6, v16);
          ExFreePoolWithTag(v8, 0x534E624Fu);
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
              inserted = ObInsertObjectEx(v14, 0LL, 0, 0LL, (__int64)&v28);
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
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
              if ( inserted >= 0 )
                *v5 = (HANDLE)v28;
              return inserted;
            }
          }
          ObfDereferenceObject(v14);
          return inserted;
        }
        v9 = v13;
      }
    }
    ExFreePoolWithTag(v8, 0x534E624Fu);
    return v9;
  }
  return result;
}
