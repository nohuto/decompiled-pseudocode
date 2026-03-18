/*
 * XREFs of RIMGetDisplayMonitor @ 0x1C000D010
 * Callers:
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C000CCBC (rimFindMonitorForDigitizerWithQDCData.c)
 *     ?_CreateLegacyConfiguration@CInputConfig@@AEAAXXZ @ 0x1C0061350 (-_CreateLegacyConfiguration@CInputConfig@@AEAAXXZ.c)
 * Callees:
 *     DrvGetWDDMAdapterInfo @ 0x1C000D100 (DrvGetWDDMAdapterInfo.c)
 */

__int64 __fastcall RIMGetDisplayMonitor(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  __int64 v3; // rbx
  unsigned int v4; // esi
  unsigned int v5; // r11d
  int v7; // r14d
  unsigned int v8; // r9d
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdi
  int v12; // ebp
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  int v15; // [rsp+58h] [rbp+10h] BYREF
  int v16; // [rsp+5Ch] [rbp+14h]

  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  v5 = *a2;
  v7 = *(_DWORD *)(a1 + 24);
  v14 = v3;
  v8 = 0;
  if ( v5 )
  {
    v9 = *((_QWORD *)a2 + 1);
    while ( 1 )
    {
      v10 = 192LL * v8;
      if ( *(_DWORD *)(v10 + v9 + 116) == *(_DWORD *)(a1 + 116) && *(_DWORD *)(v10 + v9 + 120) == *(_DWORD *)(a1 + 120) )
        break;
      if ( ++v8 >= v5 )
        goto LABEL_6;
    }
    v3 = *(_QWORD *)(192LL * v8 + v9 + 16);
    v7 = *(_DWORD *)(192LL * v8 + v9 + 24);
    v14 = v3;
  }
LABEL_6:
  v11 = *(_QWORD *)(gpDispInfo + 96);
  if ( v11 )
  {
    v12 = HIDWORD(v14);
    while ( !(unsigned int)DrvGetWDDMAdapterInfo(*(_QWORD *)(v11 + 240), 1LL, &v15, &v14)
         || (_DWORD)v14 != v7
         || v15 != (_DWORD)v3
         || v16 != v12 )
    {
      v11 = *(_QWORD *)(v11 + 56);
      if ( !v11 )
        return v4;
    }
    *a3 = v11;
    return 1;
  }
  return v4;
}
