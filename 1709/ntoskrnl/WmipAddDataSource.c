/*
 * XREFs of WmipAddDataSource @ 0x140545304
 * Callers:
 *     WmipProcessWmiRegInfo @ 0x140545208 (WmipProcessWmiRegInfo.c)
 *     WmipInitializeDataStructs @ 0x140844214 (WmipInitializeDataStructs.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeReleaseMutex @ 0x1400760B0 (KeReleaseMutex.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     WmipAllocEntry @ 0x1404689D0 (WmipAllocEntry.c)
 *     WmipGenerateRegistrationNotification @ 0x14051C120 (WmipGenerateRegistrationNotification.c)
 *     WmipUnreferenceEntry @ 0x14051EF80 (WmipUnreferenceEntry.c)
 *     WmipCountedToSz @ 0x14051F3A0 (WmipCountedToSz.c)
 *     WmipBuildInstanceSet @ 0x1405455F8 (WmipBuildInstanceSet.c)
 *     WmipLinkDataSourceToList @ 0x140545C30 (WmipLinkDataSourceToList.c)
 *     WmipAllocDataSource @ 0x140545E04 (WmipAllocDataSource.c)
 *     WmipAddMofResource @ 0x1405C7E4C (WmipAddMofResource.c)
 *     WmipLegacyEtwWorker @ 0x1405E1EA0 (WmipLegacyEtwWorker.c)
 *     WmipGenerateMofResourceNotification @ 0x1405E2C0C (WmipGenerateMofResourceNotification.c)
 *     WmipGenerateBinaryMofNotification @ 0x140742F28 (WmipGenerateBinaryMofNotification.c)
 */

__int64 __fastcall WmipAddDataSource(__int64 a1, __int64 a2, int a3, unsigned __int16 *a4, unsigned __int16 *a5)
{
  ULONG_PTR v5; // rbx
  unsigned __int16 *v7; // rbp
  int v8; // edi
  _QWORD *v10; // r12
  __int64 v11; // rsi
  unsigned int v12; // r15d
  int v13; // eax
  __int64 *v14; // rsi
  char v15; // r15
  __int64 v16; // rdx
  int v17; // edi
  __int64 v18; // rdx
  _WORD *v19; // rsi
  _WORD *v20; // rdi
  __int64 **v22; // r14
  char **v23; // rsi
  _QWORD *v24; // rax
  _QWORD *v25; // rbp
  __int64 v26; // rax
  bool v27; // zf
  _QWORD *v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // rbp
  __int64 *v31; // rax
  __int64 **v32; // r15
  __int64 *v33; // rcx
  __int64 *v34; // rax
  char *v35; // r14
  char *v36; // rax
  _QWORD v37[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v38[9]; // [rsp+40h] [rbp-48h] BYREF
  char v39; // [rsp+90h] [rbp+8h] BYREF
  int v40; // [rsp+A0h] [rbp+18h]
  unsigned __int16 *v41; // [rsp+A8h] [rbp+20h]

  v41 = a4;
  v40 = a3;
  v5 = *(_QWORD *)(a1 + 32);
  v7 = a4;
  v39 = 0;
  v8 = a3;
  v10 = 0LL;
  if ( !v5 )
  {
    v5 = WmipAllocDataSource();
    if ( !v5 )
      return (unsigned int)-1073741670;
    *(_DWORD *)(v5 + 56) = *(_DWORD *)(a1 + 56);
    v39 = 1;
  }
  v11 = a2 + 24;
  v12 = 0;
  if ( !*(_DWORD *)(a2 + 16) )
  {
LABEL_9:
    v14 = 0LL;
    if ( (*(_DWORD *)(a1 + 48) & 0x40000000) != 0 )
    {
      v37[1] = v37;
      v14 = v37;
      v37[0] = v37;
      v38[1] = v38;
      v38[0] = v38;
    }
    KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
    v15 = v39;
    LOBYTE(v16) = v39;
    v17 = WmipLinkDataSourceToList(v5, v16, v14);
    KeReleaseMutex(&WmipSMMutex, 0);
    v18 = 0LL;
    if ( v14 )
    {
      while ( 1 )
      {
        v22 = (__int64 **)*v14;
        if ( (__int64 *)*v14 == v14 )
          break;
        if ( v22[1] != v14 || (v31 = *v22, (__int64 **)(*v22)[1] != v22) )
          __fastfail(3u);
        *v14 = (__int64)v31;
        v31[1] = (__int64)v14;
        WmipLegacyEtwWorker(v22[2], v18);
        v32 = v22 + 5;
        while ( *v32 != (__int64 *)v32 )
        {
          v33 = *v32;
          if ( (__int64 **)(*v32)[1] != v32 || (v34 = (__int64 *)*v33, *(__int64 **)(*v33 + 8) != v33) )
            __fastfail(3u);
          *v32 = v34;
          v34[1] = (__int64)v32;
          KeSetEvent((PRKEVENT)(v33 + 2), 0, 0);
        }
        ExFreePoolWithTag(v22, 0x70696D57u);
      }
      v23 = (char **)(v14 + 2);
      while ( *v23 != (char *)v23 )
      {
        v35 = *v23;
        if ( *((char ***)*v23 + 1) != v23 || (v36 = *(char **)v35, *(char **)(*(_QWORD *)v35 + 8LL) != v35) )
          __fastfail(3u);
        *v23 = v36;
        *((_QWORD *)v36 + 1) = v23;
        KeWaitForSingleObject(v35 + 32, Executive, 0, 0, 0LL);
        ExFreePoolWithTag(v35, 0x70696D57u);
      }
      v15 = v39;
    }
    if ( v17 >= 0 )
    {
      *(_QWORD *)(a1 + 32) = v5;
      if ( v10 )
        WmipGenerateBinaryMofNotification(v10, &GUID_MOF_RESOURCE_ADDED_NOTIFICATION);
      if ( v7 )
        v19 = WmipCountedToSz(v7);
      else
        v19 = 0LL;
      if ( a5 )
        v20 = WmipCountedToSz(a5);
      else
        v20 = 0LL;
      if ( v19 )
      {
        if ( *v19 && v20 && *v20 && (int)WmipAddMofResource(v5, v19, 0LL, v20, &v39) >= 0 && v39 )
          WmipGenerateMofResourceNotification(v19, v20);
        ExFreePoolWithTag(v19, 0);
      }
      if ( v20 )
        ExFreePoolWithTag(v20, 0);
      WmipGenerateRegistrationNotification(v5, 1u);
      v5 = 0LL;
      v17 = 0;
    }
    goto LABEL_23;
  }
  while ( 1 )
  {
    v13 = *(_DWORD *)(v11 + 16);
    if ( (v13 & 0x10000) != 0 || (v13 & 0x81000) == 0x80000 )
      goto LABEL_7;
    v24 = WmipAllocEntry((__int64)&WmipISChunkInfo);
    v25 = v24;
    if ( !v24 )
      break;
    *((_DWORD *)v24 + 4) |= 8u;
    v24[7] = v11;
    v24[8] = v5;
    v17 = WmipBuildInstanceSet(v11, a2, v8, (_DWORD)v24, *(_DWORD *)(v5 + 56));
    v26 = *(_QWORD *)v11 - WmipBinaryMofGuid;
    if ( *(_QWORD *)v11 == WmipBinaryMofGuid )
      v26 = *(_QWORD *)(v11 + 8) - 0x102906C9A000F0B2LL;
    v27 = v26 == 0;
    v28 = (_QWORD *)(v5 + 40);
    v29 = *(_QWORD *)(v5 + 40);
    if ( v27 )
      v10 = v25;
    v30 = v25 + 5;
    if ( *(_QWORD **)(v29 + 8) != v28 )
      __fastfail(3u);
    *v30 = v29;
    v30[1] = v28;
    *(_QWORD *)(v29 + 8) = v30;
    *v28 = v30;
    if ( v17 < 0 )
      goto LABEL_46;
    v8 = v40;
LABEL_7:
    ++v12;
    v11 += 32LL;
    if ( v12 >= *(_DWORD *)(a2 + 16) )
    {
      v7 = v41;
      goto LABEL_9;
    }
  }
  v17 = -1073741670;
LABEL_46:
  v15 = v39;
LABEL_23:
  if ( v5 && v15 )
  {
    *(_DWORD *)(v5 + 16) |= 1u;
    WmipUnreferenceEntry((__int64)&WmipDSChunkInfo, (volatile signed __int64 *)v5);
  }
  return (unsigned int)v17;
}
