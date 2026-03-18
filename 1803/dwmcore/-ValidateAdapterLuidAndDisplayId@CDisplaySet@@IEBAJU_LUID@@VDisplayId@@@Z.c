/*
 * XREFs of ?ValidateAdapterLuidAndDisplayId@CDisplaySet@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x1800B6F74
 * Callers:
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x1800899E0 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z @ 0x180089D0C (-ValidateAdapterLuid@CD3DDeviceManager@@QEAAJU_LUID@@@Z.c)
 *     ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x180089E08 (-IsSpecific@DisplayId@@QEBA_NXZ.c)
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
  char v13; // al
  __int64 v15; // rcx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // [rsp+20h] [rbp-18h]
  int v20; // [rsp+4Ch] [rbp+14h]
  unsigned int v21; // [rsp+50h] [rbp+18h] BYREF

  v21 = a3;
  v20 = HIDWORD(a2);
  v3 = 0LL;
  v4 = 0;
  if ( a3 == DisplayId::Invalid )
  {
    v4 = -2147024809;
    v19 = 636;
    goto LABEL_31;
  }
  LOBYTE(v6) = DisplayId::IsSpecific((DisplayId *)&v21);
  if ( (_BYTE)v6 )
  {
    if ( v7 != DisplayId::Hmd )
    {
      v9 = *(_DWORD *)(v8 + 72);
      v4 = -2147024809;
      v10 = 0;
      if ( v9 )
      {
        while ( v7 != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 48) + 8LL * v10) + 260LL) )
        {
          if ( ++v10 >= v9 )
            goto LABEL_13;
        }
        v4 = 0;
      }
      else
      {
LABEL_13:
        v10 = v21;
      }
      if ( (v4 & 0x80000000) != 0 )
      {
        v19 = 643;
      }
      else
      {
        v11 = *(_QWORD *)(v8 + 48);
        v12 = *(_QWORD *)(v11 + 8LL * v10);
        if ( *(_DWORD *)(v12 + 248) != v5.LowPart || (v13 = 0, *(_DWORD *)(v12 + 252) != v20) )
          v13 = 1;
        if ( !v13 )
          return v4;
        if ( v9 )
        {
          do
          {
            if ( (_DWORD)v3 != v10 )
            {
              v15 = *(_QWORD *)(v11 + 8 * v3);
              if ( *(_QWORD *)(v15 + 152) == v12
                && *(_DWORD *)(v15 + 248) == v5.LowPart
                && *(_DWORD *)(v15 + 252) == v20 )
              {
                return v4;
              }
            }
            v3 = (unsigned int)(v3 + 1);
          }
          while ( (unsigned int)v3 < v9 );
        }
        v4 = -2003304442;
        v19 = 668;
      }
LABEL_31:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, v19);
      return v4;
    }
LABEL_32:
    v18 = CD3DDeviceManager::ValidateAdapterLuid(v6, v5);
    v4 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x2A4u);
    return v4;
  }
  if ( v7 == DisplayId::Hmd )
    goto LABEL_32;
  v16 = *(_DWORD *)(v8 + 72);
  if ( !v16 )
  {
LABEL_30:
    v4 = -2003304290;
    v19 = 700;
    goto LABEL_31;
  }
  while ( 1 )
  {
    v17 = *(_QWORD *)(*(_QWORD *)(v8 + 48) + 8 * v3);
    if ( *(_DWORD *)(v17 + 248) == v5.LowPart && *(_DWORD *)(v17 + 252) == v20 )
      return v4;
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= v16 )
      goto LABEL_30;
  }
}
