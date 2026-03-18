/*
 * XREFs of ?ValidateAdapterLuidAndDisplayId@CDisplaySet@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x1800B74C8
 * Callers:
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x1800423E4 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 * Callees:
 *     ?ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z @ 0x18004231C (-ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z.c)
 *     ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x180045EA4 (-IsSpecific@DisplayId@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDisplaySet::ValidateAdapterLuidAndDisplayId(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  struct _LUID v5; // rdx
  CD3DDeviceManager *v6; // rcx
  int v7; // r8d
  __int64 v8; // r10
  unsigned int v9; // r11d
  unsigned int v10; // r9d
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v14; // rcx
  unsigned int v15; // r8d
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // [rsp+20h] [rbp-18h]
  int v19; // [rsp+4Ch] [rbp+14h]
  unsigned int v20; // [rsp+50h] [rbp+18h] BYREF

  v20 = a3;
  v19 = HIDWORD(a2);
  v3 = 0LL;
  v4 = 0;
  if ( a3 == DisplayId::Invalid )
  {
    v4 = -2147024809;
    v18 = 634;
    goto LABEL_29;
  }
  LOBYTE(v6) = DisplayId::IsSpecific((DisplayId *)&v20);
  if ( (_BYTE)v6 )
  {
    if ( v7 != DisplayId::Hmd )
    {
      v9 = *(_DWORD *)(v8 + 72);
      v4 = -2147024809;
      v10 = 0;
      if ( v9 )
      {
        while ( v7 != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 48) + 8LL * v10) + 236LL) )
        {
          if ( ++v10 >= v9 )
            goto LABEL_11;
        }
        v4 = 0;
      }
      else
      {
LABEL_11:
        v10 = v20;
      }
      if ( (v4 & 0x80000000) != 0 )
      {
        v18 = 641;
      }
      else
      {
        v11 = *(_QWORD *)(v8 + 48);
        v12 = *(_QWORD *)(v11 + 8LL * v10);
        if ( *(_DWORD *)(v12 + 224) == v5.LowPart && *(_DWORD *)(v12 + 228) == v19 )
          return v4;
        if ( v9 )
        {
          do
          {
            if ( (_DWORD)v3 != v10 )
            {
              v14 = *(_QWORD *)(v11 + 8 * v3);
              if ( *(_QWORD *)(v14 + 128) == v12
                && *(_DWORD *)(v14 + 224) == v5.LowPart
                && *(_DWORD *)(v14 + 228) == v19 )
              {
                return v4;
              }
            }
            v3 = (unsigned int)(v3 + 1);
          }
          while ( (unsigned int)v3 < v9 );
        }
        v4 = -2003304442;
        v18 = 666;
      }
LABEL_29:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, v18);
      return v4;
    }
LABEL_30:
    v17 = CD3DDeviceManager::ValidateAdapterLuid(v6, v5);
    v4 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x2A2u);
    return v4;
  }
  if ( v7 == DisplayId::Hmd )
    goto LABEL_30;
  v15 = *(_DWORD *)(v8 + 72);
  if ( !v15 )
  {
LABEL_28:
    v4 = -2003304290;
    v18 = 698;
    goto LABEL_29;
  }
  while ( 1 )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(v8 + 48) + 8 * v3);
    if ( *(_DWORD *)(v16 + 224) == v5.LowPart && *(_DWORD *)(v16 + 228) == v19 )
      return v4;
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= v15 )
      goto LABEL_28;
  }
}
