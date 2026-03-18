/*
 * XREFs of ?GetDeviceSupportedWaveforms@InteractiveControlManager@@QEAAJKPEAPEAU_WAVEFORM_INFO@@PEAJ@Z @ 0x1C021A5AC
 * Callers:
 *     NtUserGetInteractiveCtrlSupportedWaveforms @ 0x1C01D95B0 (NtUserGetInteractiveCtrlSupportedWaveforms.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x1C00BA104 (_TlgCreateSz.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall InteractiveControlManager::GetDeviceSupportedWaveforms(
        InteractiveControlManager *this,
        int a2,
        struct _WAVEFORM_INFO **a3,
        int *a4)
{
  int v4; // edi
  struct _WAVEFORM_INFO *v6; // rbx
  LPCGUID cData; // r9
  LPCGUID v11; // r8
  unsigned int v12; // edx
  __int64 *v13; // rcx
  __int64 v14; // rax
  LPCGUID v15; // r9
  LPCGUID v16; // r8
  __int64 v18; // rcx
  unsigned int v19; // [rsp+30h] [rbp-39h] BYREF
  int v20; // [rsp+34h] [rbp-35h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-9h] BYREF
  unsigned int *v23; // [rsp+70h] [rbp+7h]
  int v24; // [rsp+78h] [rbp+Fh]
  int v25; // [rsp+7Ch] [rbp+13h]

  v19 = 0;
  v4 = 0;
  v6 = 0LL;
  if ( (unsigned int)dword_1C0324190 > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::GetDeviceSupportedWaveforms entry");
    v25 = 0;
    v23 = (unsigned int *)&v20;
    v20 = a2;
    v24 = (int)cData;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02EC2DB, v11, cData, (UINT32)cData, &pData);
  }
  v12 = 0;
  v13 = (__int64 *)((char *)this + 40);
  while ( 1 )
  {
    v14 = *v13;
    if ( *v13 )
    {
      if ( a2 == *(_DWORD *)(v14 + 8) )
        break;
    }
    ++v12;
    ++v13;
    if ( v12 >= 5 )
    {
      v19 = -1073741667;
      goto LABEL_8;
    }
  }
  v18 = *(_QWORD *)(v14 + 376);
  if ( v18 )
  {
    v6 = *(struct _WAVEFORM_INFO **)(v18 + 80);
    v4 = *(_DWORD *)(v18 + 88);
  }
LABEL_8:
  if ( a3 )
    *a3 = v6;
  if ( a4 )
    *a4 = v4;
  if ( (unsigned int)dword_1C0324190 > 4 )
  {
    TlgCreateSz(&pDesc, "InteractiveControlManager::GetDeviceSupportedWaveforms exit");
    v25 = 0;
    v23 = &v19;
    v24 = (int)v15;
    TlgWrite((TraceLoggingHProvider)&dword_1C0324190, &unk_1C02ECADF, v16, v15, (UINT32)v15, &pData);
  }
  return v19;
}
