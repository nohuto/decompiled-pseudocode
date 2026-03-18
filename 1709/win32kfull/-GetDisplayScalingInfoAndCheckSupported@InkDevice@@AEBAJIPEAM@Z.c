/*
 * XREFs of ?GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z @ 0x1C021EA7C
 * Callers:
 *     ?DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1C021E5EC (-DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0042F00 (_TlgWrite.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C020BAF8 (-GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall InkDevice::GetDisplayScalingInfoAndCheckSupported(
        InkDevice *this,
        unsigned int a2,
        float *a3,
        __int64 a4)
{
  int PointerInfoByPointerId; // eax
  __int64 v7; // rdx
  const GUID *v8; // r8
  const GUID *v9; // r9
  unsigned int v10; // ebx
  __int64 v11; // rax
  unsigned __int64 v12; // r8
  const GUID *v13; // r9
  __int64 v14; // rax
  _DWORD *v15; // rcx
  int v16; // edx
  int v17; // eax
  unsigned int v19[2]; // [rsp+30h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-38h] BYREF
  unsigned int *v21; // [rsp+58h] [rbp-18h]
  int v22; // [rsp+60h] [rbp-10h]
  int v23; // [rsp+64h] [rbp-Ch]

  *(_QWORD *)v19 = 0LL;
  *a3 = 1.0;
  PointerInfoByPointerId = Pointer::GetPointerInfoByPointerId(
                             (Pointer *)a2,
                             v19,
                             (const struct tagPOINTER_INFO **)a3,
                             a4);
  v10 = PointerInfoByPointerId;
  if ( PointerInfoByPointerId < 0 )
  {
    if ( (unsigned int)pRelatedActivityId > 2 )
    {
      v23 = 0;
      v19[0] = PointerInfoByPointerId;
      v21 = v19;
      v22 = 4;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9672, v8, v9, 3u, &pData);
    }
    return v10;
  }
  LOBYTE(v7) = 19;
  v11 = HMValidateHandleNoSecure(*(_QWORD *)(*(_QWORD *)v19 + 16LL), v7, (__int64)v8, (__int64)v9);
  if ( !v11 )
  {
    v10 = -1073741823;
    if ( (unsigned int)pRelatedActivityId > 2 )
    {
      v23 = 0;
      v21 = v19;
      v19[0] = -1073741823;
      v22 = 4;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9672, (LPCGUID)v12, v13, 3u, &pData);
    }
    return v10;
  }
  v14 = *(_QWORD *)(v11 + 472);
  v15 = *(_DWORD **)(v14 + 16);
  if ( v15[357] != 1 )
  {
    v10 = -1073741637;
    if ( (unsigned int)pRelatedActivityId <= 2 )
      return v10;
LABEL_18:
    v23 = 0;
    v19[0] = -1073741637;
    v21 = v19;
    v22 = 4;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E9672, (LPCGUID)v12, v13, 3u, &pData);
    return v10;
  }
  v16 = v15[361];
  if ( ((*(_DWORD *)(v14 + 224) - 1) & 0xFFFFFFFD) != 0 )
  {
    v17 = v15[362];
    v12 = (unsigned int)v16;
  }
  else
  {
    v12 = (unsigned int)v15[362];
    v17 = v15[361];
  }
  if ( *((_DWORD *)this + 31) != v17 )
  {
    v10 = -1073741637;
    if ( (unsigned int)pRelatedActivityId <= 2 )
      return v10;
    goto LABEL_18;
  }
  if ( *((_DWORD *)this + 32) == (_DWORD)v12 )
  {
    *a3 = (float)(v15[367] - v15[365]) / (float)v16;
    return v10;
  }
  v10 = -1073741637;
  if ( (unsigned int)pRelatedActivityId > 2 )
    goto LABEL_18;
  return v10;
}
