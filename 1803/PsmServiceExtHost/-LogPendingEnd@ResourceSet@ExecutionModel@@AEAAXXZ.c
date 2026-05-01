/*
 * XREFs of ?LogPendingEnd@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x180020010
 * Callers:
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180020370 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180022810 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     CempQueryUnbiasedInterruptTimeMs64 @ 0x180028B44 (CempQueryUnbiasedInterruptTimeMs64.c)
 *     __security_check_cookie @ 0x18003E9A0 (__security_check_cookie.c)
 */

void __fastcall ExecutionModel::ResourceSet::LogPendingEnd(ExecutionModel::ResourceSet *this)
{
  unsigned int v2; // edi
  int UnbiasedInterruptTimeMs64; // eax
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  int v7; // [rsp+30h] [rbp-D0h] BYREF
  int v8; // [rsp+34h] [rbp-CCh] BYREF
  int v9; // [rsp+38h] [rbp-C8h] BYREF
  int v10; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v11; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v13[24]; // [rsp+60h] [rbp-A0h] BYREF
  char v14; // [rsp+78h] [rbp-88h] BYREF
  char v15; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B0h] [rbp-50h] BYREF
  void *v17; // [rsp+C0h] [rbp-40h]
  int v18; // [rsp+C8h] [rbp-38h]
  int v19; // [rsp+CCh] [rbp-34h]
  __int64 *v20; // [rsp+D0h] [rbp-30h]
  __int64 v21; // [rsp+D8h] [rbp-28h]
  int *v22; // [rsp+E0h] [rbp-20h]
  __int64 v23; // [rsp+E8h] [rbp-18h]
  char *v24; // [rsp+F0h] [rbp-10h]
  __int64 v25; // [rsp+F8h] [rbp-8h]
  char *v26; // [rsp+100h] [rbp+0h]
  __int64 v27; // [rsp+108h] [rbp+8h]
  int *v28; // [rsp+110h] [rbp+10h]
  __int64 v29; // [rsp+118h] [rbp+18h]
  int *v30; // [rsp+120h] [rbp+20h]
  __int64 v31; // [rsp+128h] [rbp+28h]
  int *v32; // [rsp+130h] [rbp+30h]
  __int64 v33; // [rsp+138h] [rbp+38h]

  if ( hProvider )
  {
    RmpSystemMemoryMetricsQuery(
      *(struct _RM_PARTITION **)(*((_QWORD *)this + 179) + 120LL),
      (struct _RM_SYSTEM_MEMORY_METRICS *)v13);
    v2 = *((_DWORD *)this + 473);
    if ( v2 <= *((_DWORD *)this + 474) )
      v2 = *((_DWORD *)this + 474);
    UnbiasedInterruptTimeMs64 = CempQueryUnbiasedInterruptTimeMs64();
    v4 = *((_DWORD *)this + 472);
    v5 = *((_DWORD *)this + 473) - v4;
    v6 = *((_DWORD *)this + 474) - v4;
    if ( hProvider > 4u
      && (qword_1800920C0 & 0x400000000001LL) != 0
      && (qword_1800920C8 & 0x400000000001LL) == qword_1800920C8 )
    {
      v11 = *((_QWORD *)this + 235);
      v20 = &v11;
      v7 = *((_DWORD *)this + 364);
      v22 = &v7;
      v24 = &v15;
      v26 = &v14;
      v28 = &v8;
      v30 = &v9;
      v32 = &v10;
      v21 = 8LL;
      v23 = 4LL;
      v25 = 8LL;
      v27 = 8LL;
      v8 = v5;
      v29 = 4LL;
      v9 = UnbiasedInterruptTimeMs64 - v2;
      v31 = 4LL;
      v10 = v6;
      v33 = 4LL;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_1800920B8;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18007F497 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 0x400000000001LL;
      UserData.Size = *(unsigned __int16 *)off_1800920B8;
      v17 = &unk_18007F4A2;
      UserData.Reserved = 2;
      v18 = 160;
      v19 = 1;
      EventWriteTransfer(qword_1800920D0, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
    }
  }
}
