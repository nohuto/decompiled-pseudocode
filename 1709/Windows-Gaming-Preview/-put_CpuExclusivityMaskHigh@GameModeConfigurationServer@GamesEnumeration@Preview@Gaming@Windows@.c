/*
 * XREFs of ?put_CpuExclusivityMaskHigh@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAU?$IReference@H@Foundation@5@@Z @ 0x180037DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_MakeNullableInt@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV?$ComPtr@U?$IReference@H@Foundation@Windows@@@WRL@Microsoft@@H@Z @ 0x18003711C (-_MakeNullableInt@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEAV.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::put_CpuExclusivityMaskHigh(
        __int64 a1,
        __int64 a2)
{
  DWORD ActiveProcessorCount; // esi
  signed int LastError; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int NullableInt; // eax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rsi
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v16; // [rsp+40h] [rbp+18h] BYREF
  __int64 v17; // [rsp+48h] [rbp+20h] BYREF

  v17 = 0LL;
  ActiveProcessorCount = GetActiveProcessorCount(0);
  if ( !ActiveProcessorCount )
  {
    LastError = GetLastError();
    v6 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v6 = LastError;
    if ( (v6 & 0x80000000) == 0 )
      goto LABEL_16;
    v7 = 579LL;
    goto LABEL_12;
  }
  if ( a2 )
  {
    NullableInt = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 48LL))(a2, &v16);
    v6 = NullableInt;
    if ( NullableInt < 0 )
    {
      v10 = 586LL;
LABEL_15:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v10,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
        (const char *)(unsigned int)NullableInt);
      goto LABEL_16;
    }
    if ( ActiveProcessorCount >= 0x20 )
    {
      v9 = ActiveProcessorCount - 32;
      if ( v16 >> (ActiveProcessorCount - 32) )
      {
        v6 = -2147024809;
        v7 = 590LL;
LABEL_12:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v7,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamemodeconfiguration.cpp",
          (const char *)v6);
LABEL_16:
        v11 = v17;
        goto LABEL_25;
      }
    }
    NullableInt = Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_MakeNullableInt(
                    v9,
                    &v17,
                    v16);
    v6 = NullableInt;
    if ( NullableInt < 0 )
    {
      v10 = 593LL;
      goto LABEL_15;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  v11 = v17;
  if ( *(_QWORD *)(a1 + 160) != v17 )
  {
    v12 = v17;
    if ( v17 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
      v11 = v17;
    }
    v13 = *(_QWORD *)(a1 + 160);
    *(_QWORD *)(a1 + 160) = v12;
    if ( v13 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      v11 = v17;
    }
  }
  if ( a1 != -176 )
  {
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
    v11 = v17;
  }
  v6 = 0;
LABEL_25:
  if ( v11 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v6;
}
