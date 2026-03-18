/*
 * XREFs of XilEndpoint_SendRequestToSetSecureStreamContextArray @ 0x1C0010998
 * Callers:
 *     XilEndpoint_CommitStreamContextArrayUpdates @ 0x1C0010134 (XilEndpoint_CommitStreamContextArrayUpdates.c)
 * Callees:
 *     memmove @ 0x1C0002A00 (memmove.c)
 *     memset @ 0x1C0002D40 (memset.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000DAE4 (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0019530 (WPP_RECORDER_SF_ddL.c)
 *     SecureChannel_SendRequestSynchronously @ 0x1C005D940 (SecureChannel_SendRequestSynchronously.c)
 */

__int64 __fastcall XilEndpoint_SendRequestToSetSecureStreamContextArray(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        void *Src)
{
  __int64 v5; // rsi
  unsigned int v6; // ecx
  size_t v7; // r14
  unsigned int v10; // edi
  _DWORD *PoolWithTag; // rax
  _DWORD *v12; // rbp
  int v13; // edx
  int v14; // edi
  const void *v15; // rdx
  unsigned __int16 v16; // r9
  int v18; // [rsp+28h] [rbp-50h]
  int v19; // [rsp+30h] [rbp-48h]
  __int64 v20; // [rsp+80h] [rbp+8h]
  int v21; // [rsp+90h] [rbp+18h] BYREF

  v21 = a3;
  v5 = *(_QWORD *)(a1 + 32);
  v6 = -1;
  v7 = 16LL * a4;
  if ( v7 <= 0xFFFFFFFF )
    v6 = 16 * a4;
  v20 = *(_QWORD *)(*(_QWORD *)v5 + 112LL);
  if ( v7 <= 0xFFFFFFFF )
  {
    if ( v6 + 48 < v6 )
      v10 = 0;
    else
      v10 = v6 + 48;
  }
  else
  {
    v10 = 0;
  }
  PoolWithTag = ExAllocatePoolWithTag(*((POOL_TYPE *)&WPP_MAIN_CB.AlignmentRequirement + 1), v10, 0x49434858u);
  v12 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v10);
    v15 = Src;
    v12[8] = 36;
    *((_QWORD *)v12 + 3) = a2;
    v12[10] = 0;
    v12[11] = a4;
    memmove(v12 + 12, v15, v7);
    v14 = SecureChannel_SendRequestSynchronously(v20, (_DWORD)v12, v10, (unsigned int)&v21, 4);
    if ( v14 >= 0 )
    {
      v14 = v21;
      if ( v21 >= 0 )
      {
        v14 = 0;
        goto LABEL_16;
      }
      v16 = 20;
      v19 = *(_DWORD *)(v5 + 144);
      v18 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
    }
    else
    {
      v16 = 19;
      v19 = *(_DWORD *)(v5 + 144);
      v18 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
    }
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(v5 + 80),
      2u,
      0xDu,
      v16,
      (__int64)&WPP_66b275f889f43c2a0e65fafc4e468fb0_Traceguids,
      v18,
      v19);
LABEL_16:
    ExFreePoolWithTag(v12, 0x49434858u);
    return (unsigned int)v14;
  }
  v13 = *(unsigned __int8 *)(*(_QWORD *)(v5 + 16) + 135LL);
  LOBYTE(v13) = 2;
  WPP_RECORDER_SF_ddL(
    *(_QWORD *)(v5 + 80),
    v13,
    13,
    18,
    (__int64)&WPP_66b275f889f43c2a0e65fafc4e468fb0_Traceguids,
    *(_BYTE *)(*(_QWORD *)(v5 + 16) + 135LL),
    *(_DWORD *)(v5 + 144),
    v10);
  return (unsigned int)-1073741670;
}
