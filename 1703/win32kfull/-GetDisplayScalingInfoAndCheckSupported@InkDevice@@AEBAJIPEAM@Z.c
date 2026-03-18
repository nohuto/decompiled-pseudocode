/*
 * XREFs of ?GetDisplayScalingInfoAndCheckSupported@InkDevice@@AEBAJIPEAM@Z @ 0x1C021D798
 * Callers:
 *     ?DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z @ 0x1C021D314 (-DoSuperWetInkStart@InkDevice@@AEAAJPEBUIFC_SUPERWET_INK_START_DATA@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     _TlgWrite @ 0x1C00BA030 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z @ 0x1C0209D58 (-GetPointerInfoByPointerId@Pointer@@YAJIPEAPEBUtagPOINTER_INFO@@@Z.c)
 */

__int64 __fastcall InkDevice::GetDisplayScalingInfoAndCheckSupported(InkDevice *this, unsigned int a2, float *a3)
{
  int PointerInfoByPointerId; // eax
  const GUID *v6; // r8
  const GUID *v7; // r9
  unsigned int v8; // ebx
  __int64 v9; // rax
  const GUID *v10; // r8
  const GUID *v11; // r9
  _DWORD *v12; // rcx
  int v13; // edx
  unsigned int v15[2]; // [rsp+30h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-48h] BYREF
  unsigned int *v17; // [rsp+58h] [rbp-28h]
  int v18; // [rsp+60h] [rbp-20h]
  int v19; // [rsp+64h] [rbp-1Ch]

  *(_QWORD *)v15 = 0LL;
  *a3 = 1.0;
  PointerInfoByPointerId = Pointer::GetPointerInfoByPointerId((Pointer *)a2, v15, (const struct tagPOINTER_INFO **)a3);
  v8 = PointerInfoByPointerId;
  if ( PointerInfoByPointerId < 0 )
  {
    if ( hProvider > 2u )
    {
      v19 = 0;
      v15[0] = PointerInfoByPointerId;
      v17 = v15;
      v18 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, v6, v7, 3u, &pData);
    }
    return v8;
  }
  v9 = HMValidateHandleNoSecure(*(_QWORD *)(*(_QWORD *)v15 + 16LL), 19);
  if ( !v9 )
  {
    v8 = -1073741823;
    if ( hProvider > 2u )
    {
      v19 = 0;
      v17 = v15;
      v15[0] = -1073741823;
      v18 = 4;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, v10, v11, 3u, &pData);
    }
    return v8;
  }
  v12 = *(_DWORD **)(v9 + 472);
  if ( v12[186] != 1 )
  {
    v8 = -1073741637;
    if ( hProvider <= 2u )
      return v8;
LABEL_15:
    v19 = 0;
    v15[0] = -1073741637;
    v17 = v15;
    v18 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02EC6AD, v10, v11, 3u, &pData);
    return v8;
  }
  v13 = v12[192];
  if ( *((_DWORD *)this + 31) != v13 )
  {
    v8 = -1073741637;
    if ( hProvider <= 2u )
      return v8;
    goto LABEL_15;
  }
  if ( *((_DWORD *)this + 32) == v12[193] )
  {
    *a3 = (float)(v12[201] - v12[199]) / (float)v13;
    return v8;
  }
  v8 = -1073741637;
  if ( hProvider > 2u )
    goto LABEL_15;
  return v8;
}
