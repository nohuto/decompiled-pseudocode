/*
 * XREFs of XilEndpoint_SendRequestToGetSecureStreamContextArray @ 0x1C00107C8
 * Callers:
 *     XilEndpoint_FetchStreamContextArray @ 0x1C0010488 (XilEndpoint_FetchStreamContextArray.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E00 (__security_check_cookie.c)
 *     memmove @ 0x1C0002A00 (memmove.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0019530 (WPP_RECORDER_SF_ddL.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C005D940 (SecureChannel_SendRequestSynchronously.c)
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
  int v12; // edx
  int v13; // edi
  unsigned __int16 v14; // r9
  int v16; // [rsp+28h] [rbp-90h]
  int v17; // [rsp+30h] [rbp-88h]
  __int64 v18; // [rsp+40h] [rbp-78h]
  _QWORD v19[6]; // [rsp+48h] [rbp-70h] BYREF

  v5 = *(_QWORD *)(a1 + 32);
  v6 = -1;
  v8 = 16LL * a4;
  if ( v8 <= 0xFFFFFFFF )
    v6 = 16 * a4;
  v18 = *(_QWORD *)(*(_QWORD *)v5 + 112LL);
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
    memset(v19, 0, sizeof(v19));
    LODWORD(v19[4]) = 35;
    v19[3] = a2;
    LODWORD(v19[5]) = 0;
    HIDWORD(v19[5]) = a4;
    v13 = SecureChannel_SendRequestSynchronously(v18, (unsigned int)v19, 48, (_DWORD)PoolWithTag, v10);
    if ( v13 >= 0 )
    {
      v13 = *PoolWithTag;
      if ( *PoolWithTag >= 0 )
      {
        memmove(a5, PoolWithTag + 1, v8);
        v13 = 0;
        goto LABEL_16;
      }
      v14 = 23;
      v17 = *(_DWORD *)(v5 + 144);
      v16 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
    }
    else
    {
      v14 = 22;
      v17 = *(_DWORD *)(v5 + 144);
      v16 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
    }
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v5 + 80),
      2u,
      0xDu,
      v14,
      (__int64)&WPP_66b275f889f43c2a0e65fafc4e468fb0_Traceguids,
      v16,
      v17);
LABEL_16:
    ExFreePoolWithTag(PoolWithTag, 0x49434858u);
    return (unsigned int)v13;
  }
  v12 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
  LOBYTE(v12) = 2;
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(v5 + 80),
    v12,
    13,
    21,
    (__int64)&WPP_66b275f889f43c2a0e65fafc4e468fb0_Traceguids,
    *(_BYTE *)(*(_QWORD *)(v5 + 16) + 135LL),
    *(_DWORD *)(v5 + 144),
    v10);
  return (unsigned int)-1073741670;
}
