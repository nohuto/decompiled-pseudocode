/*
 * XREFs of PfSnGetSectionObject @ 0x1404A1E78
 * Callers:
 *     PfSnPopulateReadList @ 0x1404A1900 (PfSnPopulateReadList.c)
 * Callees:
 *     PfpFileCheckAttributesForPrefetch @ 0x1400078F8 (PfpFileCheckAttributesForPrefetch.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PfSnIsSectionPrefetchedAfterPhase @ 0x1404A21F4 (PfSnIsSectionPrefetchedAfterPhase.c)
 *     PfpOpenHandleCreate @ 0x1404A2488 (PfpOpenHandleCreate.c)
 *     PfpOpenHandleClose @ 0x1404A25EC (PfpOpenHandleClose.c)
 *     IopQueryXxxInformation @ 0x1404A51B8 (IopQueryXxxInformation.c)
 *     NtCreateSection @ 0x1404C1930 (NtCreateSection.c)
 *     PfSnPrefetchFileMetadata @ 0x140575E74 (PfSnPrefetchFileMetadata.c)
 *     NtClose @ 0x1405A2660 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x1405A4730 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall PfSnGetSectionObject(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        void *a8,
        _QWORD *a9,
        _BYTE *a10)
{
  HANDLE v13; // r14
  __int64 v14; // rax
  __int64 v15; // r13
  ULONG AllocationAttributes; // ecx
  __int64 v17; // rbx
  NTSTATUS v18; // edi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r9
  __int128 v22; // xmm1
  NTSTATUS v23; // eax
  PVOID v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r8
  int v28; // edx
  unsigned __int8 v29; // r8
  int v31; // edx
  __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  int v35; // r9d
  HANDLE SectionHandle; // [rsp+40h] [rbp-A1h] BYREF
  HANDLE EventHandle; // [rsp+48h] [rbp-99h] BYREF
  ULONG v38; // [rsp+50h] [rbp-91h]
  PVOID v39[4]; // [rsp+58h] [rbp-89h] BYREF
  __int64 v40; // [rsp+78h] [rbp-69h] BYREF
  PVOID Object; // [rsp+80h] [rbp-61h] BYREF
  _QWORD *v42; // [rsp+88h] [rbp-59h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-51h] BYREF
  int v44[2]; // [rsp+C0h] [rbp-21h] BYREF
  __int64 v45; // [rsp+C8h] [rbp-19h]
  unsigned __int64 v46; // [rsp+D0h] [rbp-11h]

  EventHandle = a8;
  v40 = a3;
  v42 = a9;
  *a9 = 0LL;
  *a10 = 0;
  memset(v39, 0, sizeof(v39));
  v13 = 0LL;
  SectionHandle = 0LL;
  v14 = *(_QWORD *)a1;
  v15 = 0x200000000LL;
  v39[3] = (PVOID)0x200000000LL;
  AllocationAttributes = a7 != 0 ? 285212672 : 0x4000000;
  v38 = AllocationAttributes;
  if ( a6 >= *(_DWORD *)(v14 + 88) )
  {
    v18 = -1073741811;
    goto LABEL_27;
  }
  v17 = *((_QWORD *)a1 + 7) + 56LL * a6;
  if ( (*(_QWORD *)(v17 + 24) & 0x400000000LL) == 0 )
  {
    if ( (*(_DWORD *)(a2 + 108) & 1) == 0 )
    {
      v32 = (unsigned int)a4[7];
      *(_QWORD *)v44 = 0LL;
      v45 = 0LL;
      v33 = (unsigned int)a4[6] | (unsigned __int64)(v32 << 32);
      v44[0] = 3;
      v46 = v33;
      v44[1] = 1;
      if ( v33 )
        PfSnPrefetchFileMetadata((int)a1, *(_QWORD *)(a2 + 32), (int)v44, 0, 1, EventHandle);
    }
    v18 = PfpOpenHandleCreate((unsigned int)v39, *((_QWORD *)a1 + 1), v40, *(_QWORD *)(a2 + 64), 161, 64, 128, a2 + 32);
    if ( v18 < 0 || (v18 = PfpFileCheckAttributesForPrefetch(v39[0]), v18 < 0) )
    {
      v15 = (__int64)v39[3];
      goto LABEL_27;
    }
    if ( *((_DWORD *)a1 + 30) < *((_DWORD *)a1 + 31)
      && (int)IopQueryXxxInformation(v39[1], (__int64)&EventHandle, (__int64)&v40, 1) >= 0 )
    {
      v19 = (unsigned int)_InterlockedExchangeAdd(a1 + 30, 1u);
      v20 = *((_QWORD *)a1 + 14);
      v21 = 3 * v19;
      *(_QWORD *)(v20 + 8 * v21 + 12) = EventHandle;
      LODWORD(v19) = v39[3];
      *(_QWORD *)(v20 + 8 * v21) = *((_QWORD *)v39[1] + 3);
      *(_DWORD *)(v20 + 8 * v21 + 8) = v19;
    }
    v22 = *(_OWORD *)&v39[2];
    *(_OWORD *)v17 = *(_OWORD *)v39;
    *(_OWORD *)(v17 + 16) = v22;
    memset(v39, 0, sizeof(v39));
    AllocationAttributes = v38;
    v13 = SectionHandle;
    v39[3] = (PVOID)0x200000000LL;
  }
  if ( !a7 )
  {
    if ( !*(_QWORD *)(v17 + 40) )
      goto LABEL_12;
    if ( (unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 0LL, a5) )
      goto LABEL_17;
    *(_DWORD *)(v17 + 48) |= 2u;
LABEL_42:
    *a10 = v35;
    goto LABEL_17;
  }
  if ( *(_QWORD *)(v17 + 32) )
  {
    if ( (unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 1LL, a5) )
      goto LABEL_17;
    *(_DWORD *)(v17 + 48) |= v35;
    goto LABEL_42;
  }
LABEL_12:
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  v18 = NtCreateSection(&SectionHandle, 5u, &ObjectAttributes, 0LL, 2u, AllocationAttributes, *(HANDLE *)v17);
  if ( v18 >= 0 )
  {
    v13 = SectionHandle;
    v23 = ObReferenceObjectByHandle(SectionHandle, 5u, MmSectionObjectType, 0, &Object, 0LL);
    v24 = Object;
    v18 = v23;
    if ( v23 < 0 )
    {
LABEL_23:
      if ( v24 )
        ObfDereferenceObject(v24);
      goto LABEL_25;
    }
    if ( a7 )
    {
      *(_QWORD *)(v17 + 32) = Object;
      if ( (unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 1LL, a5) )
        goto LABEL_17;
      *(_DWORD *)(v17 + 48) |= v31;
    }
    else
    {
      *(_QWORD *)(v17 + 40) = Object;
      if ( !(unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 0LL, a5) )
      {
        *(_DWORD *)(v17 + 48) |= 2u;
        *a10 = 1;
        goto LABEL_17;
      }
      if ( *(_QWORD *)(v17 + 32) != v25
        || !(unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 1LL, v26)
        && ((unsigned __int8)v26 & (unsigned __int8)BYTE1(a4[5]) & 0x7F) == 0 )
      {
        goto LABEL_17;
      }
      *(_DWORD *)(v17 + 48) |= 2u;
    }
    *a10 = v31;
LABEL_17:
    *v42 = *(_QWORD *)(v17 + 8);
    if ( !(unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 1LL, v26)
      && !(unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 0LL, v27)
      && ((v29 & (unsigned __int8)BYTE1(a4[5]) & 0x7F) == 0 || a7 != v28) )
    {
      *(_DWORD *)(v17 + 48) |= 4u;
    }
    v18 = 0;
    goto LABEL_23;
  }
  v13 = SectionHandle;
LABEL_25:
  if ( v13 )
    NtClose(v13);
LABEL_27:
  if ( (v15 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(v39, *((_QWORD *)a1 + 1));
  return (unsigned int)v18;
}
