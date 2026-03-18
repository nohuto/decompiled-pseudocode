/*
 * XREFs of XilEndpoint_SendRequestToGetSecureStreamContextArray @ 0x1C0017B5C
 * Callers:
 *     XilEndpoint_FetchStreamContextArray @ 0x1C0017820 (XilEndpoint_FetchStreamContextArray.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00055AC (WPP_RECORDER_SF_dd.c)
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     memmove @ 0x1C0008700 (memmove.c)
 *     memset @ 0x1C0008A40 (memset.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000E154 (WPP_RECORDER_SF_ddL.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C006053C (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilEndpoint_SendRequestToGetSecureStreamContextArray(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        void *a5)
{
  __int64 v5; // rsi
  unsigned int v6; // ecx
  size_t v8; // rbp
  unsigned int v10; // edi
  int *PoolWithTag; // r14
  int v12; // edi
  unsigned __int16 v13; // r9
  int v15; // [rsp+28h] [rbp-90h]
  int v16; // [rsp+30h] [rbp-88h]
  __int64 v17; // [rsp+40h] [rbp-78h]
  _QWORD v18[6]; // [rsp+48h] [rbp-70h] BYREF

  v5 = *(_QWORD *)(a1 + 32);
  v6 = -1;
  v8 = 16LL * a4;
  if ( v8 <= 0xFFFFFFFF )
    v6 = 16 * a4;
  v17 = *(_QWORD *)(*(_QWORD *)v5 + 112LL);
  if ( v8 <= 0xFFFFFFFF )
  {
    if ( v6 + 4 < v6 )
      v10 = 0;
    else
      v10 = v6 + 4;
  }
  else
  {
    v10 = 0;
  }
  PoolWithTag = (int *)ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), v10, 0x49434858u);
  if ( PoolWithTag )
  {
    memset(v18, 0, sizeof(v18));
    LODWORD(v18[4]) = 35;
    v18[3] = a2;
    LODWORD(v18[5]) = 0;
    HIDWORD(v18[5]) = a4;
    v12 = SecureChannel_SendRequestSynchronously(v17, (unsigned int)v18, 48, (_DWORD)PoolWithTag, v10);
    if ( v12 >= 0 )
    {
      v12 = *PoolWithTag;
      if ( *PoolWithTag >= 0 )
      {
        memmove(a5, PoolWithTag + 1, v8);
        v12 = 0;
        goto LABEL_16;
      }
      v13 = 22;
      v16 = *(_DWORD *)(v5 + 144);
      v15 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
    }
    else
    {
      v13 = 21;
      v16 = *(_DWORD *)(v5 + 144);
      v15 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
    }
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v5 + 80),
      2u,
      0xDu,
      v13,
      (__int64)&WPP_087bf061c5a2393c98692efa6d3efb48_Traceguids,
      v15,
      v16);
LABEL_16:
    ExFreePoolWithTag(PoolWithTag, 0x49434858u);
    return (unsigned int)v12;
  }
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(v5 + 80),
    2u,
    0xDu,
    0x14u,
    (__int64)&WPP_087bf061c5a2393c98692efa6d3efb48_Traceguids,
    *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL),
    *(_DWORD *)(v5 + 144),
    v10);
  return (unsigned int)-1073741670;
}
