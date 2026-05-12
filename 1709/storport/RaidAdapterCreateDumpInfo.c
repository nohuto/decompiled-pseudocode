/*
 * XREFs of RaidAdapterCreateDumpInfo @ 0x1C0066170
 * Callers:
 *     RaUnitStorageGetDumpInfoIoctl @ 0x1C0068954 (RaUnitStorageGetDumpInfoIoctl.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0006050 (RaidAllocatePool.c)
 *     StorPortGetAdditionalCrashDumpArea @ 0x1C000F7E4 (StorPortGetAdditionalCrashDumpArea.c)
 *     RtlStringCbPrintfW @ 0x1C0016D40 (RtlStringCbPrintfW.c)
 *     RaidDriverGetName @ 0x1C0018680 (RaidDriverGetName.c)
 *     RaidQueryCrashdumpFunctions @ 0x1C00186F8 (RaidQueryCrashdumpFunctions.c)
 *     memset @ 0x1C001F680 (memset.c)
 *     RaidAdapterFreeDriverInfo @ 0x1C002D204 (RaidAdapterFreeDriverInfo.c)
 *     RaidAdapterFreeDumpInfo @ 0x1C002D298 (RaidAdapterFreeDumpInfo.c)
 *     RaidAdapterCreateDriverInfo @ 0x1C0065F60 (RaidAdapterCreateDriverInfo.c)
 */

__int64 RaidAdapterCreateDumpInfo(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, ...)
{
  _BYTE *v4; // r10
  _QWORD *v5; // rsi
  _BYTE *v6; // r14
  unsigned int v9; // edi
  _QWORD *v10; // rcx
  _QWORD *v11; // r9
  _QWORD *v12; // r8
  __int64 v13; // rdx
  _BYTE *Pool; // rax
  char *v15; // rsi
  char *v16; // rax
  char *v17; // r14
  _BYTE *v18; // r12
  PVOID v19; // rax
  PVOID v20; // rdi
  __int64 v21; // rcx
  __int16 v22; // ax
  int v23; // r8d
  PVOID v24; // rdi
  __int64 v25; // r8
  __int64 v26; // rdx
  wchar_t *v27; // r15
  SIZE_T v28; // r13
  wchar_t *v29; // rax
  int v30; // eax
  char v31; // r13
  _QWORD *v32; // rcx
  char v33; // di
  struct _DEVICE_OBJECT *v34; // rcx
  __int64 v35; // rax
  PVOID v36; // rax
  _QWORD *v37; // rcx
  PVOID v38; // rax
  PVOID v40; // [rsp+38h] [rbp-18h] BYREF
  __int64 v41; // [rsp+40h] [rbp-10h] BYREF
  PVOID P; // [rsp+48h] [rbp-8h]
  __int64 v43; // [rsp+90h] [rbp+40h] BYREF
  _QWORD *v44; // [rsp+A0h] [rbp+50h]
  _QWORD *v45; // [rsp+A8h] [rbp+58h]
  _BYTE *v46; // [rsp+B0h] [rbp+60h] BYREF
  va_list va; // [rsp+B0h] [rbp+60h]
  _QWORD *v48; // [rsp+B8h] [rbp+68h]
  _BYTE *v49; // [rsp+C0h] [rbp+70h]
  va_list va1; // [rsp+C8h] [rbp+78h] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v46 = va_arg(va1, _BYTE *);
  v48 = va_arg(va1, _QWORD *);
  v49 = va_arg(va1, _BYTE *);
  v45 = a4;
  v44 = (_QWORD *)a3;
  v43 = a1;
  v4 = v46;
  v5 = v48;
  v6 = v49;
  LOBYTE(v43) = 0;
  v40 = 0LL;
  v9 = 0;
  v41 = 0LL;
  P = 0LL;
  *a4 = 0LL;
  *v4 = 0;
  *v5 = 0LL;
  *v6 = 0;
  if ( *(_DWORD *)(a3 + 4) == 1 )
    v10 = *(_QWORD **)(a2 + 5728);
  else
    v10 = *(_QWORD **)(a2 + 5736);
  if ( v10 )
    goto LABEL_64;
  v11 = (_QWORD *)(a3 + 40);
  v12 = *(_QWORD **)(a3 + 40);
  if ( v12 != v11 )
  {
    do
    {
      v10 = v12 - 1;
      v13 = v12[2] - *(_QWORD *)(a2 + 5192);
      if ( !v13 )
        v13 = v10[4] - *(_QWORD *)(a2 + 5200);
      if ( !v13 )
        break;
      v12 = (_QWORD *)*v12;
      v10 = 0LL;
    }
    while ( v12 != v11 );
    if ( v10 )
    {
LABEL_64:
      *v5 = v10[7];
      *a4 = v10;
      *v4 = 1;
      *v6 = 1;
      return v9;
    }
  }
  Pool = RaidAllocatePool(NonPagedPoolNx, 0x70uLL, 0x44436152u, *(_QWORD *)(a2 + 8));
  v46 = Pool;
  v15 = Pool;
  if ( !Pool )
    return (unsigned int)-1073741670;
  memset(Pool, 0, 0x70uLL);
  *(_DWORD *)v15 = 112;
  *(_OWORD *)(v15 + 24) = *(_OWORD *)(a2 + 5192);
  v16 = (char *)RaidAllocatePool(NonPagedPoolNx, 0x158uLL, 0x44436152u, *(_QWORD *)(a2 + 8));
  v17 = v16;
  if ( v16 )
  {
    memset(v16, 0, 0x158uLL);
    *(_DWORD *)v17 = 304;
    v18 = v17 + 304;
    *(_OWORD *)(v17 + 56) = *(_OWORD *)(a2 + 304);
    *(_OWORD *)(v17 + 72) = *(_OWORD *)(a2 + 320);
    *(_OWORD *)(v17 + 88) = *(_OWORD *)(a2 + 336);
    *(_OWORD *)(v17 + 104) = *(_OWORD *)(a2 + 352);
    *(_OWORD *)(v17 + 120) = *(_OWORD *)(a2 + 368);
    *(_OWORD *)(v17 + 136) = *(_OWORD *)(a2 + 384);
    *(_OWORD *)(v17 + 152) = *(_OWORD *)(a2 + 400);
    *(_OWORD *)(v17 + 168) = *(_OWORD *)(a2 + 416);
    *(_OWORD *)(v17 + 184) = *(_OWORD *)(a2 + 432);
    *(_OWORD *)(v17 + 200) = *(_OWORD *)(a2 + 448);
    *(_OWORD *)(v17 + 216) = *(_OWORD *)(a2 + 464);
    *(_OWORD *)(v17 + 232) = *(_OWORD *)(a2 + 480);
    *(_OWORD *)(v17 + 248) = *(_OWORD *)(a2 + 496);
    *(_OWORD *)(v17 + 264) = *(_OWORD *)(a2 + 512);
    *((_DWORD *)v15 + 11) = 304;
    v19 = RaidAllocatePool(NonPagedPoolNx, 0x10000uLL, 0x44436152u, *(_QWORD *)(a2 + 8));
    v20 = v19;
    if ( !v19 )
    {
LABEL_16:
      v9 = -1073741670;
LABEL_60:
      if ( v17 )
        ExFreePoolWithTag(v17, 0x44436152u);
      goto LABEL_62;
    }
    memset(v19, 0, 0x10000uLL);
    *((_DWORD *)v17 + 8) = 0x10000;
    *((_QWORD *)v17 + 5) = v20;
    if ( (unsigned __int8)(*(_BYTE *)(a2 + 448) - 2) <= 2u )
      *((_DWORD *)v15 + 10) |= 1u;
    if ( (*(_DWORD *)(*(_QWORD *)(a2 + 528) + 184LL) & 0x20) != 0 )
      *((_DWORD *)v15 + 10) |= 2u;
    v21 = *(_QWORD *)(a2 + 528);
    if ( (*(_DWORD *)(v21 + 184) & 0x80u) != 0 && (*(_DWORD *)(v21 + 188) & 2) != 0 )
      v22 = HiberFileHybridPriority;
    else
      v22 = -1;
    *((_WORD *)v17 + 144) = v22;
    if ( *(_BYTE *)(a2 + 4450) )
    {
      *((_QWORD *)v15 + 8) = *(_QWORD *)(a2 + 696);
      *((_QWORD *)v17 + 35) = a2 + 760;
    }
    else
    {
      *((_QWORD *)v15 + 8) = 0LL;
      *((_QWORD *)v17 + 35) = 0LL;
    }
    *((_DWORD *)v15 + 18) = 0x40000;
    v23 = *(_DWORD *)(a2 + 496);
    if ( v23 )
      StorPortGetAdditionalCrashDumpArea(a2, (__int64)(v17 + 56), v23);
    RaidDriverGetName(*(_QWORD *)(a2 + 16), (__int64)&v41);
    v24 = P;
    v25 = -1LL;
    v26 = -1LL;
    do
      ++v26;
    while ( *((_WORD *)P + v26) );
    if ( (unsigned int)v26 > 4
      && *((_WORD *)P + (unsigned int)(v26 - 4)) == 46
      && *((_WORD *)P + (unsigned int)(v26 - 3)) == 115
      && *((_WORD *)P + (unsigned int)(v26 - 2)) == 121
      && *((_WORD *)P + (unsigned int)(v26 - 1)) == 115 )
    {
      v27 = (wchar_t *)P;
    }
    else
    {
      do
        ++v25;
      while ( *((_WORD *)P + v25) );
      v28 = (unsigned int)(2 * v25 + 10);
      v29 = (wchar_t *)RaidAllocatePool(NonPagedPoolNx, v28, 0x44436152u, *(_QWORD *)(a2 + 8));
      v27 = v29;
      if ( !v29 )
        goto LABEL_16;
      RtlStringCbPrintfW(v29, (unsigned int)v28, L"%ws.sys", v24);
    }
    v30 = RaidAdapterCreateDriverInfo(a2, v44, v27, &v40, &v43);
    v31 = v43;
    v9 = v30;
    if ( v30 < 0 )
    {
      v38 = v40;
LABEL_55:
      if ( !v31 && v38 )
        RaidAdapterFreeDriverInfo(&v40);
      if ( v27 )
        ExFreePoolWithTag(v27, 0x44436152u);
      goto LABEL_60;
    }
    v32 = *(_QWORD **)(a2 + 5088);
    if ( v32 )
    {
      if ( (int)PoFxRegisterCrashdumpDevice(*v32) < 0 )
      {
        v33 = 0;
      }
      else
      {
        v33 = 1;
        *v18 = 1;
        *((_QWORD *)v17 + 39) = **(_QWORD **)(a2 + 5088);
      }
    }
    else
    {
      v33 = 0;
    }
    v34 = *(struct _DEVICE_OBJECT **)(a2 + 24);
    *(_WORD *)(a2 + 5154) = 1;
    *(_WORD *)(a2 + 5152) = 40;
    if ( RaidQueryCrashdumpFunctions(v34, (void *)(a2 + 5152)) >= 0
      && (v35 = *(_QWORD *)(a2 + 5184)) != 0
      && *(_QWORD *)(a2 + 5176) )
    {
      *((_QWORD *)v17 + 41) = v35;
      *((_QWORD *)v17 + 42) = *(_QWORD *)(a2 + 5160);
    }
    else
    {
      *(_WORD *)(a2 + 5154) = 0;
      if ( !v33 )
      {
LABEL_53:
        v36 = v40;
        v9 = 0;
        v37 = v48;
        *((_QWORD *)v15 + 6) = v17;
        v17 = 0LL;
        *((_QWORD *)v15 + 7) = v36;
        v40 = 0LL;
        *v37 = v36;
        v38 = 0LL;
        v46 = 0LL;
        *v49 = v31;
        *v45 = v15;
        v15 = 0LL;
        goto LABEL_55;
      }
    }
    *((_QWORD *)v17 + 40) = a2 + 4989;
    *((_QWORD *)v17 + 1) = a2 + 4989;
    *((_QWORD *)v17 + 2) = StorDumpAdapterPowerOn;
    *((_QWORD *)v17 + 3) = v18;
    goto LABEL_53;
  }
  v9 = -1073741670;
LABEL_62:
  if ( v15 )
    RaidAdapterFreeDumpInfo((PVOID *)va);
  return v9;
}
