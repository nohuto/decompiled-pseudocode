/*
 * XREFs of RaidUnitCreateDumpAdapter @ 0x1C003CB54
 * Callers:
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C003B5F8 (RaUnitStorageGetDumpInfoIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C00058A4 (RaidAllocatePool.c)
 *     StorPortGetAdditionalCrashDumpArea @ 0x1C000FB7C (StorPortGetAdditionalCrashDumpArea.c)
 *     RtlStringCbPrintfW @ 0x1C00169A8 (RtlStringCbPrintfW.c)
 *     RaidDriverGetName @ 0x1C0018C0C (RaidDriverGetName.c)
 *     RaidQueryCrashdumpFunctions @ 0x1C0018C78 (RaidQueryCrashdumpFunctions.c)
 *     memset @ 0x1C001F180 (memset.c)
 *     RaidUnitCreateDumpDriver @ 0x1C003D2B0 (RaidUnitCreateDumpDriver.c)
 *     RaidUnitFreeDumpAdapter @ 0x1C003D504 (RaidUnitFreeDumpAdapter.c)
 *     RaidUnitFreeDumpDriver @ 0x1C003D5A8 (RaidUnitFreeDumpDriver.c)
 *     RaidUnitStorageGetMiniPortDumpPointers @ 0x1C003F00C (RaidUnitStorageGetMiniPortDumpPointers.c)
 */

__int64 RaidUnitCreateDumpAdapter(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, ...)
{
  __int64 v4; // rbx
  _QWORD **v6; // r8
  _QWORD *v9; // r15
  _QWORD *v10; // rdx
  int v11; // edi
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  __int64 v14; // rcx
  _BYTE *Pool; // rax
  _BYTE *v16; // rsi
  char *v17; // r14
  int MiniPortDumpPointers; // eax
  _BYTE *v19; // rax
  _QWORD *v20; // rcx
  char *v21; // rax
  __int64 v22; // rcx
  __int16 v23; // ax
  PVOID v24; // rax
  int v25; // eax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r9
  PVOID v30; // rax
  PVOID v31; // rdi
  int v32; // r8d
  _QWORD *v33; // rcx
  char *v34; // rdi
  char v35; // r13
  struct _DEVICE_OBJECT *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rcx
  __int64 v41; // [rsp+38h] [rbp-40h] BYREF
  PVOID v42; // [rsp+40h] [rbp-38h] BYREF
  PVOID P; // [rsp+48h] [rbp-30h]
  size_t cbDest; // [rsp+50h] [rbp-28h]
  __int64 v45; // [rsp+58h] [rbp-20h] BYREF
  __int64 v46; // [rsp+60h] [rbp-18h]
  char v48; // [rsp+C8h] [rbp+50h] BYREF
  __int64 v49; // [rsp+D0h] [rbp+58h]
  _QWORD *v50; // [rsp+D8h] [rbp+60h]
  _BYTE *v51; // [rsp+E0h] [rbp+68h] BYREF
  va_list va; // [rsp+E0h] [rbp+68h]
  _QWORD *v53; // [rsp+E8h] [rbp+70h]
  _BYTE *v54; // [rsp+F0h] [rbp+78h]
  va_list va1; // [rsp+F8h] [rbp+80h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v51 = va_arg(va1, _BYTE *);
  v53 = va_arg(va1, _QWORD *);
  v54 = va_arg(va1, _BYTE *);
  v50 = a4;
  v49 = a3;
  v4 = *(_QWORD *)(a2 + 24);
  v45 = 0LL;
  v46 = 0LL;
  v6 = (_QWORD **)(a3 + 32);
  v48 = 0;
  v41 = 0LL;
  v9 = 0LL;
  v42 = 0LL;
  v10 = *v6;
  v11 = 0;
  *v51 = 0;
  v12 = v53;
  P = 0LL;
  *a4 = 0LL;
  *v12 = 0LL;
  *v54 = 0;
  while ( v10 != v6 )
  {
    v13 = v10 - 1;
    v14 = v10[2] - *(_QWORD *)(v4 + 5192);
    if ( !v14 )
      v14 = v13[4] - *(_QWORD *)(v4 + 5200);
    if ( !v14 )
    {
      v17 = (char *)v13[6];
      if ( !*(_BYTE *)(v4 + 4450) || (*(_DWORD *)(*(_QWORD *)(v4 + 528) + 184LL) & 8) != 0 )
      {
        MiniPortDumpPointers = RaidUnitStorageGetMiniPortDumpPointers(a1, a2, *((_QWORD *)v17 + 9), &v42);
        v9 = v42;
        v11 = MiniPortDumpPointers;
        if ( MiniPortDumpPointers < 0 )
        {
LABEL_12:
          v16 = 0LL;
          v51 = 0LL;
          goto LABEL_62;
        }
        if ( v42 )
          *((_QWORD *)v17 + 9) = *((_QWORD *)v42 + 8);
      }
      v19 = v51;
      v17 = 0LL;
      v20 = v53;
      *((_DWORD *)v13 + 26) += 0x10000;
      *a4 = v13;
      *v19 = 1;
      *v20 = v13[7];
      *v54 = 1;
      goto LABEL_12;
    }
    v10 = (_QWORD *)*v10;
  }
  Pool = RaidAllocatePool(NonPagedPoolNx, 0x90uLL, 0x44436152u, *(_QWORD *)(a2 + 8));
  v51 = Pool;
  v16 = Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  memset(Pool, 0, 0x90uLL);
  *(_DWORD *)v16 = 144;
  *(_OWORD *)(v16 + 24) = *(_OWORD *)(v4 + 5192);
  v21 = (char *)RaidAllocatePool(NonPagedPoolNx, 0x138uLL, 0x44436152u, *(_QWORD *)(a2 + 8));
  v17 = v21;
  if ( !v21 )
  {
    v11 = -1073741670;
    goto LABEL_66;
  }
  memset(v21, 0, 0x138uLL);
  *(_DWORD *)v17 = 272;
  *(_OWORD *)(v17 + 8) = *(_OWORD *)(v4 + 304);
  *(_OWORD *)(v17 + 24) = *(_OWORD *)(v4 + 320);
  *(_OWORD *)(v17 + 40) = *(_OWORD *)(v4 + 336);
  *(_OWORD *)(v17 + 56) = *(_OWORD *)(v4 + 352);
  *(_OWORD *)(v17 + 72) = *(_OWORD *)(v4 + 368);
  *(_OWORD *)(v17 + 88) = *(_OWORD *)(v4 + 384);
  *(_OWORD *)(v17 + 104) = *(_OWORD *)(v4 + 400);
  *(_OWORD *)(v17 + 120) = *(_OWORD *)(v4 + 416);
  *(_OWORD *)(v17 + 136) = *(_OWORD *)(v4 + 432);
  *(_OWORD *)(v17 + 152) = *(_OWORD *)(v4 + 448);
  *(_OWORD *)(v17 + 168) = *(_OWORD *)(v4 + 464);
  *(_OWORD *)(v17 + 184) = *(_OWORD *)(v4 + 480);
  *(_OWORD *)(v17 + 200) = *(_OWORD *)(v4 + 496);
  *(_OWORD *)(v17 + 216) = *(_OWORD *)(v4 + 512);
  *((_DWORD *)v16 + 10) = 272;
  *((_DWORD *)v16 + 26) = 0x10000;
  if ( (unsigned __int8)(*(_BYTE *)(v4 + 448) - 2) <= 2u )
    v16[64] = 1;
  if ( (*(_DWORD *)(*(_QWORD *)(v4 + 528) + 184LL) & 0x20) != 0 )
    v16[65] = 1;
  v22 = *(_QWORD *)(v4 + 528);
  if ( (*(_DWORD *)(v22 + 184) & 0x80) != 0 && (*(_DWORD *)(v22 + 188) & 2) != 0 )
    v23 = HiberFileHybridPriority;
  else
    v23 = -1;
  *((_WORD *)v17 + 120) = v23;
  v24 = RaidAllocatePool(NonPagedPoolNx, 0x10000uLL, 0x44436152u, *(_QWORD *)(a2 + 8));
  cbDest = (size_t)v24;
  if ( !v24 )
  {
    v11 = -1073741670;
    goto LABEL_64;
  }
  memset(v24, 0, 0x10000uLL);
  *((_QWORD *)v17 + 31) = cbDest;
  *((_DWORD *)v17 + 61) = 0x10000;
  if ( *(_BYTE *)(v4 + 4450) && (*(_DWORD *)(*(_QWORD *)(v4 + 528) + 184LL) & 8) == 0 )
    goto LABEL_38;
  v25 = RaidUnitStorageGetMiniPortDumpPointers(a1, a2, 0LL, &v42);
  v9 = v42;
  v11 = v25;
  if ( v25 >= 0 )
  {
    if ( v42 )
    {
      v26 = *((_DWORD *)v42 + 20);
      if ( v26 )
        *((_DWORD *)v17 + 8) = v26;
      *((_QWORD *)v17 + 9) = v9[8];
      if ( !*(_BYTE *)(v4 + 4450) )
      {
        v27 = v49;
        *((_DWORD *)v17 + 3) = *((_DWORD *)v9 + 18);
        *((_DWORD *)v17 + 4) = *((_DWORD *)v9 + 19);
        *((_DWORD *)v17 + 9) = *((_DWORD *)v9 + 21);
        *((_DWORD *)v17 + 14) = *((_DWORD *)v9 + 22);
        *((_DWORD *)v17 + 15) = *((_DWORD *)v9 + 23);
        *((_QWORD *)v17 + 8) = v9[12];
        v17[80] = *((_BYTE *)v9 + 104);
        v17[90] = *((_BYTE *)v9 + 105);
        v17[97] = *((_BYTE *)v9 + 106);
        v17[105] = *((_BYTE *)v9 + 107);
        v11 = RaidUnitCreateDumpDriver(a2, v27, (char *)v9 + 4, &v41, &v48);
        if ( v11 < 0 )
          goto LABEL_60;
        *((_QWORD *)v16 + 12) = 0LL;
        *((_QWORD *)v17 + 29) = 0LL;
      }
      *(_BYTE *)(a2 + 1445) = 1;
    }
LABEL_38:
    if ( *(_BYTE *)(v4 + 4450) )
    {
      *((_QWORD *)v16 + 12) = *(_QWORD *)(v4 + 696);
      *((_QWORD *)v17 + 29) = v4 + 760;
      RaidDriverGetName(*(_QWORD *)(v4 + 16), (__int64)&v45);
      v28 = -1LL;
      do
        ++v28;
      while ( *(_WORD *)(v46 + 2 * v28) );
      v29 = *(_QWORD *)(a2 + 8);
      cbDest = (unsigned int)(2 * v28 + 10);
      v30 = RaidAllocatePool(NonPagedPoolNx, (unsigned int)cbDest, 0x44436152u, v29);
      P = v30;
      v31 = v30;
      if ( !v30 )
      {
        v11 = -1073741670;
LABEL_60:
        if ( v41 )
          RaidUnitFreeDumpDriver(&v41);
        goto LABEL_62;
      }
      RtlStringCbPrintfW((NTSTRSAFE_PWSTR)v30, cbDest, L"%ws.sys", v46);
      v11 = RaidUnitCreateDumpDriver(a2, v49, v31, &v41, &v48);
      if ( v11 < 0 )
      {
LABEL_58:
        if ( P )
          ExFreePoolWithTag(P, 0x44436152u);
        goto LABEL_60;
      }
    }
    v32 = *(_DWORD *)(v4 + 496);
    if ( v32 )
      StorPortGetAdditionalCrashDumpArea(v4, (__int64)(v17 + 8), v32);
    v33 = *(_QWORD **)(v4 + 5088);
    if ( v33 )
    {
      v34 = v17 + 272;
      if ( (int)PoFxRegisterCrashdumpDevice(*v33) < 0 )
      {
        v35 = 0;
      }
      else
      {
        *v34 = 1;
        v35 = 1;
        *((_QWORD *)v17 + 35) = **(_QWORD **)(v4 + 5088);
      }
    }
    else
    {
      v35 = 0;
      v34 = v17 + 272;
    }
    v36 = *(struct _DEVICE_OBJECT **)(v4 + 24);
    *(_WORD *)(v4 + 5154) = 1;
    *(_WORD *)(v4 + 5152) = 40;
    if ( RaidQueryCrashdumpFunctions(v36, (void *)(v4 + 5152)) >= 0
      && (v37 = *(_QWORD *)(v4 + 5184)) != 0
      && *(_QWORD *)(v4 + 5176) )
    {
      *((_QWORD *)v34 + 3) = v37;
      *((_QWORD *)v34 + 4) = *(_QWORD *)(v4 + 5160);
    }
    else
    {
      *(_WORD *)(v4 + 5154) = 0;
      if ( !v35 )
      {
LABEL_57:
        v38 = v41;
        v11 = 0;
        v39 = v53;
        *((_QWORD *)v16 + 6) = v17;
        v17 = 0LL;
        *((_QWORD *)v16 + 7) = v38;
        v41 = 0LL;
        *v39 = v38;
        v51 = 0LL;
        *v54 = v48;
        *v50 = v16;
        v16 = 0LL;
        goto LABEL_58;
      }
    }
    *((_QWORD *)v34 + 2) = v4 + 4989;
    *((_QWORD *)v16 + 9) = v4 + 4989;
    *((_QWORD *)v16 + 10) = StorDumpAdapterPowerOn;
    *((_QWORD *)v16 + 11) = v34;
    goto LABEL_57;
  }
LABEL_62:
  if ( v9 )
    ExFreePoolWithTag(v9, 0x44436152u);
LABEL_64:
  if ( v17 )
    ExFreePoolWithTag(v17, 0x44436152u);
LABEL_66:
  if ( v16 )
    RaidUnitFreeDumpAdapter((_BYTE **)va);
  return (unsigned int)v11;
}
