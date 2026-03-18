/*
 * XREFs of ACPIThermalReadTemperature @ 0x1C00A4500
 * Callers:
 *     ACPIThermalWorker @ 0x1C0090A20 (ACPIThermalWorker.c)
 * Callees:
 *     ACPIThermalUpdateTemperature @ 0x1C0021DA4 (ACPIThermalUpdateTemperature.c)
 */

__int64 __fastcall ACPIThermalReadTemperature(__int64 a1, char a2)
{
  __int64 v2; // rbx
  int *v5; // rsi
  unsigned int v6; // edx
  unsigned int v7; // ecx
  unsigned int v8; // r8d
  unsigned int v9; // r9d
  unsigned int v10; // eax
  unsigned int v11; // r8d
  bool v12; // cc
  unsigned int v13; // eax
  unsigned int v14; // r8d
  bool v15; // cc
  unsigned int v16; // eax
  unsigned int v17; // r8d
  bool v18; // cc
  unsigned int v19; // eax
  unsigned int v20; // r8d
  bool v21; // cc
  unsigned __int8 v22; // al
  unsigned int *v23; // r8
  __int64 i; // r10
  unsigned int v25; // eax
  unsigned int v26; // r9d
  bool v27; // cc
  __int64 v28; // rdx
  struct _DEVICE_OBJECT *v29; // rdi
  __int64 v30; // rdx
  __int64 result; // rax
  int v32; // edx

  v2 = *(_QWORD *)(a1 + 200);
  KeWaitForSingleObject((PVOID)(v2 + 248), Executive, 0, 0, 0LL);
  v5 = (int *)(v2 + 224);
  v6 = 0;
  *(_QWORD *)(v2 + 224) = 0LL;
  v7 = -1;
  *(_DWORD *)(v2 + 232) = 0;
  if ( a2 )
    goto LABEL_50;
  v8 = *(_DWORD *)(v2 + 104);
  *v5 = -1;
  if ( v8 )
  {
    v9 = *(_DWORD *)(v2 + 108);
    if ( v9 > v8 )
      v6 = v9 - v8;
    if ( ~v9 > v8 )
      v7 = v9 + v8;
  }
  v10 = *(_DWORD *)(v2 + 20);
  if ( v10 )
  {
    v11 = *(_DWORD *)(v2 + 16);
    v12 = v10 <= v11;
    if ( v10 < v11 )
    {
      if ( v10 > v6 )
      {
        v6 = *(_DWORD *)(v2 + 20);
        goto LABEL_15;
      }
      v12 = v10 <= v11;
    }
    if ( !v12 && v10 < v7 )
      v7 = *(_DWORD *)(v2 + 20);
  }
LABEL_15:
  v13 = *(_DWORD *)(v2 + 24);
  if ( !v13 )
    goto LABEL_23;
  v14 = *(_DWORD *)(v2 + 16);
  v15 = v13 <= v14;
  if ( v13 < v14 )
  {
    if ( v13 > v6 )
    {
      v6 = *(_DWORD *)(v2 + 24);
      goto LABEL_23;
    }
    v15 = v13 <= v14;
  }
  if ( !v15 && v13 < v7 )
    v7 = *(_DWORD *)(v2 + 24);
LABEL_23:
  v16 = *(_DWORD *)(v2 + 28);
  if ( !v16 )
    goto LABEL_31;
  v17 = *(_DWORD *)(v2 + 16);
  v18 = v16 <= v17;
  if ( v16 < v17 )
  {
    if ( v16 > v6 )
    {
      v6 = *(_DWORD *)(v2 + 28);
      goto LABEL_31;
    }
    v18 = v16 <= v17;
  }
  if ( !v18 && v16 < v7 )
    v7 = *(_DWORD *)(v2 + 28);
LABEL_31:
  v19 = *(_DWORD *)(v2 + 76);
  if ( !v19 )
    goto LABEL_39;
  v20 = *(_DWORD *)(v2 + 16);
  v21 = v19 <= v20;
  if ( v19 < v20 )
  {
    if ( v19 > v6 )
    {
      v6 = *(_DWORD *)(v2 + 76);
      goto LABEL_39;
    }
    v21 = v19 <= v20;
  }
  if ( !v21 && v19 < v7 )
    v7 = *(_DWORD *)(v2 + 76);
LABEL_39:
  v22 = *(_BYTE *)(v2 + 32);
  if ( v22 )
  {
    v23 = (unsigned int *)(v2 + 36);
    for ( i = v22; i; --i )
    {
      v25 = *v23;
      if ( *v23 )
      {
        v26 = *(_DWORD *)(v2 + 16);
        v27 = v25 <= v26;
        if ( v25 >= v26 )
          goto LABEL_46;
        if ( v25 <= v6 )
        {
          v27 = v25 <= v26;
LABEL_46:
          if ( !v27 && v25 < v7 )
            v7 = *v23;
          goto LABEL_49;
        }
        v6 = *v23;
      }
LABEL_49:
      ++v23;
    }
  }
LABEL_50:
  *(_DWORD *)(v2 + 228) = v6;
  *(_DWORD *)(v2 + 232) = v7;
  IoReuseIrp(*(PIRP *)(v2 + 208), -1073741637);
  v28 = *(_QWORD *)(*(_QWORD *)(v2 + 208) + 184LL);
  *(_BYTE *)(v28 - 72) = 14;
  *(_DWORD *)(v28 - 48) = 2703504;
  *(_DWORD *)(v28 - 56) = 12;
  *(_DWORD *)(v28 - 64) = 4;
  *(_QWORD *)(*(_QWORD *)(v2 + 208) + 24LL) = v5;
  v29 = *(struct _DEVICE_OBJECT **)(v2 + 216);
  if ( a2 )
  {
    result = IoSynchronousCallDriver(*(_QWORD *)(v2 + 216), *(_QWORD *)(v2 + 208));
    if ( (int)result < 0 )
    {
      *(_BYTE *)(v2 + 272) = 1;
      return result;
    }
    v32 = *v5;
    *(_BYTE *)(v2 + 272) = 0;
    ACPIThermalUpdateTemperature(a1, v32);
  }
  else
  {
    KeClearEvent((PRKEVENT)(v2 + 248));
    v30 = *(_QWORD *)(*(_QWORD *)(v2 + 208) + 184LL);
    *(_QWORD *)(v30 - 16) = ACPIThermalReadTemperatureComplete;
    *(_QWORD *)(v30 - 8) = a1;
    *(_BYTE *)(v30 - 69) = -32;
    IofCallDriver(v29, *(PIRP *)(v2 + 208));
  }
  return 0LL;
}
