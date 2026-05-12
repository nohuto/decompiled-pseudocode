/*
 * XREFs of RaCallMiniportFindAdapter @ 0x1C001A5F4
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1C00195D8 (RaidAdapterStartMiniport.c)
 *     RaidAdapterReInitialize @ 0x1C002DBEC (RaidAdapterReInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F300 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1C003096C (WPP_SF_.c)
 *     McTemplateK0qqqqqqqqqqcccqqtt @ 0x1C0032878 (McTemplateK0qqqqqqqqqqcccqqtt.c)
 *     McTemplateK0zzqqq @ 0x1C0032A18 (McTemplateK0zzqqq.c)
 */

__int64 __fastcall RaCallMiniportFindAdapter(PVOID *a1, const GUID *a2, unsigned int a3)
{
  unsigned int v3; // edi
  void *v4; // r14
  _DWORD *v5; // rbx
  int v6; // ebp
  __int64 v8; // r15
  PVOID v9; // rax
  int v10; // eax
  int v11; // ebp
  _QWORD *v12; // rax
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // r9d
  unsigned int v18; // ebp
  __int64 v19; // rax
  int v20; // ebp
  char v21; // [rsp+D0h] [rbp+8h] BYREF

  v3 = 0;
  v4 = &unk_1C004A4AE;
  v21 = 0;
  v5 = a1 + 1;
  v6 = 3;
  if ( a2 )
    v4 = (void *)a2;
  v8 = *((_QWORD *)*a1 + 1);
  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x10) != 0 )
    McTemplateK0qqqqqqqqqqcccqqtt(
      *((unsigned __int8 *)a1 + 91),
      (unsigned int)&EventAdapterInitPortConfigInfo,
      *((unsigned __int8 *)v5 + 97),
      *v5,
      v5[6],
      *((_BYTE *)a1 + 80),
      *((_BYTE *)v5 + 97),
      *((_BYTE *)a1 + 154),
      v5[51],
      v5[52],
      v5[53],
      v5[48],
      v5[55],
      *((_BYTE *)v5 + 98),
      *((_BYTE *)v5 + 99),
      *((_BYTE *)v5 + 144),
      v5[54],
      v5[40],
      *((_BYTE *)a1 + 91),
      *((_BYTE *)v5 + 196));
  *((_BYTE *)a1 + 248) |= 1u;
  v9 = a1[29];
  LOBYTE(a2) = *((_BYTE *)a1 + 248);
  if ( *(_DWORD *)v9 == 136 )
    goto LABEL_8;
  if ( ((unsigned __int8)a2 & 4) != 0 )
  {
    v10 = (*((__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, void *, _DWORD *, char *))v9 + 4))(
            (__int64)a1[30] + 16,
            *((_QWORD *)*a1 + 4),
            v8,
            *((_QWORD *)*a1 + 3),
            v4,
            v5,
            &v21);
    goto LABEL_9;
  }
  if ( *(_DWORD *)v9 == 208 )
  {
LABEL_8:
    v10 = (*((__int64 (__fastcall **)(__int64, _QWORD, _QWORD, void *, _DWORD *, char *))v9 + 4))(
            (__int64)a1[30] + 16,
            0LL,
            0LL,
            v4,
            v5,
            &v21);
LABEL_9:
    v6 = v10;
  }
  *((_BYTE *)a1 + 248) &= ~1u;
  if ( v6 == 1 && (!*((_BYTE *)v5 + 90) || !*((_BYTE *)v5 + 91) || !*((_BYTE *)v5 + 81) || !*((_BYTE *)v5 + 82)) )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 10LL, &WPP_2cdf5e3a8b473e064111cab9dd01f326_Traceguids);
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 11LL, &WPP_2cdf5e3a8b473e064111cab9dd01f326_Traceguids);
      }
    }
LABEL_48:
    v3 = -1073741438;
    goto LABEL_18;
  }
  if ( !v6 )
  {
    v3 = -1073741275;
    goto LABEL_18;
  }
  v11 = v6 - 1;
  if ( v11 )
  {
    v20 = v11 - 1;
    if ( !v20 )
    {
      v3 = -1073741630;
      goto LABEL_18;
    }
    if ( v20 != 1 )
    {
      v3 = -1073741595;
      goto LABEL_18;
    }
    goto LABEL_48;
  }
  v12 = *a1;
  if ( *((_DWORD *)*a1 + 1224) && v12[613] && v12[614] )
  {
    v18 = 0;
    do
    {
      a3 = v18;
      a2 = (const GUID *)(16LL * v18 + *((_QWORD *)*a1 + 613));
      v19 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 )
        v19 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
      if ( v19 )
        PoRegisterPowerSettingCallback(
          *((PDEVICE_OBJECT *)*a1 + 1),
          a2,
          RaidPowerSettingCallback,
          *a1,
          (PVOID *)(*((_QWORD *)*a1 + 614) + 8LL * v18));
      ++v18;
    }
    while ( v18 < *((_DWORD *)*a1 + 1224) );
  }
LABEL_18:
  v13 = v5[51];
  if ( v13 <= 0x3E8 || (LOBYTE(a2) = *((_BYTE *)v5 + 144), (unsigned __int8)((_BYTE)a2 - 2) <= 2u) )
  {
    if ( v13 < 0x10 )
    {
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x10) != 0 )
        McTemplateK0zzqqq(v13, (_DWORD)a2, a3, (unsigned int)L"MaxNumberOfIO", (__int64)L"MaxNumberOfIO", 16, v13, 16);
      v5[51] = 16;
    }
  }
  else
  {
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x10) != 0 )
      McTemplateK0zzqqq(
        v13,
        (_DWORD)a2,
        a3,
        (unsigned int)L"MaxNumberOfIO",
        (__int64)L"Dma64BitAddresses",
        (char)a2,
        v13,
        232);
    v5[51] = 1000;
  }
  v14 = v5[52];
  if ( v14 <= 0xFF || (LOBYTE(a2) = *((_BYTE *)v5 + 98), (_BYTE)a2 == 1) )
  {
    if ( v14 < 0x10 )
    {
      if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x10) != 0 )
        McTemplateK0zzqqq(v14, (_DWORD)a2, a3, (unsigned int)L"MaxIOsPerLun", (__int64)L"MaxIOsPerLun", 16, v14, 16);
      v5[52] = 16;
    }
    else
    {
      LODWORD(a2) = v5[51];
      if ( v14 > (unsigned int)a2 )
      {
        if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x10) != 0 )
          McTemplateK0zzqqq(
            v14,
            (_DWORD)a2,
            a3,
            (unsigned int)L"MaxIOsPerLun",
            (__int64)L"MaxNumberOfIO",
            (char)a2,
            v14,
            v5[51]);
        v5[52] = v5[51];
      }
    }
  }
  else
  {
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x10) != 0 )
      McTemplateK0zzqqq(v14, (_DWORD)a2, a3, (unsigned int)L"MaxIOsPerLun", (__int64)L"SrbType", (char)a2, v14, 255);
    v5[52] = 255;
  }
  v15 = v5[53];
  v16 = v5[52];
  if ( v15 > v16 )
  {
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x10) != 0 )
      McTemplateK0zzqqq(
        v15,
        (_DWORD)a2,
        a3,
        (unsigned int)L"InitialLunQueueDepth",
        (__int64)L"MaxIOsPerLun",
        v16,
        v15,
        v16);
    v16 = v5[52];
    v5[53] = v16;
  }
  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x10) != 0 )
    McTemplateK0qqqqqqqqqqcccqqtt(
      v5[6],
      (unsigned int)&EventAdapterFinalPortConfigInfo,
      *((unsigned __int8 *)v5 + 97),
      *v5,
      v5[6],
      *((_BYTE *)v5 + 72),
      *((_BYTE *)v5 + 97),
      *((_BYTE *)v5 + 146),
      v5[51],
      v16,
      v5[53],
      v5[48],
      v5[55],
      *((_BYTE *)v5 + 98),
      *((_BYTE *)v5 + 99),
      *((_BYTE *)v5 + 144),
      v5[54],
      v5[40],
      *((_BYTE *)v5 + 83),
      *((_BYTE *)v5 + 196));
  return v3;
}
