/*
 * XREFs of CmpSaveBootControlSet @ 0x14058D508
 * Callers:
 *     NtInitializeRegistry @ 0x140585198 (NtInitializeRegistry.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     swprintf_s @ 0x14016EB70 (swprintf_s.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmCreateKey @ 0x14042DEF0 (CmCreateKey.c)
 *     NtQuerySecurityObject @ 0x140434360 (NtQuerySecurityObject.c)
 *     CmpRebuildKcbCache @ 0x1404CE250 (CmpRebuildKcbCache.c)
 *     CmpLockRegistryExclusive @ 0x1404D85A8 (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 *     CmOpenKey @ 0x14052CA30 (CmOpenKey.c)
 *     NtClose @ 0x14052EB10 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x1405317C0 (ObReferenceObjectByHandle.c)
 *     CmpCopySyncTree @ 0x14058D7BC (CmpCopySyncTree.c)
 */

__int64 __fastcall CmpSaveBootControlSet(unsigned __int16 a1)
{
  __int64 result; // rax
  PVOID PoolWithTag; // rdi
  __int64 v4; // r9
  int Key; // r14d
  NTSTATUS v6; // edi
  ULONG_PTR *v7; // rdi
  _QWORD *v8; // r14
  __int64 v9; // rcx
  char v10; // r15
  __int64 v11; // rax
  __int16 v12; // r12
  __int64 v13; // r13
  ULONG Length[2]; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-B0h] BYREF
  PVOID v17; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE v18; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+70h] [rbp-98h] BYREF
  __int64 v20; // [rsp+78h] [rbp-90h]
  UNICODE_STRING *p_DestinationString; // [rsp+80h] [rbp-88h]
  int v22; // [rsp+88h] [rbp-80h]
  __int128 v23; // [rsp+90h] [rbp-78h]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-68h] BYREF
  wchar_t Dst[128]; // [rsp+B8h] [rbp-50h] BYREF

  Length[0] = 0;
  v20 = 0LL;
  LODWORD(v19) = 48;
  v22 = 576;
  p_DestinationString = &CmRegistryMachineSystemCurrentControlSet;
  v23 = 0LL;
  result = CmOpenKey(&Handle, 131097, (__int64)&v19, 0, 0LL);
  if ( (int)result < 0 )
    return result;
  if ( NtQuerySecurityObject(Handle, 4u, 0LL, 0, Length) == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length[0], 0x20204D43u);
    if ( !PoolWithTag || NtQuerySecurityObject(Handle, 4u, PoolWithTag, Length[0], Length) >= 0 )
      goto LABEL_5;
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  PoolWithTag = 0LL;
LABEL_5:
  swprintf_s(Dst, 0x80uLL, L"\\Registry\\Machine\\System\\ControlSet%03d", a1);
  RtlInitUnicodeString(&DestinationString, Dst);
  v20 = 0LL;
  p_DestinationString = &DestinationString;
  LODWORD(v19) = 48;
  v22 = 576;
  v23 = (unsigned __int64)PoolWithTag;
  Key = CmCreateKey((unsigned __int64)&v18, 131103, (ULONG_PTR)&v19, v4, 0LL, 0, Length, 0LL);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( Key < 0 )
  {
    NtClose(Handle);
    return (unsigned int)Key;
  }
  else
  {
    v6 = ObReferenceObjectByHandle(Handle, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, 0, &Object, 0LL);
    if ( v6 >= 0 )
    {
      v6 = ObReferenceObjectByHandle(v18, 0x20006u, (POBJECT_TYPE)CmKeyObjectType, 0, &v17, 0LL);
      if ( v6 < 0 )
      {
        ObfDereferenceObject(Object);
      }
      else
      {
        CmpLockRegistryExclusive();
        v7 = (ULONG_PTR *)v17;
        v8 = Object;
        v9 = *((_QWORD *)Object + 1);
        if ( Length[0] == 1 )
        {
          Length[0] = -1;
          Length[1] = 0;
          v10 = CmpCopySyncTree(*(_QWORD *)(v9 + 24), 2, 0);
          v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG *))(*(_QWORD *)(v8[1] + 24LL) + 8LL))(
                  *(_QWORD *)(v8[1] + 24LL),
                  *(unsigned int *)(v8[1] + 32LL),
                  Length);
          if ( v11 )
          {
            v12 = *(_DWORD *)(v11 + 52);
            (*(void (__fastcall **)(_QWORD, ULONG *))(*(_QWORD *)(v8[1] + 24LL) + 16LL))(
              *(_QWORD *)(v8[1] + 24LL),
              Length);
            v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG *))(*(_QWORD *)(v7[1] + 24) + 8LL))(
                    *(_QWORD *)(v7[1] + 24),
                    *(unsigned int *)(v7[1] + 32),
                    Length);
            if ( v13 )
            {
              if ( HvpMarkCellDirty(*(_QWORD *)(v7[1] + 24), *(unsigned int *)(v7[1] + 32), 0) )
                *(_WORD *)(v13 + 52) = v12;
              (*(void (__fastcall **)(_QWORD, ULONG *))(*(_QWORD *)(v7[1] + 24) + 16LL))(
                *(_QWORD *)(v7[1] + 24),
                Length);
            }
          }
        }
        else
        {
          v10 = CmpCopySyncTree(*(_QWORD *)(v9 + 24), 2, 1);
        }
        CmpRebuildKcbCache(v7[1]);
        CmpUnlockRegistry();
        ObfDereferenceObject(v8);
        ObfDereferenceObject(v7);
        v6 = v10 == 0 ? 0xC000014C : 0;
      }
    }
    NtClose(Handle);
    NtClose(v18);
    return (unsigned int)v6;
  }
}
